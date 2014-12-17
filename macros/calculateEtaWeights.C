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

void calculateEtaWeights(){

  //TChain data_phot("finalTree");   
  TChain mc_phot("finalTree");
  TChain mc_ele("myTaPDir/myTree");
  
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/Photon_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/SinglePhoton_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/Photon_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/SinglePhoton_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/Photon_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/SinglePhoton_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/Photon_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/SinglePhoton_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/Photon_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/SinglePhoton_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/Photon_*root");
//   data_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/SinglePhoton_*root");

  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/QCDEM_Pt*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-30to50_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-50to80_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-80to120_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-120to170_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT30/G_Pt-300to470_*root");

  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/QCDEM_Pt*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-30to50_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-50to80_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-80to120_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-120to170_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT50/G_Pt-300to470_*root");

  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/QCDEM_Pt*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-30to50_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-50to80_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-80to120_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-120to170_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT75/G_Pt-300to470_*root");

  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/QCDEM_Pt*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-30to50_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-50to80_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-80to120_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-120to170_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT90/G_Pt-300to470_*root");

  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/QCDEM_Pt*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-30to50_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-50to80_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-80to120_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-120to170_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT135/G_Pt-300to470_*root");

  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/QCDEM_Pt*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-30to50_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-50to80_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-80to120_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-120to170_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-170to300_*root");
  mc_phot.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/HLT150/G_Pt-300to470_*root");

  mc_ele.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT30.root");
  mc_ele.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT50.root");
  mc_ele.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT75.root");
  mc_ele.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT90.root");
  mc_ele.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT135.root");
  mc_ele.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT150.root");


//   mc_data.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012A_tagTight_mcMatch1_HLT30.root");
//   mc_data.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012B_tagTight_mcMatch1_HLT30.root");
//   mc_data.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012C_tagTight_mcMatch1_HLT30.root");
//   mc_data.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012D_tagTight_mcMatch1_HLT30.root");



  cout << "added files to chain" << endl;


  TFile* outputFile = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/etaWeights/etaWeights.root", "recreate");

  outputFile->cd();

  //TH1F* h_target = new TH1F("h_target", "", 120, -3., 3.);
  TH1F* h_mc_phot         = new TH1F("h_mc_phot", "", 120, -3., 3.);
  TH1F* h_mc_ele_EB_hlt30 = new TH1F("h_mc_ele_EB_hlt30", "", 120, -3., 3.);
  TH1F* h_mc_ele_EB_hlt50 = new TH1F("h_mc_ele_EB_hlt50", "", 120, -3., 3.);
  TH1F* h_mc_ele_EB_hlt75 = new TH1F("h_mc_ele_EB_hlt75", "", 120, -3., 3.);
  TH1F* h_mc_ele_EB_hlt90 = new TH1F("h_mc_ele_EB_hlt90", "", 120, -3., 3.);
  TH1F* h_mc_ele_EB_hlt135 = new TH1F("h_mc_ele_EB_hlt135", "", 120, -3., 3.);
  TH1F* h_mc_ele_EB_hlt150 = new TH1F("h_mc_ele_EB_hlt150", "", 120, -3., 3.);
  TH1F* h_mc_ele_EE_hlt30 = new TH1F("h_mc_ele_EE_hlt30", "", 120, -3., 3.);
  TH1F* h_mc_ele_EE_hlt50 = new TH1F("h_mc_ele_EE_hlt50", "", 120, -3., 3.);
  TH1F* h_mc_ele_EE_hlt75 = new TH1F("h_mc_ele_EE_hlt75", "", 120, -3., 3.);
  TH1F* h_mc_ele_EE_hlt90 = new TH1F("h_mc_ele_EE_hlt90", "", 120, -3., 3.);
  TH1F* h_mc_ele_EE_hlt135 = new TH1F("h_mc_ele_EE_hlt135", "", 120, -3., 3.);
  TH1F* h_mc_ele_EE_hlt150 = new TH1F("h_mc_ele_EE_hlt150", "", 120, -3., 3.);

  h_mc_phot         ->Sumw2();
  h_mc_ele_EB_hlt30 ->Sumw2();
  h_mc_ele_EB_hlt50 ->Sumw2();
  h_mc_ele_EB_hlt75 ->Sumw2();
  h_mc_ele_EB_hlt90 ->Sumw2();
  h_mc_ele_EB_hlt135->Sumw2();
  h_mc_ele_EB_hlt150->Sumw2();
  h_mc_ele_EE_hlt30 ->Sumw2();
  h_mc_ele_EE_hlt50 ->Sumw2();
  h_mc_ele_EE_hlt75 ->Sumw2();
  h_mc_ele_EE_hlt90 ->Sumw2();
  h_mc_ele_EE_hlt135->Sumw2();
  h_mc_ele_EE_hlt150->Sumw2();

  //data_phot.Project("h_target", "etaPhot");
  mc_phot.Project("h_mc_phot", "etaPhot", "isIsolatedGenPhot*weight");

  mc_ele.Project("h_mc_ele_EB_hlt30", "probe_eta", "(probe_pt>40 && probe_pt<65 && TMath::Abs(probe_eta)<1.4442)*  rhoWeight30  " ); //* r9WeightEB_hlt30
  mc_ele.Project("h_mc_ele_EB_hlt50", "probe_eta", "(probe_pt>65 && probe_pt<90 && TMath::Abs(probe_eta)<1.4442)*  rhoWeight50  " ); //* r9WeightEB_hlt50
  mc_ele.Project("h_mc_ele_EB_hlt75", "probe_eta", "(probe_pt>90 && probe_pt<135 && TMath::Abs(probe_eta)<1.4442)*  rhoWeight75 "); // * r9WeightEB_hlt75
  mc_ele.Project("h_mc_ele_EB_hlt90", "probe_eta", "(probe_pt>135 && probe_pt<165 && TMath::Abs(probe_eta)<1.4442)* rhoWeight90 "); // * r9WeightEB_hlt90
  mc_ele.Project("h_mc_ele_EB_hlt135", "probe_eta", "(probe_pt>165 && probe_pt<180 && TMath::Abs(probe_eta)<1.4442)*rhoWeight135"); //*r9WeightEB_hlt135 
  mc_ele.Project("h_mc_ele_EB_hlt150", "probe_eta", "(probe_pt>180 && TMath::Abs(probe_eta)<1.4442)*rhoWeight150");                 //*r9WeightEB_hlt150              
  mc_ele.Project("h_mc_ele_EE_hlt30", "probe_eta", "(probe_pt>40 && probe_pt<65 && TMath::Abs(probe_eta)>1.566)*  rhoWeight30   "); //*r9WeightEE_hlt30 
  mc_ele.Project("h_mc_ele_EE_hlt50", "probe_eta", "(probe_pt>65 && probe_pt<90 && TMath::Abs(probe_eta)>1.566)*  rhoWeight50   "); //*r9WeightEE_hlt50
  mc_ele.Project("h_mc_ele_EE_hlt75", "probe_eta", "(probe_pt>90 && probe_pt<135 && TMath::Abs(probe_eta)>1.566)*  rhoWeight75 ");  //*r9WeightEE_hlt75
  mc_ele.Project("h_mc_ele_EE_hlt90", "probe_eta", "(probe_pt>135 && probe_pt<165 && TMath::Abs(probe_eta)>1.566)*  rhoWeight90");  //*r9WeightEE_hlt90
  mc_ele.Project("h_mc_ele_EE_hlt135", "probe_eta", "(probe_pt>165 && probe_pt<180 && TMath::Abs(probe_eta)>1.566)* rhoWeight135");//*r9WeightEE_hlt135
  mc_ele.Project("h_mc_ele_EE_hlt150", "probe_eta", "(probe_pt>180 && TMath::Abs(probe_eta)>1.566)* rhoWeight150");                //*r9WeightEE_hlt150



  TH1F* h_mc_ele = (TH1F*)h_mc_ele_EB_hlt30->Clone("h_mc_ele");
//   h_mc_ele->Add(h_mc_ele_EB_hlt50);
//   h_mc_ele->Add(h_mc_ele_EB_hlt75);
//   h_mc_ele->Add(h_mc_ele_EB_hlt90);
//   h_mc_ele->Add(h_mc_ele_EB_hlt135);
//   h_mc_ele->Add(h_mc_ele_EB_hlt150);
  h_mc_ele->Add(h_mc_ele_EE_hlt30);
//   h_mc_ele->Add(h_mc_ele_EE_hlt50);
//   h_mc_ele->Add(h_mc_ele_EE_hlt75);
//   h_mc_ele->Add(h_mc_ele_EE_hlt90);
//   h_mc_ele->Add(h_mc_ele_EE_hlt135);
//   h_mc_ele->Add(h_mc_ele_EE_hlt150);

  cout << "done with projection" << endl;

  //normalization
  float integral=-1;
  //integral=h_target->Integral();
  //h_target->Scale(1./integral);

  integral=h_mc_phot->Integral();
  h_mc_phot->Scale(1./integral);

  integral=h_mc_ele->Integral();
  h_mc_ele->Scale(1./integral);

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
// photon MC is correctly weigthed for cross section and matched to true gen photon


  TH1F* weights = (TH1F*)h_mc_phot->Clone("weights");
  weights->Divide(h_mc_ele);

  //h_target -> Write();
  h_mc_phot->Write();
  h_mc_ele->Write();
  weights->Write();

  outputFile->Close();

}


