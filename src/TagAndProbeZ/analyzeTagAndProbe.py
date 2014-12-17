#!/usr/bin/env python

from optparse import OptionParser, make_option
from ROOT import *
import subprocess
import os
import imp
import multiprocessing
import glob
from itertools import repeat

#Example: how to run it:
#./analyzeTagAndProbe.py --samplesDat=samples_paolo.dat --cuts=cuts.dat

#Some global options
#xrootd_server="pccmsrm27.cern.ch"
#output_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer_reduced/"
tmp_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/tmp/"



cuts={}
samples={}

def main(options,args):

    print "+++++++++++++++++++++++++++++++++++++++++++"
    print "Processing with options: "
    print options


    gROOT.SetBatch(1)
    gROOT.ProcessLine(".L TagAndProbeAnalysis.C++")

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
#    filelist=open(samples[sample][1],'r')
    for file in [ line.strip() for line in open(samples[sample][1],'r') if not line.strip().startswith('#') ]:
        print file
        f.Add(file)
    #    a=f.Get("AnaTree")
    #    a_h1=f.Get("elegen1")
    #        a.Print()
    analyzer =TagAndProbeAnalysis(f)
    #    analyzer.sampleIndex=samples[sample][0]
    #    analyzer.sampleName=str(sample)
    #    analyzer.sampleSize=a_h1.Integral()
    #    analyzer.normLumi=mycuts['normLumi']
    #    analyzer.xsec=samples[sample][2]
    #    analyzer.kfac=samples[sample][3]
    analyzer.tagTightnessLevel=mycuts['tagLevel']
    analyzer.mcMatch=mycuts['mcMatch']
    analyzer.r9Reweight=mycuts['r9Reweight']
    analyzer.r9WeightsFile=mycuts['r9WeightsFile']
    analyzer.etaReweight=mycuts['etaReweight']
    analyzer.etaWeightsFile=mycuts['etaWeightsFile']
    analyzer.ptReweight=mycuts['ptReweight']
    analyzer.ptWeightsFile=mycuts['ptWeightsFile']
    analyzer.nvtxReweight=mycuts['nvtxReweight']
    analyzer.nvtxWeightsFile=mycuts['nvtxWeightsFile']
    analyzer.rhoReweight=mycuts['rhoReweight']
    analyzer.rhoWeightsFile=mycuts['rhoWeightsFile']
    analyzer.isoReweight=mycuts['isoReweight']
    analyzer.isoWeightsFile=mycuts['isoWeightsFile']
    analyzer.DeltaMZ=mycuts['DeltaMZ']
    outfileName=str(sample)
    
    analyzer.outFileNamePrefix=tmp_dir+"/"+outfileName
    #to be linked to the hlt cut in the future
    analyzer.Loop(options.red_factor)
    
    #Copying file towards final destination
    for file in glob.glob(tmp_dir+"/"+outfileName+"*.root"):
        dir,filename=os.path.split(file)
        print filename
        #rm_command="xrd "+xrootd_server+" rm "+output_dir+"/"+filename+" > /dev/null"
        #subprocess.call(rm_command,shell=True)
        #copy_command="xrdcp "+tmp_dir+"/"+filename+" root://"+xrootd_server+"//"+output_dir+"/"+filename
        copy_command="mv "+tmp_dir+"/"+filename+" "+options.outdir+"/"+filename 
        subprocess.check_call(copy_command,shell=True)
        print "Copied file into "+options.outdir+"/"+filename


if __name__ == "__main__":
    parser = OptionParser(option_list=[
        make_option("--outdir",
                    action="store", type="string", dest="outdir",
                    default="samples.dat",
                    help="", metavar=""
                    ),
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
        make_option("--red_factor",
                    action="store", type="int", dest="red_factor",
                    default=-1,
                    help="", metavar=""
                    ),
        make_option("--numberOfCPU",
                    action="store", type="int", dest="numberOfCPU",
                    default=-1,
                    help="", metavar=""
                    ),
        
        ])
    
    (options, args) = parser.parse_args()
    
    main( options, args) 
