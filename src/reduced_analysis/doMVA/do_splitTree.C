#include "splitTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include "TTree.h"
#include "TFile.h"
#include "TH1.h"

void do_splitTree(){

  TFile* oldfile[2];
  oldfile[0] = new TFile("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_GJet_Pt-20to40_doubleEMEnriched_TuneZ2star_8TeV-pythia6_Summer12_DR53X-PU_S10_START53_V7A-v1.root", "READ");
  oldfile[1] = new TFile("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_GJet_Pt40_doubleEMEnriched_TuneZ2star_8TeV-pythia6_Summer12_DR53X-PU_S10_START53_V7A-v1.root", "READ");
  //  oldfile[2] = new TFile("/t3/users/meridian/GammaJets/reduced/redntp.53xv4.gjetpresel.noCorr.v1/merged/redntp_GJet_Pt40_doubleEMEnriched_TuneZ2star_8TeV_ext-pythia6_Summer12_DR53X-PU_S10_START53_V7C-v1.root", "READ");

  TH1D* ptphotgen1[2]; 
  ptphotgen1[0] = (TH1D*)oldfile[0]->Get("ptphotgen1"); 
  ptphotgen1[1] = (TH1D*)oldfile[1]->Get("ptphotgen1"); 

  TFile* newfile[2];
  newfile[0] = new TFile("/cmshome/gdimperi/GammaJet/CMSSW_5_3_11/src/GammaJets/src/reduced_analysis/doMVA/inputfiles/redntp_GJet_Pt-20to40_doubleEMEnriched_TuneZ2star_8TeV-pythia6_Summer12_DR53X-PU_S10_START53_V7A-v1_2trees.root", "RECREATE");
  newfile[1] = new TFile("/cmshome/gdimperi/GammaJet/CMSSW_5_3_11/src/GammaJets/src/reduced_analysis/doMVA/inputfiles/redntp_GJet_Pt40_doubleEMEnriched_TuneZ2star_8TeV-pythia6_Summer12_DR53X-PU_S10_START53_V7A-v1_2trees.root", "RECREATE");
  //  newfile[2] = new TFile("/cmshome/gdimperi/GammaJet/CMSSW_5_3_11/src/GammaJets/src/reduced_analysis/doMVA/inputfiles/redntp_GJet_Pt40_doubleEMEnriched_TuneZ2star_8TeV_ext-pythia6_Summer12_DR53X-PU_S10_START53_V7C-v1_2trees.root", "RECREATE");


  splitTree* fill_newfile[3];
  for(int i=0; i<2; i++){
    fill_newfile[i] = new splitTree((TTree*)oldfile[i]->Get("AnaTree"));
    fill_newfile[i]->Loop(newfile[i]);
    ptphotgen1[i]->Write();
  }

}

