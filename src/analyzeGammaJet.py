#!/usr/bin/env python

from optparse import OptionParser, make_option
from ROOT import *
import subprocess
import os
import imp
import multiprocessing
from itertools import repeat

#Some global options

# TO RUN AT CERN
xrootd_server="pccmsrm27.cern.ch"
output_dir="/cms/local/meridian/GammaJets/output"

#TO RUN IN ROME
xrootd_server=""
output_dir="/t3/users/meridian/GammaJets/output/"

tmp_dir="/tmp/"+str(os.environ['USER'])

mc_dir="root://pccmsrm27.cern.ch///cms/local/crovelli/GammaJets/reduced/redntp.53xv2.cicpfloose.noCorrections.GammaJets_newNtuples_v5/merged2/"
data_dir="root://pccmsrm27.cern.ch///cms/local/crovelli/GammaJets/reduced/redntp.53xv2_data.cicpfloose.noCorrections.GammaJets_newNtuples_v5/merged2"

cuts={}
#The cuts will be passed as parameters
samples={}

def main(options,args):

    print "+++++++++++++++++++++++++++++++++++++++++++"
    print "Processing with options: "
    print options

    
    gROOT.ProcessLine(".L GammaJetAnalysis.C++")

    #Reading cuts dat
    filename  = options.cutsDat
    handle = open(filename, 'r')
    cfo = imp.load_source("pycfg", filename, handle)
    cuts = cfo.cuts
    handle.close()

    print "Cuts: "
    print cuts
    print "+++++++++++++++++++++++++++++++++++++++++++"

    #Reading samples dat
    filename  = options.samplesDat
    handle = open(filename, 'r')
    cfo = imp.load_source("pycfg", filename, handle)
    samples = cfo.samples
    handle.close()

    #print samples
    
    #defining a number of workers as much as the number of cpus in the machine
    ncpu=multiprocessing.cpu_count()

    if (options.numberOfCPU>0):
        ncpu=options.numberOfCPU
        
    pool = multiprocessing.Pool(processes=ncpu)

    #run all the samples in parallel
    pool.map( analyzeSample, zip(samples.keys(),repeat(cuts),repeat(samples)) )


def analyzeSample( (sample,mycuts,samples) ):
#    print sample,mycuts,samples
    #the real worker code
    print "Analyzing sample "+ sample + ": " + str(samples[sample])
#    f=TFile.Open(samples[sample][4]+"/"+samples[sample][1])
    f=TChain("AnaTree")
    histos=[]
    for file in [ line.strip() for line in open(samples[sample][1],'r') if not line.strip().startswith('#') ]:
        print file
        f.Add(file)
        myFile=TFile.Open(file)
        myFile.ls()
        histos.append(myFile.Get("ptphotgen1"))
        #    a=f.Get("AnaTree")
    if len(histos)>0:
        a_h1=histos[0].Clone(histos[0].GetName()+"_sum")
        for i in range(1,len(histos)):
            a_h1.Add(histos[i])
    #        a.Print()
    print str(sample)+" has "+str(a_h1.Integral())+ " events"
    analyzer=GammaJetAnalysis(f)
    analyzer.sampleIndex=samples[sample][0]
    analyzer.sampleName=str(sample)
    analyzer.sampleSize=a_h1.Integral()
    analyzer.normLumi=mycuts['normLumi']
    analyzer.xsec=samples[sample][2]
    analyzer.kfac=samples[sample][3]
    analyzer.hltcut=mycuts['hltcut']
    analyzer.hltiso=mycuts['hltiso']
    analyzer.mvaIDWP=mycuts['mvaIDWP']
    if (mycuts['selectionType']!="efficiencyStudy"): 
        outfileName=str(sample)+"_hltcut"+str(analyzer.hltcut)+"_hltiso"+str(analyzer.hltiso)+"_mvaWP"+str(analyzer.mvaIDWP)+".root"
    else:
        outfileName=str(sample)+"_mvaWP"+str(analyzer.mvaIDWP)+"_efficiencyStudy.root"
    analyzer.outputFile=tmp_dir+"/"+outfileName
    subprocess.check_call("mkdir -p "+tmp_dir,shell=True)
    #to be linked to the hlt cut in the future
    analyzer.ptphot1_mincut=mycuts['ptMin']
    analyzer.ptphot1_maxcut=mycuts['ptMax']
    analyzer.selectionType=mycuts['selectionType']
    analyzer.mvaWeights_EB=mycuts['mvaWeights_EB']
    analyzer.mvaWeights_EE=mycuts['mvaWeights_EE']
    analyzer.Loop()
    
    #Copying file towards final destination
    if (options.location == "cern"):
        rm_command="xrd "+xrootd_server+" rm "+output_dir+"/"+outfileName
        subprocess.call(rm_command,shell=True)
        copy_command="xrdcp "+tmp_dir+"/"+outfileName+" root://"+xrootd_server+"//"+output_dir+"/"+outfileName 
        subprocess.check_call(copy_command,shell=True)
    elif (options.location == "rome"):
        rm_command="rm "+output_dir+"/"+outfileName
        subprocess.call(rm_command,shell=True)
        copy_command="cp "+tmp_dir+"/"+outfileName+" "+output_dir+"/"+outfileName 
        subprocess.check_call(copy_command,shell=True)
    print "Copied file into "+output_dir+"/"+outfileName

if __name__ == "__main__":
    parser = OptionParser(option_list=[
        make_option("--samplesDat",
                    action="store", type="string", dest="samplesDat",
                    default="samples.dat",
                    help="", metavar=""
                    ),
        make_option("--cutsDat",
                    action="store", type="string", dest="cutsDat",
                    default="cuts.dat",
                    help="", metavar=""
                    ),
        make_option("--numberOfCPU",
                    action="store", type="int", dest="numberOfCPU",
                    default=-1,
                    help="", metavar=""
                    ),
        make_option("--location",
                    action="store", type="string", dest="location",
                    default="rome",
                    help="", metavar=""
                    ),
        ])
    
    (options, args) = parser.parse_args()
    
    main( options, args) 
