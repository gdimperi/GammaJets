#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void calculate_weights(int isFPR){

  gStyle->SetOptStat(0);
  
  // input: v6
  TChain mc("finalTree");
  TChain mcZ("myTaPDir/myTree");
  
  //string inputDir = "/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/";
  string inputDir = "/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";
  string inputDirZ = "/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/";
  
  string s_cut_target_EB[61];
  string s_cut_target_EE[18];
  string s_cut_EB = "isIsolatedGenPhot  && TMath::Abs(etaPhot)< 1.4442";
  string s_cut_EE = "isIsolatedGenPhot  && TMath::Abs(etaPhot)> 1.566 && TMath::Abs(etaPhot)<2.5";
  string s_cut_start_EB = " TMath::Abs(probe_eta)< 1.4442 && probe_pt>40 && probe_pt<65";
  string s_cut_start_EE = " TMath::Abs(probe_eta)> 1.566 && TMath::Abs(probe_eta)<2.5 && probe_pt>40 && probe_pt<65";
  std::ostringstream stringtmp;
  
  int nBins = 60;
  //int nBinsPt = 120;
  float min_iso = -5.;
  float max_iso = 15.; 

  
  int bin_low_edge_EB[61] = {40,47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480};
  int bin_high_edge_EB[61] ={47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480,1000};
  int bin_low_edge_EE[18]={40,65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270 };
  int bin_high_edge_EE[18]={65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270,1000 };
  
  
//   bin_low_edge_EB[0] =165;
//   bin_high_edge_EB[41] = 270;

//   for (int i =0; i<41; i++ ){
//     if (bin_low_edge_EB[i]<180){
//       bin_low_edge_EB[i+1] = bin_low_edge_EB[i]+ 1;
//       bin_high_edge_EB[i] = bin_low_edge_EB[i+1];
//      }
//     else if(bin_low_edge_EB[i] < 210){
//       bin_low_edge_EB[i+1] = bin_low_edge_EB[i]+2 ;
//       bin_high_edge_EB[i] = bin_low_edge_EB[i+1];

//     }
//     else if(bin_low_edge_EB[i] < 270){
//       bin_low_edge_EB[i+1] = bin_low_edge_EB[i]+5;
//       bin_high_edge_EB[i] = bin_low_edge_EB[i+1];
//     }
//   }
//   bin_low_edge_EB[42] = 270;
//   bin_low_edge_EB[43] = 290;
//   bin_low_edge_EB[44] = 310;
//   bin_low_edge_EB[45] = 340;
//   bin_low_edge_EB[46] = 380;
//   bin_low_edge_EB[47] = 480;
//   bin_high_edge_EB[42] = 290;
//   bin_high_edge_EB[43] = 310;
//   bin_high_edge_EB[44] = 340;
//   bin_high_edge_EB[45] = 380;
//   bin_high_edge_EB[46] = 480;
//   bin_high_edge_EB[47] = 1000;

//   bin_low_edge_EE[0] = 165  ; 
//   bin_low_edge_EE[1] = 168  ; 
//   bin_low_edge_EE[2] = 172  ; 
//   bin_low_edge_EE[3] = 176  ; 
//   bin_low_edge_EE[4] = 180  ; 
//   bin_low_edge_EE[5] = 186  ; 
//   bin_low_edge_EE[6] = 192  ; 
//   bin_low_edge_EE[6] = 198  ; 
//   bin_low_edge_EE[7] = 206  ; 
//   bin_low_edge_EE[8] = 215  ; 
//   bin_low_edge_EE[9] = 225  ; 
//   bin_low_edge_EE[10] = 240 ; 
//   bin_low_edge_EE[11] = 270 ; 

//   bin_high_edge_EE[0] =  168;
//   bin_high_edge_EE[1] =  172;
//   bin_high_edge_EE[2] =  176;
//   bin_high_edge_EE[3] =  180;
//   bin_high_edge_EE[4] =  186;
//   bin_high_edge_EE[5] =  192;
//   bin_high_edge_EE[6] =  198;
//   bin_high_edge_EE[6] =  206;
//   bin_high_edge_EE[7] =  215;
//   bin_high_edge_EE[8] =  225;
//   bin_high_edge_EE[9] =  240;
//   bin_high_edge_EE[10] = 270;
//   bin_high_edge_EE[11] = 1000;


  //create cut strings for EB
  for (int i =0; i<61; i++ ){

    stringtmp << "(" << s_cut_EB << " && ptPhot> " << bin_low_edge_EB[i] << " && ptPhot< " << bin_high_edge_EB[i] << " )*weight" ;
    std::cout << i << "  "<< stringtmp.str() << std::endl;
    s_cut_target_EB[i] = stringtmp.str();
    stringtmp.str("");
    stringtmp.clear();

  }
     
  //create cut strings for EE
  for (int i =0; i<18; i++ ){

    stringtmp << "("<< s_cut_EE << " && ptPhot > " << bin_low_edge_EE[i] << " && ptPhot < " << bin_high_edge_EE[i] << ")*weight";
    std::cout << i << "  "<< stringtmp.str() << std::endl;
    s_cut_target_EE[i] = stringtmp.str();
    stringtmp.str("");
    stringtmp.clear();
    
  }


  //
//   dataZ.Add((inputDirZ+"/DoubleElectron_Run2012A_tagTight_HLT30.root").c_str());
//   dataZ.Add((inputDirZ+"/DoubleElectron_Run2012B_tagTight_HLT30.root").c_str());
//   dataZ.Add((inputDirZ+"/DoubleElectron_Run2012C_tagTight_HLT30.root").c_str());
//   dataZ.Add((inputDirZ+"/DoubleElectron_Run2012D_tagTight_HLT30.root").c_str());
    
  mcZ.Add((inputDirZ+"/DYJetsToLL_M-50_madgraph_tagTight_mcMatch1_HLT30.root").c_str());

  //hight pt bins exlcluded
  mc.Add((inputDir+"HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT30/QCDEM*root").c_str());
  
  //mc.Add((inputDir+"HLT50/G_Pt*root").c_str());
  mc.Add((inputDir+"HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT50/QCDEM*root").c_str());
  
  
  //mc.Add((inputDir+"HLT75/G_Pt*root").c_str());
  mc.Add((inputDir+"HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT75/QCDEM*root").c_str());
  
  
  //mc.Add((inputDir+"HLT90/G_Pt*root").c_str());
  mc.Add((inputDir+"HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT90/QCDEM*root").c_str());
  
  
  //mc.Add((inputDir+"HLT135/G_Pt*root").c_str());
  mc.Add((inputDir+"HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT135/QCDEM*root").c_str());

  
  //mc.Add((inputDir+"HLT150/G_Pt*root").c_str());
  mc.Add((inputDir+"HLT150/G_Pt-120to170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT150/G_Pt-15to30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT150/G_Pt-170to300_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT150/G_Pt-300to470_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT150/G_Pt-30to50_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT150/G_Pt-50to80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT150/G_Pt-80to120_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
  mc.Add((inputDir+"HLT150/QCDEM*root").c_str());
  
  // output
  std::string outputDir;
  if (isFPR) outputDir = "weights_FPR/";
  else outputDir = "weights/";
  //TFile* outputFile_EB;
  //TFile* outputFile_EE;
  TFile* outputFile;

  //outputFile_EB  = new TFile((outputDir+"weights_highPt_EB.root").c_str(), "RECREATE");
  //outputFile_EE  = new TFile((outputDir+"weights_hightPt_EE.root").c_str(), "RECREATE");
  outputFile = new TFile((outputDir+"weights_hightPt.root").c_str(), "RECREATE");

  cout << "start creating histograms" << endl;

  outputFile->cd();

//   TH1F* h_pt_start_EB = new TH1F("h_pt_start_EB", "h_pt_start_EB", nBinsPt, 40, 65.);      
//   TH1F* h_pt_target_EB = new TH1F("h_pt_target_EB", "h_pt_target_EB", nBinsPt, 40, 65.);            
//   TH1F* h_ptWeight_EB;
//   TH1F* h_pt_start_EE = new TH1F("h_pt_start_EE", "h_pt_start_EE", nBinsPt, 40, 65.);      
//   TH1F* h_pt_target_EE = new TH1F("h_pt_target_EE", "h_pt_target_EE", nBinsPt, 40, 65.);            
//   TH1F* h_ptWeight_EE;

//   h_pt_start_EB ->Sumw2();
//   h_pt_target_EB->Sumw2();

//   h_pt_start_EE ->Sumw2();
//   h_pt_target_EE->Sumw2();

  
  TH1F* h_iso_start_EB_hlt30  = new TH1F("h_iso_start_EB_hlt30", "", nBins, min_iso, max_iso);      
  TH1F* h_iso_start_EB_hlt50  = new TH1F("h_iso_start_EB_hlt50", "", nBins, min_iso, max_iso);     
  TH1F* h_iso_start_EB_hlt75  = new TH1F("h_iso_start_EB_hlt75", "", nBins, min_iso, max_iso);      
  TH1F* h_iso_start_EB_hlt90  = new TH1F("h_iso_start_EB_hlt90", "", nBins, min_iso, max_iso);      
  TH1F* h_iso_start_EB_hlt135  = new TH1F("h_iso_start_EB_hlt135", "", nBins, min_iso, max_iso);      
  TH1F* h_iso_start_EB_hlt150  = new TH1F("h_iso_start_EB_hlt150", "", nBins, min_iso, max_iso);      

  TH1F* h_iso_target_EB[61];
  TH1F* h_isoWeight_EB[61];

  h_iso_start_EB_hlt30->Sumw2();
  h_iso_start_EB_hlt50->Sumw2();
  h_iso_start_EB_hlt75->Sumw2();
  h_iso_start_EB_hlt90->Sumw2();
  h_iso_start_EB_hlt135->Sumw2();
  h_iso_start_EB_hlt150->Sumw2();
 
  TH1F* h_iso_start_EE_hlt30  = new TH1F("h_iso_start_EE_hlt30", "", nBins, min_iso, max_iso);      
  TH1F* h_iso_start_EE_hlt50  = new TH1F("h_iso_start_EE_hlt50", "", nBins, min_iso, max_iso);     
  TH1F* h_iso_start_EE_hlt75  = new TH1F("h_iso_start_EE_hlt75", "", nBins, min_iso, max_iso);      
  TH1F* h_iso_start_EE_hlt90  = new TH1F("h_iso_start_EE_hlt90", "", nBins, min_iso, max_iso);      
  TH1F* h_iso_start_EE_hlt135  = new TH1F("h_iso_start_EE_hlt135", "", nBins, min_iso, max_iso);      
  TH1F* h_iso_start_EE_hlt150  = new TH1F("h_iso_start_EE_hlt150", "", nBins, min_iso, max_iso);      

  TH1F* h_iso_target_EE[18];
  TH1F* h_isoWeight_EE[18];

  h_iso_start_EE_hlt30->Sumw2();
  h_iso_start_EE_hlt50->Sumw2();
  h_iso_start_EE_hlt75->Sumw2();
  h_iso_start_EE_hlt90->Sumw2();
  h_iso_start_EE_hlt135->Sumw2();
  h_iso_start_EE_hlt150->Sumw2();

  cout << "histo created" << endl;

  stringtmp.str("");
  stringtmp.clear();
  for(int i=0; i<61; i++){

    stringtmp << "h_iso_target_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    h_iso_target_EB[i] = new TH1F((stringtmp.str()).c_str(),"", nBins, min_iso, max_iso );
    h_iso_target_EB[i]->Sumw2();
    stringtmp.str("");
    stringtmp.clear();
  }
  
  for(int i=0; i<18; i++){

    stringtmp << "h_iso_target_EE_bin_"<< bin_low_edge_EE[i] << "_" << bin_high_edge_EE[i] ; 
    h_iso_target_EE[i] = new TH1F((stringtmp.str()).c_str(),"", nBins, min_iso, max_iso );
    h_iso_target_EE[i]->Sumw2();
    stringtmp.str("");
    stringtmp.clear();
  }


  //   //w1 and w2 (for systematics) 
  //   TH1F* h_syst_EB[61];
  //   TH1F* h_syst_EE[18];
  //   TH1F* h_isoWeight1_EB[61];
  //   TH1F* h_isoWeight1_EE[18];
  //   TH1F* h_isoWeight2_EB[61];
  //   TH1F* h_isoWeight2_EE[18];
  
  // cout << "now projecting " << endl;
  //   dataZ.Project("h_pt_start_EB", "probe_pt", s_cut_start_EB.c_str());
  //   dataZ.Project("h_pt_start_EE", "probe_pt", s_cut_start_EE.c_str());
  //   cout << "done with projecting pt Zee" << endl;
  //   mc.Project("h_pt_target_EB", "ptPhot", (s_cut_EB+" && ptPhot>40 && ptPhot<65").c_str());
  //   mc.Project("h_pt_target_EE", "ptPhot", (s_cut_EB+" && ptPhot>40 && ptPhot<65").c_str());
  //   cout << "done with projecting pt phot" << endl;
  
  cout << "now projecting " << endl;
  if (!isFPR){

    //################################################
    //#                                              #   
    //#               non FPR                        #
    //#                                              #
    //################################################    
 
    mcZ.Project("h_iso_start_EB_hlt30", "combinedPfIso03Phot", ("("+s_cut_start_EB+")* r9WeightEB_hlt30 *rhoWeight30*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt50", "combinedPfIso03Phot", ("("+s_cut_start_EB+")* r9WeightEB_hlt50 *rhoWeight50*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt75", "combinedPfIso03Phot", ("("+s_cut_start_EB+")* r9WeightEB_hlt75 *rhoWeight75*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt90", "combinedPfIso03Phot", ("("+s_cut_start_EB+")* r9WeightEB_hlt90 *rhoWeight90*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt135", "combinedPfIso03Phot", ("("+s_cut_start_EB+")*r9WeightEB_hlt135*rhoWeight135*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt150", "combinedPfIso03Phot", ("("+s_cut_start_EB+")*r9WeightEB_hlt150*rhoWeight150*etaWeight*ptWeight_40_65").c_str());

    mcZ.Project("h_iso_start_EE_hlt30", "combinedPfIso03Phot", ("("+s_cut_start_EE+") *r9WeightEE_hlt30 *rhoWeight30*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt50", "combinedPfIso03Phot", ("("+s_cut_start_EE+") *r9WeightEE_hlt50 *rhoWeight50*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt75", "combinedPfIso03Phot", ("("+s_cut_start_EE+") *r9WeightEE_hlt75 *rhoWeight75*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt90", "combinedPfIso03Phot", ("("+s_cut_start_EE+") *r9WeightEE_hlt90 *rhoWeight90*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt135", "combinedPfIso03Phot", ("("+s_cut_start_EE+")*r9WeightEE_hlt135*rhoWeight135*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt150", "combinedPfIso03Phot", ("("+s_cut_start_EE+")*r9WeightEE_hlt150*rhoWeight150*etaWeight*ptWeight_40_65").c_str());

    for(int i=0; i<61; i++){
      mc.Project((TString)h_iso_target_EB[i]->GetName(), "combinedPfIso03Phot", s_cut_target_EB[i].c_str() ) ;

    }
    for(int i=0; i<18; i++){
      mc.Project((TString)h_iso_target_EE[i]->GetName(), "combinedPfIso03Phot", s_cut_target_EE[i].c_str() );

    }

  }
  else{
 
    //################################################
    //#                                              #   
    //#                    FPR                       #
    //#                                              #
    //################################################    

    mcZ.Project("h_iso_start_EB_hlt30", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EB+")* r9WeightEB_hlt30 *rhoWeight30*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt50", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EB+")* r9WeightEB_hlt50 *rhoWeight50*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt75", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EB+")* r9WeightEB_hlt75 *rhoWeight75*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt90", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EB+")* r9WeightEB_hlt90 *rhoWeight90*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt135", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EB+")*r9WeightEB_hlt135*rhoWeight135*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EB_hlt150", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EB+")*r9WeightEB_hlt150*rhoWeight150*etaWeight*ptWeight_40_65").c_str());
											    													     
    mcZ.Project("h_iso_start_EE_hlt30", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EE+")*r9WeightEE_hlt30  *rhoWeight30*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt50", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EE+")*r9WeightEE_hlt50  *rhoWeight50*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt75", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EE+")*r9WeightEE_hlt75  *rhoWeight75*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt90", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EE+")*r9WeightEE_hlt90  *rhoWeight90*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt135", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EE+")*r9WeightEE_hlt135*rhoWeight135*etaWeight*ptWeight_40_65").c_str());
    mcZ.Project("h_iso_start_EE_hlt150", "combinedPfIsoFPR03Phot", ("("+s_cut_start_EE+")*r9WeightEE_hlt150*rhoWeight150*etaWeight*ptWeight_40_65").c_str());

    for(int i=0; i<61; i++){
      mc.Project((TString)h_iso_target_EB[i]->GetName(), "combinedPfIsoFPR03Phot", s_cut_target_EB[i].c_str() ) ;

    }
    for(int i=0; i<18; i++){
      mc.Project((TString)h_iso_target_EE[i]->GetName(), "combinedPfIsoFPR03Phot", s_cut_target_EE[i].c_str() );

    }

  }

  cout << "done with the projections" << endl;    
  // normalize histos
  float integral;

  // integral = h_pt_start_EB			->Integral();
  //   h_pt_start_EB					->Scale(1./integral);
  //   integral = h_pt_target_EB			->Integral();
  //   h_pt_target_EB				->Scale(1./integral);
  
  integral = h_iso_start_EB_hlt30		->Integral();
  h_iso_start_EB_hlt30			    	->Scale(1./integral);
  integral = h_iso_start_EB_hlt50		->Integral();
  h_iso_start_EB_hlt50			    	->Scale(1./integral);
  integral = h_iso_start_EB_hlt75		->Integral();
  h_iso_start_EB_hlt75			    	->Scale(1./integral);
  integral = h_iso_start_EB_hlt90		->Integral();
  h_iso_start_EB_hlt90			    	->Scale(1./integral);
  integral = h_iso_start_EB_hlt135		->Integral();
  h_iso_start_EB_hlt135			    	->Scale(1./integral);
  integral = h_iso_start_EB_hlt135		->Integral();
  h_iso_start_EB_hlt135			    	->Scale(1./integral);
  integral = h_iso_start_EB_hlt150		->Integral();
  h_iso_start_EB_hlt150			    	->Scale(1./integral);


  for(int i=0; i<61; i++){
    integral = h_iso_target_EB[i]		->Integral();
    h_iso_target_EB[i]				->Scale(1./integral);  
  }

  // integral = h_pt_start_EE			->Integral();
  //   h_pt_start_EE					->Scale(1./integral);
  //   integral = h_pt_target_EE			->Integral();
  //   h_pt_target_EE				->Scale(1./integral);

  integral = h_iso_start_EE_hlt30		->Integral();
  h_iso_start_EE_hlt30			    	->Scale(1./integral);
  integral = h_iso_start_EE_hlt50		->Integral();
  h_iso_start_EE_hlt50			    	->Scale(1./integral);
  integral = h_iso_start_EE_hlt75		->Integral();
  h_iso_start_EE_hlt75			    	->Scale(1./integral);
  integral = h_iso_start_EE_hlt90		->Integral();
  h_iso_start_EE_hlt90			    	->Scale(1./integral);
  integral = h_iso_start_EE_hlt135		->Integral();
  h_iso_start_EE_hlt135			    	->Scale(1./integral);
  integral = h_iso_start_EE_hlt135		->Integral();
  h_iso_start_EE_hlt135			    	->Scale(1./integral);
  integral = h_iso_start_EE_hlt150		->Integral();
  h_iso_start_EE_hlt150			    	->Scale(1./integral);

  for(int i=0; i<18; i++){
    integral = h_iso_target_EE[i]		->Integral();
    h_iso_target_EE[i]				->Scale(1./integral);  
  }


  
  //rebin
  //h_pt_start_EB					->Rebin(3);
  //h_pt_target_EB				->Rebin(3);
  //  h_iso_start_EB_hlt30				->Rebin(3);
//   h_iso_start_EB_hlt50				->Rebin(3);
//   h_iso_start_EB_hlt75				->Rebin(3);
//   h_iso_start_EB_hlt90				->Rebin(3);
//   h_iso_start_EB_hlt135				->Rebin(3);
//   h_iso_start_EB_hlt150				->Rebin(3);
//  for(int i=0; i<61; i++){
//    h_iso_target_EB[i]				->Rebin(3);  
//  }

  //h_pt_start_EE					->Rebin(3);
  //h_pt_target_EE				->Rebin(3);
  //  h_iso_start_EE_hlt30				->Rebin(3);
//   h_iso_start_EE_hlt50				->Rebin(3);
//   h_iso_start_EE_hlt75				->Rebin(3);
//   h_iso_start_EE_hlt90				->Rebin(3);
//   h_iso_start_EE_hlt135				->Rebin(3);
//   h_iso_start_EE_hlt150				->Rebin(3);
//   for(int i=0; i<18; i++){
//     h_iso_target_EE[i]				->Rebin(3);  
//   }
  
  
//   // saving in the output file
//   h_pt_start_EB		->Write();   	
//   h_pt_target_EB	->Write(); 	
   h_iso_start_EB_hlt30	->Write();    	
   h_iso_start_EB_hlt50	->Write();    	
   h_iso_start_EB_hlt75	->Write();    	
   h_iso_start_EB_hlt90	->Write();    	
   h_iso_start_EB_hlt135->Write();    	
   h_iso_start_EB_hlt150->Write();    	

   for(int i=0; i<61; i++){
     h_iso_target_EB[i]		 ->Write();  
   }

//   h_pt_start_EE		->Write();   	

   h_iso_start_EE_hlt30	->Write();    	
   h_iso_start_EE_hlt50	->Write();    	
   h_iso_start_EE_hlt75	->Write();    	
   h_iso_start_EE_hlt90	->Write();    	
   h_iso_start_EE_hlt135->Write();    	
   h_iso_start_EE_hlt150->Write();    	

   for(int i=0; i<18; i++){
     h_iso_target_EE[i]		 ->Write();  
   }

  cout << "done with first step. Moving to the weights" << endl;
  
//   // now computing the weights
//   h_ptWeight_EB = (TH1F*)h_pt_target_EB->Clone("h_ptWeight_EB");
//   h_ptWeight_EB->Divide(h_pt_start_EB);
//   h_ptWeight_EE = (TH1F*)h_pt_target_EE->Clone("h_ptWeight_EE");
//   h_ptWeight_EE->Divide(h_pt_start_EE);
  

  stringtmp.str("");
  stringtmp.clear();
  //hlt30
  for(int i=0; i<2; i++){
    stringtmp << "h_isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    h_isoWeight_EB[i] = (TH1F*)h_iso_target_EB[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EB[i]->Divide(h_iso_start_EB_hlt30);
    stringtmp.str("");
    stringtmp.clear();
  }
  //hlt50
  for(int i=2; i<4; i++){
    stringtmp << "h_isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    h_isoWeight_EB[i] = (TH1F*)h_iso_target_EB[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EB[i]->Divide(h_iso_start_EB_hlt50);
    stringtmp.str("");
    stringtmp.clear();
  }
  //hlt75
  for(int i=4; i<7; i++){
    stringtmp << "h_isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    h_isoWeight_EB[i] = (TH1F*)h_iso_target_EB[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EB[i]->Divide(h_iso_start_EB_hlt75);
    stringtmp.str("");
    stringtmp.clear();
  }
  //hlt90
  for(int i=7; i<13; i++){
    stringtmp << "h_isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    h_isoWeight_EB[i] = (TH1F*)h_iso_target_EB[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EB[i]->Divide(h_iso_start_EB_hlt90);
    stringtmp.str("");
    stringtmp.clear();
  }
  //hlt135
  for(int i=13; i<28; i++){
    stringtmp << "h_isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    h_isoWeight_EB[i] = (TH1F*)h_iso_target_EB[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EB[i]->Divide(h_iso_start_EB_hlt135);
    stringtmp.str("");
    stringtmp.clear();
  }
  //hlt150
  for(int i=28; i<61; i++){
    stringtmp << "h_isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    h_isoWeight_EB[i] = (TH1F*)h_iso_target_EB[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EB[i]->Divide(h_iso_start_EB_hlt150);
    stringtmp.str("");
    stringtmp.clear();
  }

  //hlt30
  stringtmp << "h_isoW_EE_bin_"<< bin_low_edge_EE[0] << "_" << bin_high_edge_EE[0] ; 
  h_isoWeight_EE[0] = (TH1F*)h_iso_target_EE[0]->Clone((stringtmp.str()).c_str());
  h_isoWeight_EE[0]->Divide(h_iso_start_EE_hlt30); 
  stringtmp.str("");
  stringtmp.clear();

  //hlt50
  stringtmp << "h_isoW_EE_bin_"<< bin_low_edge_EE[1] << "_" << bin_high_edge_EE[1] ; 
  h_isoWeight_EE[1] = (TH1F*)h_iso_target_EE[1]->Clone((stringtmp.str()).c_str());
  h_isoWeight_EE[1]->Divide(h_iso_start_EE_hlt50); 
  stringtmp.str("");
  stringtmp.clear();

  //hlt75
  stringtmp << "h_isoW_EE_bin_"<< bin_low_edge_EE[2] << "_" << bin_high_edge_EE[2] ; 
  h_isoWeight_EE[2] = (TH1F*)h_iso_target_EE[2]->Clone((stringtmp.str()).c_str());
  h_isoWeight_EE[2]->Divide(h_iso_start_EE_hlt75); 
  stringtmp.str("");
  stringtmp.clear();

  //hlt90
  for(int i=3; i<5; i++){
    stringtmp << "h_isoW_EE_bin_"<< bin_low_edge_EE[i] << "_" << bin_high_edge_EE[i] ; 
    h_isoWeight_EE[i] = (TH1F*)h_iso_target_EE[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EE[i]->Divide(h_iso_start_EE_hlt90); 
    stringtmp.str("");
    stringtmp.clear();
  }

  //hlt135
  for(int i=5; i<9; i++){
    stringtmp << "h_isoW_EE_bin_"<< bin_low_edge_EE[i] << "_" << bin_high_edge_EE[i] ; 
    h_isoWeight_EE[i] = (TH1F*)h_iso_target_EE[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EE[i]->Divide(h_iso_start_EE_hlt135); 
    stringtmp.str("");
    stringtmp.clear();
  }

  //hlt150
  for(int i=9; i<18; i++){
    stringtmp << "h_isoW_EE_bin_"<< bin_low_edge_EE[i] << "_" << bin_high_edge_EE[i] ; 
    h_isoWeight_EE[i] = (TH1F*)h_iso_target_EE[i]->Clone((stringtmp.str()).c_str());
    h_isoWeight_EE[i]->Divide(h_iso_start_EE_hlt150); 
    stringtmp.str("");
    stringtmp.clear();
  }

  
  /*
  //w1 and w2 (for systematics) 
  h_syst_EB = (TH1F*)combPfIso03Phot_notMatched_notPassMVA_EB    	->Clone("h_syst_EB");
  h_syst_EB								->Divide(combPfIso03Phot_data_notPassMVA_EB);
  h_syst_EE = (TH1F*)combPfIso03Phot_notMatched_notPassMVA_EE    	->Clone("h_syst_EE");
  h_syst_EE								->Divide(combPfIso03Phot_data_notPassMVA_EE);
  
  h_isoWeight1_EB = (TH1F*)h_isoWeight_EB				->Clone("h_isoWeight1_EB");
  h_isoWeight1_EB							->Multiply(h_syst_EB);
  h_isoWeight1_EE = (TH1F*)h_isoWeight_EE				->Clone("h_isoWeight1_EE");
  h_isoWeight1_EE							->Multiply(h_syst_EE);
  
  h_isoWeight2_EB = (TH1F*)h_isoWeight_EB				->Clone("h_isoWeight2_EB");
  h_isoWeight2_EB							->Divide(h_syst_EB);
  h_isoWeight2_EE = (TH1F*)h_isoWeight_EE				->Clone("h_isoWeight2_EE");
  h_isoWeight2_EE							->Divide(h_syst_EE);
  */

  //h_ptWeight_EB->Smooth();  
  //h_ptWeight_EE->Smooth();  
  for (int i = 0; i<61; i++) h_isoWeight_EB[i]->Smooth();
  for (int i = 0; i<18; i++) h_isoWeight_EE[i]->Smooth();

/*
  h_isoWeight1_EB->Smooth();
  h_isoWeight1_EE->Smooth();
  h_isoWeight2_EB->Smooth();
  h_isoWeight2_EE->Smooth();
*/  
  
  //h_ptWeight_EB->Write();  
  //h_ptWeight_EE->Write();  
  for (int i = 0; i<61; i++)  h_isoWeight_EB[i]->Write();
  for (int i = 0; i<18; i++)  h_isoWeight_EE[i]->Write();
  /* 
   h_isoWeight1_EB->Write();
  h_isoWeight1_EE->Write();
  h_isoWeight2_EB->Write();
  h_isoWeight2_EE->Write();
  */
  

  outputFile->Close();

}
