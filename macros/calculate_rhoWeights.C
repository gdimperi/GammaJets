#include <TH2.h>
#include <TH1.h>
#include <TMath.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TVector3.h>
#include <TStopwatch.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <iostream>

using namespace std; 

void calculate_rhoWeights(){

  //TChain data_phot("finalTree");   
  TChain mc_phot_hlt30("finalTree");
  TChain mc_ele_hlt30("myTaPDir/myTree");
  TChain mc_phot_hlt50("finalTree");
  TChain mc_ele_hlt50("myTaPDir/myTree");
  TChain mc_phot_hlt75("finalTree");
  TChain mc_ele_hlt75("myTaPDir/myTree");  
  TChain mc_phot_hlt90("finalTree");
  TChain mc_ele_hlt90("myTaPDir/myTree");
  TChain mc_phot_hlt135("finalTree");
  TChain mc_ele_hlt135("myTaPDir/myTree");
  TChain mc_phot_hlt150("finalTree");
  TChain mc_ele_hlt150("myTaPDir/myTree");

  TChain data_phot_hlt30("finalTree");
  TChain data_ele_hlt30("myTaPDir/myTree");
  TChain data_phot_hlt50("finalTree");
  TChain data_ele_hlt50("myTaPDir/myTree");
  TChain data_phot_hlt75("finalTree");
  TChain data_ele_hlt75("myTaPDir/myTree");  
  TChain data_phot_hlt90("finalTree");
  TChain data_ele_hlt90("myTaPDir/myTree");
  TChain data_phot_hlt135("finalTree");
  TChain data_ele_hlt135("myTaPDir/myTree");
  TChain data_phot_hlt150("finalTree");
  TChain data_ele_hlt150("myTaPDir/myTree");



  data_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/Photon_*root");
  data_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/SinglePhoton_*root");
  data_ele_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT30.root");
  
  data_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/Photon_*root");
  data_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/SinglePhoton_*root");
  //data_ele_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT50.root");
  
  data_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/Photon_*root");
  data_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/SinglePhoton_*root");
  //data_ele_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT75.root");
  
  data_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/Photon_*root");
  data_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/SinglePhoton_*root");
  //data_ele_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT90.root");
  
  data_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/Photon_*root");
  data_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/SinglePhoton_*root");
  //data_ele_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT135.root");
  
  data_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/Photon_*root");
  data_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/SinglePhoton_*root");
  //data_ele_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT150.root");
  
  
  mc_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/QCDEM_Pt*root");
  mc_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-30to50_*root");
  mc_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-50to80_*root");
  mc_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-80to120_*root");
  mc_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-120to170_*root");
  mc_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-170to300_*root");
  mc_phot_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-300to470_*root");

  mc_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/QCDEM_Pt*root");
  mc_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-30to50_*root");
  mc_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-50to80_*root");
  mc_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-80to120_*root");
  mc_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-120to170_*root");
  mc_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-170to300_*root");
  mc_phot_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-300to470_*root");

  mc_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/QCDEM_Pt*root");
  mc_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-30to50_*root");
  mc_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-50to80_*root");
  mc_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-80to120_*root");
  mc_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-120to170_*root");
  mc_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-170to300_*root");
  mc_phot_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-300to470_*root");

  mc_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/QCDEM_Pt*root");
  mc_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-30to50_*root");
  mc_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-50to80_*root");
  mc_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-80to120_*root");
  mc_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-120to170_*root");
  mc_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-170to300_*root");
  mc_phot_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-300to470_*root");

  mc_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/QCDEM_Pt*root");
  mc_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-30to50_*root");
  mc_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-50to80_*root");
  mc_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-80to120_*root");
  mc_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-120to170_*root");
  mc_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-170to300_*root");
  mc_phot_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-300to470_*root");

  mc_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/QCDEM_Pt*root");
  mc_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-30to50_*root");
  mc_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-50to80_*root");
  mc_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-80to120_*root");
  mc_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-120to170_*root");
  mc_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-170to300_*root");
  mc_phot_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-300to470_*root");

  mc_ele_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_HLT30.root");
//   mc_ele_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_HLT50.root");
//   mc_ele_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_HLT75.root");
//   mc_ele_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_HLT90.root");
//   mc_ele_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_HLT135.root");
//  mc_ele_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_HLT150.root");

  cout << "added files to chain" << endl;


  TFile* outputFile = new TFile("rhoWeights_data.root", "recreate");

  outputFile->cd();

  //TH1F* h_target = new TH1F("h_target", "", 100, -3., 3.);
  TH1F* h_mc_phot_hlt30 = new TH1F("h_mc_phot_hlt30", "", 600, 0., 60.);
  TH1F* h_mc_ele_hlt30 = new TH1F("h_mc_ele_hlt30", "", 600, 0., 60.);
  TH1F* h_mc_phot_hlt50 = new TH1F("h_mc_phot_hlt50", "", 600, 0., 60.);
  //TH1F* h_mc_ele_hlt50 = new TH1F("h_mc_ele_hlt50", "", 600, 0., 60.);
  TH1F* h_mc_phot_hlt75 = new TH1F("h_mc_phot_hlt75", "", 600, 0., 60.);
  //TH1F* h_mc_ele_hlt75 = new TH1F("h_mc_ele_hlt75", "", 600, 0., 60.);
  TH1F* h_mc_phot_hlt90 = new TH1F("h_mc_phot_hlt90", "", 600, 0., 60.);
  //TH1F* h_mc_ele_hlt90 = new TH1F("h_mc_ele_hlt90", "", 600, 0., 60.);
  TH1F* h_mc_phot_hlt135 = new TH1F("h_mc_phot_hlt135", "", 600, 0., 60.);
  //TH1F* h_mc_ele_hlt135 = new TH1F("h_mc_ele_hlt135", "", 600, 0., 60.);
  TH1F* h_mc_phot_hlt150 = new TH1F("h_mc_phot_hlt150", "", 600, 0., 60.);
  //TH1F* h_mc_ele_hlt150 = new TH1F("h_mc_ele_hlt150", "", 600, 0., 60.);

  TH1F* h_data_phot_hlt30 = new TH1F("h_data_phot_hlt30", "", 600, 0., 60.);
  TH1F* h_data_ele_hlt30 = new TH1F("h_data_ele_hlt30", "", 600, 0., 60.);
  TH1F* h_data_phot_hlt50 = new TH1F("h_data_phot_hlt50", "", 600, 0., 60.);
  //TH1F* h_data_ele_hlt50 = new TH1F("h_data_ele_hlt50", "", 600, 0., 60.);
  TH1F* h_data_phot_hlt75 = new TH1F("h_data_phot_hlt75", "", 600, 0., 60.);
  //TH1F* h_data_ele_hlt75 = new TH1F("h_data_ele_hlt75", "", 600, 0., 60.);
  TH1F* h_data_phot_hlt90 = new TH1F("h_data_phot_hlt90", "", 600, 0., 60.);
  //TH1F* h_data_ele_hlt90 = new TH1F("h_data_ele_hlt90", "", 600, 0., 60.);
  TH1F* h_data_phot_hlt135 = new TH1F("h_data_phot_hlt135", "", 600, 0., 60.);
  //TH1F* h_data_ele_hlt135 = new TH1F("h_data_ele_hlt135", "", 600, 0., 60.);
  TH1F* h_data_phot_hlt150 = new TH1F("h_data_phot_hlt150", "", 600, 0., 60.);
  //TH1F* h_data_ele_hlt150 = new TH1F("h_data_ele_hlt150", "", 600, 0., 60.);  

  mc_phot_hlt30.Project("h_mc_phot_hlt30", "rho", "weight");
  mc_ele_hlt30.Project("h_mc_ele_hlt30", "rho", "puW30");
  mc_phot_hlt50.Project("h_mc_phot_hlt50", "rho", "weight");
  //mc_ele_hlt50.Project("h_mc_ele_hlt50", "rho");
  mc_phot_hlt75.Project("h_mc_phot_hlt75", "rho", "weight");
  //mc_ele_hlt75.Project("h_mc_ele_hlt75", "rho");
  mc_phot_hlt90.Project("h_mc_phot_hlt90", "rho", "weight");
  //mc_ele_hlt90.Project("h_mc_ele_hlt90", "rho");
  mc_phot_hlt135.Project("h_mc_phot_hlt135", "rho", "weight");
  //mc_ele_hlt135.Project("h_mc_ele_hlt135", "rho");
  mc_phot_hlt150.Project("h_mc_phot_hlt150", "rho", "weight");
  //mc_ele_hlt150.Project("h_mc_ele_hlt150", "rho");

  data_phot_hlt30.Project("h_data_phot_hlt30", "rho");
  data_ele_hlt30.Project("h_data_ele_hlt30", "rho");
  data_phot_hlt50.Project("h_data_phot_hlt50", "rho");
  //data_ele_hlt50.Project("h_data_ele_hlt50", "rho");
  data_phot_hlt75.Project("h_data_phot_hlt75", "rho");
  //data_ele_hlt75.Project("h_data_ele_hlt75", "rho");
  data_phot_hlt90.Project("h_data_phot_hlt90", "rho");
  //data_ele_hlt90.Project("h_data_ele_hlt90", "rho");
  data_phot_hlt135.Project("h_data_phot_hlt135", "rho");
  //data_ele_hlt135.Project("h_data_ele_hlt135", "rho");
  data_phot_hlt150.Project("h_data_phot_hlt150", "rho");
  //data_ele_hlt150.Project("h_data_ele_hlt150", "rho");

 
  cout << "done with projection" << endl;

  //normalization
  float integral=-1;
  //integral=h_target->Integral();
  //h_target->Scale(1./integral);

  //mc
  integral=h_mc_phot_hlt30->Integral();
  h_mc_phot_hlt30->Scale(1./integral);
  integral=h_mc_ele_hlt30->Integral();
  h_mc_ele_hlt30->Scale(1./integral);

  integral=h_mc_phot_hlt50->Integral();
  h_mc_phot_hlt50->Scale(1./integral);
  //integral=h_mc_ele_hlt50->Integral();
  //h_mc_ele_hlt50->Scale(1./integral);

  integral=h_mc_phot_hlt75->Integral();
  h_mc_phot_hlt75->Scale(1./integral);
  //integral=h_mc_ele_hlt75->Integral();
  //h_mc_ele_hlt75->Scale(1./integral);

  integral=h_mc_phot_hlt90->Integral();
  h_mc_phot_hlt90->Scale(1./integral);
  //integral=h_mc_ele_hlt90->Integral();
  //h_mc_ele_hlt90->Scale(1./integral);

  integral=h_mc_phot_hlt135->Integral();
  h_mc_phot_hlt135->Scale(1./integral);
  //integral=h_mc_ele_hlt135->Integral();
  //h_mc_ele_hlt135->Scale(1./integral);

  integral=h_mc_phot_hlt150->Integral();
  h_mc_phot_hlt150->Scale(1./integral);
  //integral=h_mc_ele_hlt150->Integral();
  //h_mc_ele_hlt150->Scale(1./integral);

  //data
  integral=h_data_phot_hlt30->Integral();
  h_data_phot_hlt30->Scale(1./integral);
  integral=h_data_ele_hlt30->Integral();
  h_data_ele_hlt30->Scale(1./integral);

  integral=h_data_phot_hlt50->Integral();
  h_data_phot_hlt50->Scale(1./integral);
  //integral=h_data_ele_hlt50->Integral();
  //h_data_ele_hlt50->Scale(1./integral);

  integral=h_data_phot_hlt75->Integral();
  h_data_phot_hlt75->Scale(1./integral);
  //integral=h_data_ele_hlt75->Integral();
  //h_data_ele_hlt75->Scale(1./integral);

  integral=h_data_phot_hlt90->Integral();
  h_data_phot_hlt90->Scale(1./integral);
  //integral=h_data_ele_hlt90->Integral();
  //h_data_ele_hlt90->Scale(1./integral);

  integral=h_data_phot_hlt135->Integral();
  h_data_phot_hlt135->Scale(1./integral);
  //integral=h_data_ele_hlt135->Integral();
  //h_data_ele_hlt135->Scale(1./integral);

  integral=h_data_phot_hlt150->Integral();
  h_data_phot_hlt150->Scale(1./integral);
  //integral=h_data_ele_hlt150->Integral();
  //h_data_ele_hlt150->Scale(1./integral);

  cout << "done with scaling" << endl;

  TH1F* weights_mc_hlt30 = (TH1F*)h_mc_phot_hlt30->Clone("weights_mc_hlt30");
  weights_mc_hlt30->Divide(h_mc_ele_hlt30);
  TH1F* weights_mc_hlt50 = (TH1F*)h_mc_phot_hlt50->Clone("weights_mc_hlt50");
  weights_mc_hlt50->Divide(h_mc_ele_hlt30);
  TH1F* weights_mc_hlt75 = (TH1F*)h_mc_phot_hlt75->Clone("weights_mc_hlt75");
  weights_mc_hlt75->Divide(h_mc_ele_hlt30);
  TH1F* weights_mc_hlt90 = (TH1F*)h_mc_phot_hlt90->Clone("weights_mc_hlt90");
  weights_mc_hlt90->Divide(h_mc_ele_hlt30);
  TH1F* weights_mc_hlt135 = (TH1F*)h_mc_phot_hlt135->Clone("weights_mc_hlt135");
  weights_mc_hlt135->Divide(h_mc_ele_hlt30);
  TH1F* weights_mc_hlt150 = (TH1F*)h_mc_phot_hlt150->Clone("weights_mc_hlt150");
  weights_mc_hlt150->Divide(h_mc_ele_hlt30);

  TH1F* weights_data_hlt30 = (TH1F*)h_data_phot_hlt30->Clone("weights_data_hlt30");
  weights_data_hlt30->Divide(h_data_ele_hlt30);
  TH1F* weights_data_hlt50 = (TH1F*)h_data_phot_hlt50->Clone("weights_data_hlt50");
  weights_data_hlt50->Divide(h_data_ele_hlt30);
  TH1F* weights_data_hlt75 = (TH1F*)h_data_phot_hlt75->Clone("weights_data_hlt75");
  weights_data_hlt75->Divide(h_data_ele_hlt30);
  TH1F* weights_data_hlt90 = (TH1F*)h_data_phot_hlt90->Clone("weights_data_hlt90");
  weights_data_hlt90->Divide(h_data_ele_hlt30);
  TH1F* weights_data_hlt135 = (TH1F*)h_data_phot_hlt135->Clone("weights_data_hlt135");
  weights_data_hlt135->Divide(h_data_ele_hlt30);
  TH1F* weights_data_hlt150 = (TH1F*)h_data_phot_hlt150->Clone("weights_data_hlt150");
  weights_data_hlt150->Divide(h_data_ele_hlt30);

  //h_target -> Write();
  h_mc_phot_hlt30->Write();
  h_mc_ele_hlt30->Write();
  weights_mc_hlt30->Write();
  h_mc_phot_hlt50->Write();
  //h_mc_ele_hlt50->Write();
  weights_mc_hlt50->Write();
  h_mc_phot_hlt75->Write();
  //h_mc_ele_hlt75->Write();
  weights_mc_hlt75->Write();
  h_mc_phot_hlt90->Write();
  //h_mc_ele_hlt90->Write();
  weights_mc_hlt90->Write();
  h_mc_phot_hlt135->Write();
  //h_mc_ele_hlt135->Write();
  weights_mc_hlt135->Write();
  h_mc_phot_hlt150->Write();
  //h_mc_ele_hlt150->Write();
  weights_mc_hlt150->Write();

  h_data_phot_hlt30->Write();
  h_data_ele_hlt30->Write();
  weights_data_hlt30->Write();
  h_data_phot_hlt50->Write();
  //h_data_ele_hlt50->Write();
  weights_data_hlt50->Write();
  h_data_phot_hlt75->Write();
  //h_data_ele_hlt75->Write();
  weights_data_hlt75->Write();
  h_data_phot_hlt90->Write();
  //h_data_ele_hlt90->Write();
  weights_data_hlt90->Write();
  h_data_phot_hlt135->Write();
  //h_data_ele_hlt135->Write();
  weights_data_hlt135->Write();
  h_data_phot_hlt150->Write();
  //h_data_ele_hlt150->Write();
  weights_data_hlt150->Write();

  outputFile->Close();

}


