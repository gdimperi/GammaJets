#include "TCanvas.h"
#include "string"
#include "iostream"
//#include "cstdio"
#include "TFile.h"
#include "TH2F.h"
#include "TChain.h"
#include "TTree.h"
#include "TStyle.h"
#include "TColor.h"
#include "TMath.h"
#include "TProfile.h"
#include "TLegend.h"

#include "mvaIsoCorrel.h"

using namespace std;

void mvaIsoCorrel(int isEB, int hlt){

  cout << "----------------------------------------------" << endl
       << "Usage" << endl
       << "isEB  : 1 for barrel " << endl
       << "isSig : 1 for matched and isolated photons" << endl
       << "hlt   : 30, 50, 75, 90, 135, 150" << endl
       << "----------------------------------------------"    
       << endl << endl;

  char fileName[100];
  char outputDir[] = "/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/reduced_analysis/histo_v6/genIso4/";

  if(isEB){
    sprintf(fileName,"%smvaIso_hlt%d_histo_EB.root", outputDir, hlt);

  }
  else if(!isEB){
    sprintf(fileName,"%smvaIso_hlt%d_histo_EE.root", outputDir, hlt);

  }

  TFile* outputFile = new TFile(fileName, "RECREATE");
  
  //loading MC to fit
  TChain mc("finalTree");
  TChain data("finalTree");
  
  //v6
  //hlt30
  if(hlt==30 ){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-470to800_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-800to1400_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_170_250_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_20_30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_250_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_30_80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_80_170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   

    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_B_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_Q_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_O_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_C_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_H_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_G_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_N_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_D_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_E_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_R_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_S_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/Photon_Run2012C-22Jan2013_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/Photon_Run2012A-22Jan2013_hltcut30_hltiso0_mvaWP4.root");  
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_T_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_A_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_L_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_I_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_M_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_F_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_P_hltcut30_hltiso0_mvaWP4.root");
    data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/Photon_Run2012B-22Jan2013_hltcut30_hltiso0_mvaWP4.root");
  }

  /*
  //hlt50
  if(hlt==50 ){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-470to800_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-800to1400_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_170_250_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_20_30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_250_350_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_30_80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_350_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_80_170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");     
  }
  //hlt75
  if(hlt==75 ){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-470to800_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-800to1400_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_170_250_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_20_30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_250_350_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_30_80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_350_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_80_170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");     
  }  
  //hlt90
  if(hlt==90 ){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-470to800_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-800to1400_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_170_250_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_20_30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_250_350_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_30_80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_350_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_80_170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");     
  }
  //hlt135
  if(hlt==135){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-470to800_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-800to1400_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_170_250_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_20_30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_250_350_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_30_80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_350_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_80_170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");     
  }
  //hlt150... ?
  if(hlt==150){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-120to170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-15to30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-170to300_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-300to470_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-30to50_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-470to800_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-50to80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-800to1400_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-80to120_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_170_250_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_20_30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_250_350_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_30_80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_350_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_80_170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");     
  }
  */

  outputFile->cd();  

  TH2F* correl_plot_data = new TH2F("correl_plot_data", "", 60, -1., 1., 60, -5, 15);
  TH2F* correl_plot_mc = new TH2F("correl_plot_mc", "", 60, -1., 1., 60, -5, 15);


  // correl isoFPR with BDT
  TH2F* correl_plot_isoFPR_data = new TH2F("correl_plot_isoFPR_data", "", 60, -1., 1., 60, -5., 15);
  TH2F* correl_plot_isoFPR_mc = new TH2F("correl_plot_isoFPR_mc", "", 60, -1., 1., 60, -5., 15);


  TProfile* profile_correl_plot_data;
  TProfile* profile_correl_plot_mc;

  // correl isoFPR with BDT
  TProfile* profile_correl_plot_isoFPR_data;
  TProfile* profile_correl_plot_isoFPR_mc;


  string ecalRegion;
  if(isEB==1) ecalRegion = "(TMath::Abs(etaPhot)<1.4442)";
  else ecalRegion = "(TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5)";

  
  string ptRange;
  if(hlt==30) ptRange = "(ptPhot>40. && ptPhot<65.)";
  if(hlt==50) ptRange = "(ptPhot>65. && ptPhot<90.)";
  if(hlt==75) ptRange = "(ptPhot>90. && ptPhot<105.)";
  if(hlt==90) ptRange = "(ptPhot>105. && ptPhot<165.)";
  if(hlt==135) ptRange = "(ptPhot>165. && ptPhot<180.)";
  if(hlt==150) ptRange = "(ptPhot>180.)";

  string conditions;
 
  if(hlt==0){
    cout << "Start filling histograms" << endl;
    cout << "********************************************************** " << endl
	 << "*             filling all pt                             * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==30){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 40 to 65                       * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==50){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 65 to 90                       * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==75){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 90 to 105                      * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==90){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 105 to 165                     * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==135){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 165 to 180                     * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==150){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 180 to inf                     * " << endl
	 << "********************************************************** " << endl;      
  }
  

  conditions = "( "+ ecalRegion +" && "+ ptRange +")*weight";
  mc.Project("correl_plot_mc", "combinedPfIso03Phot:mvaIdPhot", conditions.c_str());
  correl_plot_mc->GetXaxis()->SetTitle("BDT output");
  correl_plot_mc->GetYaxis()->SetTitle("combined PF Iso 03 [GeV]");
  data.Project("correl_plot_data", "combinedPfIso03Phot:mvaIdPhot", conditions.c_str());
  correl_plot_data->GetXaxis()->SetTitle("BDT output");
  correl_plot_data->GetYaxis()->SetTitle("combined PF Iso 03 [GeV]");


  // correl isoFPR with BDT
  mc.Project("correl_plot_isoFPR_mc", "combinedPfIsoFPR03Phot:mvaIdPhot", conditions.c_str());
  correl_plot_isoFPR_mc->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPR_mc->GetYaxis()->SetTitle("combined PF Iso 03 with FPR [GeV]");

  data.Project("correl_plot_isoFPR_data", "combinedPfIsoFPR03Phot:mvaIdPhot", conditions.c_str());
  correl_plot_isoFPR_data->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPR_data->GetYaxis()->SetTitle("combined PF Iso 03 with FPR [GeV]");


  //profilex
  profile_correl_plot_data           = correl_plot_data->ProfileX("profile_correl_plot_data");
  profile_correl_plot_mc             = correl_plot_mc->ProfileX("profile_correl_plot_mc");
  profile_correl_plot_data          ->SetMarkerStyle(1);
  profile_correl_plot_mc            ->SetMarkerStyle(1);

  profile_correl_plot_isoFPR_data  = correl_plot_isoFPR_data->ProfileX("profile_correl_plot_isoFPR_data");
  profile_correl_plot_isoFPR_mc  = correl_plot_isoFPR_mc->ProfileX("profile_correl_plot_isoFPR_mc");
  profile_correl_plot_isoFPR_data ->SetMarkerStyle(1);
  profile_correl_plot_isoFPR_mc ->SetMarkerStyle(1);

  

  // write on file
  cout << " " << endl;
  cout << "-------- write on file---------- " << endl;
  cout << " " << endl;

  
  profile_correl_plot_data             ->Write();
  profile_correl_plot_mc             ->Write();
  profile_correl_plot_isoFPR_data         ->Write();
  profile_correl_plot_isoFPR_mc         ->Write();

  correl_plot_data             ->Write();
  correl_plot_mc             ->Write();
  correl_plot_isoFPR_data         ->Write();
  correl_plot_isoFPR_mc         ->Write();

  outputFile->Close();  


  const Int_t NRGBs = 5;
  const Int_t NCont = 255;

  Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
  Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
  Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
  Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
  TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
  gStyle->SetNumberContours(NCont);
  
  //  gStyle->SetPalette(1);
}

