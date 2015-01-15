#!usr/bin/python
import ROOT
#import ROOFIT
#from ROOT import TFile, TH1F, THStack, TCanvas, TMath, gROOT, gPad, TLegend
from ROOT import *
#from setTDRStyle import setTDRStyle
from array import array
from math import *
import os
import sys
import optparse
import numpy as np


# usage = "usage: %prog [options]"
# parser = optparse.OptionParser(usage)
# parser.add_option("--var",action="store",type="string",dest="var",default='ptHat')
# (options, args) = parser.parse_args()

# var = options.var

inputdir_FPR = "fit_data_nonParam_FPR/"
inputdir_FPR_w1_sig = "fit_data_nonParam_FPR_sigW1/"
inputdir_FPR_w2_sig = "fit_data_nonParam_FPR_sigW2/"
inputdir_FPR_w1_bkg = "fit_data_nonParam_FPR_bkgW1/"
inputdir_FPR_w2_bkg = "fit_data_nonParam_FPR_bkgW2/"

outputdir = "./test_plots_purity/"

w = []
w_w1_sig = []
w_w2_sig = []
w_w1_bkg = []
w_w2_bkg = []
f=[]
f_w1_sig = []
f_w2_sig = []
f_w1_bkg = []
f_w2_bkg = []
purity = {}
purity_w1_sig = {}
purity_w2_sig = {}
purity_w1_bkg = {}
purity_w2_bkg = {}

purity['EB'] = []
purity['EE'] = []
purity_w1_sig['EB'] = []
purity_w1_sig['EE'] = []
purity_w2_sig['EB'] = []
purity_w2_sig['EE'] = []
purity_w1_bkg['EB'] = []
purity_w1_bkg['EE'] = []
purity_w2_bkg['EB'] = []
purity_w2_bkg['EE'] = []

pt={}
pt['EB']=[43.5,56,69,81.5,92,96.5,102,107.5,113.5,121.5,132.5,152,160,165.5,166.5, 167.5,168.5,169.5,170.5,171.5,172.5,173.5,174.5,175.5,176.5,177.5,178.5,179.5,181,183,185,187,189,191,193,195,197,199,201,203,205,207,209,212.5,217.5,222.5,227.5,232.5,237.5,242.5,247.5,252.5,257.5,262.5,267.5,280,300,325,360,430,530]
pt['EE']=[52.5, 77.5, 97.5, 115.5, 145.5, 166.5, 170, 174, 178, 183, 189, 195, 202, 210.5, 220, 232.5, 255]
print("len(pt[EB])=%s" % len(pt['EB']))
print("len(pt[EE])=%s" % len(pt['EE']))

err_stat_high = {}
err_stat_high['EB'] = []
err_stat_high['EE'] = []

err_stat_low={}
err_stat_low['EB'] = []
err_stat_low['EE'] = []


low_edge = {}
low_edge['EB']=[40,47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480]
#low_edge['EE']=[40,65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270 ]
#print("len(low_edge[EB])=%s" % len(low_edge['EB']))
#print("len(low_edge[EE])=%s" % len(low_edge['EE']))

high_edge = {}
high_edge['EB']=[47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480,1000]
high_edge['EE']=[65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270,1000 ]
print("len(high_edge[EB])=%s" % len(high_edge['EB']))
print("len(high_edge[EE])=%s" % len(high_edge['EE']))

purity={}
purity['EB']=[]
purity['EE']=[]

purity_low_syst={}
purity_low_syst['EB']=[]
purity_low_syst['EE']=[]
purity_high_syst={}
purity_high_syst['EB']=[]
purity_high_syst['EE']=[]

purity_low_syst_sig={}
purity_low_syst_sig['EB']=[]
purity_low_syst_sig['EE']=[]
purity_high_syst_sig={}
purity_high_syst_sig['EB']=[]
purity_high_syst_sig['EE']=[]

purity_low_syst_bkg={}
purity_low_syst_bkg['EB']=[]
purity_low_syst_bkg['EE']=[]
purity_high_syst_bkg={}
purity_high_syst_bkg['EB']=[]
purity_high_syst_bkg['EE']=[]

for region in low_edge.keys():
    for i in range (0, len(low_edge[region])):
        print("region: %s" % region)
        print("bin: %s" % i)
        print ("%sworkspace_fit_%s_data_WP095_pt%s_%s.root" % (inputdir_FPR,region,str(low_edge[region][i]),str(high_edge[region][i])))
        f.append(TFile(inputdir_FPR+"workspace_fit_"+region+"_data_WP095_pt"+str(low_edge[region][i])+"_"+str(high_edge[region][i])+".root"))
        f_w1_sig.append(TFile(inputdir_FPR_w1_sig+"workspace_fit_"+region+"_data_WP095_pt"+str(low_edge[region][i])+"_"+str(high_edge[region][i])+".root"))
        f_w2_sig.append(TFile(inputdir_FPR_w2_sig+"workspace_fit_"+region+"_data_WP095_pt"+str(low_edge[region][i])+"_"+str(high_edge[region][i])+".root"))
        f_w1_bkg.append(TFile(inputdir_FPR_w1_bkg+"workspace_fit_"+region+"_data_WP095_pt"+str(low_edge[region][i])+"_"+str(high_edge[region][i])+".root"))
        f_w2_bkg.append(TFile(inputdir_FPR_w2_bkg+"workspace_fit_"+region+"_data_WP095_pt"+str(low_edge[region][i])+"_"+str(high_edge[region][i])+".root"))
        w.append(f[i].Get("w_data"))
        w_w1_sig.append(f_w1_sig[i].Get("w_data"))
        w_w2_sig.append(f_w2_sig[i].Get("w_data"))
        w_w1_bkg.append(f_w1_bkg[i].Get("w_data"))
        w_w2_bkg.append(f_w2_bkg[i].Get("w_data"))
        purity[region].append(w[i].var("frac_scut").getVal())
        purity_w1_sig[region].append(w_w1_sig[i].var("frac_scut").getVal())
        purity_w2_sig[region].append(w_w2_sig[i].var("frac_scut").getVal())
        purity_w1_bkg[region].append(w_w1_bkg[i].var("frac_scut").getVal())
        purity_w2_bkg[region].append(w_w2_bkg[i].var("frac_scut").getVal())
        err_stat_low[region].append(w[i].var("frac_scut").getErrorLo())
        err_stat_high[region].append(w[i].var("frac_scut").getErrorHi())

        if purity[region][i] > purity_w1_sig[region][i]:
            purity_low_syst_sig[region].append( purity[region][i]- purity_w1_sig[region][i])
            purity_high_syst_sig[region].append( purity_w2_sig[region][i] - purity[region][i])
        else:
            purity_low_syst_sig[region].append(purity[region][i]- purity_w2_sig[region][i])
            purity_high_syst_sig[region].append( purity_w1_sig[region][i] - purity[region][i])

        if purity[region][i] > purity_w1_bkg[region][i]:
            purity_low_syst_bkg[region].append( purity[region][i]- purity_w1_bkg[region][i])
            purity_high_syst_bkg[region].append( purity_w2_bkg[region][i] - purity[region][i])
        else:
            purity_low_syst_bkg[region].append(purity[region][i]- purity_w2_bkg[region][i])
            purity_high_syst_bkg[region].append( purity_w1_bkg[region][i] - purity[region][i])

        #if( purity_high_syst_sig[region][i] < 0): print("WARNING: high edge of the error bar < 0")
        #if( purity_low_syst_sig[region][i] < 0): print("WARNING: low edge of the error bar < 0")

        #tot systematic error is the sum of squares
        
        purity_low_syst[region].append(sqrt(pow(float(purity_low_syst_bkg[region][i]),2.) + pow(float(purity_low_syst_sig[region][i]),2.)))
        purity_high_syst[region].append(sqrt(pow(float(purity_high_syst_bkg[region][i]),2) + pow(float(purity_high_syst_sig[region][i]),2.)))

        
    print("len(purity) = %s" % len(purity[region]))

    array_pt = np.array(pt[region])
    array_purity = np.array(purity[region])
    array_low_edge = np.array(low_edge[region])
    array_high_edge = np.array(high_edge[region])
    array_purity_low_syst = np.array(purity_low_syst[region])
    array_purity_high_syst = np.array(purity_high_syst[region])
    array_purity_low_syst_bkg = np.array(purity_low_syst_bkg[region])
    array_purity_high_syst_bkg = np.array(purity_high_syst_bkg[region])
    array_err_stat_low = np.array(err_stat_low[region])
    array_err_stat_high = np.array(err_stat_high[region])
    print(array_pt)
    print(array_purity)
    print(array_err_stat_low)
    print(array_err_stat_high)

    g_syst_bkg = TGraphAsymmErrors(len(pt[region]),array_pt, array_purity, array_low_edge, array_high_edge , array_purity_low_syst_bkg, array_purity_high_syst_bkg)
    g_syst = TGraphAsymmErrors(len(pt[region]),array_pt, array_purity, array_low_edge, array_high_edge , array_purity_low_syst, array_purity_high_syst)
    g_stat = TGraphAsymmErrors(len(pt[region]),array_pt, array_purity, array_low_edge, array_high_edge, array_err_stat_high, array_err_stat_high) 

    g_stat.GetXaxis().SetTitle("p_{T}^{#gamma} [GeV]")
    g_stat.GetYaxis().SetTitle("purity "+region)
    g_stat.SetMarkerStyle(20)
    g_stat.SetMarkerSize(0.5)
    g_stat.SetMarkerColor(kBlack)

    g_syst.GetXaxis().SetTitle("p_{T}^{#gamma} [GeV]")
    g_syst.GetYaxis().SetTitle("purity "+region)
    g_syst.SetFillStyle(3004)
    #g_syst.SetFillColor(kRed)

    g_syst_bkg.GetXaxis().SetTitle("p_{T}^{#gamma} [GeV]")
    g_syst_bkg.GetYaxis().SetTitle("purity "+region)
    g_syst_bkg.SetFillStyle(3001)
    g_syst_bkg.SetFillColor(kAzure+1)


    leg = TLegend(0.35,0.15,0.7,0.3)
    leg.SetFillColor(0)
    leg.SetLineColor(0)
    leg.AddEntry(g_stat,"statistical uncertainty","l")
    leg.AddEntry(g_syst,"total systematic uncertainty (sig + bkg template syst.)","f")
    leg.AddEntry(g_syst_bkg,"bkg template systematic uncertainty","f")


    c = TCanvas("c", "", 1)
    g_stat.GetXaxis().SetRangeUser(0.,1000.)
    g_syst.GetXaxis().SetRangeUser(0.,1000.)
    g_syst_bkg.GetXaxis().SetRangeUser(0.,1000.)
    g_stat.GetYaxis().SetRangeUser(0.,1.)
    g_syst.GetYaxis().SetRangeUser(0.,1.)
    g_syst_bkg.GetYaxis().SetRangeUser(0.,1.)

    
    g_syst_bkg.Draw("a3")
    g_syst.Draw("3 same")
    g_stat.Draw("p")
    leg.Draw()

    c.SaveAs(outputdir+"purity_"+region+"_FPR.png")
    c.Clear()
    
