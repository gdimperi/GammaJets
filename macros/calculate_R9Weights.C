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

void calculate_R9Weights(){

  //TChain data_phot("finalTree");   
  TChain mc_phot_hlt30("finalTree");
  TChain mc_phot_hlt50("finalTree");
  TChain mc_phot_hlt75("finalTree");
  TChain mc_phot_hlt90("finalTree");
  TChain mc_phot_hlt135("finalTree");
  TChain mc_phot_hlt150("finalTree");

  TChain mc_ele_hlt30("myTaPDir/myTree");
  TChain mc_ele_hlt50("myTaPDir/myTree");
  TChain mc_ele_hlt75("myTaPDir/myTree");  
  TChain mc_ele_hlt90("myTaPDir/myTree");
  TChain mc_ele_hlt135("myTaPDir/myTree");
  TChain mc_ele_hlt150("myTaPDir/myTree");


  // data_ele_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012A_tagTight_mcMatch1_HLT30.root");
//   data_ele_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012B_tagTight_mcMatch1_HLT30.root");
//   data_ele_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012C_tagTight_mcMatch1_HLT30.root");  
//   data_ele_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012D_tagTight_mcMatch1_HLT30.root");

//   data_ele_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012A_tagTight_mcMatch1_HLT50.root");
//   data_ele_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012B_tagTight_mcMatch1_HLT50.root");
//   data_ele_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012C_tagTight_mcMatch1_HLT50.root");  
//   data_ele_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012D_tagTight_mcMatch1_HLT50.root");

  

//   data_ele_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012A_tagTight_mcMatch1_HLT75.root");
//   data_ele_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012B_tagTight_mcMatch1_HLT75.root");
//   data_ele_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012C_tagTight_mcMatch1_HLT75.root");  
//   data_ele_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012D_tagTight_mcMatch1_HLT75.root");
  

//   data_ele_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012A_tagTight_mcMatch1_HLT90.root");
//   data_ele_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012B_tagTight_mcMatch1_HLT90.root");
//   data_ele_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012C_tagTight_mcMatch1_HLT90.root");  
//   data_ele_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012D_tagTight_mcMatch1_HLT90.root");
  

//   data_ele_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012A_tagTight_mcMatch1_HLT135.root");
//   data_ele_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012B_tagTight_mcMatch1_HLT135.root");
//   data_ele_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012C_tagTight_mcMatch1_HLT135.root");  
//   data_ele_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012D_tagTight_mcMatch1_HLT135.root");
  

//   data_ele_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012A_tagTight_mcMatch1_HLT150.root");
//   data_ele_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012B_tagTight_mcMatch1_HLT150.root");
//   data_ele_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012C_tagTight_mcMatch1_HLT150.root");  
//   data_ele_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012D_tagTight_mcMatch1_HLT150.root");
  
  mc_ele_hlt30.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT30.root");
  mc_ele_hlt50.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT50.root");
  mc_ele_hlt75.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT75.root");
  mc_ele_hlt90.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT90.root");
  mc_ele_hlt135.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT135.root");
  mc_ele_hlt150.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT150.root");
  
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

  cout << "added files to chain" << endl;


  TFile* outputFile = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/R9Weights/R9Weights.root", "recreate");

  outputFile->cd();

  //TH1F* h_target = new TH1F("h_target", "", 100, -3., 3.);
  TH1F* h_mc_phot_lowEB_hlt30   	= new TH1F("h_mc_phot_lowEB_hlt30", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEB_hlt50   	= new TH1F("h_mc_phot_lowEB_hlt50", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEB_hlt75   	= new TH1F("h_mc_phot_lowEB_hlt75", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEB_hlt90   	= new TH1F("h_mc_phot_lowEB_hlt90", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEB_hlt135  	= new TH1F("h_mc_phot_lowEB_hlt135", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEB_hlt150  	= new TH1F("h_mc_phot_lowEB_hlt150", "", 240, 0., 1.);
					
  TH1F* h_mc_phot_highEB_hlt30   	= new TH1F("h_mc_phot_highEB_hlt30", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEB_hlt50   	= new TH1F("h_mc_phot_highEB_hlt50", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEB_hlt75   	= new TH1F("h_mc_phot_highEB_hlt75", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEB_hlt90   	= new TH1F("h_mc_phot_highEB_hlt90", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEB_hlt135  	= new TH1F("h_mc_phot_highEB_hlt135", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEB_hlt150  	= new TH1F("h_mc_phot_highEB_hlt150", "", 240, 0., 1.);			    	  
					
  TH1F* h_mc_ele_lowEB_hlt30  	= new TH1F("h_mc_ele_lowEB_hlt30", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEB_hlt50  	= new TH1F("h_mc_ele_lowEB_hlt50", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEB_hlt75  	= new TH1F("h_mc_ele_lowEB_hlt75", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEB_hlt90  	= new TH1F("h_mc_ele_lowEB_hlt90", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEB_hlt135 	= new TH1F("h_mc_ele_lowEB_hlt135", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEB_hlt150 	= new TH1F("h_mc_ele_lowEB_hlt150", "", 240, 0., 1.);  
				    
  TH1F* h_mc_ele_highEB_hlt30  	= new TH1F("h_mc_ele_highEB_hlt30", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEB_hlt50  	= new TH1F("h_mc_ele_highEB_hlt50", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEB_hlt75  	= new TH1F("h_mc_ele_highEB_hlt75", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEB_hlt90  	= new TH1F("h_mc_ele_highEB_hlt90", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEB_hlt135 	= new TH1F("h_mc_ele_highEB_hlt135", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEB_hlt150 	= new TH1F("h_mc_ele_highEB_hlt150", "", 240, 0., 1.);  

  TH1F* h_mc_phot_lowEE_hlt30   	= new TH1F("h_mc_phot_lowEE_hlt30", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEE_hlt50   	= new TH1F("h_mc_phot_lowEE_hlt50", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEE_hlt75   	= new TH1F("h_mc_phot_lowEE_hlt75", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEE_hlt90   	= new TH1F("h_mc_phot_lowEE_hlt90", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEE_hlt135  	= new TH1F("h_mc_phot_lowEE_hlt135", "", 240, 0., 1.);
  TH1F* h_mc_phot_lowEE_hlt150  	= new TH1F("h_mc_phot_lowEE_hlt150", "", 240, 0., 1.);
				
  TH1F* h_mc_phot_highEE_hlt30   	= new TH1F("h_mc_phot_highEE_hlt30", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEE_hlt50   	= new TH1F("h_mc_phot_highEE_hlt50", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEE_hlt75   	= new TH1F("h_mc_phot_highEE_hlt75", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEE_hlt90   	= new TH1F("h_mc_phot_highEE_hlt90", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEE_hlt135  	= new TH1F("h_mc_phot_highEE_hlt135", "", 240, 0., 1.);
  TH1F* h_mc_phot_highEE_hlt150  	= new TH1F("h_mc_phot_highEE_hlt150", "", 240, 0., 1.);			    	  
				
  TH1F* h_mc_ele_lowEE_hlt30  	= new TH1F("h_mc_ele_lowEE_hlt30", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEE_hlt50  	= new TH1F("h_mc_ele_lowEE_hlt50", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEE_hlt75  	= new TH1F("h_mc_ele_lowEE_hlt75", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEE_hlt90  	= new TH1F("h_mc_ele_lowEE_hlt90", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEE_hlt135 	= new TH1F("h_mc_ele_lowEE_hlt135", "", 240, 0., 1.);
  TH1F* h_mc_ele_lowEE_hlt150 	= new TH1F("h_mc_ele_lowEE_hlt150", "", 240, 0., 1.);
				
  TH1F* h_mc_ele_highEE_hlt30  	= new TH1F("h_mc_ele_highEE_hlt30", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEE_hlt50  	= new TH1F("h_mc_ele_highEE_hlt50", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEE_hlt75  	= new TH1F("h_mc_ele_highEE_hlt75", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEE_hlt90  	= new TH1F("h_mc_ele_highEE_hlt90", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEE_hlt135 	= new TH1F("h_mc_ele_highEE_hlt135", "", 240, 0., 1.);
  TH1F* h_mc_ele_highEE_hlt150 	= new TH1F("h_mc_ele_highEE_hlt150", "", 240, 0., 1.);


  h_mc_phot_lowEB_hlt30    	->Sumw2();  
  h_mc_phot_lowEB_hlt50    	->Sumw2();  
  h_mc_phot_lowEB_hlt75    	->Sumw2();  
  h_mc_phot_lowEB_hlt90    	->Sumw2();  
  h_mc_phot_lowEB_hlt135  	->Sumw2();  
  h_mc_phot_lowEB_hlt150  	->Sumw2();  
  									    
  h_mc_phot_highEB_hlt30  	->Sumw2();  
  h_mc_phot_highEB_hlt50  	->Sumw2();  
  h_mc_phot_highEB_hlt75  	->Sumw2();  
  h_mc_phot_highEB_hlt90  	->Sumw2();  
  h_mc_phot_highEB_hlt135 	->Sumw2();  
  h_mc_phot_highEB_hlt150       ->Sumw2();  
  									    
  h_mc_ele_lowEB_hlt30  	 ->Sumw2(); 
  h_mc_ele_lowEB_hlt50  	 ->Sumw2(); 
  h_mc_ele_lowEB_hlt75  	 ->Sumw2(); 
  h_mc_ele_lowEB_hlt90  	 ->Sumw2(); 
  h_mc_ele_lowEB_hlt135 	->Sumw2();  
  h_mc_ele_lowEB_hlt150 	->Sumw2();  
  									    
  h_mc_ele_highEB_hlt30  	->Sumw2();   
  h_mc_ele_highEB_hlt50  	->Sumw2();   
  h_mc_ele_highEB_hlt75  	->Sumw2();   
  h_mc_ele_highEB_hlt90  	->Sumw2();   
  h_mc_ele_highEB_hlt135 	->Sumw2();   
  h_mc_ele_highEB_hlt150 	->Sumw2();   
  
  h_mc_phot_lowEE_hlt30   ->Sumw2();  
  h_mc_phot_lowEE_hlt50   ->Sumw2();  
  h_mc_phot_lowEE_hlt75   ->Sumw2();  
  h_mc_phot_lowEE_hlt90   ->Sumw2();  
  h_mc_phot_lowEE_hlt135  ->Sumw2();  
  h_mc_phot_lowEE_hlt150  ->Sumw2();  
  								    
  h_mc_phot_highEE_hlt30  ->Sumw2();  
  h_mc_phot_highEE_hlt50  ->Sumw2();  
  h_mc_phot_highEE_hlt75  ->Sumw2();  
  h_mc_phot_highEE_hlt90  ->Sumw2();  
  h_mc_phot_highEE_hlt135 ->Sumw2();  
  h_mc_phot_highEE_hlt150 ->Sumw2();  
  								    
  h_mc_ele_lowEE_hlt30  	 ->Sumw2(); 
  h_mc_ele_lowEE_hlt50  	 ->Sumw2(); 
  h_mc_ele_lowEE_hlt75  	 ->Sumw2(); 
  h_mc_ele_lowEE_hlt90  	 ->Sumw2(); 
  h_mc_ele_lowEE_hlt135 	->Sumw2();  
  h_mc_ele_lowEE_hlt150 	->Sumw2();  
  								    
  h_mc_ele_highEE_hlt30  	->Sumw2();   
  h_mc_ele_highEE_hlt50  	->Sumw2();   
  h_mc_ele_highEE_hlt75  	->Sumw2();   
  h_mc_ele_highEE_hlt90  	->Sumw2();   
  h_mc_ele_highEE_hlt135 	->Sumw2();   
  h_mc_ele_highEE_hlt150 	->Sumw2();   


  mc_phot_hlt30.Project( "h_mc_phot_lowEB_hlt30", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)<1.)*weight");
  mc_phot_hlt50.Project( "h_mc_phot_lowEB_hlt50", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)<1.)*weight");
  mc_phot_hlt75.Project( "h_mc_phot_lowEB_hlt75", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)<1.)*weight");
  mc_phot_hlt90.Project( "h_mc_phot_lowEB_hlt90", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)<1.)*weight");
  mc_phot_hlt135.Project("h_mc_phot_lowEB_hlt135", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)<1.)*weight");
  mc_phot_hlt150.Project("h_mc_phot_lowEB_hlt150", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)<1.)*weight");

  mc_phot_hlt30.Project( "h_mc_phot_highEB_hlt30", "r9Phot", "(isIsolatedGenPhot  && TMath::Abs(etaPhot)>1. && TMath::Abs(etaPhot)<1.4442)*weight");
  mc_phot_hlt50.Project( "h_mc_phot_highEB_hlt50", "r9Phot", "(isIsolatedGenPhot  && TMath::Abs(etaPhot)>1. && TMath::Abs(etaPhot)<1.4442)*weight");
  mc_phot_hlt75.Project( "h_mc_phot_highEB_hlt75", "r9Phot", "(isIsolatedGenPhot  && TMath::Abs(etaPhot)>1. && TMath::Abs(etaPhot)<1.4442)*weight");
  mc_phot_hlt90.Project( "h_mc_phot_highEB_hlt90", "r9Phot", "(isIsolatedGenPhot  && TMath::Abs(etaPhot)>1. && TMath::Abs(etaPhot)<1.4442)*weight");
  mc_phot_hlt135.Project("h_mc_phot_highEB_hlt135", "r9Phot", "(isIsolatedGenPhot  && TMath::Abs(etaPhot)>1. && TMath::Abs(etaPhot)<1.4442)*weight");
  mc_phot_hlt150.Project("h_mc_phot_highEB_hlt150", "r9Phot", "(isIsolatedGenPhot  && TMath::Abs(etaPhot)>1. && TMath::Abs(etaPhot)<1.4442)*weight");

  mc_phot_hlt30.Project( "h_mc_phot_lowEE_hlt30", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>1.566 && TMath::Abs(etaPhot)<2.)*weight");
  mc_phot_hlt50.Project( "h_mc_phot_lowEE_hlt50", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>1.566 && TMath::Abs(etaPhot)<2.)*weight");
  mc_phot_hlt75.Project( "h_mc_phot_lowEE_hlt75", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>1.566 && TMath::Abs(etaPhot)<2.)*weight");
  mc_phot_hlt90.Project( "h_mc_phot_lowEE_hlt90", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>1.566 && TMath::Abs(etaPhot)<2.)*weight");
  mc_phot_hlt135.Project("h_mc_phot_lowEE_hlt135", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>1.566 && TMath::Abs(etaPhot)<2.)*weight");
  mc_phot_hlt150.Project("h_mc_phot_lowEE_hlt150", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>1.566 && TMath::Abs(etaPhot)<2.)*weight");

  mc_phot_hlt30.Project( "h_mc_phot_highEE_hlt30", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>2. && TMath::Abs(etaPhot)<2.5)*weight");
  mc_phot_hlt50.Project( "h_mc_phot_highEE_hlt50", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>2. && TMath::Abs(etaPhot)<2.5)*weight");
  mc_phot_hlt75.Project( "h_mc_phot_highEE_hlt75", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>2. && TMath::Abs(etaPhot)<2.5)*weight");
  mc_phot_hlt90.Project( "h_mc_phot_highEE_hlt90", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>2. && TMath::Abs(etaPhot)<2.5)*weight");
  mc_phot_hlt135.Project("h_mc_phot_highEE_hlt135", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>2. && TMath::Abs(etaPhot)<2.5)*weight");
  mc_phot_hlt150.Project("h_mc_phot_highEE_hlt150", "r9Phot", "(isIsolatedGenPhot && TMath::Abs(etaPhot)>2. && TMath::Abs(etaPhot)<2.5)*weight");

  mc_ele_hlt30.Project( "h_mc_ele_lowEB_hlt30", "probe_r9","(TMath::Abs(probe_eta)<1.)*rhoWeight30*  puW30 *etaWeight");
  mc_ele_hlt50.Project( "h_mc_ele_lowEB_hlt50", "probe_r9","(TMath::Abs(probe_eta)<1.)*rhoWeight50*  puW50 *etaWeight");
  mc_ele_hlt75.Project( "h_mc_ele_lowEB_hlt75", "probe_r9","(TMath::Abs(probe_eta)<1.)*rhoWeight75*  puW75 *etaWeight");
  mc_ele_hlt90.Project( "h_mc_ele_lowEB_hlt90", "probe_r9","(TMath::Abs(probe_eta)<1.)*rhoWeight90*  puW90 *etaWeight");
  mc_ele_hlt135.Project("h_mc_ele_lowEB_hlt135", "probe_r9","(TMath::Abs(probe_eta)<1.)*rhoWeight135*puW135*etaWeight");
  mc_ele_hlt150.Project("h_mc_ele_lowEB_hlt150", "probe_r9","(TMath::Abs(probe_eta)<1.)*rhoWeight150*puW150*etaWeight");
  
  mc_ele_hlt30.Project( "h_mc_ele_highEB_hlt30", "probe_r9", "(TMath::Abs(probe_eta)>1. && TMath::Abs(probe_eta)<1.4442)*rhoWeight30*  puW30 *etaWeight");
  mc_ele_hlt50.Project( "h_mc_ele_highEB_hlt50", "probe_r9", "(TMath::Abs(probe_eta)>1. && TMath::Abs(probe_eta)<1.4442)*rhoWeight50*  puW50 *etaWeight");
  mc_ele_hlt75.Project( "h_mc_ele_highEB_hlt75", "probe_r9", "(TMath::Abs(probe_eta)>1. && TMath::Abs(probe_eta)<1.4442)*rhoWeight75*  puW75 *etaWeight");
  mc_ele_hlt90.Project( "h_mc_ele_highEB_hlt90", "probe_r9", "(TMath::Abs(probe_eta)>1. && TMath::Abs(probe_eta)<1.4442)*rhoWeight90*  puW90 *etaWeight");
  mc_ele_hlt135.Project("h_mc_ele_highEB_hlt135", "probe_r9"," (TMath::Abs(probe_eta)>1. && TMath::Abs(probe_eta)<1.4442)*rhoWeight135*puW135*etaWeight");
  mc_ele_hlt150.Project("h_mc_ele_highEB_hlt150", "probe_r9"," (TMath::Abs(probe_eta)>1. && TMath::Abs(probe_eta)<1.4442)*rhoWeight150*puW150*etaWeight");

  mc_ele_hlt30.Project( "h_mc_ele_lowEE_hlt30", "probe_r9","(TMath::Abs(probe_eta)>1.566 && TMath::Abs(probe_eta)<2.)*rhoWeight30*puW30   *etaWeight");
  mc_ele_hlt50.Project( "h_mc_ele_lowEE_hlt50", "probe_r9","(TMath::Abs(probe_eta)>1.566 && TMath::Abs(probe_eta)<2.)*rhoWeight50*puW50   *etaWeight");
  mc_ele_hlt75.Project( "h_mc_ele_lowEE_hlt75", "probe_r9","(TMath::Abs(probe_eta)>1.566 && TMath::Abs(probe_eta)<2.)*rhoWeight75*puW75   *etaWeight");
  mc_ele_hlt90.Project( "h_mc_ele_lowEE_hlt90", "probe_r9","(TMath::Abs(probe_eta)>1.566 && TMath::Abs(probe_eta)<2.)*rhoWeight90*puW90   *etaWeight");
  mc_ele_hlt135.Project("h_mc_ele_lowEE_hlt135", "probe_r9","(TMath::Abs(probe_eta)>1.566 && TMath::Abs(probe_eta)<2.)*rhoWeight135*puW135*etaWeight");
  mc_ele_hlt150.Project("h_mc_ele_lowEE_hlt150", "probe_r9","(TMath::Abs(probe_eta)>1.566 && TMath::Abs(probe_eta)<2.)*rhoWeight150*puW150*etaWeight");

  mc_ele_hlt30.Project( "h_mc_ele_highEE_hlt30", "probe_r9","(TMath::Abs(probe_eta)>2. && TMath::Abs(probe_eta)<2.5)*rhoWeight30*puW30   *etaWeight");
  mc_ele_hlt50.Project( "h_mc_ele_highEE_hlt50", "probe_r9","(TMath::Abs(probe_eta)>2. && TMath::Abs(probe_eta)<2.5)*rhoWeight50*puW50   *etaWeight");
  mc_ele_hlt75.Project( "h_mc_ele_highEE_hlt75", "probe_r9","(TMath::Abs(probe_eta)>2. && TMath::Abs(probe_eta)<2.5)*rhoWeight75*puW75   *etaWeight");
  mc_ele_hlt90.Project( "h_mc_ele_highEE_hlt90", "probe_r9","(TMath::Abs(probe_eta)>2. && TMath::Abs(probe_eta)<2.5)*rhoWeight90*puW90   *etaWeight");
  mc_ele_hlt135.Project("h_mc_ele_highEE_hlt135", "probe_r9","(TMath::Abs(probe_eta)>2. && TMath::Abs(probe_eta)<2.5)*rhoWeight135*puW135*etaWeight");
  mc_ele_hlt150.Project("h_mc_ele_highEE_hlt150", "probe_r9","(TMath::Abs(probe_eta)>2. && TMath::Abs(probe_eta)<2.5)*rhoWeight150*puW150*etaWeight");

 
  cout << "done with projection" << endl;
  //normalization
  float integral=-1;

  //mc
  integral=h_mc_phot_lowEB_hlt30->Integral();
  h_mc_phot_lowEB_hlt30->Scale(1./integral);
  integral=h_mc_phot_lowEE_hlt30->Integral();
  h_mc_phot_lowEE_hlt30->Scale(1./integral);

  integral=h_mc_phot_lowEB_hlt50->Integral();
  h_mc_phot_lowEB_hlt50->Scale(1./integral);
  integral=h_mc_phot_lowEE_hlt50->Integral();
  h_mc_phot_lowEE_hlt50->Scale(1./integral);

  integral=h_mc_phot_lowEB_hlt75->Integral();
  h_mc_phot_lowEB_hlt75->Scale(1./integral);
  integral=h_mc_phot_lowEE_hlt75->Integral();
  h_mc_phot_lowEE_hlt75->Scale(1./integral);

  integral=h_mc_phot_lowEB_hlt90->Integral();
  h_mc_phot_lowEB_hlt90->Scale(1./integral);
  integral=h_mc_phot_lowEE_hlt90->Integral();
  h_mc_phot_lowEE_hlt90->Scale(1./integral);

  integral=h_mc_phot_lowEB_hlt135->Integral();
  h_mc_phot_lowEB_hlt135->Scale(1./integral);
  integral=h_mc_phot_lowEE_hlt135->Integral();
  h_mc_phot_lowEE_hlt135->Scale(1./integral);

  integral=h_mc_phot_lowEB_hlt150->Integral();
  h_mc_phot_lowEB_hlt150->Scale(1./integral);
  integral=h_mc_phot_lowEE_hlt150->Integral();
  h_mc_phot_lowEE_hlt150->Scale(1./integral);

  integral=h_mc_phot_highEB_hlt30->Integral();
  h_mc_phot_highEB_hlt30->Scale(1./integral);
  integral=h_mc_phot_highEE_hlt30->Integral();
  h_mc_phot_highEE_hlt30->Scale(1./integral);

  integral=h_mc_phot_highEB_hlt50->Integral();
  h_mc_phot_highEB_hlt50->Scale(1./integral);
  integral=h_mc_phot_highEE_hlt50->Integral();
  h_mc_phot_highEE_hlt50->Scale(1./integral);

  integral=h_mc_phot_highEB_hlt75->Integral();
  h_mc_phot_highEB_hlt75->Scale(1./integral);
  integral=h_mc_phot_highEE_hlt75->Integral();
  h_mc_phot_highEE_hlt75->Scale(1./integral);

  integral=h_mc_phot_highEB_hlt90->Integral();
  h_mc_phot_highEB_hlt90->Scale(1./integral);
  integral=h_mc_phot_highEE_hlt90->Integral();
  h_mc_phot_highEE_hlt90->Scale(1./integral);

  integral=h_mc_phot_highEB_hlt135->Integral();
  h_mc_phot_highEB_hlt135->Scale(1./integral);
  integral=h_mc_phot_highEE_hlt135->Integral();
  h_mc_phot_highEE_hlt135->Scale(1./integral);

  integral=h_mc_phot_highEB_hlt150->Integral();
  h_mc_phot_highEB_hlt150->Scale(1./integral);
  integral=h_mc_phot_highEE_hlt150->Integral();
  h_mc_phot_highEE_hlt150->Scale(1./integral);

  //mc ele
  integral=h_mc_ele_lowEB_hlt30->Integral();
  h_mc_ele_lowEB_hlt30->Scale(1./integral);
  integral=h_mc_ele_lowEE_hlt30->Integral();
  h_mc_ele_lowEE_hlt30->Scale(1./integral);

  integral=h_mc_ele_lowEB_hlt50->Integral();
  h_mc_ele_lowEB_hlt50->Scale(1./integral);
  integral=h_mc_ele_lowEE_hlt50->Integral();
  h_mc_ele_lowEE_hlt50->Scale(1./integral);

  integral=h_mc_ele_lowEB_hlt75->Integral();
  h_mc_ele_lowEB_hlt75->Scale(1./integral);
  integral=h_mc_ele_lowEE_hlt75->Integral();
  h_mc_ele_lowEE_hlt75->Scale(1./integral);

  integral=h_mc_ele_lowEB_hlt90->Integral();
  h_mc_ele_lowEB_hlt90->Scale(1./integral);
  integral=h_mc_ele_lowEE_hlt90->Integral();
  h_mc_ele_lowEE_hlt90->Scale(1./integral);

  integral=h_mc_ele_lowEB_hlt135->Integral();
  h_mc_ele_lowEB_hlt135->Scale(1./integral);
  integral=h_mc_ele_lowEE_hlt135->Integral();
  h_mc_ele_lowEE_hlt135->Scale(1./integral);

  integral=h_mc_ele_lowEB_hlt150->Integral();
  h_mc_ele_lowEB_hlt150->Scale(1./integral);
  integral=h_mc_ele_lowEE_hlt150->Integral();
  h_mc_ele_lowEE_hlt150->Scale(1./integral);

  integral=h_mc_ele_highEB_hlt30->Integral();
  h_mc_ele_highEB_hlt30->Scale(1./integral);
  integral=h_mc_ele_highEE_hlt30->Integral();
  h_mc_ele_highEE_hlt30->Scale(1./integral);

  integral=h_mc_ele_highEB_hlt50->Integral();
  h_mc_ele_highEB_hlt50->Scale(1./integral);
  integral=h_mc_ele_highEE_hlt50->Integral();
  h_mc_ele_highEE_hlt50->Scale(1./integral);

  integral=h_mc_ele_highEB_hlt75->Integral();
  h_mc_ele_highEB_hlt75->Scale(1./integral);
  integral=h_mc_ele_highEE_hlt75->Integral();
  h_mc_ele_highEE_hlt75->Scale(1./integral);

  integral=h_mc_ele_highEB_hlt90->Integral();
  h_mc_ele_highEB_hlt90->Scale(1./integral);
  integral=h_mc_ele_highEE_hlt90->Integral();
  h_mc_ele_highEE_hlt90->Scale(1./integral);

  integral=h_mc_ele_highEB_hlt135->Integral();
  h_mc_ele_highEB_hlt135->Scale(1./integral);
  integral=h_mc_ele_highEE_hlt135->Integral();
  h_mc_ele_highEE_hlt135->Scale(1./integral);

  integral=h_mc_ele_highEB_hlt150->Integral();
  h_mc_ele_highEB_hlt150->Scale(1./integral);
  integral=h_mc_ele_highEE_hlt150->Integral();
  h_mc_ele_highEE_hlt150->Scale(1./integral);

  cout << "done with scaling" << endl;

////////////////////////////////////////////////////////////////////////////////////

//           | |          | |     | |                    (_)     | |   | |      
//   ___ __ _| | ___ _   _| | __ _| |_ ___  __      _____ _  __ _| |__ | |_ ___ 
//  / __/ _` | |/ __| | | | |/ _` | __/ _ \ \ \ /\ / / _ \ |/ _` | '_ \| __/ __|
// | (_| (_| | | (__| |_| | | (_| | ||  __/  \ V  V /  __/ | (_| | | | | |_\__ \
//  \___\__,_|_|\___|\__,_|_|\__,_|\__\___|   \_/\_/ \___|_|\__, |_| |_|\__|___/
//                                                           __/ |              
//                                                          |___/               

//////////////////////////////////////////////////////////////////////////////////

// . . .,---.,---.,   .|,   .,---.
// | | ||---||---'|\  |||\  ||  _.
// | | ||   ||  \ | \ ||| \ ||   |
// `-'-'`   '`   ``  `'``  `'`---'
// weights are calculated always with respect to Zee in the high stat region 40 < pt < 65


  TH1F* weights_lowEB_hlt30 = (TH1F*)h_mc_phot_lowEB_hlt30->Clone("weights_lowEB_hlt30");
  weights_lowEB_hlt30->Divide(h_mc_ele_lowEB_hlt30);
  TH1F* weights_lowEB_hlt50 = (TH1F*)h_mc_phot_lowEB_hlt50->Clone("weights_lowEB_hlt50");
  weights_lowEB_hlt50->Divide(h_mc_ele_lowEB_hlt30);
  TH1F* weights_lowEB_hlt75 = (TH1F*)h_mc_phot_lowEB_hlt75->Clone("weights_lowEB_hlt75");
  weights_lowEB_hlt75->Divide(h_mc_ele_lowEB_hlt30);
  TH1F* weights_lowEB_hlt90 = (TH1F*)h_mc_phot_lowEB_hlt90->Clone("weights_lowEB_hlt90");
  weights_lowEB_hlt90->Divide(h_mc_ele_lowEB_hlt30);
  TH1F* weights_lowEB_hlt135 = (TH1F*)h_mc_phot_lowEB_hlt135->Clone("weights_lowEB_hlt135");
  weights_lowEB_hlt135->Divide(h_mc_ele_lowEB_hlt30);
  TH1F* weights_lowEB_hlt150 = (TH1F*)h_mc_phot_lowEB_hlt150->Clone("weights_lowEB_hlt150");
  weights_lowEB_hlt150->Divide(h_mc_ele_lowEB_hlt30);

  TH1F* weights_highEB_hlt30 = (TH1F*)h_mc_phot_highEB_hlt30->Clone("weights_highEB_hlt30");
  weights_highEB_hlt30->Divide(h_mc_ele_highEB_hlt30);
  TH1F* weights_highEB_hlt50 = (TH1F*)h_mc_phot_highEB_hlt50->Clone("weights_highEB_hlt50");
  weights_highEB_hlt50->Divide(h_mc_ele_highEB_hlt30);
  TH1F* weights_highEB_hlt75 = (TH1F*)h_mc_phot_highEB_hlt75->Clone("weights_highEB_hlt75");
  weights_highEB_hlt75->Divide(h_mc_ele_highEB_hlt30);
  TH1F* weights_highEB_hlt90 = (TH1F*)h_mc_phot_highEB_hlt90->Clone("weights_highEB_hlt90");
  weights_highEB_hlt90->Divide(h_mc_ele_highEB_hlt30);
  TH1F* weights_highEB_hlt135 = (TH1F*)h_mc_phot_highEB_hlt135->Clone("weights_highEB_hlt135");
  weights_highEB_hlt135->Divide(h_mc_ele_highEB_hlt30);
  TH1F* weights_highEB_hlt150 = (TH1F*)h_mc_phot_highEB_hlt150->Clone("weights_highEB_hlt150");
  weights_highEB_hlt150->Divide(h_mc_ele_highEB_hlt30);  			    

  TH1F* weights_lowEE_hlt30 = (TH1F*)h_mc_phot_lowEE_hlt30->Clone("weights_lowEE_hlt30");
  weights_lowEE_hlt30->Divide(h_mc_ele_lowEE_hlt30);
  TH1F* weights_lowEE_hlt50 = (TH1F*)h_mc_phot_lowEE_hlt50->Clone("weights_lowEE_hlt50");
  weights_lowEE_hlt50->Divide(h_mc_ele_lowEE_hlt30);
  TH1F* weights_lowEE_hlt75 = (TH1F*)h_mc_phot_lowEE_hlt75->Clone("weights_lowEE_hlt75");
  weights_lowEE_hlt75->Divide(h_mc_ele_lowEE_hlt30);
  TH1F* weights_lowEE_hlt90 = (TH1F*)h_mc_phot_lowEE_hlt90->Clone("weights_lowEE_hlt90");
  weights_lowEE_hlt90->Divide(h_mc_ele_lowEE_hlt30);
  TH1F* weights_lowEE_hlt135 = (TH1F*)h_mc_phot_lowEE_hlt135->Clone("weights_lowEE_hlt135");
  weights_lowEE_hlt135->Divide(h_mc_ele_lowEE_hlt30);
  TH1F* weights_lowEE_hlt150 = (TH1F*)h_mc_phot_lowEE_hlt150->Clone("weights_lowEE_hlt150");
  weights_lowEE_hlt150->Divide(h_mc_ele_lowEE_hlt30);

  TH1F* weights_highEE_hlt30 = (TH1F*)h_mc_phot_highEE_hlt30->Clone("weights_highEE_hlt30");
  weights_highEE_hlt30->Divide(h_mc_ele_highEE_hlt30);
  TH1F* weights_highEE_hlt50 = (TH1F*)h_mc_phot_highEE_hlt50->Clone("weights_highEE_hlt50");
  weights_highEE_hlt50->Divide(h_mc_ele_highEE_hlt30);
  TH1F* weights_highEE_hlt75 = (TH1F*)h_mc_phot_highEE_hlt75->Clone("weights_highEE_hlt75");
  weights_highEE_hlt75->Divide(h_mc_ele_highEE_hlt30);
  TH1F* weights_highEE_hlt90 = (TH1F*)h_mc_phot_highEE_hlt90->Clone("weights_highEE_hlt90");
  weights_highEE_hlt90->Divide(h_mc_ele_highEE_hlt30);
  TH1F* weights_highEE_hlt135 = (TH1F*)h_mc_phot_highEE_hlt135->Clone("weights_highEE_hlt135");
  weights_highEE_hlt135->Divide(h_mc_ele_highEE_hlt30);
  TH1F* weights_highEE_hlt150 = (TH1F*)h_mc_phot_highEE_hlt150->Clone("weights_highEE_hlt150");
  weights_highEE_hlt150->Divide(h_mc_ele_highEE_hlt30);


  //h_target -> Write();
  h_mc_phot_lowEB_hlt30  	->Write();
  h_mc_phot_lowEB_hlt50  	->Write();
  h_mc_phot_lowEB_hlt75  	->Write();
  h_mc_phot_lowEB_hlt90  	->Write();
  h_mc_phot_lowEB_hlt135 	->Write();
  h_mc_phot_lowEB_hlt150 	->Write();
  
  h_mc_ele_lowEB_hlt30 	->Write();
  h_mc_ele_lowEB_hlt50 	->Write();
  h_mc_ele_lowEB_hlt75 	->Write();
  h_mc_ele_lowEB_hlt90 	->Write();
  h_mc_ele_lowEB_hlt135	->Write();
  h_mc_ele_lowEB_hlt150  ->Write();
  
  h_mc_phot_highEB_hlt30  	->Write();
  h_mc_phot_highEB_hlt50  	->Write();
  h_mc_phot_highEB_hlt75  	->Write();
  h_mc_phot_highEB_hlt90  	->Write();
  h_mc_phot_highEB_hlt135 	->Write();
  h_mc_phot_highEB_hlt150 	->Write();
  
  h_mc_ele_highEB_hlt30 	->Write();
  h_mc_ele_highEB_hlt50 	->Write();
  h_mc_ele_highEB_hlt75 	->Write();
  h_mc_ele_highEB_hlt90 	->Write();
  h_mc_ele_highEB_hlt135	->Write();
  h_mc_ele_highEB_hlt150  ->Write();

  h_mc_phot_lowEE_hlt30  ->Write();
  h_mc_phot_lowEE_hlt50  ->Write();
  h_mc_phot_lowEE_hlt75  ->Write();
  h_mc_phot_lowEE_hlt90  ->Write();
  h_mc_phot_lowEE_hlt135 ->Write();
  h_mc_phot_lowEE_hlt150 ->Write();
  
  h_mc_ele_lowEE_hlt30 ->Write();
  h_mc_ele_lowEE_hlt50 ->Write();
  h_mc_ele_lowEE_hlt75 ->Write();
  h_mc_ele_lowEE_hlt90 ->Write();
  h_mc_ele_lowEE_hlt135->Write();
  h_mc_ele_lowEE_hlt150->Write();


  h_mc_phot_highEE_hlt30  ->Write();
  h_mc_phot_highEE_hlt50  ->Write();
  h_mc_phot_highEE_hlt75  ->Write();
  h_mc_phot_highEE_hlt90  ->Write();
  h_mc_phot_highEE_hlt135 ->Write();
  h_mc_phot_highEE_hlt150 ->Write();
  
  h_mc_ele_highEE_hlt30 ->Write();
  h_mc_ele_highEE_hlt50 ->Write();
  h_mc_ele_highEE_hlt75 ->Write();
  h_mc_ele_highEE_hlt90 ->Write();
  h_mc_ele_highEE_hlt135->Write();
  h_mc_ele_highEE_hlt150->Write();


  weights_lowEB_hlt30 ->Write();
  weights_lowEB_hlt50 ->Write();
  weights_lowEB_hlt75 ->Write();
  weights_lowEB_hlt90 ->Write();
  weights_lowEB_hlt135->Write();
  weights_lowEB_hlt150->Write();

  weights_highEB_hlt30 ->Write();
  weights_highEB_hlt50 ->Write();
  weights_highEB_hlt75 ->Write();
  weights_highEB_hlt90 ->Write();
  weights_highEB_hlt135->Write();
  weights_highEB_hlt150->Write();

  weights_lowEE_hlt30 ->Write();
  weights_lowEE_hlt50 ->Write();
  weights_lowEE_hlt75 ->Write();
  weights_lowEE_hlt90 ->Write();
  weights_lowEE_hlt135->Write();
  weights_lowEE_hlt150->Write();

  weights_highEE_hlt30 ->Write();
  weights_highEE_hlt50 ->Write();
  weights_highEE_hlt75 ->Write();
  weights_highEE_hlt90 ->Write();
  weights_highEE_hlt135->Write();
  weights_highEE_hlt150->Write();

  outputFile->Close();

}


