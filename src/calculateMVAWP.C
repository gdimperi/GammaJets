#include "TCanvas.h"
#include "string"
#include <iostream>
#include <fstream>
#include "cstdio"
#include "TFile.h"
#include "TH2F.h"
#include "TChain.h"
#include "TTree.h"
#include "TStyle.h"
#include "TColor.h"
#include "TMath.h"
#include "TProfile.h"
#include "TLegend.h"

using namespace std;

vector<int> calculateBinEdge(TH1F* BDToutput);
vector<double> calculateBDTEdge(TH1F* BDToutput, vector<int> binEdge);



void calculateMVAWP(){

 
  //loading MC to fit
  TChain mc("finalTree");
  
  //v6 and preselIso < 5 GeV
  //hlt30

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

  //hlt50

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
  
  //hlt75
  
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
   
  //hlt90
  
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

  //hlt135
  
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
  
  //hlt150
  
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
  

  TFile* outFile= new TFile("mvaPlots.root", "RECREATE");

  outFile->cd();

  TH1F* BDToutput_EB          = new TH1F("BDToutput_EB", "BDToutput_EB", 100000, -1., 1.);
  TH1F* BDToutput_EE          = new TH1F("BDToutput_EE", "BDToutput_EE", 100000, -1., 1.);

    
  string  conditions_EB, conditions_EE;
  conditions_EB = "(isIsolatedGenPhot  && (TMath::Abs(etaPhot)<1.4442))*weight";
  conditions_EE = "(isIsolatedGenPhot  && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5))*weight";
  mc.Project("BDToutput_EB", "mvaIdPhot" , conditions_EB.c_str());
  mc.Project("BDToutput_EE", "mvaIdPhot" , conditions_EE.c_str());


  BDToutput_EB->Write();
  BDToutput_EE->Write();

  vector<int> binEdge_EB, binEdge_EE;
  vector<double> BDTEdge_EB, BDTEdge_EE;
  
  cout << "------------- EB ------------" << endl;
  binEdge_EB = calculateBinEdge(BDToutput_EB);
  BDTEdge_EB = calculateBDTEdge(BDToutput_EB, binEdge_EB);
  cout << "------------- EE ------------" << endl;
  binEdge_EE = calculateBinEdge(BDToutput_EE);
  BDTEdge_EE = calculateBDTEdge(BDToutput_EE, binEdge_EE);

  ofstream myfile;
  myfile.open ("MVA_WP.txt");
  myfile << "     MVA WP \n";
  myfile << "     80       90       95       99\n";
  myfile << "-------------------------\n\n";
  myfile << "EB:  "<< BDTEdge_EB[0]  <<"    "<< BDTEdge_EB[1] <<"    "<< BDTEdge_EB[2] <<"    "<< BDTEdge_EB[3] <<"\n" ;
  myfile << "EE:  "<< BDTEdge_EE[0]  <<"    "<< BDTEdge_EE[1] <<"    "<< BDTEdge_EE[2] <<"    "<< BDTEdge_EE[3] <<"\n" ;


  myfile.close();

  outFile->Close();

}

vector<int> calculateBinEdge(TH1F* BDToutput) {

  vector<int> binEdge;
  int bin_edge80=-1;
  int bin_edge90=-1;
  int bin_edge95=-1;
  int bin_edge99=-1;
  double entries = (double)BDToutput->Integral(1,(int)BDToutput->GetNbinsX()); //from bin 1
  double wp80_entries = entries*0.80;
  double wp90_entries = entries*0.90;
  double wp95_entries = entries*0.95;
  double wp99_entries = entries*0.99;

  cout << "tot entries  = " << entries << endl;  
  cout << "wp80_entries = " << wp80_entries << endl;
  cout << "wp90_entries = " << wp90_entries << endl;
  cout << "wp95_entries = " << wp95_entries << endl;
  cout << "wp99_entries = " << wp99_entries << endl;

  double sum_content=0;
  
  int nbinsX = (int)BDToutput->GetNbinsX();
  cout << "n bins BDToutput : " << nbinsX << endl;

      
  for(int i=nbinsX; i>=1; i--){
    
    sum_content+=(double)BDToutput->GetBinContent(i);
    
    //if(i%1000 == 0 && i>90000){
    //  cout << "bin content " << i << "    = " <<  (double)BDToutput->GetBinContent(i) << std::endl;
    //  cout << "sum content " << i << "    = " << sum_content << endl; 
    //}
    
    if(sum_content>wp80_entries && bin_edge80==-1) {
      cout << " sum_content = " << sum_content << " >    wp80_entries = " << wp80_entries << endl; 
      cout << "fraction = " << ((double)BDToutput->Integral(i, nbinsX))/entries;
      bin_edge80=i;
      
      //cout<< "sum_content = " << sum_content << endl;
      cout<< "bin edge 0.80"  << " = " << bin_edge80 << endl;
      binEdge.push_back(bin_edge80);
      //total_sum+=sum_content;
      //sum_content=0;
    }
    
    
    if(sum_content>wp90_entries && bin_edge90==-1) {
      cout << " sum_content = " << sum_content << " >    wp90_entries = " << wp90_entries << endl;       
      cout << "fraction = " << ((double)BDToutput->Integral(i, nbinsX))/entries;
      bin_edge90=i;
      
      std::cout<< "sum_content = " << sum_content << std::endl;
      std::cout<< "bin edge 0.90"  << " = " << bin_edge90 << std::endl;
      binEdge.push_back(bin_edge90);
      //total_sum+=sum_content;
      //sum_content=0;
      
    }   
    
    if(sum_content>wp95_entries && bin_edge95==-1) {
      cout << " sum_content = " << sum_content << " >    wp95_entries = " << wp95_entries << endl;       
      cout << "fraction = " << ((double)BDToutput->Integral(i, nbinsX))/entries;
      bin_edge95=i;
      
      std::cout<< "sum_content = " << sum_content << std::endl;
      std::cout<< "bin edge 0.95"  << " = " << bin_edge95 << std::endl;
      binEdge.push_back(bin_edge95);
      //total_sum+=sum_content;
      //sum_content=0;
      
    }  
    
    if(sum_content>wp99_entries && bin_edge99==-1) {
      cout << " sum_content = " << sum_content << " >    wp99_entries = " << wp99_entries << endl;       
      cout << "fraction = " << ((double)BDToutput->Integral(i, nbinsX))/entries;
      bin_edge99=i;
      
      std::cout<< "sum_content = " << sum_content << std::endl;
      std::cout<< "bin edge 0.99" << " = " << bin_edge99 << std::endl;
      binEdge.push_back(bin_edge99);
      //total_sum+=sum_content;
      //sum_content=0;
    }
  }
  
  
  cout << endl << "binEdge : " << binEdge[0] <<  "   " << binEdge[1] << "    " << binEdge[2] << "    " << binEdge[3] << endl; 
  //total_sum+=sum_content;
  //std::cout << "total sum (should be = entries) = " << total_sum << endl;
  //std::cout << "total = " << total << endl;
  //std::cout << "final bin sum_content = " << sum_content << endl;   
  //std::cout << "n mva bins = " << i_bdt_bin << endl;
  
  return binEdge;
  
}

vector<double> calculateBDTEdge(TH1F* BDToutput, vector<int> binEdge){
  
  vector<double> BDTEdge;
  double BDT_edge;
  for (int i=0; i<binEdge.size(); i++){
    BDT_edge =  (double)BDToutput->GetBinLowEdge(binEdge[i]);
    BDTEdge.push_back( BDT_edge );
    std::cout<< "BDT edge " << i  << " = " << BDT_edge << std::endl;
  }
  
  return BDTEdge;
}

