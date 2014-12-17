#define TestClass_cxx
#include "TestClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

int main(){

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

  data_ele[0] = (TTree*)f_data_ele[0]->Get("myTaPDir/myTree");
  data_ele[1] = (TTree*)f_data_ele[1]->Get("myTaPDir/myTree");
  data_ele[2] = (TTree*)f_data_ele[2]->Get("myTaPDir/myTree");
  data_ele[3] = (TTree*)f_data_ele[3]->Get("myTaPDir/myTree");
  data_ele[4] = (TTree*)f_data_ele[4]->Get("myTaPDir/myTree");
  data_ele[5] = (TTree*)f_data_ele[5]->Get("myTaPDir/myTree");
  
  //TBranch* branch_isoPf03[6];
  //TBranch* branch_isoPf03Phot[6]; 


  data_ele_new[0] = (TTree*)data_ele[0]->Clone();
  data_ele_new[1] = (TTree*)data_ele[1]->Clone();
  data_ele_new[2] = (TTree*)data_ele[2]->Clone();
  data_ele_new[3] = (TTree*)data_ele[3]->Clone();
  data_ele_new[4] = (TTree*)data_ele[4]->Clone();
  data_ele_new[5] = (TTree*)data_ele[5]->Clone();

  TestClass* test;

  for (int i=0; i<6; i++){

    test = new TestClass(data_ele[i]);    

    data_ele_new[i]->Branch("combinedPfIso03Phot", &probe_combinedPfIso03, "combinedPfIso03Phot/F");
    data_ele_new[i]->Branch("combinedPfIsoFPR03Phot", &probe_combinedPfIsoFPR03, "combinedPfIsoFPR03Phot/F");

    f_data_ele_new[i]->cd();
    test->Loop(data_ele_new[i]);

    data_ele_new[i]->Write();
    f_data_ele_new[i]->Close();

  }



  return 0;
}

void TestClass::Loop(TTree* data_ele_new)
{
//   In a ROOT session, you can do:
//      Root > .L TestClass.C
//      Root > TestClass t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

    
    data_ele_new->Branch("combinedPfIso03Phot", &probe_combinedPfIsoFPR03, "combinedPfIso03Phot/F");
    data_ele_new->Branch("combinedPfIsoFPR03Phot", &probe_combinedPfIsoFPR03, "combinedPfIsoFPR03Phot/F");


   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      data_ele_new->Fill();

   }
}
