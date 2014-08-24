#!/usr/bin/env python

from optparse import OptionParser, make_option
from ROOT import *
import subprocess
import multiprocessing
import os

treeName_mc="finalTree"
treeName_data="myTaPDir/myTree"
data = TChain(treeName_data)
mc = TChain(treeName_mc)

#Global text print on top of the plots
text="CMS Preliminary #sqrt{s}=8 TeV"

# associate name of the variable to the expression to print it. This list should contain all the variables to plot
variables_mc={}
variables_mc['ptPhot']='ptPhot'
variables_mc['etaPhot']='etaPhot'
variables_mc['mvaIdPhot']='mvaIdPhot'
variables_mc['nvtx']='nvtx'
variables_mc['pid_pfIsoCharged03ForCiC']='pid_pfIsoCharged03ForCiC'      
variables_mc['pid_pfIsoNeutrals03ForCiC']='pid_pfIsoNeutrals03ForCiC'      
variables_mc['pid_pfIsoPhotons03ForCiC']='pid_pfIsoPhotons03ForCiC'
variables_mc['pid_pfIsoFPRCharged03_presel']='pid_pfIsoFPRCharged03_presel'
variables_mc['pid_pfIsoFPRNeutral03_presel']='pid_pfIsoFPRNeutral03_presel'
variables_mc['pid_pfIsoFPRPhoton03_presel']='pid_pfIsoFPRPhoton03_presel'      


variables_data={}
variables_data['ptPhot']='probe_pt'
variables_data['etaPhot']='probe_eta'
variables_data['mvaIdPhot']='probe_mvaId'
variables_data['nvtx']='numvtx'
variables_data['pid_pfIsoCharged03ForCiC']='probe_charged03'      
variables_data['pid_pfIsoNeutrals03ForCiC']='probe_neutral03'
variables_data['pid_pfIsoPhotons03ForCiC']='probe_photon03'
variables_data['pid_pfIsoFPRCharged03_presel']='probe_fprCharged03'      
variables_data['pid_pfIsoFPRNeutral03_presel']='probe_fprNeutral03'
variables_data['pid_pfIsoFPRPhoton03_presel']='probe_fprPhoton03'



#characteristics of the plot of a given variable
plotPars={}
plotPars['ptPhot']=dict( name='ptPhot', nBins=60, xMin=0., xMax=300., xaxisLabel="#gamma p_{T} (GeV)")
plotPars['etaPhot']=dict( name='etaPhot', nBins=60, xMin=-3., xMax=3., xaxisLabel="#gamma #eta")
plotPars['mvaIdPhot']=dict( name='mvaIdPhot', nBins=100, xMin=0., xMax=1., xaxisLabel="#gamma MVA output")
plotPars['nvtx']=dict( name='nvtx', nBins=41, xMin=-0.5, xMax=40.5, xaxisLabel="nvtx")
#plotPars['combinedPfIso03Phot']=dict( name='combinedPfIso03Phot', nBins=200, xMin=-5, xMax=15, xaxisLabel="combined PfIso #DeltaR=0.3 (GeV)")          
#plotPars['combinedPfIsoFPR03Phot']=dict( name='combinedPfIsoFPR03Phot', nBins=200, xMin=-5, xMax=15, xaxisLabel="combined PfIso FPR #DeltaR=0.3 (GeV)")
#plotPars['rho']=dict( name='rho', nBins=100, xMin=0, xMax=40, xaxisLabel="#rho (GeV)")
plotPars['pid_pfIsoCharged03ForCiC']=dict( name='pfIsoCharged03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Charged #DeltaR=0.3 (GeV)")          
plotPars['pid_pfIsoNeutrals03ForCiC']=dict( name='pfIsoNeutrals03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Neutral #DeltaR=0.3 (GeV)")
plotPars['pid_pfIsoPhotons03ForCiC']=dict( name='pfIsoPhotons03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Photon #DeltaR=0.3 (GeV)")          
plotPars['pid_pfIsoFPRCharged03_presel']=dict( name='pfIsoFPRCharged03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Charged FPR #DeltaR=0.3 (GeV)")
plotPars['pid_pfIsoFPRNeutral03_presel']=dict( name='pfIsoFPRNeutral03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Neutral #DeltaR=0.3 (GeV)")
plotPars['pid_pfIsoFPRPhoton03_presel']=dict( name='pfIsoFPRPhoton03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Photon FPR #DeltaR=0.3 (GeV)")


#possible selections for the plots
cuts_mc={}
cuts_mc['All']='1' #just to avoid error
#cuts['EB']='abs(etaPhot)<1.4442'
#cuts['EE']='abs(etaPhot)>1.566 && abs(etaPhot)<2.5'
cuts_mc['EB']='abs(etaPhot)<1.4442 && (mvaIdPhot<1. && mvaIdPhot>0.83548)'
cuts_mc['EE']='abs(etaPhot)>1.566 && abs(etaPhot)<2.5 && (mvaIdPhot<1. && mvaIdPhot>0.87382)'

cuts_data={}
cuts_data['All']='1' #just to avoid error
cuts_data['EB']='abs(probe_eta)<1.4442 && (probe_mvaId<1. && probe_mvaId>0.83548)'
cuts_data['EE']='abs(probe_eta)>1.566 && abs(probe_eta)<2.5 && (probe_mvaId<1. && probe_mvaId>0.87382)'


#different types of MC (and corresponding selection to differentiate them using ntuple variables"
mc_types={}
mc_types['Signal']="isIsolatedGenPhot==1"
#mc_types['Bkg']="isIsolatedGenPhot==0"

#name of the variable to use as weight in MC
weight_var="weight"

#options to draw data and MC plots
draw_opts={}
draw_opts['data']=dict( SetMarkerSize=0.7,SetMarkerStyle=20,SetLineColor=1 )
#draw_opts['mc_Bkg']=dict( SetLineColor=kMagenta,SetLineWidth=2,SetFillColor=kMagenta,SetFillStyle=1001 )
draw_opts['mc_Signal']=dict( SetLineColor=kGreen-9,SetLineWidth=2,SetFillColor=kGreen-9,SetFillStyle=1001 )

histos={}

ROOT.gROOT.SetBatch()
ROOT.gROOT.SetStyle("Plain")
ROOT.gStyle.SetOptTitle(0)
ROOT.gStyle.SetOptStat(0)

def customizeCanvas(c):
    c.Range(0,0,1,1)
    c.SetFillColor(0)
    c.SetBorderMode(0)
    c.SetBorderSize(2)
    c.SetTickx(1)
    c.SetLeftMargin(0.13)
    c.SetRightMargin(0.07)
    c.SetTopMargin(0.09)
    c.SetBottomMargin(0.1)
    c.SetFrameFillStyle(0)
    c.SetFrameBorderMode(0)

def splitCanvas(c):
    pads=[]
    pads.append(TPad("pad1","pad1",0,0.3,1.,1.))
    pads.append(TPad("pad2","pad2",0,0.,1.,0.3))
    for pad in pads:
        pad.Draw()
    return pads

def drawText(additional_text):
    tex_m=TLatex()
    tex_m.SetNDC()
    tex_m.SetTextAlign(12)
    tex_m.SetTextSize(0.037)
    tex_m.SetLineWidth(2)
    tex_m.DrawLatex(0.25,0.94,text)
    
    if (additional_text != ""):
        tex_m.SetTextSize(0.045)
        tex_m.DrawLatex(0.63,0.63,additional_text)
        
#def plot(variable,plotsDir,additional_cuts="1",pars['additional_text']="",savefmts=[".C",".png",".pdf"]):
def plot(pars,savefmts=[".C",".png",".pdf"]):
    c = TCanvas(pars['variable_mc'],pars['variable_mc'],1000,900)
    customizeCanvas(c)
    
    for cut in cuts_mc.keys():
        histos[str(pars['variable_data'])+'_data_'+str(cut)]=TH1F(str(plotPars[str(pars['variable_mc'])]['name'])+"_data_"+str(cut),str(plotPars[str(pars['variable_mc'])]['name'])+"_data_"+str(cut),int(plotPars[str(pars['variable_mc'])]['nBins']),float(plotPars[str(pars['variable_mc'])]['xMin']),float(plotPars[str(pars['variable_mc'])]['xMax']))
        histos[str(pars['variable_data'])+'_data_'+str(cut)].Sumw2()
        for type in mc_types.keys():
            histos[str(pars['variable_mc'])+'_mc_'+type+"_"+str(cut)]=TH1F(str(plotPars[str(pars['variable_mc'])]['name'])+"_mc_"+type+"_"+str(cut),str(plotPars[str(pars['variable_mc'])]['name'])+"_mc_"+type+"_"+str(cut),plotPars[str(pars['variable_mc'])]['nBins'],plotPars[str(pars['variable_mc'])]['xMin'],plotPars[str(pars['variable_mc'])]['xMax'])
            histos[str(pars['variable_mc'])+'_mc_'+type+"_"+str(cut)].Sumw2()
        #Filling histos
        data.Project( histos[str(pars['variable_data'])+'_data_'+str(cut)].GetName(), str(variables_data[str(pars['variable_mc'])]), str(cuts_data[cut])+"&&"+pars['additional_cuts_data'])
        histos[str(pars['variable_data'])+'_data_'+str(cut)].Print()
        #Now set drawing options
        for aopt in draw_opts['data'].keys():
            a=histos[str(pars['variable_data'])+'_data_'+str(cut)]
            eval('a.'+str(aopt)+'('+str(draw_opts['data'][aopt])+')')
            
        for mc_type in mc_types.keys():
            mc.Project( histos[str(pars['variable_mc'])+'_mc_'+mc_type+"_"+str(cut)].GetName(), str(variables_mc[str(pars['variable_mc'])]), "("+str(cuts_mc[cut])+"&&"+pars['additional_cuts_mc']+"&&"+str(mc_types[mc_type])+")*"+weight_var )
            histos[str(pars['variable_mc'])+'_mc_'+mc_type+"_"+str(cut)].Print()
            for aopt in draw_opts['mc_'+mc_type].keys():
                a=histos[str(pars['variable_mc'])+'_mc_'+mc_type+"_"+str(cut)]
                eval('a.'+str(aopt)+'('+str(draw_opts['mc_'+mc_type][aopt])+')')

        #Stacked MC Histogram
        stack=THStack()
        mc_types_keys=mc_types.keys()
        mc_types_keys.sort()

        #normalize stack
        #integral_tot=0
        #for mc_type in range(len(mc_types_keys)):
        #    integral_tot+=histos[str(pars['variable_mc'])+'_mc_'+mc_types_keys[mc_type]+"_"+str(cut)].Integral()

        #verify=0
        #for mc_type in range(len(mc_types_keys)):
            #integral=histos[str(pars['variable_mc'])+'_mc_'+mc_types_keys[mc_type]+"_"+str(cut)].Integral()
            #normalized_histo=histos[str(pars['variable_mc'])+'_mc_'+mc_types_keys[mc_type]+"_"+str(cut)].Clone("normalized_histo")
            #normalized_histo.Scale(integral/integral_tot)
            #stack.Add(normalized_histo)
            #verify+=(integral/integral_tot)

        #print "--------"
        #print ("verify the sum of stacked istograms is 1 : %f" % verify)
        #print "--------"
           
        histos[str(pars['variable_data'])+'_data_'+str(cut)].DrawNormalized("PE")
        histos[str(pars['variable_data'])+'_data_'+str(cut)].SetMaximum(histos[str(pars['variable_data'])+'_data_'+str(cut)].GetMaximum()*1.4)
        histos[str(pars['variable_data'])+'_data_'+str(cut)].SetMinimum(0)
        histos[str(pars['variable_data'])+'_data_'+str(cut)].GetXaxis().SetTitle(str(plotPars[str(pars['variable_mc'])]['xaxisLabel']))
        histos[str(pars['variable_data'])+'_data_'+str(cut)].GetYaxis().SetTitle('Entries/'+str(histos[str(pars['variable_data'])+'_data_'+str(cut)].GetBinWidth(1)))
        histos[str(pars['variable_data'])+'_data_'+str(cut)].GetYaxis().SetTitleOffset(1.5)

        
        #stack.Draw("HSAME")
        histos[str(pars['variable_mc'])+'_mc_Signal_'+str(cut)].DrawNormalized("HSAME")
        histos[str(pars['variable_data'])+'_data_'+str(cut)].DrawNormalized("PESAME")

        #Legend
        a=TLegend(0.63,0.68,0.88,0.88)
        a.SetBorderSize(0)
        a.SetFillColor(0)
        a.SetTextSize(0.038)
        a.SetHeader(str(cut))
        a.AddEntry( histos[str(pars['variable_data'])+'_data_'+str(cut)],"Data Z #rightarrow ee","PL" )
        for mc_type in range(len(mc_types_keys)):
             a.AddEntry( histos[str(pars['variable_mc'])+'_mc_'+mc_types_keys[mc_type]+"_"+str(cut)], "signal #gamma + jet" , "F" )
        a.Draw()

        #Additional text
        drawText(pars['additional_text'])

        #Save plots
        c.SetLogy(0)
        for format in savefmts:
            c.SaveAs(pars['plotsDir']+"/"+str(pars['variable_mc'])+str(cut)+format)

        # now log and ratio plots in a splitted canvas
        c.Clear()
        pads=splitCanvas(c)

        #First pad
        pads[0].cd()
        gPad.SetLogy(1)
        histos[str(pars['variable_data'])+'_data_'+str(cut)].SetMaximum(histos[str(pars['variable_data'])+'_data_'+str(cut)].GetMaximum()*4.)
        histos[str(pars['variable_data'])+'_data_'+str(cut)].SetMinimum(0.1)
        histos[str(pars['variable_data'])+'_data_'+str(cut)].GetYaxis().SetTitleOffset(0.9)
        histos[str(pars['variable_data'])+'_data_'+str(cut)].DrawNormalized("PE")
        #stack.Draw("HSAME")
        histos[str(pars['variable_mc'])+'_mc_Signal_'+str(cut)].DrawNormalized("HSAME")
        histos[str(pars['variable_data'])+'_data_'+str(cut)].DrawNormalized("PESAME")
      
        a=TLegend(0.63,0.68,0.88,0.88)
        a.SetBorderSize(0)
        a.SetFillColor(0)
        a.SetTextSize(0.038)
        a.SetHeader(str(cut))
        a.AddEntry( histos[str(pars['variable_data'])+'_data_'+str(cut)],"Data Z #rightarrow ee","PL" )
        for mc_type in range(len(mc_types_keys)):
             a.AddEntry( histos[str(pars['variable_mc'])+'_mc_'+mc_types_keys[mc_type]+"_"+str(cut)], "signal #gamma + jet" , "F" )
        a.Draw()

        drawText(pars['additional_text'])

        #Second pad (bottom)
        pads[1].cd()
        pads[1].SetBottomMargin(0.2)
        pads[1].SetGridy(1)

        #prepare ratio histogram
        ratio=histos[str(pars['variable_data'])+'_data_'+str(cut)].Clone("ratio")
        integral=ratio.Integral()
        ratio.Scale(1./integral)
        for mc_type in range(len(mc_types_keys)):
            if (mc_type==0):
                sum=histos[str(pars['variable_mc'])+'_mc_'+mc_types_keys[mc_type]+"_"+str(cut)].Clone("sum")
            else:
                sum.Add(histos[str(pars['variable_mc'])+'_mc_'+mc_types_keys[mc_type]+"_"+str(cut)])

        integral=sum.Integral()
        sum.Scale(1./integral)
        ratio.Divide(sum)
        ratio.SetMaximum(3)
        ratio.SetMinimum(0.2)

        ratio.GetYaxis().SetTitle("Data/MC")
        ratio.GetYaxis().SetLabelSize(0.07)
        ratio.GetXaxis().SetLabelSize(0.07)
        ratio.GetXaxis().SetTitleSize(0.08)
        ratio.GetYaxis().SetTitleSize(0.08)
        ratio.GetXaxis().SetTitleOffset(1.)
        ratio.GetYaxis().SetTitleOffset(0.35)
        ratio.Draw("PE")

        #Draw a line @1
        aL=TLine(float(plotPars[str(pars['variable_mc'])]['xMin']),1,float(plotPars[str(pars['variable_mc'])]['xMax']),1)
        aL.SetLineColor(4)
        aL.SetLineWidth(2)
        aL.Draw()
      
        ratio.Draw("PESAME")
        for format in savefmts:
            c.SaveAs(pars['plotsDir']+"/"+str(pars['variable_mc'])+str(cut)+"_log"+format)

def main(options,args):

    print "+++++++++++++++++++++++++++++++++++++++++++"
    print "Processing with options: "
    print options
    print "+++++++++++++++++++++++++++++++++++++++++++"

    plotsDir=options.plotsDir
    additionalText=options.additionalText
    additionalCuts_data=options.additionalCuts_data
    additionalCuts_mc=options.additionalCuts_mc

    #Creating output dir
    try:
        os.mkdir(plotsDir)
    except:
        pass

    #Reading data files list
    lines = [line.strip() for line in open(options.dataFiles)]
    for line in lines:
        if line.startswith('#'):
            continue
        data.Add(line)

    #Reading mc files list
    lines = [line.strip() for line in open(options.mcFiles)]
    for line in lines:
        if line.startswith('#'):
            continue
        mc.Add(line)
    #Setting up parallel processing
    ncpu=multiprocessing.cpu_count()

    if (options.numberOfCPU>0):
        ncpu=options.numberOfCPU
        
    pool = multiprocessing.Pool(processes=ncpu)

    #print command
    print "--------------- commands -------------------------"
    for x in variables_mc.keys():
        print ("pars=[ dict(variable_mc= %s, variable_data=%s, plotsDir=%s, additional_cuts_data=%s, additional_cuts_mc=%s, additional_text=%s) ]" % (variables_mc[x], variables_data[x], plotsDir,additionalCuts_data, additionalCuts_mc,additionalText))
    print " "
    print "----------------------------------------"

    #run all the samples in parallel 
    pars=[ dict(variable_mc=variables_mc[x], variable_data=variables_data[x], plotsDir=plotsDir,additional_cuts_data=additionalCuts_data,additional_cuts_mc=additionalCuts_mc,additional_text=additionalText) for x in variables_mc.keys() ]
    pool.map(plot, pars)

    #for variable in variables.keys():
    #plot(variable,plotsDir,additionalCuts,additionalText)

    
if __name__ == "__main__":
    parser = OptionParser(option_list=[
        make_option("--dataFiles",
                    action="store", type="string", dest="dataFiles",
                    default="data.txt",
                    help="", metavar=""
                    ),
        make_option("--mcFiles",
                    action="store", type="string", dest="mcFiles",
                    default="mc.txt",
                    help="", metavar=""
                    ),
        make_option("--plotsDir",
                    action="store", type="string", dest="plotsDir",
                    default="plots/",
                    help="", metavar=""
                    ),
        make_option("--additionalText",
                    action="store", type="string", dest="additionalText",
                    default="",
                    help="", metavar=""
                    ),
        make_option("--additionalCuts_data",
                    action="store", type="string", dest="additionalCuts_data",
                    default="1",
                    help="", metavar=""
                    ),
        make_option("--additionalCuts_mc",
                    action="store", type="string", dest="additionalCuts_mc",
                    default="1",
                    help="", metavar=""
                    ),
        make_option("--numberOfCPU",
                    action="store", type="int", dest="numberOfCPU",
                    default=-1,
                    help="", metavar=""
                    )
        ])
    
    (options, args) = parser.parse_args()
    
    main( options, args) 
