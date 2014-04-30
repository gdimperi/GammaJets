#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"


#include <iostream>
#include <fstream>

using namespace std;

void calculatePurityMC(){

  TChain mc("finalTree");
  TChain data("finalTree");
  
  //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt*root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM*root");

  
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/*2012A*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/*2012B*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/*2012C*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/*2012D*root");


  //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt*root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM*root");

  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/*2012A*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/*2012B*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/*2012C*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/*2012D*root");

  //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt*root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM*root");

  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/*2012A*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/*2012B*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/*2012C*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/*2012D*root");


  //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt*root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM*root");

  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/*2012A*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/*2012B*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/*2012C*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/*2012D*root");


  //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt*root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM*root");

  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/*2012A*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/*2012B*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/*2012C*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/*2012D*root");


  //mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt*root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-120to170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-15to30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-170to300_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-300to470_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-30to50_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-50to80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-80to120_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");
  mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM*root");

  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/*2012A*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/*2012B*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/*2012C*root");
  data.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/*2012D*root");


  int ptmin[14] = {40,47,65,73,90,94,99,105,110,117,126,139,165,180};
  int ptmax[14] = {47,65,73,90,94,99,105,110,117,126,139,165,180,1000};


  TH1F* combPfIso03Phot_sig_EB[14];
  TH1F* combPfIso03Phot_EB[14];
  TH1F* combPfIso03Phot_data_EB[14];

  TH1F* combPfIso03Phot_sig_EE[14];
  TH1F* combPfIso03Phot_EE[14];
  TH1F* combPfIso03Phot_data_EE[14];

  char name_EB[100];
  char condition_EB[500];
  char name_sig_EB[100];
  char condition_sig_EB[500];
  float purity_EB = 0;
  char name_data_EB[100];
  int nev_EB; 

  char name_EE[100];
  char condition_EE[500];
  char name_sig_EE[100];
  char condition_sig_EE[500];
  float purity_EE = 0;
  char name_data_EE[100];
  int nev_EE; 

  float integral(1.), integral_sig(1.);

  ofstream myfile;
  myfile.open ("purityMC.txt");
  myfile << "#pt range     nev_EB     purity_EB     nev_EE   purity_EE  \n";



  cout << "debug" << endl;

  for (int i=0;i<14;i++){

    // ************    EB *************
    sprintf(name_sig_EB,"combPfIso03Phot_sig_EB_pt%d_%d", ptmin[i],ptmax[i]);
    sprintf(condition_sig_EB,"(ptPhot>%d && ptPhot<%d && mvaIdPhot>0.83548  && isIsolatedGenPhot && TMath::Abs(etaPhot)<1.44442)*weight",ptmin[i],ptmax[i]);
    sprintf(name_EB,"combPfIso03Phot_EB_pt%d_%d", ptmin[i],ptmax[i]);
    sprintf(condition_EB,"(ptPhot>%d && ptPhot<%d && mvaIdPhot>0.83548 && TMath::Abs(etaPhot)<1.44442)*weight",ptmin[i],ptmax[i]);

    combPfIso03Phot_EB[i] = new TH1F(name_EB, name_EB, 60, -5., 15.);
    combPfIso03Phot_sig_EB[i] = new TH1F(name_sig_EB, name_sig_EB, 60, -5., 15.);
    cout << "created histo : " <<  (const char*)combPfIso03Phot_EB[i]->GetName() << endl;
    combPfIso03Phot_data_EB[i] = new TH1F(name_data_EB, name_data_EB, 60, -5., 15.);

    //mc.Project("pippo", "combinedPfIso03Phot", condition);
    mc.Project(name_EB, "combinedPfIso03Phot", condition_EB);
    mc.Project(name_sig_EB, "combinedPfIso03Phot", condition_sig_EB);
    integral = combPfIso03Phot_EB[i]->Integral();
    integral_sig = combPfIso03Phot_sig_EB[i]->Integral();
    purity_EB = integral_sig/integral;

    sprintf(condition_EB,"(ptPhot>%d && ptPhot<%d && mvaIdPhot>0.83548 && TMath::Abs(etaPhot)<1.44442)",ptmin[i],ptmax[i]);
    data.Project(name_data_EB, "combinedPfIso03Phot", condition_EB);
    nev_EB = data.GetEntries(condition_EB);

    // ************    EE *************
    sprintf(name_sig_EE,"combPfIso03Phot_sig_EE_pt%d_%d", ptmin[i],ptmax[i]);
    sprintf(condition_sig_EE,"(ptPhot>%d && ptPhot<%d && mvaIdPhot>0.83548  && isIsolatedGenPhot && TMath::Abs(etaPhot)>1.566)*weight",ptmin[i],ptmax[i]);
    sprintf(name_EE,"combPfIso03Phot_EE_pt%d_%d", ptmin[i],ptmax[i]);
    sprintf(condition_EE,"(ptPhot>%d && ptPhot<%d && mvaIdPhot>0.83548 && TMath::Abs(etaPhot)>1.566)*weight",ptmin[i],ptmax[i]);

    combPfIso03Phot_EE[i] = new TH1F(name_EE, name_EE, 60, -5., 15.);
    combPfIso03Phot_sig_EE[i] = new TH1F(name_sig_EE, name_sig_EE, 60, -5., 15.);
    cout << "created histo : " <<  (const char*)combPfIso03Phot_EE[i]->GetName() << endl;
    combPfIso03Phot_data_EE[i] = new TH1F(name_data_EE, name_data_EE, 60, -5., 15.);

    //mc.Project("pippo", "combinedPfIso03Phot", condition);
    mc.Project(name_EE, "combinedPfIso03Phot", condition_EE);
    mc.Project(name_sig_EE, "combinedPfIso03Phot", condition_sig_EE);
    integral = combPfIso03Phot_EE[i]->Integral();
    integral_sig = combPfIso03Phot_sig_EE[i]->Integral();
    purity_EE = integral_sig/integral;

    sprintf(condition_EE,"(ptPhot>%d && ptPhot<%d && mvaIdPhot>0.83548 && TMath::Abs(etaPhot)>1.566)",ptmin[i],ptmax[i]);
    data.Project(name_data_EE, "combinedPfIso03Phot", condition_EE);
    nev_EE = data.GetEntries(condition_EE);

    myfile << ptmin[i] << " - " << ptmax[i] << "       " << nev_EB << "     " << purity_EB << "    " <<nev_EE << "     " << purity_EE << "\n";
    
  }
  myfile.close();

}
