#include "TCanvas.h"
#include "string"
#include "sstream"
#include "iostream"
#include "cstdio"
#include "TFile.h"
#include "TH1F.h"
#include "TChain.h"
#include "TTree.h"
#include "vector"
#include "TGraphAsymmErrors.h"
#include "TBranch.h"

void IsoCutGenLevel_reduced(){

  //loading MC to fit
  TChain mc("AnaTree");
  // mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-0to15_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-120to170_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-1400to1800_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-15to3000_TuneZ2_Flat_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-15to30_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-170to300_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-1800_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-300to470_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-30to50_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-470to800_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-50to80_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-800to1400_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_G_Pt-80to120_TuneZ2star_8TeV_pythia6.root");
//	  
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_QCD_Pt_170_250_EMEnriched_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_QCD_Pt_20_30_EMEnriched_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_QCD_Pt_250_350_EMEnriched_TuneZ2star_8TeV_pythia6.root");
  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_QCD_Pt_30_80_EMEnriched_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_QCD_Pt_350_EMEnriched_TuneZ2star_8TeV_pythia6.root");
//  mc.Add("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_QCD_Pt_80_170_EMEnriched_TuneZ2star_8TeV_pythia6.root");


  string presel = "pid_HoverE_presel<0.075 && pid_scetawid_presel<0.014 && (pid_jurECAL03_presel - 0.012*ptPhot_presel)<50 && (pid_twrHCAL03_presel - 0.005*ptPhot_presel)<50 && (pid_hlwTrack03_presel - 0.002*ptPhot_presel)<50 && pid_pfIsoCharged02ForCiC_presel<4";

  mc.Draw("iso03_gen>>h_gen(25, 0., 10.)", "nPhot_presel>0 && iRecoPhotMatch_gen>-1 && abs(etaPhot_presel)<1.4442");
  TH1F* h_gen = (TH1F*)((TH1F*)gPad->GetPrimitive("h_gen"))->Clone("h_gen");
  mc.Draw("iso03_gen>>h_presel(25, 0., 10.)", ("nPhot_presel>0 && iRecoPhotMatch_gen>-1 && abs(etaPhot_presel)<1.4442 && "+presel).c_str());
  TH1F* h_presel = (TH1F*)((TH1F*)gPad->GetPrimitive("h_presel"))->Clone("h_presel");

  TCanvas* c1 = new TCanvas("c1", "c1", 1);

  h_gen->Draw();
  c1->SaveAs("plot_debug.png");

  h_presel->Divide(h_gen);
  
  h_presel->Draw();
  c1->SaveAs("plot_cutGenLev_reduced.root");
  c1->SaveAs("plot_cutGenLev_reduced.pdf");
  c1->SaveAs("plot_cutGenLev_reduced.png");
}

