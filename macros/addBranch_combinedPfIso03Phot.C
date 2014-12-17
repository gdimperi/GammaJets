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

void addBranch_combinedPfIso03Phot()
{
  TFile* f_data_ele[6];

  f_data_ele[0] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT30.root");
  f_data_ele[1] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT50.root");
  f_data_ele[2] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT75.root");
  f_data_ele[3] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT90.root");
  f_data_ele[4] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT135.root");
  f_data_ele[5] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT150.root");

  TFile* f_data_ele_new[6];
  f_data_ele_new[0] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer_toFit/DoubleElectron_Run2012All_tagTight_HLT30.root","recreate");
  f_data_ele_new[1] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer_toFit//DoubleElectron_Run2012All_tagTight_HLT50.root","recreate");
  f_data_ele_new[2] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer_toFit/DoubleElectron_Run2012All_tagTight_HLT75.root","recreate");
  f_data_ele_new[3] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer_toFit/DoubleElectron_Run2012All_tagTight_HLT90.root","recreate");
  f_data_ele_new[4] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer_toFit/DoubleElectron_Run2012All_tagTight_HLT135.root","recreate");
  f_data_ele_new[5] = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer_toFit/DoubleElectron_Run2012All_tagTight_HLT150.root","recreate");



  TTree* data_ele[6];
  TTree* data_ele_new[6];

  for (int i=0; i<6; i++){
    data_ele[i] = (TTree*)f_data_ele[i]->Get("myTaPDir/myTree");
    if(data_ele[i] == 0) std::cout << "WARNING: tree not found" << endl;   
    if(data_ele[i]->GetBranch("probe_combinedPfIso03")==0)  std::cout << "WARNING: probe_combinedPfIso03 branch not found" << endl;   
    if(data_ele[i]->GetBranch("probe_combinedPfIsoFPR03")==0)  std::cout << "WARNING: probe_combinedPfIsoFPR03 branch not found" << endl;   

//     data_ele_new[i] = (TTree*)data_ele[i]->Clone();
//     data_ele_new[i]->GetBranch("probe_combinedPfIso03")->SetName("combinedPfIso03Phot");
//     data_ele_new[i]->GetBranch("probe_combinedPfIsoFPR03Phot")->SetName("combinedPfIsoFPR03Phot");

//     f_data_ele_new[i]->cd();
//     data_ele_new[i] ->Write();
//     f_data_ele_new[i]->Close();

  }


  //  int nentries;

//   //--------
//   Float_t probe_combinedPfIso03;
//   Float_t probe_combinedPfIsoFPR03;
//   TBranch *b_probe_combinedPfIso03; 
//   TBranch *b_probe_combinedPfIsoFPR03; 
//   //--------


//   for (int i=0; i<6; i++){

//     //data_ele[i]->SetBranchAddress("probe_pt", &probe_combinedPfIso03, &b_probe_combinedPfIso03);
//     //data_ele[i]->SetBranchAddress("probe_combinedPfIsoFPR03", &probe_combinedPfIsoFPR03_, &b_probe_combinedPfIsoFPR03);
//     f_data_ele_new[i]->cd();

//     data_ele_new[i]->Branch("combinedPfIso03Phot", &probe_combinedPfIsoFPR03_, "combinedPfIso03Phot/F");
//     data_ele_new[i]->Branch("combinedPfIsoFPR03Phot", &probe_combinedPfIsoFPR03_, "combinedPfIsoFPR03Phot/F");

//     nentries = data_ele[i]->GetEntries();
//     for (int jentries = 0; jentries < nentries; jentries++){
//       if(jentries%10000==0) std::cout << jentries <<"  events processed" << endl;

//       data_ele_new[i]->Fill();
//     }

//     data_ele_new[i]->Write();
//     f_data_ele_new[i]->Close();

//   }


}
