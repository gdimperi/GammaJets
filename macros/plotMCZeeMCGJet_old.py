#!/usr/bin/env python

from optparse import OptionParser, make_option
from ROOT import *
import subprocess
import multiprocessing
import os

treeName_mc="finalTree"
treeName_mc_Z="myTaPDir/myTree"
mc_Z = TChain(treeName_mc_Z)
mc = TChain(treeName_mc)

#Global text print on top of the plots
text="CMS Preliminary #sqrt{s}=8 TeV"

# associate name of the variable to the expression to print it. This list should contain all the variables to plot
variables_mc={}
variables_mc['ptPhot']='ptPhot'
variables_mc['etaPhot']='etaPhot'
variables_mc['mvaIdPhot']='mvaIdPhot'
variables_mc['nvtx']='nvtx'
#variables_mc['npu']='npu'
variables_mc['rho']='rho'
variables_mc['combinedPfIso03Phot']='combinedPfIso03Phot'
variables_mc['combinedPfIsoFPR03Phot']='combinedPfIsoFPR03Phot'
variables_mc['pid_pfIsoCharged03ForCiC']='pid_pfIsoCharged03ForCiC'      
variables_mc['pid_pfIsoNeutrals03ForCiC']='pid_pfIsoNeutrals03ForCiC'      
variables_mc['pid_pfIsoPhotons03ForCiC']='pid_pfIsoPhotons03ForCiC'
variables_mc['pid_pfIsoFPRCharged03_presel']='pid_pfIsoFPRCharged03_presel'
variables_mc['pid_pfIsoFPRNeutral03_presel']='pid_pfIsoFPRNeutral03_presel'
variables_mc['pid_pfIsoFPRPhoton03_presel']='pid_pfIsoFPRPhoton03_presel'
variables_mc['r9Phot']='r9Phot'      


variables_mc_Z={}
variables_mc_Z['ptPhot']='probe_pt'
variables_mc_Z['etaPhot']='probe_eta'
variables_mc_Z['mvaIdPhot']='probe_mvaId'
variables_mc_Z['nvtx']='numvtx'
#variables_mc_Z['npu']='npu'
variables_mc_Z['rho']='rho'
variables_mc_Z['combinedPfIso03Phot']='probe_combinedPfIso03'
variables_mc_Z['combinedPfIsoFPR03Phot']='probe_combinedPfIsoFPR03'
variables_mc_Z['pid_pfIsoCharged03ForCiC']='probe_charged03'      
variables_mc_Z['pid_pfIsoNeutrals03ForCiC']='probe_neutral03'
variables_mc_Z['pid_pfIsoPhotons03ForCiC']='probe_photon03'
variables_mc_Z['pid_pfIsoFPRCharged03_presel']='probe_fprCharged03'      
variables_mc_Z['pid_pfIsoFPRNeutral03_presel']='probe_fprNeutral03'
variables_mc_Z['pid_pfIsoFPRPhoton03_presel']='probe_fprPhoton03'
variables_mc_Z['r9Phot']='probe_r9'      


#characteristics of the plot of a given variable
plotPars={}
plotPars['ptPhot']=dict( name='ptPhot', nBins=60, xMin=0., xMax=600., xaxisLabel="#gamma p_{T} (GeV)")
plotPars['etaPhot']=dict( name='etaPhot', nBins=60, xMin=-3., xMax=3., xaxisLabel="#gamma #eta")
plotPars['mvaIdPhot']=dict( name='mvaIdPhot', nBins=60, xMin=0., xMax=1., xaxisLabel="#gamma MVA output")
plotPars['nvtx']=dict( name='nvtx', nBins=41, xMin=-0.5, xMax=40.5, xaxisLabel="nvtx")
#plotPars['npu']=dict( name='npu', nBins=41, xMin=-0.5, xMax=40.5, xaxisLabel="npu")
plotPars['rho']=dict( name='rho', nBins=60, xMin=0, xMax=40, xaxisLabel="#rho (GeV)")
plotPars['combinedPfIso03Phot']=dict( name='combinedPfIso03Phot', nBins=60, xMin=-5, xMax=15, xaxisLabel="combined PfIso #DeltaR=0.3 (GeV)")          
plotPars['combinedPfIsoFPR03Phot']=dict( name='combinedPfIsoFPR03Phot', nBins=60, xMin=-5, xMax=15, xaxisLabel="combined PfIso FPR #DeltaR=0.3 (GeV)")
plotPars['pid_pfIsoCharged03ForCiC']=dict( name='pfIsoCharged03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Charged #DeltaR=0.3 (GeV)")          
plotPars['pid_pfIsoNeutrals03ForCiC']=dict( name='pfIsoNeutrals03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Neutral #DeltaR=0.3 (GeV)")
plotPars['pid_pfIsoPhotons03ForCiC']=dict( name='pfIsoPhotons03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Photon #DeltaR=0.3 (GeV)")          
plotPars['pid_pfIsoFPRCharged03_presel']=dict( name='pfIsoFPRCharged03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Charged FPR #DeltaR=0.3 (GeV)")
plotPars['pid_pfIsoFPRNeutral03_presel']=dict( name='pfIsoFPRNeutral03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Neutral #DeltaR=0.3 (GeV)")
plotPars['pid_pfIsoFPRPhoton03_presel']=dict( name='pfIsoFPRPhoton03', nBins=60, xMin=0, xMax=6, xaxisLabel="PfIso Photon FPR #DeltaR=0.3 (GeV)")
plotPars['r9Phot']=dict( name='r9Phot', nBins=60, xMin=0., xMax=1., xaxisLabel="R9 Photon #DeltaR=0.3 (GeV)")

pt_min={}
pt_max={}
pt_min['EB']=[40,47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480]
pt_max['EB']=[47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480,1000]
pt_min['EE']=[40,65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270]
pt_min['EE']=[65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270,1000]


#possible selections for the plots
cuts_mc={}

for i in range(0,len(pt_max['EB'])):
    cuts_mc['EB']='abs(etaPhot)<1.4442 && ptPhot>'+pt_min['EB'][i]+" && ptPhot<"pt_max['EB'][i]
for i in range(0,len(pt_max['EE'])):    
    cuts_mc['EE']='abs(etaPhot)>1.566 && abs(etaPhot)<2.5 && ptPhot>'+pt_min['EE'][i]+" && ptPhot<"pt_max['EE'][i]
#cuts_mc['EB']='abs(etaPhot)<1.4442 && (mvaIdPhot<1. && mvaIdPhot>0.83548)'
#cuts_mc['EE']='abs(etaPhot)>1.566 && abs(etaPhot)<2.5 && (mvaIdPhot<1. && mvaIdPhot>0.87382)'

cuts_mc_Z={}

for i in range(0,len(pt_max['EB'])):
    cuts_mc_Z['EB']='abs(probe_eta)<1.4442 && probe_pt>'+pt_min['EB'][i]+" && probe_pt<"pt_max['EB'][i]
for i in range(0,len(pt_max['EE'])):
    cuts_mc_Z['EE']='abs(probe_eta)>1.566 && abs(probe_eta)<2.5 && probe_pt>'+pt_min['EE'][i]+" && probe_pt<"pt_max['EE'][i]
#cuts_mc_Z['EB']='abs(probe_eta)<1.4442 && (probe_mvaId<1. && probe_mvaId>0.83548)'
#cuts_mc_Z['EE']='abs(probe_eta)>1.566 && abs(probe_eta)<2.5 && (probe_mvaId<1. && probe_mvaId>0.87382)'


#different types of MC (and corresponding selection to differentiate them using ntuple variables"
mc_types={}
mc_types['Signal']="isIsolatedGenPhot==1"
#mc_types['Bkg']="isIsolatedGenPhot==0"
#mc_types['Signal']="1"

#name of the variable to use as weight in MC
weight_phot="weight"
#weight_phot="1"

weight_ele={}
for i in range(0,len(pt_max['EB'])):
    if(options.hltcut==30):
        weight_ele['EB'][i]="puW30*rhoWeight30*etaWeight*r9WeightEB_hlt30*isoW_EB_"+pt_min['EB'][i]+"_"+pt_max['EB'][i]
    elif(options.hltcut==50):
        weight_ele['EB'][i]="puW50*r9WeightEB_hlt50*etaWeight*rhoWeight50*isoW_EB_"+pt_min['EB'][i]+"_"+pt_max['EB'][i]
    elif(options.hltcut==75):
        weight_ele['EB'][i]="puW75*r9WeightEB_hlt75*etaWeight*rhoWeight75*isoW_EB_"+pt_min['EB'][i]+"_"+pt_max['EB'][i]
    elif(options.hltcut==90):
        weight_ele['EB'][i]="puW90*r9WeightEB_hlt90*etaWeight*rhoWeight90*isoW_EB_"+pt_min['EB'][i]+"_"+pt_max['EB'][i]
    elif(options.hltcut==135):
        weight_ele['EB'][i]="puW135*r9WeightEB_hlt135*etaWeight*rhoWeight135*isoW_EB_"+pt_min['EB'][i]+"_"+pt_max['EB'][i]
    elif(options.hltcut==150):
        weight_ele['EB'][i]="puW150*etaWeight*rhoWeight150*r9WeightEB_hlt150*isoW_EB_"+pt_min['EB'][i]+"_"+pt_max['EB'][i]

for i in range(0,len(pt_max['EE'])):
     if(options.hltcut==30):
         weight_ele['EE'][i]="puW30*rhoWeight30*etaWeight*r9WeightEE_hlt30*isoW_EE_"+pt_min['EE'][i]+"_"+pt_max['EE'][i]
     elif(options.hltcut==50):
         weight_ele['EE'][i]="puW50*r9WeightEE_hlt50*etaWeight*rhoWeight50*isoW_EE_"+pt_min['EE'][i]+"_"+pt_max['EE'][i]
     elif(options.hltcut==75):
         weight_ele['EE'][i]="puW75*r9WeightEE_hlt75*etaWeight*rhoWeight75*isoW_EE_"+pt_min['EE'][i]+"_"+pt_max['EE'][i]
     elif(options.hltcut==90):
         weight_ele['EE'][i]="puW90*r9WeightEE_hlt90*etaWeight*rhoWeight90*isoW_EE_"+pt_min['EE'][i]+"_"+pt_max['EE'][i]
     elif(options.hltcut==135):
         weight_ele['EE'][i]="puW135*r9WeightEE_hlt135*etaWeight*rhoWeight135*isoW_EE_"+pt_min['EE'][i]+"_"+pt_max['EE'][i]
     elif(options.hltcut==150):
         weight_ele['EE'][i]="puW150*etaWeight*rhoWeight150*r9WeightEE_hlt150*isoW_EE_"+pt_min['EE'][i]+"_"+pt_max['EE'][i]



#options to draw MC Zee and MC phot plots
draw_opts={}
draw_opts['mc_Z']=dict( SetMarkerSize=0.7,SetMarkerStyle=20,SetMarkerColor=kPink+10,SetLineColor=kPink+10 )
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
def plot(pars,savefmts=[".C",".png",".svg"]):
    c = TCanvas(pars['variable_mc'],pars['variable_mc'],1000,900)
    customizeCanvas(c)


    
    for cut in cuts_mc.keys():
        
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)]=TH1F(str(plotPars[str(pars['variable_mc'])]['name'])+"_mc_Z_"+str(cut),str(plotPars[str(pars['variable_mc'])]['name'])+"_mc_Z_"+str(cut),int(plotPars[str(pars['variable_mc'])]['nBins']),float(plotPars[str(pars['variable_mc'])]['xMin']),float(plotPars[str(pars['variable_mc'])]['xMax']))
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].Sumw2()
        for type in mc_types.keys():
            histos[str(pars['variable_mc'])+'_mc_'+type+"_"+str(cut)]=TH1F(str(plotPars[str(pars['variable_mc'])]['name'])+"_mc_"+type+"_"+str(cut),str(plotPars[str(pars['variable_mc'])]['name'])+"_mc_"+type+"_"+str(cut),plotPars[str(pars['variable_mc'])]['nBins'],plotPars[str(pars['variable_mc'])]['xMin'],plotPars[str(pars['variable_mc'])]['xMax'])
            histos[str(pars['variable_mc'])+'_mc_'+type+"_"+str(cut)].Sumw2()
        #Filling histos
        mc_Z.Project( histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].GetName(), str(variables_mc_Z[str(pars['variable_mc'])]), "("+str(cuts_mc_Z[cut])+"&&"+pars['additional_cuts_mc_Z']+")*"+str(weight_ele[cut]))
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].Print()
        #Now set drawing options
        for aopt in draw_opts['mc_Z'].keys():
            a=histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)]
            eval('a.'+str(aopt)+'('+str(draw_opts['mc_Z'][aopt])+')')
            
        for mc_type in mc_types.keys():
            mc.Project( histos[str(pars['variable_mc'])+'_mc_'+mc_type+"_"+str(cut)].GetName(), str(variables_mc[str(pars['variable_mc'])]), "("+str(cuts_mc[cut])+"&&"+pars['additional_cuts_mc']+"&&"+str(mc_types[mc_type])+")*"+weight_phot) 
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
           
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].DrawNormalized("PE")
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].SetMaximum(histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].GetMaximum()*1.4)
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].SetMinimum(0)
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].GetXaxis().SetTitle(str(plotPars[str(pars['variable_mc'])]['xaxisLabel']))
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].GetYaxis().SetTitle('Entries/'+str(histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].GetBinWidth(1)))
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].GetYaxis().SetTitleOffset(1.5)

        
        #stack.Draw("HSAME")
        histos[str(pars['variable_mc'])+'_mc_Signal_'+str(cut)].DrawNormalized("HSAME")
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].DrawNormalized("PESAME")

        #Legend
        a=TLegend(0.63,0.68,0.88,0.88)
        a.SetBorderSize(0)
        a.SetFillColor(0)
        a.SetTextSize(0.038)
        a.SetHeader(str(cut))
        a.AddEntry( histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)],"MC Z #rightarrow ee","PL" )
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
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].SetMaximum(histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].GetMaximum()*4.)
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].SetMinimum(0.1)
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].GetYaxis().SetTitleOffset(0.9)
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].DrawNormalized("PE")
        #stack.Draw("HSAME")
        histos[str(pars['variable_mc'])+'_mc_Signal_'+str(cut)].DrawNormalized("HSAME")
        histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].DrawNormalized("PESAME")
      
        a=TLegend(0.63,0.68,0.88,0.88)
        a.SetBorderSize(0)
        a.SetFillColor(0)
        a.SetTextSize(0.038)
        a.SetHeader(str(cut))
        a.AddEntry( histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)],"MC Z #rightarrow ee","PL" )
        for mc_type in range(len(mc_types_keys)):
             a.AddEntry( histos[str(pars['variable_mc'])+'_mc_'+mc_types_keys[mc_type]+"_"+str(cut)], "signal #gamma + jet" , "F" )
        a.Draw()

        drawText(pars['additional_text'])

        #Second pad (bottom)
        pads[1].cd()
        pads[1].SetBottomMargin(0.2)
        pads[1].SetGridy(1)

        #prepare ratio histogram
        ratio=histos[str(pars['variable_mc_Z'])+'_mc_Z_'+str(cut)].Clone("ratio")
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

        ratio.GetYaxis().SetTitle("MC(e)/MC(#gamma)")
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
    additionalCuts_mc_Z=options.additionalCuts_mc_Z
    additionalCuts_mc=options.additionalCuts_mc

    #Creating output dir
    try:
        os.mkdir(plotsDir)
    except:
        pass

    #Reading MC Z files list
    lines = [line.strip() for line in open(options.mcZFiles)]
    for line in lines:
        if line.startswith('#'):
            continue
        mc_Z.Add(line)

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
        print ("pars=[ dict(variable_mc= %s, variable_mc_Z=%s, plotsDir=%s, additional_cuts_mc_Z=%s, additional_cuts_mc=%s, additional_text=%s) ]" % (variables_mc[x], variables_mc_Z[x], plotsDir,additionalCuts_mc_Z, additionalCuts_mc,additionalText))
    print " "
    print "----------------------------------------"

    #run all the samples in parallel 
    pars=[ dict(variable_mc=variables_mc[x], variable_mc_Z=variables_mc_Z[x], plotsDir=plotsDir,additional_cuts_mc_Z=additionalCuts_mc_Z,additional_cuts_mc=additionalCuts_mc,additional_text=additionalText) for x in variables_mc.keys() ]
    pool.map(plot, pars)

    #for variable in variables.keys():
    #plot(variable,plotsDir,additionalCuts,additionalText)

    
if __name__ == "__main__":
    parser = OptionParser(option_list=[
        make_option("--mcZFiles",
                    action="store", type="string", dest="mcZFiles",
                    #default="data.txt",
                    help="", metavar=""
                    ),
        make_option("--mcFiles",
                    action="store", type="string", dest="mcFiles",
                    #default="mc.txt",
                    help="", metavar=""
                    ),
        make_option("--plotsDir",
                    action="store", type="string", dest="plotsDir",
                    default="./",
                    help="", metavar=""
                    ),
        make_option("--additionalText",
                    action="store", type="string", dest="additionalText",
                    default="",
                    help="", metavar=""
                    ),
        make_option("--additionalCuts_mc_Z",
                    action="store", type="string", dest="additionalCuts_mc_Z",
                    default="1",
                    help="", metavar=""
                    ),
        make_option("--additionalCuts_mc",
                    action="store", type="string", dest="additionalCuts_mc",
                    default="1",
                    help="", metavar=""
                    ),
        make_option("--hltcut",
                    action="store", type="int", dest="hltcut",
                    default=30,
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
