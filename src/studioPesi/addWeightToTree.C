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

  //string inputDir = "/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/";
  string inputDir = "/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";
 
  TChain* chain = new TChain("finalTree", "");

  // output tree, with modified weight
  string workDirFPR = "histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/";
  string workDir = "histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/";
  //input weights
  TFile* fileWeightsFPR_hlt30  = TFile::Open((workDirFPR+"isoWeights_hlt30.root").c_str());
  TFile* fileWeights_hlt30     = TFile::Open((workDir+"isoWeights_hlt30.root").c_str());
  TFile* fileWeightsFPR_hlt50  = TFile::Open((workDirFPR+"isoWeights_hlt50.root").c_str());
  TFile* fileWeights_hlt50     = TFile::Open((workDir+"isoWeights_hlt50.root").c_str());
  TFile* fileWeightsFPR_hlt75  = TFile::Open((workDirFPR+"isoWeights_hlt75.root").c_str());
  TFile* fileWeights_hlt75     = TFile::Open((workDir+"isoWeights_hlt75.root").c_str());
  TFile* fileWeightsFPR_hlt90  = TFile::Open((workDirFPR+"isoWeights_hlt90.root").c_str());
  TFile* fileWeights_hlt90     = TFile::Open((workDir+"isoWeights_hlt90.root").c_str());
  TFile* fileWeightsFPR_hlt135  = TFile::Open((workDirFPR+"isoWeights_hlt135.root").c_str());
  TFile* fileWeights_hlt135     = TFile::Open((workDir+"isoWeights_hlt135.root").c_str());
  TFile* fileWeightsFPR_hlt150  = TFile::Open((workDirFPR+"isoWeights_hlt150.root").c_str());
  TFile* fileWeights_hlt150     = TFile::Open((workDir+"isoWeights_hlt150.root").c_str());

  //TFile* outFileFPR;
  TFile*  outFile;

  cout << "start to add the chain" << endl;
  // G+jets                                                                                                                            
  if(isG && hlt==30){
    //chain->Add(("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt*root").c_str());
    //hight pt bins exlcluded
    chain->Add((inputDir+"HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt30.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt30.root").c_str(),"recreate");
  }
  else if(isG && hlt==50){
    chain->Add((inputDir+"HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt50.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt50.root").c_str(),"recreate");
  }
  else if(isG && hlt==75){
    chain->Add((inputDir+"HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt75.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt75.root").c_str(),"recreate");
  }
  else if(isG && hlt==90){
    chain->Add((inputDir+"HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt90.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt90.root").c_str(),"recreate");
  }
  else if(isG && hlt==135){
    chain->Add((inputDir+"HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt135.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt135.root").c_str(),"recreate");
  }
  else if(isG && hlt==150){
    chain->Add((inputDir+"HLT150/G_Pt-120to170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT150/G_Pt-15to30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT150/G_Pt-170to300_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT150/G_Pt-300to470_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT150/G_Pt-30to50_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT150/G_Pt-50to80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    chain->Add((inputDir+"HLT150/G_Pt-80to120_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"gjTrees_withWeights_hlt150.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"gjTrees_withWeights_hlt150.root").c_str(),"recreate");
  }

    // qcd
  else if(isQCD && hlt==30) {
    chain->Add((inputDir+"HLT30/QCDEM*root").c_str());
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt30.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt30.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==50) {
    chain->Add((inputDir+"HLT50/QCDEM*root").c_str());
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt50.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt50.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==75) {
    chain->Add((inputDir+"HLT75/QCDEM*root").c_str());
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt75.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt75.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==90) {
    chain->Add((inputDir+"HLT90/QCDEM*root").c_str());
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt90.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt90.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==135) {
    chain->Add((inputDir+"HLT135/QCDEM*root").c_str());
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt135.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt135.root").c_str(),"recreate");
  }
  else if(isQCD && hlt==150) {
    chain->Add((inputDir+"HLT150/QCDEM*root").c_str());
    //outFileFPR=TFile::Open((workDirFPR+"qcdTrees_withWeights_hlt150.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"qcdTrees_withWeights_hlt150.root").c_str(),"recreate");
  }
  
  // data
  else if(isData && hlt==30){
    chain->Add((inputDir+"HLT30/*2012A*root").c_str());
    chain->Add((inputDir+"HLT30/*2012B*root").c_str());
    chain->Add((inputDir+"HLT30/*2012C*root").c_str());
    chain->Add((inputDir+"HLT30/*2012D*root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt30.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt30.root").c_str(),"recreate");
  }
  else if(isData && hlt==50){
    chain->Add((inputDir+"HLT50/*2012A*root").c_str());
    chain->Add((inputDir+"HLT50/*2012B*root").c_str());
    chain->Add((inputDir+"HLT50/*2012C*root").c_str());
    chain->Add((inputDir+"HLT50/*2012D*root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt50.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt50.root").c_str(),"recreate");
  }
  else if(isData && hlt==75){
    chain->Add((inputDir+"HLT75/*2012A*root").c_str());
    chain->Add((inputDir+"HLT75/*2012B*root").c_str());
    chain->Add((inputDir+"HLT75/*2012C*root").c_str());
    chain->Add((inputDir+"HLT75/*2012D*root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt75.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt75.root").c_str(),"recreate");
  }
  else if(isData && hlt==90){
    chain->Add((inputDir+"HLT90/*2012A*root").c_str());
    chain->Add((inputDir+"HLT90/*2012B*root").c_str());
    chain->Add((inputDir+"HLT90/*2012C*root").c_str());
    chain->Add((inputDir+"HLT90/*2012D*root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt90.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt90.root").c_str(),"recreate");
  }
  else if(isData && hlt==135){
    chain->Add((inputDir+"HLT135/*2012A*root").c_str());
    chain->Add((inputDir+"HLT135/*2012B*root").c_str());
    chain->Add((inputDir+"HLT135/*2012C*root").c_str());
    chain->Add((inputDir+"HLT135/*2012D*root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt135.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt135.root").c_str(),"recreate");
  }
  else if(isData && hlt==150){
    chain->Add((inputDir+"HLT150/*2012A*root").c_str());
    chain->Add((inputDir+"HLT150/*2012B*root").c_str());
    chain->Add((inputDir+"HLT150/*2012C*root").c_str());
    chain->Add((inputDir+"HLT150/*2012D*root").c_str());

    //outFileFPR=TFile::Open((workDirFPR+"data2012ABCD_withWeights_hlt150.root").c_str(),"recreate");
    outFile=TFile::Open((workDir+"data2012ABCD_withWeights_hlt150.root").c_str(),"recreate");
  }


  addWeightToTree* t = new addWeightToTree(chain);
  t->Loop(outFile, fileWeights_hlt30, fileWeightsFPR_hlt30, fileWeights_hlt50, fileWeightsFPR_hlt50, fileWeights_hlt75, fileWeightsFPR_hlt75, fileWeights_hlt90, fileWeightsFPR_hlt90, fileWeights_hlt135, fileWeightsFPR_hlt135, fileWeights_hlt150, fileWeightsFPR_hlt150);

  return 0;

}



void addWeightToTree::Loop(TFile* outFile, TFile* fileWeights_hlt30, TFile* fileWeightsFPR_hlt30, TFile* fileWeights_hlt50, TFile* fileWeightsFPR_hlt50, TFile* fileWeights_hlt75, TFile* fileWeightsFPR_hlt75, TFile* fileWeights_hlt90, TFile* fileWeightsFPR_hlt90, TFile* fileWeights_hlt135, TFile* fileWeightsFPR_hlt135, TFile* fileWeights_hlt150, TFile* fileWeightsFPR_hlt150) 
{
 
  if (fChain == 0) return;
  /****************************************
              iso non FPR
  ******************************************/ 
  
  // loading histos with weights
  TH1F* h1_isoW_EB_hlt30 = (TH1F*)fileWeights_hlt30->Get("h_isoWeight_EB");
  TH1F* h1_isoW_EE_hlt30 = (TH1F*)fileWeights_hlt30->Get("h_isoWeight_EE");
  TH1F* h1_isoW1_EB_hlt30 = (TH1F*)fileWeights_hlt30->Get("h_isoWeight1_EB");
  TH1F* h1_isoW1_EE_hlt30 = (TH1F*)fileWeights_hlt30->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoW2_EB_hlt30 = (TH1F*)fileWeights_hlt30->Get("h_isoWeight2_EB");
  TH1F* h1_isoW2_EE_hlt30 = (TH1F*)fileWeights_hlt30->Get("h_isoWeight2_EE");
  
  TH1F* h1_isoW_EB_hlt50 = (TH1F*)fileWeights_hlt50->Get("h_isoWeight_EB");
  TH1F* h1_isoW_EE_hlt50 = (TH1F*)fileWeights_hlt50->Get("h_isoWeight_EE");
  TH1F* h1_isoW1_EB_hlt50 = (TH1F*)fileWeights_hlt50->Get("h_isoWeight1_EB");
  TH1F* h1_isoW1_EE_hlt50 = (TH1F*)fileWeights_hlt50->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoW2_EB_hlt50 = (TH1F*)fileWeights_hlt50->Get("h_isoWeight2_EB");
  TH1F* h1_isoW2_EE_hlt50 = (TH1F*)fileWeights_hlt50->Get("h_isoWeight2_EE");

  TH1F* h1_isoW_EB_hlt75 = (TH1F*)fileWeights_hlt75->Get("h_isoWeight_EB");
  TH1F* h1_isoW_EE_hlt75 = (TH1F*)fileWeights_hlt75->Get("h_isoWeight_EE");
  TH1F* h1_isoW1_EB_hlt75 = (TH1F*)fileWeights_hlt75->Get("h_isoWeight1_EB");
  TH1F* h1_isoW1_EE_hlt75 = (TH1F*)fileWeights_hlt75->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoW2_EB_hlt75 = (TH1F*)fileWeights_hlt75->Get("h_isoWeight2_EB");
  TH1F* h1_isoW2_EE_hlt75 = (TH1F*)fileWeights_hlt75->Get("h_isoWeight2_EE");

  TH1F* h1_isoW_EB_hlt90 = (TH1F*)fileWeights_hlt90->Get("h_isoWeight_EB");
  TH1F* h1_isoW_EE_hlt90 = (TH1F*)fileWeights_hlt90->Get("h_isoWeight_EE");
  TH1F* h1_isoW1_EB_hlt90 = (TH1F*)fileWeights_hlt90->Get("h_isoWeight1_EB");
  TH1F* h1_isoW1_EE_hlt90 = (TH1F*)fileWeights_hlt90->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoW2_EB_hlt90 = (TH1F*)fileWeights_hlt90->Get("h_isoWeight2_EB");
  TH1F* h1_isoW2_EE_hlt90 = (TH1F*)fileWeights_hlt90->Get("h_isoWeight2_EE");

  TH1F* h1_isoW_EB_hlt135 = (TH1F*)fileWeights_hlt135->Get("h_isoWeight_EB");
  TH1F* h1_isoW_EE_hlt135 = (TH1F*)fileWeights_hlt135->Get("h_isoWeight_EE");
  TH1F* h1_isoW1_EB_hlt135 = (TH1F*)fileWeights_hlt135->Get("h_isoWeight1_EB");
  TH1F* h1_isoW1_EE_hlt135 = (TH1F*)fileWeights_hlt135->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoW2_EB_hlt135 = (TH1F*)fileWeights_hlt135->Get("h_isoWeight2_EB");
  TH1F* h1_isoW2_EE_hlt135 = (TH1F*)fileWeights_hlt135->Get("h_isoWeight2_EE");

  TH1F* h1_isoW_EB_hlt150 = (TH1F*)fileWeights_hlt150->Get("h_isoWeight_EB");
  TH1F* h1_isoW_EE_hlt150 = (TH1F*)fileWeights_hlt150->Get("h_isoWeight_EE");
  TH1F* h1_isoW1_EB_hlt150 = (TH1F*)fileWeights_hlt150->Get("h_isoWeight1_EB");
  TH1F* h1_isoW1_EE_hlt150 = (TH1F*)fileWeights_hlt150->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoW2_EB_hlt150 = (TH1F*)fileWeights_hlt150->Get("h_isoWeight2_EB");
  TH1F* h1_isoW2_EE_hlt150 = (TH1F*)fileWeights_hlt150->Get("h_isoWeight2_EE");



  /****************************************
              iso FPR
  ******************************************/ 
  
  // loading histos with weights
  TH1F* h1_isoFPRW_EB_hlt30 = (TH1F*)fileWeightsFPR_hlt30->Get("h_isoWeight_EB");
  TH1F* h1_isoFPRW_EE_hlt30 = (TH1F*)fileWeightsFPR_hlt30->Get("h_isoWeight_EE");
  TH1F* h1_isoFPRW1_EB_hlt30 = (TH1F*)fileWeightsFPR_hlt30->Get("h_isoWeight1_EB");
  TH1F* h1_isoFPRW1_EE_hlt30 = (TH1F*)fileWeightsFPR_hlt30->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoFPRW2_EB_hlt30 = (TH1F*)fileWeightsFPR_hlt30->Get("h_isoWeight2_EB");
  TH1F* h1_isoFPRW2_EE_hlt30 = (TH1F*)fileWeightsFPR_hlt30->Get("h_isoWeight2_EE");

  TH1F* h1_isoFPRW_EB_hlt50 = (TH1F*)fileWeightsFPR_hlt50->Get("h_isoWeight_EB");
  TH1F* h1_isoFPRW_EE_hlt50 = (TH1F*)fileWeightsFPR_hlt50->Get("h_isoWeight_EE");
  TH1F* h1_isoFPRW1_EB_hlt50 = (TH1F*)fileWeightsFPR_hlt50->Get("h_isoWeight1_EB");
  TH1F* h1_isoFPRW1_EE_hlt50 = (TH1F*)fileWeightsFPR_hlt50->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoFPRW2_EB_hlt50 = (TH1F*)fileWeightsFPR_hlt50->Get("h_isoWeight2_EB");
  TH1F* h1_isoFPRW2_EE_hlt50 = (TH1F*)fileWeightsFPR_hlt50->Get("h_isoWeight2_EE");

  TH1F* h1_isoFPRW_EB_hlt75 = (TH1F*)fileWeightsFPR_hlt75->Get("h_isoWeight_EB");
  TH1F* h1_isoFPRW_EE_hlt75 = (TH1F*)fileWeightsFPR_hlt75->Get("h_isoWeight_EE");
  TH1F* h1_isoFPRW1_EB_hlt75 = (TH1F*)fileWeightsFPR_hlt75->Get("h_isoWeight1_EB");
  TH1F* h1_isoFPRW1_EE_hlt75 = (TH1F*)fileWeightsFPR_hlt75->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoFPRW2_EB_hlt75 = (TH1F*)fileWeightsFPR_hlt75->Get("h_isoWeight2_EB");
  TH1F* h1_isoFPRW2_EE_hlt75 = (TH1F*)fileWeightsFPR_hlt75->Get("h_isoWeight2_EE");

  TH1F* h1_isoFPRW_EB_hlt90 = (TH1F*)fileWeightsFPR_hlt90->Get("h_isoWeight_EB");
  TH1F* h1_isoFPRW_EE_hlt90 = (TH1F*)fileWeightsFPR_hlt90->Get("h_isoWeight_EE");
  TH1F* h1_isoFPRW1_EB_hlt90 = (TH1F*)fileWeightsFPR_hlt90->Get("h_isoWeight1_EB");
  TH1F* h1_isoFPRW1_EE_hlt90 = (TH1F*)fileWeightsFPR_hlt90->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoFPRW2_EB_hlt90 = (TH1F*)fileWeightsFPR_hlt90->Get("h_isoWeight2_EB");
  TH1F* h1_isoFPRW2_EE_hlt90 = (TH1F*)fileWeightsFPR_hlt90->Get("h_isoWeight2_EE");

  TH1F* h1_isoFPRW_EB_hlt135 = (TH1F*)fileWeightsFPR_hlt135->Get("h_isoWeight_EB");
  TH1F* h1_isoFPRW_EE_hlt135 = (TH1F*)fileWeightsFPR_hlt135->Get("h_isoWeight_EE");
  TH1F* h1_isoFPRW1_EB_hlt135 = (TH1F*)fileWeightsFPR_hlt135->Get("h_isoWeight1_EB");
  TH1F* h1_isoFPRW1_EE_hlt135 = (TH1F*)fileWeightsFPR_hlt135->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoFPRW2_EB_hlt135 = (TH1F*)fileWeightsFPR_hlt135->Get("h_isoWeight2_EB");
  TH1F* h1_isoFPRW2_EE_hlt135 = (TH1F*)fileWeightsFPR_hlt135->Get("h_isoWeight2_EE");

  TH1F* h1_isoFPRW_EB_hlt150 = (TH1F*)fileWeightsFPR_hlt150->Get("h_isoWeight_EB");
  TH1F* h1_isoFPRW_EE_hlt150 = (TH1F*)fileWeightsFPR_hlt150->Get("h_isoWeight_EE");
  TH1F* h1_isoFPRW1_EB_hlt150 = (TH1F*)fileWeightsFPR_hlt150->Get("h_isoWeight1_EB");
  TH1F* h1_isoFPRW1_EE_hlt150 = (TH1F*)fileWeightsFPR_hlt150->Get("h_isoWeight1_EE"); 
  TH1F* h1_isoFPRW2_EB_hlt150 = (TH1F*)fileWeightsFPR_hlt150->Get("h_isoWeight2_EB");
  TH1F* h1_isoFPRW2_EE_hlt150 = (TH1F*)fileWeightsFPR_hlt150->Get("h_isoWeight2_EE");

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
    float isWeb_hlt30, isWee_hlt30, isW1eb_hlt30, isW1ee_hlt30, isW2eb_hlt30, isW2ee_hlt30, isFPRWeb_hlt30, isFPRWee_hlt30, isFPRW1eb_hlt30, isFPRW1ee_hlt30, isFPRW2eb_hlt30, isFPRW2ee_hlt30;
    float isWeb_hlt50, isWee_hlt50, isW1eb_hlt50, isW1ee_hlt50, isW2eb_hlt50, isW2ee_hlt50, isFPRWeb_hlt50, isFPRWee_hlt50, isFPRW1eb_hlt50, isFPRW1ee_hlt50, isFPRW2eb_hlt50, isFPRW2ee_hlt50;
    float isWeb_hlt75, isWee_hlt75, isW1eb_hlt75, isW1ee_hlt75, isW2eb_hlt75, isW2ee_hlt75, isFPRWeb_hlt75, isFPRWee_hlt75, isFPRW1eb_hlt75, isFPRW1ee_hlt75, isFPRW2eb_hlt75, isFPRW2ee_hlt75;
    float isWeb_hlt90, isWee_hlt90, isW1eb_hlt90, isW1ee_hlt90, isW2eb_hlt90, isW2ee_hlt90, isFPRWeb_hlt90, isFPRWee_hlt90, isFPRW1eb_hlt90, isFPRW1ee_hlt90, isFPRW2eb_hlt90, isFPRW2ee_hlt90;
    float isWeb_hlt135, isWee_hlt135, isW1eb_hlt135, isW1ee_hlt135, isW2eb_hlt135, isW2ee_hlt135, isFPRWeb_hlt135, isFPRWee_hlt135, isFPRW1eb_hlt135, isFPRW1ee_hlt135, isFPRW2eb_hlt135, isFPRW2ee_hlt135;
    float isWeb_hlt150, isWee_hlt150, isW1eb_hlt150, isW1ee_hlt150, isW2eb_hlt150, isW2ee_hlt150, isFPRWeb_hlt150, isFPRWee_hlt150, isFPRW1eb_hlt150, isFPRW1ee_hlt150, isFPRW2eb_hlt150, isFPRW2ee_hlt150;


    isWeb_hlt30 = h1_isoW_EB_hlt30->GetBinContent(h1_isoW_EB_hlt30->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isWee_hlt30 = h1_isoW_EE_hlt30->GetBinContent(h1_isoW_EE_hlt30->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isW1eb_hlt30 = h1_isoW1_EB_hlt30->GetBinContent(h1_isoW1_EB_hlt30->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW1ee_hlt30 = h1_isoW1_EE_hlt30->GetBinContent(h1_isoW1_EE_hlt30->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2eb_hlt30 = h1_isoW2_EB_hlt30->GetBinContent(h1_isoW2_EB_hlt30->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2ee_hlt30 = h1_isoW2_EE_hlt30->GetBinContent(h1_isoW2_EE_hlt30->GetXaxis()->FindBin(combinedPfIso03Phot));

    isFPRWeb_hlt30 = h1_isoFPRW_EB_hlt30->GetBinContent(h1_isoFPRW_EB_hlt30->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRWee_hlt30 = h1_isoFPRW_EE_hlt30->GetBinContent(h1_isoFPRW_EE_hlt30->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1eb_hlt30 = h1_isoFPRW1_EB_hlt30->GetBinContent(h1_isoFPRW1_EB_hlt30->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1ee_hlt30 = h1_isoFPRW1_EE_hlt30->GetBinContent(h1_isoFPRW1_EE_hlt30->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2eb_hlt30 = h1_isoFPRW2_EB_hlt30->GetBinContent(h1_isoFPRW2_EB_hlt30->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2ee_hlt30 = h1_isoFPRW2_EE_hlt30->GetBinContent(h1_isoFPRW2_EE_hlt30->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));

    isWeb_hlt50 = h1_isoW_EB_hlt50->GetBinContent(h1_isoW_EB_hlt50->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isWee_hlt50 = h1_isoW_EE_hlt50->GetBinContent(h1_isoW_EE_hlt50->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isW1eb_hlt50 = h1_isoW1_EB_hlt50->GetBinContent(h1_isoW1_EB_hlt50->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW1ee_hlt50 = h1_isoW1_EE_hlt50->GetBinContent(h1_isoW1_EE_hlt50->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2eb_hlt50 = h1_isoW2_EB_hlt50->GetBinContent(h1_isoW2_EB_hlt50->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2ee_hlt50 = h1_isoW2_EE_hlt50->GetBinContent(h1_isoW2_EE_hlt50->GetXaxis()->FindBin(combinedPfIso03Phot));

    isFPRWeb_hlt50 = h1_isoFPRW_EB_hlt50->GetBinContent(h1_isoFPRW_EB_hlt50->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRWee_hlt50 = h1_isoFPRW_EE_hlt50->GetBinContent(h1_isoFPRW_EE_hlt50->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1eb_hlt50 = h1_isoFPRW1_EB_hlt50->GetBinContent(h1_isoFPRW1_EB_hlt50->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1ee_hlt50 = h1_isoFPRW1_EE_hlt50->GetBinContent(h1_isoFPRW1_EE_hlt50->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2eb_hlt50 = h1_isoFPRW2_EB_hlt50->GetBinContent(h1_isoFPRW2_EB_hlt50->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2ee_hlt50 = h1_isoFPRW2_EE_hlt50->GetBinContent(h1_isoFPRW2_EE_hlt50->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));

    isWeb_hlt75 = h1_isoW_EB_hlt75->GetBinContent(h1_isoW_EB_hlt75->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isWee_hlt75 = h1_isoW_EE_hlt75->GetBinContent(h1_isoW_EE_hlt75->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isW1eb_hlt75 = h1_isoW1_EB_hlt75->GetBinContent(h1_isoW1_EB_hlt75->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW1ee_hlt75 = h1_isoW1_EE_hlt75->GetBinContent(h1_isoW1_EE_hlt75->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2eb_hlt75 = h1_isoW2_EB_hlt75->GetBinContent(h1_isoW2_EB_hlt75->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2ee_hlt75 = h1_isoW2_EE_hlt75->GetBinContent(h1_isoW2_EE_hlt75->GetXaxis()->FindBin(combinedPfIso03Phot));

    isFPRWeb_hlt75 = h1_isoFPRW_EB_hlt75->GetBinContent(h1_isoFPRW_EB_hlt75->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRWee_hlt75 = h1_isoFPRW_EE_hlt75->GetBinContent(h1_isoFPRW_EE_hlt75->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1eb_hlt75 = h1_isoFPRW1_EB_hlt75->GetBinContent(h1_isoFPRW1_EB_hlt75->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1ee_hlt75 = h1_isoFPRW1_EE_hlt75->GetBinContent(h1_isoFPRW1_EE_hlt75->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2eb_hlt75 = h1_isoFPRW2_EB_hlt75->GetBinContent(h1_isoFPRW2_EB_hlt75->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2ee_hlt75 = h1_isoFPRW2_EE_hlt75->GetBinContent(h1_isoFPRW2_EE_hlt75->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));

    isWeb_hlt90 = h1_isoW_EB_hlt90->GetBinContent(h1_isoW_EB_hlt90->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isWee_hlt90 = h1_isoW_EE_hlt90->GetBinContent(h1_isoW_EE_hlt90->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isW1eb_hlt90 = h1_isoW1_EB_hlt90->GetBinContent(h1_isoW1_EB_hlt90->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW1ee_hlt90 = h1_isoW1_EE_hlt90->GetBinContent(h1_isoW1_EE_hlt90->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2eb_hlt90 = h1_isoW2_EB_hlt90->GetBinContent(h1_isoW2_EB_hlt90->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2ee_hlt90 = h1_isoW2_EE_hlt90->GetBinContent(h1_isoW2_EE_hlt90->GetXaxis()->FindBin(combinedPfIso03Phot));

    isFPRWeb_hlt90 = h1_isoFPRW_EB_hlt90->GetBinContent(h1_isoFPRW_EB_hlt90->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRWee_hlt90 = h1_isoFPRW_EE_hlt90->GetBinContent(h1_isoFPRW_EE_hlt90->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1eb_hlt90 = h1_isoFPRW1_EB_hlt90->GetBinContent(h1_isoFPRW1_EB_hlt90->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1ee_hlt90 = h1_isoFPRW1_EE_hlt90->GetBinContent(h1_isoFPRW1_EE_hlt90->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2eb_hlt90 = h1_isoFPRW2_EB_hlt90->GetBinContent(h1_isoFPRW2_EB_hlt90->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2ee_hlt90 = h1_isoFPRW2_EE_hlt90->GetBinContent(h1_isoFPRW2_EE_hlt90->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));

    isWeb_hlt135 = h1_isoW_EB_hlt135->GetBinContent(h1_isoW_EB_hlt135->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isWee_hlt135 = h1_isoW_EE_hlt135->GetBinContent(h1_isoW_EE_hlt135->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isW1eb_hlt135 = h1_isoW1_EB_hlt135->GetBinContent(h1_isoW1_EB_hlt135->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW1ee_hlt135 = h1_isoW1_EE_hlt135->GetBinContent(h1_isoW1_EE_hlt135->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2eb_hlt135 = h1_isoW2_EB_hlt135->GetBinContent(h1_isoW2_EB_hlt135->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2ee_hlt135 = h1_isoW2_EE_hlt135->GetBinContent(h1_isoW2_EE_hlt135->GetXaxis()->FindBin(combinedPfIso03Phot));

    isFPRWeb_hlt135 = h1_isoFPRW_EB_hlt135->GetBinContent(h1_isoFPRW_EB_hlt135->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRWee_hlt135 = h1_isoFPRW_EE_hlt135->GetBinContent(h1_isoFPRW_EE_hlt135->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1eb_hlt135 = h1_isoFPRW1_EB_hlt135->GetBinContent(h1_isoFPRW1_EB_hlt135->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1ee_hlt135 = h1_isoFPRW1_EE_hlt135->GetBinContent(h1_isoFPRW1_EE_hlt135->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2eb_hlt135 = h1_isoFPRW2_EB_hlt135->GetBinContent(h1_isoFPRW2_EB_hlt135->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2ee_hlt135 = h1_isoFPRW2_EE_hlt135->GetBinContent(h1_isoFPRW2_EE_hlt135->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));

    isWeb_hlt150 = h1_isoW_EB_hlt150->GetBinContent(h1_isoW_EB_hlt150->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isWee_hlt150 = h1_isoW_EE_hlt150->GetBinContent(h1_isoW_EE_hlt150->GetXaxis()   ->FindBin(combinedPfIso03Phot));
    isW1eb_hlt150 = h1_isoW1_EB_hlt150->GetBinContent(h1_isoW1_EB_hlt150->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW1ee_hlt150 = h1_isoW1_EE_hlt150->GetBinContent(h1_isoW1_EE_hlt150->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2eb_hlt150 = h1_isoW2_EB_hlt150->GetBinContent(h1_isoW2_EB_hlt150->GetXaxis()->FindBin(combinedPfIso03Phot));
    isW2ee_hlt150 = h1_isoW2_EE_hlt150->GetBinContent(h1_isoW2_EE_hlt150->GetXaxis()->FindBin(combinedPfIso03Phot));

    isFPRWeb_hlt150 = h1_isoFPRW_EB_hlt150->GetBinContent(h1_isoFPRW_EB_hlt150->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRWee_hlt150 = h1_isoFPRW_EE_hlt150->GetBinContent(h1_isoFPRW_EE_hlt150->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1eb_hlt150 = h1_isoFPRW1_EB_hlt150->GetBinContent(h1_isoFPRW1_EB_hlt150->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW1ee_hlt150 = h1_isoFPRW1_EE_hlt150->GetBinContent(h1_isoFPRW1_EE_hlt150->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2eb_hlt150 = h1_isoFPRW2_EB_hlt150->GetBinContent(h1_isoFPRW2_EB_hlt150->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));
    isFPRW2ee_hlt150 = h1_isoFPRW2_EE_hlt150->GetBinContent(h1_isoFPRW2_EE_hlt150->GetXaxis()->FindBin(combinedPfIsoFPR03Phot));


    // saving in the tree
    bool isEB = true;
    if ( fabs(etaPhot)>1.4442 ) isEB = false;      
    
    if (isEB) {
      isoW_EB_hlt30_t = isWeb_hlt30;
      isoW1_EB_hlt30_t = isW1eb_hlt30;
      isoW2_EB_hlt30_t = isW2eb_hlt30;
      isoFPRW_EB_hlt30_t = isFPRWeb_hlt30;
      isoFPRW1_EB_hlt30_t = isFPRW1eb_hlt30;
      isoFPRW2_EB_hlt30_t = isFPRW2eb_hlt30;

      isoW_EB_hlt50_t = isWeb_hlt50;
      isoW1_EB_hlt50_t = isW1eb_hlt50;
      isoW2_EB_hlt50_t = isW2eb_hlt50;
      isoFPRW_EB_hlt50_t = isFPRWeb_hlt50;
      isoFPRW1_EB_hlt50_t = isFPRW1eb_hlt50;
      isoFPRW2_EB_hlt50_t = isFPRW2eb_hlt50;

      isoW_EB_hlt75_t = isWeb_hlt75;
      isoW1_EB_hlt75_t = isW1eb_hlt75;
      isoW2_EB_hlt75_t = isW2eb_hlt75;
      isoFPRW_EB_hlt75_t = isFPRWeb_hlt75;
      isoFPRW1_EB_hlt75_t = isFPRW1eb_hlt75;
      isoFPRW2_EB_hlt75_t = isFPRW2eb_hlt75;

      isoW_EB_hlt90_t = isWeb_hlt90;
      isoW1_EB_hlt90_t = isW1eb_hlt90;
      isoW2_EB_hlt90_t = isW2eb_hlt90;
      isoFPRW_EB_hlt90_t = isFPRWeb_hlt90;
      isoFPRW1_EB_hlt90_t = isFPRW1eb_hlt90;
      isoFPRW2_EB_hlt90_t = isFPRW2eb_hlt90;

      isoW_EB_hlt135_t = isWeb_hlt135;
      isoW1_EB_hlt135_t = isW1eb_hlt135;
      isoW2_EB_hlt135_t = isW2eb_hlt135;
      isoFPRW_EB_hlt135_t = isFPRWeb_hlt135;
      isoFPRW1_EB_hlt135_t = isFPRW1eb_hlt135;
      isoFPRW2_EB_hlt135_t = isFPRW2eb_hlt135;

      isoW_EB_hlt150_t = isWeb_hlt150;
      isoW1_EB_hlt150_t = isW1eb_hlt150;
      isoW2_EB_hlt150_t = isW2eb_hlt150;
      isoFPRW_EB_hlt150_t = isFPRWeb_hlt150;
      isoFPRW1_EB_hlt150_t = isFPRW1eb_hlt150;
      isoFPRW2_EB_hlt150_t = isFPRW2eb_hlt150;

    } else {
      isoW_EB_hlt30_t = -1000.;
      isoW1_EB_hlt30_t = -1000.;
      isoW2_EB_hlt30_t = -1000.;
      isoFPRW_EB_hlt30_t = -1000.;
      isoFPRW1_EB_hlt30_t = -1000.;
      isoFPRW2_EB_hlt30_t = -1000.;

      isoW_EB_hlt50_t = -1000.;
      isoW1_EB_hlt50_t = -1000.;
      isoW2_EB_hlt50_t = -1000.;
      isoFPRW_EB_hlt50_t = -1000.;
      isoFPRW1_EB_hlt50_t = -1000.;
      isoFPRW2_EB_hlt50_t = -1000.;

      isoW_EB_hlt75_t = -1000.;
      isoW1_EB_hlt75_t = -1000.;
      isoW2_EB_hlt75_t = -1000.;
      isoFPRW_EB_hlt75_t = -1000.;
      isoFPRW1_EB_hlt75_t = -1000.;
      isoFPRW2_EB_hlt75_t = -1000.;

      isoW_EB_hlt90_t = -1000.;
      isoW1_EB_hlt90_t = -1000.;
      isoW2_EB_hlt90_t = -1000.;
      isoFPRW_EB_hlt90_t = -1000.;
      isoFPRW1_EB_hlt90_t = -1000.;
      isoFPRW2_EB_hlt90_t = -1000.;

      isoW_EB_hlt135_t = -1000.;
      isoW1_EB_hlt135_t = -1000.;
      isoW2_EB_hlt135_t = -1000.;
      isoFPRW_EB_hlt135_t = -1000.;
      isoFPRW1_EB_hlt135_t = -1000.;
      isoFPRW2_EB_hlt135_t = -1000.;

      isoW_EB_hlt150_t = -1000.;
      isoW1_EB_hlt150_t = -1000.;
      isoW2_EB_hlt150_t = -1000.;
      isoFPRW_EB_hlt150_t = -1000.;
      isoFPRW1_EB_hlt150_t = -1000.;
      isoFPRW2_EB_hlt150_t = -1000.;

    }
    
    if (!isEB) {
      isoW_EE_hlt30_t = isWee_hlt30;
      isoW1_EE_hlt30_t = isW1ee_hlt30;
      isoW2_EE_hlt30_t = isW2ee_hlt30;
      isoFPRW_EE_hlt30_t = isFPRWee_hlt30;
      isoFPRW1_EE_hlt30_t = isFPRW1ee_hlt30;
      isoFPRW2_EE_hlt30_t = isFPRW2ee_hlt30;

      isoW_EE_hlt50_t = isWee_hlt50;
      isoW1_EE_hlt50_t = isW1ee_hlt50;
      isoW2_EE_hlt50_t = isW2ee_hlt50;
      isoFPRW_EE_hlt50_t = isFPRWee_hlt50;
      isoFPRW1_EE_hlt50_t = isFPRW1ee_hlt50;
      isoFPRW2_EE_hlt50_t = isFPRW2ee_hlt50;

      isoW_EE_hlt75_t = isWee_hlt75;
      isoW1_EE_hlt75_t = isW1ee_hlt75;
      isoW2_EE_hlt75_t = isW2ee_hlt75;
      isoFPRW_EE_hlt75_t = isFPRWee_hlt75;
      isoFPRW1_EE_hlt75_t = isFPRW1ee_hlt75;
      isoFPRW2_EE_hlt75_t = isFPRW2ee_hlt75;

      isoW_EE_hlt90_t = isWee_hlt90;
      isoW1_EE_hlt90_t = isW1ee_hlt90;
      isoW2_EE_hlt90_t = isW2ee_hlt90;
      isoFPRW_EE_hlt90_t = isFPRWee_hlt90;
      isoFPRW1_EE_hlt90_t = isFPRW1ee_hlt90;
      isoFPRW2_EE_hlt90_t = isFPRW2ee_hlt90;

      isoW_EE_hlt135_t = isWee_hlt135;
      isoW1_EE_hlt135_t = isW1ee_hlt135;
      isoW2_EE_hlt135_t = isW2ee_hlt135;
      isoFPRW_EE_hlt135_t = isFPRWee_hlt135;
      isoFPRW1_EE_hlt135_t = isFPRW1ee_hlt135;
      isoFPRW2_EE_hlt135_t = isFPRW2ee_hlt135;

      isoW_EE_hlt150_t = isWee_hlt150;
      isoW1_EE_hlt150_t = isW1ee_hlt150;
      isoW2_EE_hlt150_t = isW2ee_hlt150;
      isoFPRW_EE_hlt150_t = isFPRWee_hlt150;
      isoFPRW1_EE_hlt150_t = isFPRW1ee_hlt150;
      isoFPRW2_EE_hlt150_t = isFPRW2ee_hlt150;

    } else {
      isoW_EE_hlt30_t = -1000.;
      isoW1_EE_hlt30_t = -1000.;
      isoW2_EE_hlt30_t = -1000.;
      isoFPRW_EE_hlt30_t = -1000.;
      isoFPRW1_EE_hlt30_t = -1000.;
      isoFPRW2_EE_hlt30_t = -1000.;

      isoW_EE_hlt50_t = -1000.;
      isoW1_EE_hlt50_t = -1000.;
      isoW2_EE_hlt50_t = -1000.;
      isoFPRW_EE_hlt50_t = -1000.;
      isoFPRW1_EE_hlt50_t = -1000.;
      isoFPRW2_EE_hlt50_t = -1000.;

      isoW_EE_hlt75_t = -1000.;
      isoW1_EE_hlt75_t = -1000.;
      isoW2_EE_hlt75_t = -1000.;
      isoFPRW_EE_hlt75_t = -1000.;
      isoFPRW1_EE_hlt75_t = -1000.;
      isoFPRW2_EE_hlt75_t = -1000.;

      isoW_EE_hlt90_t = -1000.;
      isoW1_EE_hlt90_t = -1000.;
      isoW2_EE_hlt90_t = -1000.;
      isoFPRW_EE_hlt90_t = -1000.;
      isoFPRW1_EE_hlt90_t = -1000.;
      isoFPRW2_EE_hlt90_t = -1000.;

      isoW_EE_hlt135_t = -1000.;
      isoW1_EE_hlt135_t = -1000.;
      isoW2_EE_hlt135_t = -1000.;
      isoFPRW_EE_hlt135_t = -1000.;
      isoFPRW1_EE_hlt135_t = -1000.;
      isoFPRW2_EE_hlt135_t = -1000.;

      isoW_EE_hlt150_t = -1000.;
      isoW1_EE_hlt150_t = -1000.;
      isoW2_EE_hlt150_t = -1000.;
      isoFPRW_EE_hlt150_t = -1000.;
      isoFPRW1_EE_hlt150_t = -1000.;
      isoFPRW2_EE_hlt150_t = -1000.;


    }

    treeWithWeights->Fill();

  }
  
  cout << "done with the loop. Ready to write" << endl;
  treeWithWeights->Write();
  cout << "done with the writing" << endl;
  outFile->Write();
  outFile->Close();
}
