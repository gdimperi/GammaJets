#define addWeightToTree_cxx
#include "addWeightToTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>

using namespace std;


int do_addWeight(int isG, int isQCD, int isData, int hlt){

  cout << "##################################################" << endl
       << "         run one sample and one hlt !             " << endl
       << "##################################################" << endl;
  
  TChain* chain = new TChain("finalTree", "");

  // output tree, with modified weight
  string workDirFPR = "histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/";
  string workDir = "histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/";
  //input weights
  TFile* fileWeightsFPR  = TFile::Open((workDirFPR+"isoWeights_hlt30.root").c_str());
  TFile* fileWeights     = TFile::Open((workDir+"isoWeights_hlt30.root").c_str());

  TFile* outFileFPR;
  TFile*  outFile;

  cout << "start to add the chain" << endl;
  // G+jets                                                                                                                            
  if(isG && hlt==30){
    //chain->Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt*root");
    //hight pt bins exlcluded
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt30.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt30.root").c_str(),"recreate");
  }
  else if(isG && hlt==50){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt50.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt50.root").c_str(),"recreate");
  }
  else if(isG && hlt==75){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt75.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt75.root").c_str(),"recreate");
  }
  else if(isG && hlt==90){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt90.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt90.root").c_str(),"recreate");
  }
  else if(isG && hlt==135){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt135.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt135.root").c_str(),"recreate");
  }
  else if(isG && hlt==150){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-120to170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-15to30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-170to300_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-300to470_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-30to50_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-50to80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-80to120_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt150.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt150.root").c_str(),"recreate");
  }

    // qcd
  else if(isQCD && hlt==30) {
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM*root");
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt30.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt30.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==50) {
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM*root");
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt50.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt50.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==75) {
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM*root");
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt75.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt75.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==90) {
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM*root");
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt90.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt90.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==135) {
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM*root");
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt135.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt135.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==150) {
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM*root");
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt150.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt150.root").c_str(),"recreate");
  }
  
  // data
  else if(isData && hlt==30){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/*2012A*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/*2012B*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/*2012C*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/*2012D*root");

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt30.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt30.root").c_str(),"recreate");
  }
  else if(isData && hlt==50){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/*2012A*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/*2012B*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/*2012C*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/*2012D*root");

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt50.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt50.root").c_str(),"recreate");
  }
  else if(isData && hlt==75){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/*2012A*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/*2012B*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/*2012C*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/*2012D*root");

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt75.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt75.root").c_str(),"recreate");
  }
  else if(isData && hlt==90){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/*2012A*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/*2012B*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/*2012C*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/*2012D*root");

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt90.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt90.root").c_str(),"recreate");
  }
  else if(isData && hlt==135){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/*2012A*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/*2012B*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/*2012C*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/*2012D*root");

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt135.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt135.root").c_str(),"recreate");
  }
  else if(isData && hlt==150){
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/*2012A*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/*2012B*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/*2012C*root");
    chain->Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/*2012D*root");

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt150.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt150.root").c_str(),"recreate");
  }


  addWeightToTree* t = new addWeightToTree(chain);
  t->Loop(outFile, fileWeights, fileWeightsFPR);

  return 0;

}



void addWeightToTree::Loop(TFile* outFile, TFile* fileWeights, TFile* fileWeightsFPR) 
{
 
  if (fChain == 0) return;
  /****************************************
              iso non FPR
  ******************************************/ 
  
  // loading histos with weights
  TH1F* h1_isoW_EB = (TH1F*)fileWeights->Get("h_isoWeight_EB");
  TH1F* h1_isoW_EE = (TH1F*)fileWeights->Get("h_isoWeight_EE");
  //weights for systematics
  TH1F* h1_isoW1_EB = (TH1F*)fileWeights->Get("h_isoWeight1_EB");
  TH1F* h1_isoW1_EE = (TH1F*)fileWeights->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoW2_EB = (TH1F*)fileWeights->Get("h_isoWeight2_EB");
  TH1F* h1_isoW2_EE = (TH1F*)fileWeights->Get("h_isoWeight2_EE");
  
  /****************************************
              iso FPR
  ******************************************/ 
  
  // loading histos with weights
  TH1F* h1_isoFPRW_EB = (TH1F*)fileWeightsFPR->Get("h_isoWeight_EB");
  TH1F* h1_isoFPRW_EE = (TH1F*)fileWeightsFPR->Get("h_isoWeight_EE");
  //weights for systematics
  TH1F* h1_isoFPRW1_EB = (TH1F*)fileWeightsFPR->Get("h_isoWeight1_EB");
  TH1F* h1_isoFPRW1_EE = (TH1F*)fileWeightsFPR->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoFPRW2_EB = (TH1F*)fileWeightsFPR->Get("h_isoWeight2_EB");
  TH1F* h1_isoFPRW2_EE = (TH1F*)fileWeightsFPR->Get("h_isoWeight2_EE");


  outFile->cd();
  TTree* treeWithWeights= new TTree();
  treeWithWeights->SetName("myTrees_withWeight");
  createBranches(treeWithWeights);


  /*******************************************

          START THE   LOOP

  *********************************************/


  Long64_t nentries = fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
        if(jentry%50000==0) cout<<jentry<<endl;
    
    // remove events not to be analyzed
    if (weight==0) continue;
    
    // computing the isolation weight according eta/pT of the photon
    float isWeb, isWee, isW1eb, isW1ee, isW2eb, isW2ee, isWeb, isFPRWee, isFPRW1eb, isFPRW1ee, isFPRW2eb, isFPRW2ee;
    isWeb = h1_isoW_EB->GetBinContent(h1_isoW_EB->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isWee = h1_isoW_EE->GetBinContent(h1_isoW_EE->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isW1eb = h1_isoW1_EB->GetBinContent(h1_isoW1_EB->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW1ee = h1_isoW1_EE->GetBinContent(h1_isoW1_EE->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2eb = h1_isoW2_EB->GetBinContent(h1_isoW2_EB->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2ee = h1_isoW2_EE->GetBinContent(h1_isoW2_EE->GetXaxis()->FindBin(combinedPfIso03Phot));

    isFPRWeb = h1_isoFPRW_EB->GetBinContent(h1_isoFPRW_EB->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRWee = h1_isoFPRW_EE->GetBinContent(h1_isoFPRW_EE->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1eb = h1_isoFPRW1_EB->GetBinContent(h1_isoFPRW1_EB->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1ee = h1_isoFPRW1_EE->GetBinContent(h1_isoFPRW1_EE->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2eb = h1_isoFPRW2_EB->GetBinContent(h1_isoFPRW2_EB->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2ee = h1_isoFPRW2_EE->GetBinContent(h1_isoFPRW2_EE->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));


    // saving in the tree
    bool isEB = true;
    if ( fabs(etaPhot)>1.4442 ) isEB = false;      
    
    if (isEB) {
      isoW_EB_t = isWeb;
      isoW1_EB_t = isW1eb;
      isoW2_EB_t = isW2eb;
      isoFPRW_EB_t = isFPRWeb;
      isoFPRW1_EB_t = isFPRW1eb;
      isoFPRW2_EB_t = isFPRW2eb;
    } else {
      isoW_EB_t = -1000.;
      isoW1_EB_t = -1000.;
      isoW2_EB_t = -1000.;
      isoFPRW_EB_t = -1000.;
      isoFPRW1_EB_t = -1000.;
      isoFPRW2_EB_t = -1000.;
    }
    
    if (!isEB) {
      isoW_EE_t = isWee;
      isoW1_EE_t = isW1ee;
      isoW2_EE_t = isW2ee;
      isoFPRW_EE_t = isFPRWee;
      isoFPRW1_EE_t = isFPRW1ee;
      isoFPRW2_EE_t = isFPRW2ee;
    } else {
      isoW_EE_t = -1000.;
      isoW1_EE_t = -1000.;
      isoW2_EE_t = -1000.;
      isoFPRW_EE_t = -1000.;
      isoFPRW1_EE_t = -1000.;
      isoFPRW2_EE_t = -1000.;
    }

    treeWithWeights->Fill();

  }
  
  cout << "done with the loop. Ready to write" << endl;
  treeWithWeights->Write();
  cout << "done with the writing" << endl;
  outFile->Write();
  outFile->Close();
}
