#include "TCanvas.h"
#include "string"
#include "sstream"
#include "iostream"
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

#include "mvaIsoCorrel.h"

//vector<int> calculateBinEdge(TH1F* BDToutput, int nstep);
//vector<double> calculateBDTEdge(TH1F* BDToutput, vector<int> binEdge);

void mvaIsoCorrel(int isEB, int isSig){

  char fileName[100];
  char outputDir[] = "/cmshome/gdimperi/GammaJet/CMSSW_5_3_11/src/GammaJets/src/histo_v6/genIso/";

  if(isEB){
    if (isSig)
      sprintf(fileName,"%smvaIso_histo_EB_isMatch.root", outputDir);
    else 
      sprintf(fileName,"%smvaIso_histo_EB_isNotMatch.root", outputDir);
  }
  else if(!isEB){
    if (isSig)
      sprintf(fileName,"%smvaIso_histo_EE_isMatch.root", outputDir);
    else 
      sprintf(fileName,"%smvaIso_histo_EE_isNotMatch.root", outputDir);
  }

  TFile* outputFile = new TFile(fileName, "RECREATE");

  string hlt[6];
  hlt[0]="30";  
  hlt[1]="50";
  hlt[2]="75";  
  hlt[3]="90";
  hlt[4]="135";
  hlt[5]="150";
  
  //loading MC to fit
  //TChain mc("finalTree");
  TChain mc("finalTree");
  
  for(int i=0;i<6;i++){
 
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-15to30_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-30to50_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-50to80_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-80to120_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-120to170_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-170to300_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-300to470_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    //mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-470to800_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    //mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-1400to1800_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    //mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/G_Pt-800to1400_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());

    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/QCDEM_Pt_170_250_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/QCDEM_Pt_20_30_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/QCDEM_Pt_250_350_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/QCDEM_Pt_30_80_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/QCDEM_Pt_350_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
    mc.Add(("root://pccmsrm24.cern.ch///cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT"+hlt[i]+"/QCDEM_Pt_80_170_8TeV_pythia6_hltcut"+hlt[i]+"_hltiso0_mvaWP4.root").c_str());
         
  }
   
  
  outputFile->cd();  

  TH2F* correl_plot = new TH2F("correl_plot", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoCharged = new TH2F("correl_plot_isoCharged", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoNeutrals = new TH2F("correl_plot_isoNeutrals", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoPhotons = new TH2F("correl_plot_isoPhotons", "", 60, -1., 1., 60, -5, 15);

  TH2F* correl_plot_pt30_60 = new TH2F("correl_plot_pt30_60", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoCharged_pt30_60 = new TH2F("correl_plot_isoCharged_pt30_60", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoNeutrals_pt30_60 = new TH2F("correl_plot_isoNeutrals_pt30_60", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoPhotons_pt30_60 = new TH2F("correl_plot_isoPhotons_pt30_60", "", 60, -1., 1., 60, -5, 15);

  TH2F* correl_plot_pt60_100 = new TH2F("correl_plot_pt60_100", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoCharged_pt60_100 = new TH2F("correl_plot_isoCharged_pt60_100", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoNeutrals_pt60_100 = new TH2F("correl_plot_isoNeutrals_pt60_100", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoPhotons_pt60_100 = new TH2F("correl_plot_isoPhotons_pt60_100", "", 60, -1., 1., 60, -5, 15);

  TH2F* correl_plot_pt100 = new TH2F("correl_plot_pt100", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoCharged_pt100 = new TH2F("correl_plot_isoCharged_pt100", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoNeutrals_pt100 = new TH2F("correl_plot_isoNeutrals_pt100", "", 60, -1., 1., 60, -5, 15);
  //TH2F* correl_plot_isoPhotons_pt100 = new TH2F("correl_plot_isoPhotons_pt100", "", 60, -1., 1., 60, -5, 15);

  // correl isoFPR with BDT
  TH2F* correl_plot_isoFPR = new TH2F("correl_plot_isoFPR", "", 60, -1., 1., 60, -5., 15);
  //TH2F* correl_plot_isoFPRCharged = new TH2F("correl_plot_isoFPRCharged", "", 60, -1., 1., 60,0., 15);
  //TH2F* correl_plot_isoFPRNeutrals = new TH2F("correl_plot_isoFPRNeutrals", "", 60, -1., 1., 60, 0., 15);
  //TH2F* correl_plot_isoFPRPhotons = new TH2F("correl_plot_isoFPRPhotons", "", 60, -1., 1., 60, -5, 15);

  TH2F* correl_plot_isoFPR_pt30_60 = new TH2F("correl_plot_isoFPR_pt30_60", "", 60, -1., 1., 60, -5., 15);
  //TH2F* correl_plot_isoFPRCharged_pt30_60 = new TH2F("correl_plot_isoFPRCharged_pt30_60", "", 60, -1., 1., 60, 0., 15);
  //TH2F* correl_plot_isoFPRNeutrals_pt30_60 = new TH2F("correl_plot_isoFPRNeutrals_pt30_60", "", 60, -1., 1., 60, 0., 15);
  //TH2F* correl_plot_isoFPRPhotons_pt30_60 = new TH2F("correl_plot_isoFPRPhotons_pt30_60", "", 60, -1., 1., 60, 0., 15);

  TH2F* correl_plot_isoFPR_pt60_100 = new TH2F("correl_plot_isoFPR_pt60_100", "", 60, -1., 1., 60, -5., 15);
  //TH2F* correl_plot_isoFPRCharged_pt60_100 = new TH2F("correl_plot_isoFPRCharged_pt60_100", "", 60, -1., 1., 60, 0., 15);
  //TH2F* correl_plot_isoFPRNeutrals_pt60_100 = new TH2F("correl_plot_isoFPRNeutrals_pt60_100", "", 60, -1., 1., 60, 0., 15);
  //TH2F* correl_plot_isoFPRPhotons_pt60_100 = new TH2F("correl_plot_isoFPRPhotons_pt60_100", "", 60, -1., 1., 60, 0., 15);

  TH2F* correl_plot_isoFPR_pt100 = new TH2F("correl_plot_isoFPR_pt100", "", 60, -1., 1., 60, -5., 15);
  //TH2F* correl_plot_isoFPRCharged_pt100 = new TH2F("correl_plot_isoFPRCharged_pt100", "", 60, -1., 1., 60, -5., 15);
  //TH2F* correl_plot_isoFPRNeutrals_pt100 = new TH2F("correl_plot_isoFPRNeutrals_pt100", "", 60, -1., 1., 60, -5., 15);
  //TH2F* correl_plot_isoFPRPhotons_pt100 = new TH2F("correl_plot_isoFPRPhotons_pt100", "", 60, -1., 1., 60, -5., 15);



  TProfile* profile_correl_plot;
  //TProfile* profile_correl_plot_isoCharged;
  //TProfile* profile_correl_plot_isoNeutrals;
  //TProfile* profile_correl_plot_isoPhotons;

  TProfile* profile_correl_plot_pt30_60;
  //TProfile* profile_correl_plot_isoCharged_pt30_60;
  //TProfile* profile_correl_plot_isoNeutrals_pt30_60;
  //TProfile* profile_correl_plot_isoPhotons_pt30_60;

  TProfile* profile_correl_plot_pt60_100;
  //TProfile* profile_correl_plot_isoCharged_pt60_100;
  //TProfile* profile_correl_plot_isoNeutrals_pt60_100;
  //TProfile* profile_correl_plot_isoPhotons_pt60_100;

  TProfile* profile_correl_plot_pt100;
  //TProfile* profile_correl_plot_isoCharged_pt100;
  //TProfile* profile_correl_plot_isoNeutrals_pt100;
  //TProfile* profile_correl_plot_isoPhotons_pt100;

  // correl isoFPR with BDT
  TProfile* profile_correl_plot_isoFPR;
  //TProfile* profile_correl_plot_isoFPRCharged;
  //TProfile* profile_correl_plot_isoFPRNeutrals;
  //TProfile* profile_correl_plot_isoFPRPhotons;

  TProfile* profile_correl_plot_isoFPR_pt30_60;
  //TProfile* profile_correl_plot_isoFPRCharged_pt30_60;
  //TProfile* profile_correl_plot_isoFPRNeutrals_pt30_60;
  //TProfile* profile_correl_plot_isoFPRPhotons_pt30_60;

  TProfile* profile_correl_plot_isoFPR_pt60_100;
  //TProfile* profile_correl_plot_isoFPRCharged_pt60_100;
  //TProfile* profile_correl_plot_isoFPRNeutrals_pt60_100;
  //TProfile* profile_correl_plot_isoFPRPhotons_pt60_100;

  TProfile* profile_correl_plot_isoFPR_pt100;
  //TProfile* profile_correl_plot_isoFPRCharged_pt100;
  //TProfile* profile_correl_plot_isoFPRNeutrals_pt100;
  //TProfile* profile_correl_plot_isoFPRPhotons_pt100;


  //FPRRandomCone VS FPR
  TH2F* isoFPRvsIsoFPRRandomCone_combined03 = new TH2F("isoFPRvsIsoFPRRandomCone_combined03", "", 60, -5, 15., 60, -5., 15.);
  TH2F* isoFPRvsIsoFPRRandomCone_charged03 = new TH2F("isoFPRvsIsoFPRRandomCone_charged03", "", 60, -5, 15., 60, -5., 15.);
  TH2F* isoFPRvsIsoFPRRandomCone_neutrals03 = new TH2F("isoFPRvsIsoFPRRandomCone_neutrals03", "", 60, -5, 15., 60, -5., 15.);
  TH2F* isoFPRvsIsoFPRRandomCone_photons03 = new TH2F("isoFPRvsIsoFPRRandomCone_photons03", "", 60, -5, 15., 60, -5., 15.);
  TProfile* profile_isoFPRvsIsoFPRRandomCone_combined03;
  TProfile* profile_isoFPRvsIsoFPRRandomCone_charged03;
  TProfile* profile_isoFPRvsIsoFPRRandomCone_neutrals03;
  TProfile* profile_isoFPRvsIsoFPRRandomCone_photons03;  

  //chiusura
  TH1F* combinedPfIsoFPR03Phot = new TH1F("combinedPfIsoFPR03Phot", "", 60, -5., 15.);
  TH1F* pid_pfIsoFPRCharged03 = new TH1F("pid_pfIsoFPRCharged03", "", 60, 0., 15.);
  TH1F* pid_pfIsoFPRNeutral03 = new TH1F("pid_pfIsoFPRNeutral03", "", 60, 0., 15.);
  TH1F* pid_pfIsoFPRPhoton03  = new TH1F("pid_pfIsoFPRPhoton03", "", 60, 0., 15.);
  TH1F* combinedPfIsoFPRRandomCone03Phot = new TH1F("combinedPfIsoFPRRandomCone03Phot", "", 60, -5., 15.);
  TH1F* pid_pfIsoFPRRandomConeCharged03 = new TH1F("pid_pfIsoFPRRandomConeCharged03", "", 60, 0., 15.);
  TH1F* pid_pfIsoFPRRandomConeNeutral03 = new TH1F("pid_pfIsoFPRRandomConeNeutral03", "", 60, 0., 15.);
  TH1F* pid_pfIsoFPRRandomConePhoton03 = new TH1F("pid_pfIsoFPRRandomConePhoton03", "", 60, 0., 15.);

  TH1F* combinedPfIsoFPR03Phot_notGenIsoCut           = new TH1F("combinedPfIsoFPR03Phot_notGenIsoCut", "", 60, -5., 15.);
  TH1F* combinedPfIsoFPR03Phot_genIso4             = new TH1F("combinedPfIsoFPR03Phot_genIso4", "", 60, -5., 15.);
  TH1F* combinedPfIsoFPRRandomCone03Phot_notGenIsoCut = new TH1F("combinedPfIsoFPRRandomCone03Phot_notGenIsoCut", "", 60, -5., 15.);
  TH1F* combinedPfIsoFPRRandomCone03Phot_genIso4   = new TH1F("combinedPfIsoFPRRandomCone03Phot_genIso4", "", 60, -5., 15.);

  combinedPfIsoFPR03Phot->Sumw2();
  pid_pfIsoFPRCharged03->Sumw2();
  pid_pfIsoFPRNeutral03->Sumw2();
  pid_pfIsoFPRPhoton03->Sumw2();

  combinedPfIsoFPRRandomCone03Phot->Sumw2();
  pid_pfIsoFPRRandomConeCharged03->Sumw2();
  pid_pfIsoFPRRandomConeNeutral03->Sumw2();
  pid_pfIsoFPRRandomConePhoton03->Sumw2();  

  combinedPfIsoFPR03Phot_notGenIsoCut           ->Sumw2();
  combinedPfIsoFPR03Phot_genIso4             ->Sumw2();
  combinedPfIsoFPRRandomCone03Phot_notGenIsoCut ->Sumw2();
  combinedPfIsoFPRRandomCone03Phot_genIso4   ->Sumw2();

  //  
  TH1F* BDToutput          = new TH1F("BDToutput", "BDToutput", 5000, -1., 1.);
  TH1F* BDToutput_pt30_60  = new TH1F("BDToutput_pt30_60", "BDToutput_pt30_60", 5000, -1., 1.);
  TH1F* BDToutput_pt60_100 = new TH1F("BDToutput_pt60_100", "BDToutput_pt60_100", 5000, -1., 1.);
  TH1F* BDToutput_pt100    = new TH1F("BDToutput_pt100", "BDToutput_pt100", 5000, -1., 1.);

  TH1F* isoCombined_BDT_bin0 = new TH1F("isoCombined_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin1 = new TH1F("isoCombined_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin2 = new TH1F("isoCombined_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin3 = new TH1F("isoCombined_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin4 = new TH1F("isoCombined_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin5 = new TH1F("isoCombined_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin6 = new TH1F("isoCombined_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin7 = new TH1F("isoCombined_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin8 = new TH1F("isoCombined_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoCombined_BDT_bin9 = new TH1F("isoCombined_BDT_bin9", "", 60, -5., 15.);

  // iso combined in pt bins and mva bins
  TH1F* isoCombined_pt30_60_BDT_bin0 = new TH1F("isoCombined_pt30_60_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin1 = new TH1F("isoCombined_pt30_60_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin2 = new TH1F("isoCombined_pt30_60_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin3 = new TH1F("isoCombined_pt30_60_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin4 = new TH1F("isoCombined_pt30_60_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin5 = new TH1F("isoCombined_pt30_60_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin6 = new TH1F("isoCombined_pt30_60_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin7 = new TH1F("isoCombined_pt30_60_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin8 = new TH1F("isoCombined_pt30_60_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoCombined_pt30_60_BDT_bin9 = new TH1F("isoCombined_pt30_60_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoCombined_pt60_100_BDT_bin0 = new TH1F("isoCombined_pt60_100_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin1 = new TH1F("isoCombined_pt60_100_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin2 = new TH1F("isoCombined_pt60_100_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin3 = new TH1F("isoCombined_pt60_100_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin4 = new TH1F("isoCombined_pt60_100_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin5 = new TH1F("isoCombined_pt60_100_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin6 = new TH1F("isoCombined_pt60_100_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin7 = new TH1F("isoCombined_pt60_100_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin8 = new TH1F("isoCombined_pt60_100_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoCombined_pt60_100_BDT_bin9 = new TH1F("isoCombined_pt60_100_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoCombined_pt100_BDT_bin0 = new TH1F("isoCombined_pt100_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin1 = new TH1F("isoCombined_pt100_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin2 = new TH1F("isoCombined_pt100_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin3 = new TH1F("isoCombined_pt100_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin4 = new TH1F("isoCombined_pt100_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin5 = new TH1F("isoCombined_pt100_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin6 = new TH1F("isoCombined_pt100_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin7 = new TH1F("isoCombined_pt100_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin8 = new TH1F("isoCombined_pt100_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoCombined_pt100_BDT_bin9 = new TH1F("isoCombined_pt100_BDT_bin9", "", 60, -5., 15.);

  //iso charged in pt bins and mva bins
  TH1F* isoPfCharged03_BDT_bin0 = new TH1F("isoPfCharged03_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin1 = new TH1F("isoPfCharged03_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin2 = new TH1F("isoPfCharged03_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin3 = new TH1F("isoPfCharged03_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin4 = new TH1F("isoPfCharged03_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin5 = new TH1F("isoPfCharged03_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin6 = new TH1F("isoPfCharged03_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin7 = new TH1F("isoPfCharged03_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin8 = new TH1F("isoPfCharged03_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfCharged03_BDT_bin9 = new TH1F("isoPfCharged03_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfCharged03_pt30_60_BDT_bin0 = new TH1F("isoPfCharged03_pt30_60_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin1 = new TH1F("isoPfCharged03_pt30_60_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin2 = new TH1F("isoPfCharged03_pt30_60_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin3 = new TH1F("isoPfCharged03_pt30_60_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin4 = new TH1F("isoPfCharged03_pt30_60_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin5 = new TH1F("isoPfCharged03_pt30_60_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin6 = new TH1F("isoPfCharged03_pt30_60_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin7 = new TH1F("isoPfCharged03_pt30_60_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin8 = new TH1F("isoPfCharged03_pt30_60_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt30_60_BDT_bin9 = new TH1F("isoPfCharged03_pt30_60_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfCharged03_pt60_100_BDT_bin0 = new TH1F("isoPfCharged03_pt60_100_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin1 = new TH1F("isoPfCharged03_pt60_100_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin2 = new TH1F("isoPfCharged03_pt60_100_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin3 = new TH1F("isoPfCharged03_pt60_100_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin4 = new TH1F("isoPfCharged03_pt60_100_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin5 = new TH1F("isoPfCharged03_pt60_100_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin6 = new TH1F("isoPfCharged03_pt60_100_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin7 = new TH1F("isoPfCharged03_pt60_100_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin8 = new TH1F("isoPfCharged03_pt60_100_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt60_100_BDT_bin9 = new TH1F("isoPfCharged03_pt60_100_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfCharged03_pt100_BDT_bin0 = new TH1F("isoPfCharged03_pt100_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin1 = new TH1F("isoPfCharged03_pt100_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin2 = new TH1F("isoPfCharged03_pt100_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin3 = new TH1F("isoPfCharged03_pt100_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin4 = new TH1F("isoPfCharged03_pt100_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin5 = new TH1F("isoPfCharged03_pt100_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin6 = new TH1F("isoPfCharged03_pt100_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin7 = new TH1F("isoPfCharged03_pt100_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin8 = new TH1F("isoPfCharged03_pt100_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfCharged03_pt100_BDT_bin9 = new TH1F("isoPfCharged03_pt100_BDT_bin9", "", 60, -5., 15.);

  //iso neutrals in pt bins and mva bins
  TH1F* isoPfNeutrals03_BDT_bin0 = new TH1F("isoPfNeutrals03_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin1 = new TH1F("isoPfNeutrals03_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin2 = new TH1F("isoPfNeutrals03_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin3 = new TH1F("isoPfNeutrals03_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin4 = new TH1F("isoPfNeutrals03_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin5 = new TH1F("isoPfNeutrals03_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin6 = new TH1F("isoPfNeutrals03_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin7 = new TH1F("isoPfNeutrals03_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin8 = new TH1F("isoPfNeutrals03_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_BDT_bin9 = new TH1F("isoPfNeutrals03_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfNeutrals03_pt30_60_BDT_bin0 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin1 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin2 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin3 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin4 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin5 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin6 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin7 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin8 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin9 = new TH1F("isoPfNeutrals03_pt30_60_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfNeutrals03_pt60_100_BDT_bin0 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin1 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin2 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin3 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin4 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin5 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin6 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin7 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin8 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin9 = new TH1F("isoPfNeutrals03_pt60_100_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfNeutrals03_pt100_BDT_bin0 = new TH1F("isoPfNeutrals03_pt100_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin1 = new TH1F("isoPfNeutrals03_pt100_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin2 = new TH1F("isoPfNeutrals03_pt100_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin3 = new TH1F("isoPfNeutrals03_pt100_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin4 = new TH1F("isoPfNeutrals03_pt100_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin5 = new TH1F("isoPfNeutrals03_pt100_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin6 = new TH1F("isoPfNeutrals03_pt100_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin7 = new TH1F("isoPfNeutrals03_pt100_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin8 = new TH1F("isoPfNeutrals03_pt100_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfNeutrals03_pt100_BDT_bin9 = new TH1F("isoPfNeutrals03_pt100_BDT_bin9", "", 60, -5., 15.);

  //iso photons in pt bins and mva bins
  TH1F* isoPfPhotons03_BDT_bin0 = new TH1F("isoPfPhotons03_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin1 = new TH1F("isoPfPhotons03_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin2 = new TH1F("isoPfPhotons03_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin3 = new TH1F("isoPfPhotons03_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin4 = new TH1F("isoPfPhotons03_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin5 = new TH1F("isoPfPhotons03_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin6 = new TH1F("isoPfPhotons03_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin7 = new TH1F("isoPfPhotons03_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin8 = new TH1F("isoPfPhotons03_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_BDT_bin9 = new TH1F("isoPfPhotons03_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfPhotons03_pt30_60_BDT_bin0 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin1 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin2 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin3 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin4 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin5 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin6 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin7 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin8 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt30_60_BDT_bin9 = new TH1F("isoPfPhotons03_pt30_60_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfPhotons03_pt60_100_BDT_bin0 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin1 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin2 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin3 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin4 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin5 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin6 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin7 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin8 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt60_100_BDT_bin9 = new TH1F("isoPfPhotons03_pt60_100_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoPfPhotons03_pt100_BDT_bin0 = new TH1F("isoPfPhotons03_pt100_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin1 = new TH1F("isoPfPhotons03_pt100_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin2 = new TH1F("isoPfPhotons03_pt100_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin3 = new TH1F("isoPfPhotons03_pt100_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin4 = new TH1F("isoPfPhotons03_pt100_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin5 = new TH1F("isoPfPhotons03_pt100_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin6 = new TH1F("isoPfPhotons03_pt100_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin7 = new TH1F("isoPfPhotons03_pt100_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin8 = new TH1F("isoPfPhotons03_pt100_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoPfPhotons03_pt100_BDT_bin9 = new TH1F("isoPfPhotons03_pt100_BDT_bin9", "", 60, -5., 15.);

  //FPR
  TH1F* isoFPRCombined_BDT_bin0 = new TH1F("isoFPRCombined_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin1 = new TH1F("isoFPRCombined_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin2 = new TH1F("isoFPRCombined_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin3 = new TH1F("isoFPRCombined_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin4 = new TH1F("isoFPRCombined_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin5 = new TH1F("isoFPRCombined_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin6 = new TH1F("isoFPRCombined_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin7 = new TH1F("isoFPRCombined_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin8 = new TH1F("isoFPRCombined_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoFPRCombined_BDT_bin9 = new TH1F("isoFPRCombined_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoFPRPfCharged03_BDT_bin0 = new TH1F("isoFPRPfCharged03_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin1 = new TH1F("isoFPRPfCharged03_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin2 = new TH1F("isoFPRPfCharged03_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin3 = new TH1F("isoFPRPfCharged03_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin4 = new TH1F("isoFPRPfCharged03_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin5 = new TH1F("isoFPRPfCharged03_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin6 = new TH1F("isoFPRPfCharged03_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin7 = new TH1F("isoFPRPfCharged03_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin8 = new TH1F("isoFPRPfCharged03_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoFPRPfCharged03_BDT_bin9 = new TH1F("isoFPRPfCharged03_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoFPRPfNeutrals03_BDT_bin0 = new TH1F("isoFPRPfNeutrals03_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin1 = new TH1F("isoFPRPfNeutrals03_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin2 = new TH1F("isoFPRPfNeutrals03_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin3 = new TH1F("isoFPRPfNeutrals03_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin4 = new TH1F("isoFPRPfNeutrals03_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin5 = new TH1F("isoFPRPfNeutrals03_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin6 = new TH1F("isoFPRPfNeutrals03_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin7 = new TH1F("isoFPRPfNeutrals03_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin8 = new TH1F("isoFPRPfNeutrals03_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoFPRPfNeutrals03_BDT_bin9 = new TH1F("isoFPRPfNeutrals03_BDT_bin9", "", 60, -5., 15.);

  TH1F* isoFPRPfPhotons03_BDT_bin0 = new TH1F("isoFPRPfPhotons03_BDT_bin0", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin1 = new TH1F("isoFPRPfPhotons03_BDT_bin1", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin2 = new TH1F("isoFPRPfPhotons03_BDT_bin2", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin3 = new TH1F("isoFPRPfPhotons03_BDT_bin3", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin4 = new TH1F("isoFPRPfPhotons03_BDT_bin4", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin5 = new TH1F("isoFPRPfPhotons03_BDT_bin5", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin6 = new TH1F("isoFPRPfPhotons03_BDT_bin6", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin7 = new TH1F("isoFPRPfPhotons03_BDT_bin7", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin8 = new TH1F("isoFPRPfPhotons03_BDT_bin8", "", 60, -5., 15.);
  TH1F* isoFPRPfPhotons03_BDT_bin9 = new TH1F("isoFPRPfPhotons03_BDT_bin9", "", 60, -5., 15.);

  string ecalRegion;
  if(isEB==1) ecalRegion = "(TMath::Abs(etaPhot)<1.4442)";
  else ecalRegion = "(TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5)";

  string SBconditions, SBconditions_notGenIsoCut, SBconditions_genIso4;
  if(isSig==1) SBconditions = "(isMatchedPhot && iso03_gen<1.7175)";
  else SBconditions = "!(isMatchedPhot && iso03_gen<1.7175)";

  if(isSig==1) SBconditions_notGenIsoCut = "isMatchedPhot";
  else SBconditions_notGenIsoCut = "!isMatchedPhot";

  if(isSig==1) SBconditions_genIso4 = "(isMatchedPhot && iso03_gen<4.)";
  else SBconditions_genIso4 = "!(isMatchedPhot && iso03_gen<4.)";

  //if(isSig==1) SBconditions = "isMatchedPhot";
  //else SBconditions = "!isMatchedPhot";

  string conditions;
  conditions = "(" + SBconditions + " && " + ecalRegion + ")*weight";
  mc.Project("BDToutput", "mvaIdPhot" , conditions.c_str());
  //std::cout << "Project(\"BDToutput\", \"mvaIdPhot\" , \"" << conditions.c_str() << "\");" << std::endl;  
  conditions = "(" + SBconditions + " && " + ecalRegion + " && (ptPhot>30 && ptPhot<60))*weight";
  mc.Project("BDToutput_pt30_60", "mvaIdPhot" , conditions.c_str());
  conditions = "(" + SBconditions + " && " + ecalRegion + " && (ptPhot>60 && ptPhot<100))*weight";
  mc.Project("BDToutput_pt60_100", "mvaIdPhot" , conditions.c_str());
  conditions = "(" + SBconditions + " && " + ecalRegion + " && ptPhot>100)*weight";
  mc.Project("BDToutput_pt100", "mvaIdPhot" , conditions.c_str());

  vector<int> binEdge, binEdge_pt30_60, binEdge_pt60_100, binEdge_pt100;
  vector<double> BDTEdge, BDTEdge_pt30_60, BDTEdge_pt60_100, BDTEdge_pt100;
  cout << "*******  all pt *********" << endl;
  binEdge = calculateBinEdge(BDToutput,10);
  BDTEdge = calculateBDTEdge(BDToutput, binEdge);

  cout << "*******  30 < pt < 60  *********" << endl;
  binEdge_pt30_60 = calculateBinEdge(BDToutput_pt30_60,10);
  BDTEdge_pt30_60 = calculateBDTEdge(BDToutput_pt30_60, binEdge_pt30_60);

  cout << "*******  60 < pt < 100  *********" << endl;
  binEdge_pt60_100 = calculateBinEdge(BDToutput_pt60_100,10);
  BDTEdge_pt60_100 = calculateBDTEdge(BDToutput_pt60_100, binEdge_pt60_100);

  cout << "*******   pt > 100  *********" << endl;
  binEdge_pt100 = calculateBinEdge(BDToutput_pt100,10);
  BDTEdge_pt100 = calculateBDTEdge(BDToutput_pt100, binEdge_pt100);


  string name, i_string;
  char conditions_char[200]; 
  char name_char[100];

 
 
  cout << "Start filling histograms" << endl;
  cout << "********************************************************** " << endl
       << "*             filling all pt                             * " << endl
       << "********************************************************** " << endl;      
  ///////////////////////////////  all ////////////////////////////////////////////

  
  //for(int i=0; i<11; i++){
  //  std::cout << "binEdge[" << i << "] = " << binEdge[i] << std::endl;
  //}

  conditions = "(" + SBconditions + " && " + ecalRegion + ")*weight";
  mc.Project("correl_plot", "combinedPfIso03Phot:mvaIdPhot", conditions.c_str());
  correl_plot->GetXaxis()->SetTitle("BDT output");
  correl_plot->GetYaxis()->SetTitle("combined PF Iso 03 [GeV]");

  mc.Project("correl_plot_isoCharged", "correctedPfIsoCharged03:mvaIdPhot", conditions.c_str());
  correl_plot_isoCharged->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoCharged->GetYaxis()->SetTitle("corrected PF Iso Charged 03 [GeV]");

  mc.Project("correl_plot_isoNeutrals", "correctedPfIsoNeutrals03:mvaIdPhot", conditions.c_str());
  correl_plot_isoNeutrals->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoNeutrals->GetYaxis()->SetTitle("corrected PF Iso Neutrals 03 [GeV]");

  mc.Project("correl_plot_isoPhotons", "correctedPfIsoPhotons03:mvaIdPhot", conditions.c_str());
  correl_plot_isoPhotons->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoPhotons->GetYaxis()->SetTitle("corrected PF Iso Photons 03 [GeV]");

  // correl isoFPR with BDT
  mc.Project("correl_plot_isoFPR", "combinedPfIsoFPR03Phot:mvaIdPhot", conditions.c_str());
  correl_plot_isoFPR->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPR->GetYaxis()->SetTitle("combined PF Iso 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRCharged", "pid_pfIsoFPRCharged03_presel:mvaIdPhot", conditions.c_str());
  correl_plot_isoCharged->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoCharged->GetYaxis()->SetTitle("PF Iso Charged 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRNeutrals", "pid_pfIsoFPRNeutral03_presel:mvaIdPhot", conditions.c_str());
  correl_plot_isoNeutrals->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoNeutrals->GetYaxis()->SetTitle("PF Iso Neutrals 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRPhotons", "pid_pfIsoFPRPhoton03_presel:mvaIdPhot", conditions.c_str());
  correl_plot_isoPhotons->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoPhotons->GetYaxis()->SetTitle("PF Iso Photons 03 with FPR [GeV]");


  //profilex
  profile_correl_plot             = correl_plot->ProfileX("profile_correl_plot");
  profile_correl_plot_isoCharged  = correl_plot_isoCharged->ProfileX("profile_correl_plot_isoCharged");
  profile_correl_plot_isoNeutrals = correl_plot_isoNeutrals->ProfileX("profile_correl_plot_isoNeutrals");
  profile_correl_plot_isoPhotons  = correl_plot_isoPhotons->ProfileX("profile_correl_plot_isoPhotons");
  
  profile_correl_plot            ->SetMarkerStyle(1);
  profile_correl_plot_isoCharged ->SetMarkerStyle(1);
  profile_correl_plot_isoNeutrals->SetMarkerStyle(1);
  profile_correl_plot_isoPhotons ->SetMarkerStyle(1);
  
  profile_correl_plot_isoFPR  = correl_plot_isoFPR->ProfileX("profile_correl_plot_isoFPR");
  profile_correl_plot_isoFPRCharged  = correl_plot_isoFPRCharged->ProfileX("profile_correl_plot_isoFPRCharged");
  profile_correl_plot_isoFPRNeutrals = correl_plot_isoFPRNeutrals->ProfileX("profile_correl_plot_isoFPRNeutrals");
  profile_correl_plot_isoFPRPhotons  = correl_plot_isoFPRPhotons->ProfileX("profile_correl_plot_isoFPRPhotons");
  
  profile_correl_plot_isoFPR ->SetMarkerStyle(1);
  profile_correl_plot_isoFPRCharged ->SetMarkerStyle(1);
  profile_correl_plot_isoFPRNeutrals->SetMarkerStyle(1);
  profile_correl_plot_isoFPRPhotons ->SetMarkerStyle(1);

  /*
  //FPRRandomCone VS FPR
  mc.Project("isoFPRvsIsoFPRRandomCone_combined03", "combinedPfIsoFPRRandomCone03Phot:combinedPfIsoFPR03Phot", conditions.c_str());
  mc.Project("isoFPRvsIsoFPRRandomCone_charged03", "correctedPfIsoFPRRandomConeCharged03:correctedPfIsoFPRCharged03", conditions.c_str());
  mc.Project("isoFPRvsIsoFPRRandomCone_neutrals03", "correctedPfIsoFPRRandomConeNeutrals03:correctedPfIsoFPRNeutrals03", conditions.c_str());
  mc.Project("isoFPRvsIsoFPRRandomCone_photons03", "correctedPfIsoFPRRandomConePhotons03:correctedPfIsoFPRPhotons03", conditions.c_str());
  profile_isoFPRvsIsoFPRRandomCone_combined03 = isoFPRvsIsoFPRRandomCone_combined03->ProfileX("profile_isoFPRvsIsoFPRRandomCone_combined03");
  profile_isoFPRvsIsoFPRRandomCone_charged03 = isoFPRvsIsoFPRRandomCone_charged03->ProfileX("profile_isoFPRvsIsoFPRRandomCone_charged03");
  profile_isoFPRvsIsoFPRRandomCone_neutrals03 = isoFPRvsIsoFPRRandomCone_neutrals03->ProfileX("profile_isoFPRvsIsoFPRRandomCone_neutrals03");
  profile_isoFPRvsIsoFPRRandomCone_photons03 = isoFPRvsIsoFPRRandomCone_photons03->ProfileX("profile_isoFPRvsIsoFPRRandomCone_photons03");
  */

  //chiusura
  conditions = "(" + SBconditions_notGenIsoCut + " && " + ecalRegion + ")*weight";
  mc.Project("combinedPfIsoFPR03Phot_notGenIsoCut", "combinedPfIsoFPR03Phot", conditions.c_str());
  mc.Project("combinedPfIsoFPRRandomCone03Phot_notGenIsoCut", "combinedPfIsoFPRRandomCone03Phot", conditions.c_str());
  conditions = "(" + SBconditions_genIso4 + " && " + ecalRegion + ")*weight";
  mc.Project("combinedPfIsoFPR03Phot_genIso4", "combinedPfIsoFPR03Phot", conditions.c_str());
  mc.Project("combinedPfIsoFPRRandomCone03Phot_genIso4", "combinedPfIsoFPRRandomCone03Phot", conditions.c_str());

  conditions = "(" + SBconditions + " && " + ecalRegion + ")*weight";
  mc.Project("combinedPfIsoFPR03Phot", "combinedPfIsoFPR03Phot", conditions.c_str());
  mc.Project("pid_pfIsoFPRCharged03", "pid_pfIsoFPRCharged03_presel", conditions.c_str());
  mc.Project("pid_pfIsoFPRNeutral03", "pid_pfIsoFPRNeutral03_presel", conditions.c_str());
  mc.Project("pid_pfIsoFPRPhoton03",  "pid_pfIsoFPRPhoton03_presel", conditions.c_str());
  mc.Project("combinedPfIsoFPRRandomCone03Phot", "combinedPfIsoFPRRandomCone03Phot", conditions.c_str());
  mc.Project("pid_pfIsoFPRRandomConeCharged03", "pid_pfIsoFPRRandomConeCharged03_presel", conditions.c_str());
  mc.Project("pid_pfIsoFPRRandomConeNeutral03", "pid_pfIsoFPRRandomConeNeutral03_presel", conditions.c_str());
  mc.Project("pid_pfIsoFPRRandomConePhoton03", "pid_pfIsoFPRRandomConePhoton03_presel", conditions.c_str());


  //iso in bdt bins
  for (int i=0; i<9; i++){
    sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<%f))*weight", SBconditions.c_str(), ecalRegion.c_str(), BDTEdge[i], BDTEdge[i+1]);
    sprintf(name_char, "isoCombined_BDT_bin%d", i);
    mc.Project(name_char, "combinedPfIso03Phot", conditions_char);

    sprintf(name_char, "isoPfCharged03_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoCharged03", conditions_char);

    sprintf(name_char, "isoPfNeutrals03_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoNeutrals03", conditions_char);

    sprintf(name_char, "isoPfPhotons03_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoPhotons03", conditions_char);

    //FPR
    sprintf(name_char, "isoFPRCombined_BDT_bin%d", i);
    mc.Project(name_char, "combinedPfIsoFPR03Phot", conditions_char);

    sprintf(name_char, "isoFPRPfCharged03_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoFPRCharged03", conditions_char);

    sprintf(name_char, "isoFPRPfNeutrals03_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoFPRNeutrals03", conditions_char);

    sprintf(name_char, "isoFPRPfPhotons03_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoFPRPhotons03", conditions_char);

  }
  
  sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<1.))*weight", SBconditions.c_str(), ecalRegion.c_str(), BDTEdge[9]);  
  name  = "isoCombined_BDT_bin9";
  mc.Project(name.c_str(), "combinedPfIso03Phot", conditions_char);
  
  sprintf(name_char, "isoPfCharged03_BDT_bin9");
  mc.Project(name_char, "correctedPfIsoCharged03", conditions_char);

  sprintf(name_char, "isoPfNeutrals03_BDT_bin9");
  mc.Project(name_char, "correctedPfIsoNeutrals03", conditions_char);
  
  sprintf(name_char, "isoPfPhotons03_BDT_bin9");
  mc.Project(name_char, "correctedPfIsoPhotons03", conditions_char);

    //FPR
  sprintf(name_char, "isoFPRCombined_BDT_bin9");
  mc.Project(name_char, "combinedPfIsoFPR03Phot", conditions_char);
  
  sprintf(name_char, "isoFPRPfCharged03_BDT_bin9");
  mc.Project(name_char, "correctedPfIsoFPRCharged03", conditions_char);
  
  sprintf(name_char, "isoFPRPfNeutrals03_BDT_bin9");
  mc.Project(name_char, "correctedPfIsoFPRNeutrals03", conditions_char);
  
  sprintf(name_char, "isoFPRPfPhotons03_BDT_bin9");
  mc.Project(name_char, "correctedPfIsoFPRPhotons03", conditions_char);



  /******************************************************************************************************************
  //
  //                                      pt 30 to 60 
  //
  *******************************************************************************************************************/

  cout << "********************************************************** " << endl
       << "*             filling  pt 30 to 60                       * " << endl
       << "********************************************************** " << endl;      

  conditions = "(" + SBconditions + " && " + ecalRegion + " && (ptPhot>30 && ptPhot<60))*weight";

  mc.Project("correl_plot_pt30_60", "combinedPfIso03Phot:mvaIdPhot", (conditions).c_str());
  correl_plot_pt30_60->GetXaxis()->SetTitle("BDT output");
  correl_plot_pt30_60->GetYaxis()->SetTitle("combined PF Iso 03 [GeV]");

  mc.Project("correl_plot_isoCharged_pt30_60", "correctedPfIsoCharged03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoCharged_pt30_60->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoCharged_pt30_60->GetYaxis()->SetTitle("corrected PF Iso Charged 03 [GeV]");

  mc.Project("correl_plot_isoNeutrals_pt30_60", "correctedPfIsoNeutrals03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoNeutrals_pt30_60->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoNeutrals_pt30_60->GetYaxis()->SetTitle("corrected PF Iso Neutrals 03 [GeV]");

  mc.Project("correl_plot_isoPhotons_pt30_60", "correctedPfIsoPhotons03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoPhotons_pt30_60->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoPhotons_pt30_60->GetYaxis()->SetTitle("corrected PF Iso Photons 03 [GeV]");

  // correl isoFPR with BDT

  mc.Project("correl_plot_isoFPR_pt30_60", "combinedPfIsoFPR03Phot:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPR_pt30_60->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPR_pt30_60->GetYaxis()->SetTitle("combined PF Iso  with FPR 03 [GeV]");

  mc.Project("correl_plot_isoFPRCharged_pt30_60", "pid_pfIsoFPRCharged03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRCharged_pt30_60->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRCharged_pt30_60->GetYaxis()->SetTitle("PF Iso Charged with FPR 03 [GeV]");

  mc.Project("correl_plot_isoFPRNeutrals_pt30_60", "pid_pfIsoFPRNeutral03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRNeutrals_pt30_60->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRNeutrals_pt30_60->GetYaxis()->SetTitle("PF Iso Neutrals with FPR 03 [GeV]");

  mc.Project("correl_plot_isoFPRPhotons_pt30_60", "pid_pfIsoFPRPhoton03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRPhotons_pt30_60->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRPhotons_pt30_60->GetYaxis()->SetTitle("PF Iso Photons 03 with FPR [GeV]");

  //profilex
  profile_correl_plot_pt30_60             = correl_plot_pt30_60->ProfileX("profile_correl_plot_pt30_60");
  profile_correl_plot_isoCharged_pt30_60  = correl_plot_isoCharged_pt30_60->ProfileX("profile_correl_plot_isoCharged_pt30_60");
  profile_correl_plot_isoNeutrals_pt30_60 = correl_plot_isoNeutrals_pt30_60->ProfileX("profile_correl_plot_isoNeutrals_pt30_60");
  profile_correl_plot_isoPhotons_pt30_60  = correl_plot_isoPhotons_pt30_60->ProfileX("profile_correl_plot_isoPhotons_pt30_60");

  profile_correl_plot_pt30_60            ->SetMarkerStyle(1);
  profile_correl_plot_isoCharged_pt30_60 ->SetMarkerStyle(1);
  profile_correl_plot_isoNeutrals_pt30_60->SetMarkerStyle(1);
  profile_correl_plot_isoPhotons_pt30_60 ->SetMarkerStyle(1);

  // correl isoFPR with BDT
  profile_correl_plot_isoFPR_pt30_60  = correl_plot_isoFPR_pt30_60->ProfileX("profile_correl_plot_isoFPR_pt30_60");
  profile_correl_plot_isoFPRCharged_pt30_60  = correl_plot_isoFPRCharged_pt30_60->ProfileX("profile_correl_plot_isoFPRCharged_pt30_60");
  profile_correl_plot_isoFPRNeutrals_pt30_60 = correl_plot_isoFPRNeutrals_pt30_60->ProfileX("profile_correl_plot_isoFPRNeutrals_pt30_60");
  profile_correl_plot_isoFPRPhotons_pt30_60  = correl_plot_isoFPRPhotons_pt30_60->ProfileX("profile_correl_plot_isoFPRPhotons_pt30_60");

  profile_correl_plot_isoFPR_pt30_60 ->SetMarkerStyle(1);
  profile_correl_plot_isoFPRCharged_pt30_60 ->SetMarkerStyle(1);
  profile_correl_plot_isoFPRNeutrals_pt30_60->SetMarkerStyle(1);
  profile_correl_plot_isoFPRPhotons_pt30_60 ->SetMarkerStyle(1);

  //string name, i_string;
  //char conditions_char[200]; 
  //char name_char[100];
  
  //iso in bdt bins
  for (int i=0; i<9; i++){

    sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<%f)  && (ptPhot>30 && ptPhot<60))*weight", SBconditions.c_str(), ecalRegion.c_str(), BDTEdge_pt30_60[i], BDTEdge_pt30_60[i+1]);
    sprintf(name_char, "isoCombined_pt30_60_BDT_bin%d", i);
    mc.Project(name_char, "combinedPfIso03Phot", conditions_char);

    sprintf(name_char, "isoPfCharged03_pt30_60_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoCharged03", conditions_char);

    sprintf(name_char, "isoPfNeutrals03_pt30_60_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoNeutrals03", conditions_char);

    sprintf(name_char, "isoPfPhotons03_pt30_60_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoPhotons03", conditions_char);


  }
  
  //conditions = "(" + SBconditions + " && " + ecalRegion + " && (mvaIdPhot>BDTEdge[9] && mvaIdPhot<1.))*weight";
  sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<1.) && (ptPhot>30 && ptPhot<60))*weight", SBconditions.c_str(), ecalRegion.c_str(), BDTEdge_pt30_60[9]);  
  name  = "isoCombined_pt30_60_BDT_bin9";
  mc.Project(name.c_str(), "combinedPfIso03Phot", conditions_char);
  
  name  = "isoPfCharged03_pt30_60_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoCharged03", conditions_char);

  name  = "isoPfNeutrals03_pt30_60_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoNeutrals03", conditions_char);

  name  = "isoPfPhotons03_pt30_60_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoPhotons03", conditions_char);



  /********************************************************************
  //                           pt 60 to 100 
  ********************************************************************/
  cout << "********************************************************** " << endl
       << "*             filling  pt 60 to 100                      * " << endl
       << "********************************************************** " << endl;      

  conditions = "(" + SBconditions + " && " + ecalRegion + " && (ptPhot>60 && ptPhot<100))*weight";

  mc.Project("correl_plot_pt60_100", "combinedPfIso03Phot:mvaIdPhot", (conditions).c_str());
  correl_plot_pt60_100->GetXaxis()->SetTitle("BDT output");
  correl_plot_pt60_100->GetYaxis()->SetTitle("combined PF Iso 03 [GeV]");

  mc.Project("correl_plot_isoCharged_pt60_100", "correctedPfIsoCharged03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoCharged_pt60_100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoCharged_pt60_100->GetYaxis()->SetTitle("corrected PF Iso Charged 03 [GeV]");

  mc.Project("correl_plot_isoNeutrals_pt60_100", "correctedPfIsoNeutrals03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoNeutrals_pt60_100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoNeutrals_pt60_100->GetYaxis()->SetTitle("corrected PF Iso Neutrals 03 [GeV]");

  mc.Project("correl_plot_isoPhotons_pt60_100", "correctedPfIsoPhotons03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoPhotons_pt60_100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoPhotons_pt60_100->GetYaxis()->SetTitle("corrected PF Iso Photons 03 [GeV]");

  // correl isoFPR with BDT
  mc.Project("correl_plot_isoFPR_pt60_100", "combinedPfIsoFPR03Phot:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRCharged_pt60_100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRCharged_pt60_100->GetYaxis()->SetTitle("combined PF Iso 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRCharged_pt60_100", "pid_pfIsoFPRCharged03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRCharged_pt60_100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRCharged_pt60_100->GetYaxis()->SetTitle("PF Iso Charged 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRNeutrals_pt60_100", "pid_pfIsoFPRNeutral03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRNeutrals_pt60_100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRNeutrals_pt60_100->GetYaxis()->SetTitle("PF Iso Neutrals 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRPhotons_pt60_100", "pid_pfIsoFPRPhoton03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRPhotons_pt60_100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRPhotons_pt60_100->GetYaxis()->SetTitle("PF Iso Photons 03 with FPR [GeV]");

  //profilex
  profile_correl_plot_pt60_100             = correl_plot_pt60_100->ProfileX("profile_correl_plot_pt60_100");
  profile_correl_plot_isoCharged_pt60_100  = correl_plot_isoCharged_pt60_100->ProfileX("profile_correl_plot_isoCharged_pt60_100");
  profile_correl_plot_isoNeutrals_pt60_100 = correl_plot_isoNeutrals_pt60_100->ProfileX("profile_correl_plot_isoNeutrals_pt60_100");
  profile_correl_plot_isoPhotons_pt60_100  = correl_plot_isoPhotons_pt60_100->ProfileX("profile_correl_plot_isoPhotons_pt60_100");

  profile_correl_plot_pt60_100            ->SetMarkerStyle(1);
  profile_correl_plot_isoCharged_pt60_100 ->SetMarkerStyle(1);
  profile_correl_plot_isoNeutrals_pt60_100->SetMarkerStyle(1);
  profile_correl_plot_isoPhotons_pt60_100 ->SetMarkerStyle(1);

  // correl isoFPR with BDT
  profile_correl_plot_isoFPR_pt60_100  = correl_plot_isoFPR_pt60_100->ProfileX("profile_correl_plot_isoFPR_pt60_100");
  profile_correl_plot_isoFPRCharged_pt60_100  = correl_plot_isoFPRCharged_pt60_100->ProfileX("profile_correl_plot_isoFPRCharged_pt60_100");
  profile_correl_plot_isoFPRNeutrals_pt60_100 = correl_plot_isoFPRNeutrals_pt60_100->ProfileX("profile_correl_plot_isoFPRNeutrals_pt60_100");
  profile_correl_plot_isoFPRPhotons_pt60_100  = correl_plot_isoFPRPhotons_pt60_100->ProfileX("profile_correl_plot_isoFPRPhotons_pt60_100");

  profile_correl_plot_isoFPR_pt60_100 ->SetMarkerStyle(1);
  profile_correl_plot_isoFPRCharged_pt60_100 ->SetMarkerStyle(1);
  profile_correl_plot_isoFPRNeutrals_pt60_100->SetMarkerStyle(1);
  profile_correl_plot_isoFPRPhotons_pt60_100 ->SetMarkerStyle(1);

  //iso in bdt bins
  for (int i=0; i<9; i++){
    //conditions = "(" + SBconditions + " && " + ecalRegion + " && (mvaIdPhot>BDTEdge["+ convert_low.str() +"] && mvaIdPhot<BDTEdge["+ convert_high.str() +"]))*weight";
    //name  = "isoCombined_BDT_bin"+convert_low.str();
    sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<%f)&& (ptPhot>60 && ptPhot<100))*weight", SBconditions.c_str(), ecalRegion.c_str(), BDTEdge_pt60_100[i], BDTEdge_pt60_100[i+1]);
    sprintf(name_char, "isoCombined_pt60_100_BDT_bin%d", i);
    mc.Project(name_char, "combinedPfIso03Phot", conditions_char);

    sprintf(name_char, "isoPfCharged03_pt60_100_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoCharged03", conditions_char);

    sprintf(name_char, "isoPfNeutrals03_pt60_100_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoNeutrals03", conditions_char);

    sprintf(name_char, "isoPfPhotons03_pt60_100_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoPhotons03", conditions_char);


  }
  

  sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<1.) && (ptPhot>60 && ptPhot<100))*weight", SBconditions.c_str(), ecalRegion.c_str(), BDTEdge_pt60_100[9]);  
  name  = "isoCombined_pt60_100_BDT_bin9";
  mc.Project(name.c_str(), "combinedPfIso03Phot", conditions_char);
  
  name  = "isoPfCharged03_pt60_100_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoCharged03", conditions_char);

  name  = "isoPfNeutrals03_pt60_100_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoNeutrals03", conditions_char);

  name  = "isoPfPhotons03_pt60_100_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoPhotons03", conditions_char);



  /*******************************************************************
  //                                 pt > 100 
  *********************************************************************/
 
  cout << "********************************************************** " << endl
       << "*             filling  pt > 100                          * " << endl
       << "********************************************************** " << endl;      


  cout << "filling correl plots" << endl;
  conditions = "(" + SBconditions + " && " + ecalRegion + " && ptPhot>100)*weight";

  mc.Project("correl_plot_pt100", "combinedPfIso03Phot:mvaIdPhot", (conditions).c_str());
  correl_plot_pt100->GetXaxis()->SetTitle("BDT output");
  correl_plot_pt100->GetYaxis()->SetTitle("combined PF Iso 03 [GeV]");

  mc.Project("correl_plot_isoCharged_pt100", "correctedPfIsoCharged03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoCharged_pt100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoCharged_pt100->GetYaxis()->SetTitle("corrected PF Iso Charged 03 [GeV]");

  mc.Project("correl_plot_isoNeutrals_pt100", "correctedPfIsoNeutrals03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoNeutrals_pt100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoNeutrals_pt100->GetYaxis()->SetTitle("corrected PF Iso Neutrals 03 [GeV]");

  mc.Project("correl_plot_isoPhotons_pt100", "correctedPfIsoPhotons03:mvaIdPhot", (conditions).c_str());
  correl_plot_isoPhotons_pt100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoPhotons_pt100->GetYaxis()->SetTitle("corrected PF Iso Photons 03 [GeV]");

  // correl isoFPR with BDTEdge_pt100iso
  mc.Project("correl_plot_isoFPR_pt100", "combinedPfIsoFPR03Phot:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRCharged_pt100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRCharged_pt100->GetYaxis()->SetTitle("combined PF Iso 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRCharged_pt100", "pid_pfIsoFPRCharged03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRCharged_pt100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRCharged_pt100->GetYaxis()->SetTitle("PF Iso Charged 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRNeutrals_pt100", "pid_pfIsoFPRNeutral03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRNeutrals_pt100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRNeutrals_pt100->GetYaxis()->SetTitle("PF Iso Neutrals 03 with FPR [[GeV]");

  mc.Project("correl_plot_isoFPRPhotons_pt100", "pid_pfIsoFPRPhoton03_presel:mvaIdPhot", (conditions).c_str());
  correl_plot_isoFPRPhotons_pt100->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoFPRPhotons_pt100->GetYaxis()->SetTitle("PF Iso Photons 03 with FPR [[GeV]");

  cout << "filling profiles" << endl;
  //profilex
  profile_correl_plot_pt100             = correl_plot_pt100->ProfileX("profile_correl_plot_pt100");
  profile_correl_plot_isoCharged_pt100  = correl_plot_isoCharged_pt100->ProfileX("profile_correl_plot_isoCharged_pt100");
  profile_correl_plot_isoNeutrals_pt100 = correl_plot_isoNeutrals_pt100->ProfileX("profile_correl_plot_isoNeutrals_pt100");
  profile_correl_plot_isoPhotons_pt100  = correl_plot_isoPhotons_pt100->ProfileX("profile_correl_plot_isoPhotons_pt100");

  profile_correl_plot_pt100            ->SetMarkerStyle(1);
  profile_correl_plot_isoCharged_pt100 ->SetMarkerStyle(1);
  profile_correl_plot_isoNeutrals_pt100->SetMarkerStyle(1);
  profile_correl_plot_isoPhotons_pt100 ->SetMarkerStyle(1);

  // correl isoFPR with BDTEdge_pt60_100iso
  profile_correl_plot_isoFPR_pt100  = correl_plot_isoFPR_pt100->ProfileX("profile_correl_plot_isoFPR_pt100");
  profile_correl_plot_isoFPRCharged_pt100  = correl_plot_isoFPRCharged_pt100->ProfileX("profile_correl_plot_isoFPRCharged_pt100");
  profile_correl_plot_isoFPRNeutrals_pt100 = correl_plot_isoFPRNeutrals_pt100->ProfileX("profile_correl_plot_isoFPRNeutrals_pt100");
  profile_correl_plot_isoFPRPhotons_pt100  = correl_plot_isoFPRPhotons_pt100->ProfileX("profile_correl_plot_isoFPRPhotons_pt100");

  profile_correl_plot_isoFPR_pt100 ->SetMarkerStyle(1);
  profile_correl_plot_isoFPRCharged_pt100 ->SetMarkerStyle(1);
  profile_correl_plot_isoFPRNeutrals_pt100->SetMarkerStyle(1);
  profile_correl_plot_isoFPRPhotons_pt100 ->SetMarkerStyle(1);

  cout << "filling iso in pt bins" << endl;
  //iso in bdt bins
  for (int i=0; i<9; i++){
    sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<%f) && ptPhot>100)*weight", SBconditions.c_str(), ecalRegion.c_str(), BDTEdge_pt100[i], BDTEdge_pt100[i+1]);
 
    string converted_string(conditions_char);
    cout << "conditions = " << converted_string << endl;

    sprintf(name_char, "isoCombined_pt100_BDT_bin%d", i);
    mc.Project(name_char, "combinedPfIso03Phot", conditions_char);
    
    sprintf(name_char, "isoPfCharged03_pt100_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoCharged03", conditions_char);

    sprintf(name_char, "isoPfNeutrals03_pt100_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoNeutrals03", conditions_char);

    sprintf(name_char, "isoPfPhotons03_pt100_BDT_bin%d", i);
    mc.Project(name_char, "correctedPfIsoPhotons03", conditions_char);


  }
  
  //conditions = "(" + SBconditions + " && " + ecalRegion + " && (mvaIdPhot>BDTEdge[9] && mvaIdPhot<1.))*weight";
  sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<1.) && ptPhot>100)*weight", SBconditions.c_str(), ecalRegion.c_str(), BDTEdge_pt100[9]);  
  string converted_string(conditions_char);
  cout << "conditions = " << converted_string << endl;

  name  = "isoCombined_pt100_BDT_bin9";
  mc.Project(name.c_str(), "combinedPfIso03Phot", conditions_char);
  
  name  = "isoPfCharged03_pt100_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoCharged03", conditions_char);

  name  = "isoPfNeutrals03_pt100_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoNeutrals03", conditions_char);

  name  = "isoPfPhotons03_pt100_BDT_bin9";
  mc.Project(name.c_str(), "correctedPfIsoPhotons03", conditions_char);



  // write on file
  cout << " " << endl;
  cout << "-------- write on file---------- " << endl;
  cout << " " << endl;

  BDToutput          ->Write();
  BDToutput_pt30_60  ->Write();
  BDToutput_pt60_100 ->Write();
  BDToutput_pt100    ->Write();

  profile_correl_plot             ->Write();
  profile_correl_plot_isoCharged  ->Write();
  profile_correl_plot_isoNeutrals ->Write();
  profile_correl_plot_isoPhotons  ->Write();
  profile_correl_plot_isoFPR         ->Write();
  profile_correl_plot_isoFPRCharged  ->Write();
  profile_correl_plot_isoFPRNeutrals ->Write();
  profile_correl_plot_isoFPRPhotons  ->Write();  

  correl_plot             ->Write();
  correl_plot_isoCharged  ->Write();
  correl_plot_isoNeutrals ->Write();
  correl_plot_isoPhotons  ->Write();
  correl_plot_isoFPR         ->Write();
  correl_plot_isoFPRCharged  ->Write();
  correl_plot_isoFPRNeutrals ->Write();
  correl_plot_isoFPRPhotons  ->Write();  

  /*
  isoFPRvsIsoFPRRandomCone_combined03->Write();
  isoFPRvsIsoFPRRandomCone_charged03->Write();
  isoFPRvsIsoFPRRandomCone_neutrals03->Write();
  isoFPRvsIsoFPRRandomCone_photons03->Write();
  profile_isoFPRvsIsoFPRRandomCone_combined03->Write();
  profile_isoFPRvsIsoFPRRandomCone_charged03->Write();
  profile_isoFPRvsIsoFPRRandomCone_neutrals03->Write();
  profile_isoFPRvsIsoFPRRandomCone_photons03->Write();
  */

  cout << "------  chiusura --------" << endl;

  combinedPfIsoFPR03Phot->Write();
  pid_pfIsoFPRCharged03->Write();
  pid_pfIsoFPRNeutral03->Write();
  pid_pfIsoFPRPhoton03->Write();
  combinedPfIsoFPRRandomCone03Phot->Write();
  pid_pfIsoFPRRandomConeCharged03->Write();
  pid_pfIsoFPRRandomConeNeutral03->Write();
  pid_pfIsoFPRRandomConePhoton03->Write();

  combinedPfIsoFPR03Phot_notGenIsoCut->Write();
  combinedPfIsoFPRRandomCone03Phot_notGenIsoCut->Write();
  combinedPfIsoFPR03Phot_notGenIsoCut->Write();
  combinedPfIsoFPRRandomCone03Phot_notGenIsoCut->Write();

  isoCombined_BDT_bin0->Write();
  isoCombined_BDT_bin1->Write();
  isoCombined_BDT_bin2->Write();
  isoCombined_BDT_bin3->Write();
  isoCombined_BDT_bin4->Write();
  isoCombined_BDT_bin5->Write();
  isoCombined_BDT_bin6->Write();
  isoCombined_BDT_bin7->Write();
  isoCombined_BDT_bin8->Write();
  isoCombined_BDT_bin9->Write();
 
  isoPfCharged03_BDT_bin0->Write();
  isoPfCharged03_BDT_bin1->Write();
  isoPfCharged03_BDT_bin2->Write();
  isoPfCharged03_BDT_bin3->Write();
  isoPfCharged03_BDT_bin4->Write();
  isoPfCharged03_BDT_bin5->Write();
  isoPfCharged03_BDT_bin6->Write();
  isoPfCharged03_BDT_bin7->Write();
  isoPfCharged03_BDT_bin8->Write();
  isoPfCharged03_BDT_bin9->Write();

  isoPfNeutrals03_BDT_bin0->Write();
  isoPfNeutrals03_BDT_bin1->Write();
  isoPfNeutrals03_BDT_bin2->Write();
  isoPfNeutrals03_BDT_bin3->Write();
  isoPfNeutrals03_BDT_bin4->Write();
  isoPfNeutrals03_BDT_bin5->Write();
  isoPfNeutrals03_BDT_bin6->Write();
  isoPfNeutrals03_BDT_bin7->Write();
  isoPfNeutrals03_BDT_bin8->Write();
  isoPfNeutrals03_BDT_bin9->Write();

  isoPfPhotons03_BDT_bin0->Write();
  isoPfPhotons03_BDT_bin1->Write();
  isoPfPhotons03_BDT_bin2->Write();
  isoPfPhotons03_BDT_bin3->Write();
  isoPfPhotons03_BDT_bin4->Write();
  isoPfPhotons03_BDT_bin5->Write();
  isoPfPhotons03_BDT_bin6->Write();
  isoPfPhotons03_BDT_bin7->Write();
  isoPfPhotons03_BDT_bin8->Write();
  isoPfPhotons03_BDT_bin9->Write();

  //FPR
  isoFPRCombined_BDT_bin0->Write();
  isoFPRCombined_BDT_bin1->Write();
  isoFPRCombined_BDT_bin2->Write();
  isoFPRCombined_BDT_bin3->Write();
  isoFPRCombined_BDT_bin4->Write();
  isoFPRCombined_BDT_bin5->Write();
  isoFPRCombined_BDT_bin6->Write();
  isoFPRCombined_BDT_bin7->Write();
  isoFPRCombined_BDT_bin8->Write();
  isoFPRCombined_BDT_bin9->Write();
 
  isoFPRPfCharged03_BDT_bin0->Write();
  isoFPRPfCharged03_BDT_bin1->Write();
  isoFPRPfCharged03_BDT_bin2->Write();
  isoFPRPfCharged03_BDT_bin3->Write();
  isoFPRPfCharged03_BDT_bin4->Write();
  isoFPRPfCharged03_BDT_bin5->Write();
  isoFPRPfCharged03_BDT_bin6->Write();
  isoFPRPfCharged03_BDT_bin7->Write();
  isoFPRPfCharged03_BDT_bin8->Write();
  isoFPRPfCharged03_BDT_bin9->Write();

  isoFPRPfNeutrals03_BDT_bin0->Write();
  isoFPRPfNeutrals03_BDT_bin1->Write();
  isoFPRPfNeutrals03_BDT_bin2->Write();
  isoFPRPfNeutrals03_BDT_bin3->Write();
  isoFPRPfNeutrals03_BDT_bin4->Write();
  isoFPRPfNeutrals03_BDT_bin5->Write();
  isoFPRPfNeutrals03_BDT_bin6->Write();
  isoFPRPfNeutrals03_BDT_bin7->Write();
  isoFPRPfNeutrals03_BDT_bin8->Write();
  isoFPRPfNeutrals03_BDT_bin9->Write();

  isoFPRPfPhotons03_BDT_bin0->Write();
  isoFPRPfPhotons03_BDT_bin1->Write();
  isoFPRPfPhotons03_BDT_bin2->Write();
  isoFPRPfPhotons03_BDT_bin3->Write();
  isoFPRPfPhotons03_BDT_bin4->Write();
  isoFPRPfPhotons03_BDT_bin5->Write();
  isoFPRPfPhotons03_BDT_bin6->Write();
  isoFPRPfPhotons03_BDT_bin7->Write();
  isoFPRPfPhotons03_BDT_bin8->Write();
  isoFPRPfPhotons03_BDT_bin9->Write();


  profile_correl_plot_pt30_60             ->Write();
  profile_correl_plot_isoCharged_pt30_60  ->Write();
  profile_correl_plot_isoNeutrals_pt30_60 ->Write();
  profile_correl_plot_isoPhotons_pt30_60  ->Write();
  profile_correl_plot_isoFPR_pt30_60         ->Write();
  profile_correl_plot_isoFPRCharged_pt30_60  ->Write();
  profile_correl_plot_isoFPRNeutrals_pt30_60 ->Write();
  profile_correl_plot_isoFPRPhotons_pt30_60  ->Write();  

  correl_plot_pt30_60             ->Write();
  correl_plot_isoCharged_pt30_60  ->Write();
  correl_plot_isoNeutrals_pt30_60 ->Write();
  correl_plot_isoPhotons_pt30_60  ->Write();
  correl_plot_isoFPR_pt30_60         ->Write();
  correl_plot_isoFPRCharged_pt30_60  ->Write();
  correl_plot_isoFPRNeutrals_pt30_60 ->Write();
  correl_plot_isoFPRPhotons_pt30_60  ->Write();
  
  isoCombined_pt30_60_BDT_bin0->Write();
  isoCombined_pt30_60_BDT_bin1->Write();
  isoCombined_pt30_60_BDT_bin2->Write();
  isoCombined_pt30_60_BDT_bin3->Write();
  isoCombined_pt30_60_BDT_bin4->Write();
  isoCombined_pt30_60_BDT_bin5->Write();
  isoCombined_pt30_60_BDT_bin6->Write();
  isoCombined_pt30_60_BDT_bin7->Write();
  isoCombined_pt30_60_BDT_bin8->Write();
  isoCombined_pt30_60_BDT_bin9->Write();
 
  isoPfCharged03_pt30_60_BDT_bin0->Write();
  isoPfCharged03_pt30_60_BDT_bin1->Write();
  isoPfCharged03_pt30_60_BDT_bin2->Write();
  isoPfCharged03_pt30_60_BDT_bin3->Write();
  isoPfCharged03_pt30_60_BDT_bin4->Write();
  isoPfCharged03_pt30_60_BDT_bin5->Write();
  isoPfCharged03_pt30_60_BDT_bin6->Write();
  isoPfCharged03_pt30_60_BDT_bin7->Write();
  isoPfCharged03_pt30_60_BDT_bin8->Write();
  isoPfCharged03_pt30_60_BDT_bin9->Write();

  isoPfNeutrals03_pt30_60_BDT_bin0->Write();
  isoPfNeutrals03_pt30_60_BDT_bin1->Write();
  isoPfNeutrals03_pt30_60_BDT_bin2->Write();
  isoPfNeutrals03_pt30_60_BDT_bin3->Write();
  isoPfNeutrals03_pt30_60_BDT_bin4->Write();
  isoPfNeutrals03_pt30_60_BDT_bin5->Write();
  isoPfNeutrals03_pt30_60_BDT_bin6->Write();
  isoPfNeutrals03_pt30_60_BDT_bin7->Write();
  isoPfNeutrals03_pt30_60_BDT_bin8->Write();
  isoPfNeutrals03_pt30_60_BDT_bin9->Write();

  isoPfPhotons03_pt30_60_BDT_bin0->Write();
  isoPfPhotons03_pt30_60_BDT_bin1->Write();
  isoPfPhotons03_pt30_60_BDT_bin2->Write();
  isoPfPhotons03_pt30_60_BDT_bin3->Write();
  isoPfPhotons03_pt30_60_BDT_bin4->Write();
  isoPfPhotons03_pt30_60_BDT_bin5->Write();
  isoPfPhotons03_pt30_60_BDT_bin6->Write();
  isoPfPhotons03_pt30_60_BDT_bin7->Write();
  isoPfPhotons03_pt30_60_BDT_bin8->Write();
  isoPfPhotons03_pt30_60_BDT_bin9->Write();



  profile_correl_plot_pt60_100             ->Write();
  profile_correl_plot_isoCharged_pt60_100  ->Write();
  profile_correl_plot_isoNeutrals_pt60_100 ->Write();
  profile_correl_plot_isoPhotons_pt60_100  ->Write();
  profile_correl_plot_isoFPR_pt60_100         ->Write();
  profile_correl_plot_isoFPRCharged_pt60_100  ->Write();
  profile_correl_plot_isoFPRNeutrals_pt60_100 ->Write();
  profile_correl_plot_isoFPRPhotons_pt60_100  ->Write();  

  correl_plot_pt60_100             ->Write();
  correl_plot_isoCharged_pt60_100  ->Write();
  correl_plot_isoNeutrals_pt60_100 ->Write();
  correl_plot_isoPhotons_pt60_100  ->Write();
  correl_plot_isoFPR_pt60_100         ->Write();
  correl_plot_isoFPRCharged_pt60_100  ->Write();
  correl_plot_isoFPRNeutrals_pt60_100 ->Write();
  correl_plot_isoFPRPhotons_pt60_100  ->Write();  

  isoCombined_pt60_100_BDT_bin0->Write();
  isoCombined_pt60_100_BDT_bin1->Write();
  isoCombined_pt60_100_BDT_bin2->Write();
  isoCombined_pt60_100_BDT_bin3->Write();
  isoCombined_pt60_100_BDT_bin4->Write();
  isoCombined_pt60_100_BDT_bin5->Write();
  isoCombined_pt60_100_BDT_bin6->Write();
  isoCombined_pt60_100_BDT_bin7->Write();
  isoCombined_pt60_100_BDT_bin8->Write();
  isoCombined_pt60_100_BDT_bin9->Write();
 
  isoPfCharged03_pt60_100_BDT_bin0->Write();
  isoPfCharged03_pt60_100_BDT_bin1->Write();
  isoPfCharged03_pt60_100_BDT_bin2->Write();
  isoPfCharged03_pt60_100_BDT_bin3->Write();
  isoPfCharged03_pt60_100_BDT_bin4->Write();
  isoPfCharged03_pt60_100_BDT_bin5->Write();
  isoPfCharged03_pt60_100_BDT_bin6->Write();
  isoPfCharged03_pt60_100_BDT_bin7->Write();
  isoPfCharged03_pt60_100_BDT_bin8->Write();
  isoPfCharged03_pt60_100_BDT_bin9->Write();

  isoPfNeutrals03_pt60_100_BDT_bin0->Write();
  isoPfNeutrals03_pt60_100_BDT_bin1->Write();
  isoPfNeutrals03_pt60_100_BDT_bin2->Write();
  isoPfNeutrals03_pt60_100_BDT_bin3->Write();
  isoPfNeutrals03_pt60_100_BDT_bin4->Write();
  isoPfNeutrals03_pt60_100_BDT_bin5->Write();
  isoPfNeutrals03_pt60_100_BDT_bin6->Write();
  isoPfNeutrals03_pt60_100_BDT_bin7->Write();
  isoPfNeutrals03_pt60_100_BDT_bin8->Write();
  isoPfNeutrals03_pt60_100_BDT_bin9->Write();

  isoPfPhotons03_pt60_100_BDT_bin0->Write();
  isoPfPhotons03_pt60_100_BDT_bin1->Write();
  isoPfPhotons03_pt60_100_BDT_bin2->Write();
  isoPfPhotons03_pt60_100_BDT_bin3->Write();
  isoPfPhotons03_pt60_100_BDT_bin4->Write();
  isoPfPhotons03_pt60_100_BDT_bin5->Write();
  isoPfPhotons03_pt60_100_BDT_bin6->Write();
  isoPfPhotons03_pt60_100_BDT_bin7->Write();
  isoPfPhotons03_pt60_100_BDT_bin8->Write();
  isoPfPhotons03_pt60_100_BDT_bin9->Write();



  profile_correl_plot_pt100             ->Write();
  profile_correl_plot_isoCharged_pt100  ->Write();
  profile_correl_plot_isoNeutrals_pt100 ->Write();
  profile_correl_plot_isoPhotons_pt100  ->Write();
  profile_correl_plot_isoFPR_pt100         ->Write();
  profile_correl_plot_isoFPRCharged_pt100  ->Write();
  profile_correl_plot_isoFPRNeutrals_pt100 ->Write();
  profile_correl_plot_isoFPRPhotons_pt100  ->Write();  

  correl_plot_pt100             ->Write();
  correl_plot_isoCharged_pt100  ->Write();
  correl_plot_isoNeutrals_pt100 ->Write();
  correl_plot_isoPhotons_pt100  ->Write();
  correl_plot_isoFPR_pt100         ->Write();
  correl_plot_isoFPRCharged_pt100  ->Write();
  correl_plot_isoFPRNeutrals_pt100 ->Write();
  correl_plot_isoFPRPhotons_pt100  ->Write();  

  isoCombined_pt100_BDT_bin0->Write();
  isoCombined_pt100_BDT_bin1->Write();
  isoCombined_pt100_BDT_bin2->Write();
  isoCombined_pt100_BDT_bin3->Write();
  isoCombined_pt100_BDT_bin4->Write();
  isoCombined_pt100_BDT_bin5->Write();
  isoCombined_pt100_BDT_bin6->Write();
  isoCombined_pt100_BDT_bin7->Write();
  isoCombined_pt100_BDT_bin8->Write();
  isoCombined_pt100_BDT_bin9->Write();
 
  isoPfCharged03_pt100_BDT_bin0->Write();
  isoPfCharged03_pt100_BDT_bin1->Write();
  isoPfCharged03_pt100_BDT_bin2->Write();
  isoPfCharged03_pt100_BDT_bin3->Write();
  isoPfCharged03_pt100_BDT_bin4->Write();
  isoPfCharged03_pt100_BDT_bin5->Write();
  isoPfCharged03_pt100_BDT_bin6->Write();
  isoPfCharged03_pt100_BDT_bin7->Write();
  isoPfCharged03_pt100_BDT_bin8->Write();
  isoPfCharged03_pt100_BDT_bin9->Write();

  isoPfNeutrals03_pt100_BDT_bin0->Write();
  isoPfNeutrals03_pt100_BDT_bin1->Write();
  isoPfNeutrals03_pt100_BDT_bin2->Write();
  isoPfNeutrals03_pt100_BDT_bin3->Write();
  isoPfNeutrals03_pt100_BDT_bin4->Write();
  isoPfNeutrals03_pt100_BDT_bin5->Write();
  isoPfNeutrals03_pt100_BDT_bin6->Write();
  isoPfNeutrals03_pt100_BDT_bin7->Write();
  isoPfNeutrals03_pt100_BDT_bin8->Write();
  isoPfNeutrals03_pt100_BDT_bin9->Write();

  isoPfPhotons03_pt100_BDT_bin0->Write();
  isoPfPhotons03_pt100_BDT_bin1->Write();
  isoPfPhotons03_pt100_BDT_bin2->Write();
  isoPfPhotons03_pt100_BDT_bin3->Write();
  isoPfPhotons03_pt100_BDT_bin4->Write();
  isoPfPhotons03_pt100_BDT_bin5->Write();
  isoPfPhotons03_pt100_BDT_bin6->Write();
  isoPfPhotons03_pt100_BDT_bin7->Write();
  isoPfPhotons03_pt100_BDT_bin8->Write();
  isoPfPhotons03_pt100_BDT_bin9->Write();


  outputFile->Close();  


  const Int_t NRGBs = 5;
  const Int_t NCont = 255;

  Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
  Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
  Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
  Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
  TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
  gStyle->SetNumberContours(NCont);
  
  //  gStyle->SetPalette(1);

 
}

/*
vector<int> calculateBinEdge(TH1F* BDToutput, int nstep) {

  vector<int> binEdge;
  binEdge.push_back(1); 
  int bin_edge=1;
  double entries = (double)BDToutput->Integral();
  double step_entries = (double)entries/(double)nstep;
  double sum_content=0;
  int i=1; int i_bdt_bin=0;
  std::cout << "entries = " << entries << "    entries per step = " << step_entries << std::endl;
  std::cout << "nBins = " << (int)BDToutput->GetNbinsX() << std::endl;
  std::cout << "binEdge[0] = " << 1 << std::endl;

  for(i=bin_edge; i<=(int)BDToutput->GetNbinsX(); i++){
    //std::cout << i << "bin content = " << (int)BDToutput->GetBinContent(i) << std::endl;
    sum_content+=(int)BDToutput->GetBinContent(i);
    
    if(sum_content>step_entries) {
      if(i_bdt_bin<10) {
	bin_edge=i+1;
	i_bdt_bin++;
	std::cout<< "sum_content = " << sum_content << std::endl;
	std::cout<< "bin edge " << i_bdt_bin << " = " << bin_edge << std::endl;
	binEdge.push_back(bin_edge);
	sum_content=0;
      }
      //if(i_bdt_bin==9) binEdge.push_back(1.);
    }
    //if(i_bdt_bin==9){
    //  sum_content+=(int)BDToutput->GetBinContent(i);
    //}
  }
  std::cout << "final bin sum_content = " << sum_content << endl;   
  std::cout << "n mva bins = " << i_bdt_bin;
   
  return binEdge;
}

vector<double> calculateBDTEdge(TH1F* BDToutput, vector<int> binEdge){
 
  vector<double> BDTEdge;
  double BDT_edge;
  for (int i=0; i<binEdge.size(); i++){
    BDT_edge =  (double)BDToutput->GetBinLowEdge(binEdge[i]);
    BDTEdge.push_back( BDT_edge );
    std::cout<< "BDT edge = " << BDT_edge << std::endl;
  }

  return BDTEdge;
}


*/
