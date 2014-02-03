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


void mvaIsoCorrel(int isEB, int isSig, int hlt){

  cout << "----------------------------------------------" << endl
       << "Usage" << endl
       << "isEB  : 1 for barrel " << endl
       << "isSig : 1 for matched and isolated photons" << endl
       << "hlt   : 30, 50, 75, 90, 135, 150, 0 for all" << endl
       << "----------------------------------------------"
       << endl << endl;

  char fileName[100];
  char outputDir[] = "/afs/cern.ch/work/g/gdimperi/GammaJet/chiara_repo/CMSSW_5_3_14/src/GammaJets/src/reduced_analysis/histo_v6/genIso4/";

  if(isEB){
    if (isSig)
      sprintf(fileName,"%smvaIso_hlt%d_histo_EB_isMatch.root", outputDir, hlt);
    else 
      sprintf(fileName,"%smvaIso_hlt%d_histo_EB_isNotMatch.root", outputDir, hlt);
  }
  else if(!isEB){
    if (isSig)
      sprintf(fileName,"%smvaIso_hlt%d_histo_EE_isMatch.root", outputDir, hlt);
    else 
      sprintf(fileName,"%smvaIso_hlt%d_histo_EE_isNotMatch.root", outputDir, hlt);
  }

  TFile* outputFile = new TFile(fileName, "RECREATE");
  
  //loading MC to fit
  TChain mc("finalTree");
  
  //v6
  //hlt30
  if(hlt==30 || hlt==0){
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-470to800_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-800to1400_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/QCDEM_Pt_170_250_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/QCDEM_Pt_20_30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/QCDEM_Pt_250_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/QCDEM_Pt_30_80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/QCDEM_Pt_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT30/QCDEM_Pt_80_170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   
  }
  //hlt50
  if(hlt==50 || hlt==0){
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-470to800_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-800to1400_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/QCDEM_Pt_170_250_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/QCDEM_Pt_20_30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/QCDEM_Pt_250_350_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/QCDEM_Pt_30_80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/QCDEM_Pt_350_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT50/QCDEM_Pt_80_170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");     
  }
  //hlt75
  if(hlt==75 || hlt==0){
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-470to800_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-800to1400_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/QCDEM_Pt_170_250_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/QCDEM_Pt_20_30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/QCDEM_Pt_250_350_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/QCDEM_Pt_30_80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/QCDEM_Pt_350_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT75/QCDEM_Pt_80_170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");     
  }  
  //hlt90
  if(hlt==90 || hlt==0){
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-470to800_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-800to1400_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/QCDEM_Pt_170_250_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/QCDEM_Pt_20_30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/QCDEM_Pt_250_350_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/QCDEM_Pt_30_80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/QCDEM_Pt_350_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT90/QCDEM_Pt_80_170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");     
  }
  //hlt135
  if(hlt==135 || hlt==0){
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-470to800_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-800to1400_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/QCDEM_Pt_170_250_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/QCDEM_Pt_20_30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/QCDEM_Pt_250_350_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/QCDEM_Pt_30_80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/QCDEM_Pt_350_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/crovelli/GammaJets/ridottissime/HLT135/QCDEM_Pt_80_170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");     
  }
  //hlt150... ?

  outputFile->cd();  

  TH2F* correl_plot = new TH2F("correl_plot", "", 60, -1., 1., 60, -5, 15);
  TH2F* correl_plot_isoCharged = new TH2F("correl_plot_isoCharged", "", 60, -1., 1., 60, -5, 15);
  TH2F* correl_plot_isoNeutrals = new TH2F("correl_plot_isoNeutrals", "", 60, -1., 1., 60, -5, 15);
  TH2F* correl_plot_isoPhotons = new TH2F("correl_plot_isoPhotons", "", 60, -1., 1., 60, -5, 15);


  // correl isoFPR with BDT
  TH2F* correl_plot_isoFPR = new TH2F("correl_plot_isoFPR", "", 60, -1., 1., 60, -5., 15);
  TH2F* correl_plot_isoFPRCharged = new TH2F("correl_plot_isoFPRCharged", "", 60, -1., 1., 60,-5., 15);
  TH2F* correl_plot_isoFPRNeutrals = new TH2F("correl_plot_isoFPRNeutrals", "", 60, -1., 1., 60, -5., 15);
  TH2F* correl_plot_isoFPRPhotons = new TH2F("correl_plot_isoFPRPhotons", "", 60, -1., 1., 60, -5, 15);


  TProfile* profile_correl_plot;
  TProfile* profile_correl_plot_isoCharged;
  TProfile* profile_correl_plot_isoNeutrals;
  TProfile* profile_correl_plot_isoPhotons;

  // correl isoFPR with BDT
  TProfile* profile_correl_plot_isoFPR;
  TProfile* profile_correl_plot_isoFPRCharged;
  TProfile* profile_correl_plot_isoFPRNeutrals;
  TProfile* profile_correl_plot_isoFPRPhotons;

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
  conditions = "(" + SBconditions_genIso4 + " && " + ecalRegion + ")*weight";
  mc.Project("BDToutput", "mvaIdPhot" , conditions.c_str());
  
  vector<int> binEdge;
  vector<double> BDTEdge;
  cout << "*******  all pt *********" << endl;
  binEdge = calculateBinEdge(BDToutput,10);
  BDTEdge = calculateBDTEdge(BDToutput, binEdge);

  string name, i_string;
  char conditions_char[200]; 
  char name_char[100];

 
  if(hlt==0){
    cout << "Start filling histograms" << endl;
    cout << "********************************************************** " << endl
	 << "*             filling all pt                             * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==30){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 40 to 65                       * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==50){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 65 to 90                       * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==75){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 90 to 105                      * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==90){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 105 to 165                     * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==135){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 165 to 180                     * " << endl
	 << "********************************************************** " << endl;      
  }
  else if(hlt==150){
    cout << "********************************************************** " << endl
	 << "*             filling  pt 180 to inf                     * " << endl
	 << "********************************************************** " << endl;      
  }
  
  conditions = "(" + SBconditions_genIso4 + " && " + ecalRegion + ")*weight";
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

  mc.Project("correl_plot_isoFPRCharged", "correctedPfIsoFPRCharged03:mvaIdPhot", conditions.c_str());
  correl_plot_isoCharged->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoCharged->GetYaxis()->SetTitle("PF Iso Charged 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRNeutrals", "correctedPfIsoFPRNeutrals03:mvaIdPhot", conditions.c_str());
  correl_plot_isoNeutrals->GetXaxis()->SetTitle("BDT output");
  correl_plot_isoNeutrals->GetYaxis()->SetTitle("PF Iso Neutrals 03 with FPR [GeV]");

  mc.Project("correl_plot_isoFPRPhotons", "correctedPfIsoFPRPhotons03:mvaIdPhot", conditions.c_str());
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

  //chiusura
  conditions = "(" + SBconditions_notGenIsoCut + " && " + ecalRegion + ")*weight";
  mc.Project("combinedPfIsoFPR03Phot_notGenIsoCut", "combinedPfIsoFPR03Phot", conditions.c_str());
  mc.Project("combinedPfIsoFPRRandomCone03Phot_notGenIsoCut", "combinedPfIsoFPRRandomCone03Phot", conditions.c_str());
  conditions = "(" + SBconditions + " && " + ecalRegion + ")*weight";
  mc.Project("combinedPfIsoFPR03Phot", "combinedPfIsoFPR03Phot", conditions.c_str());
  mc.Project("combinedPfIsoFPRRandomCone03Phot", "combinedPfIsoFPRRandomCone03Phot", conditions.c_str());

  conditions = "(" + SBconditions_genIso4 + " && " + ecalRegion + ")*weight";
  mc.Project("combinedPfIsoFPR03Phot_genIso4", "combinedPfIsoFPR03Phot", conditions.c_str());
  mc.Project("combinedPfIsoFPRRandomCone03Phot_genIso4", "combinedPfIsoFPRRandomCone03Phot", conditions.c_str());
  mc.Project("pid_pfIsoFPRCharged03", "pid_pfIsoFPRCharged03_presel", conditions.c_str());
  mc.Project("pid_pfIsoFPRNeutral03", "pid_pfIsoFPRNeutral03_presel", conditions.c_str());
  mc.Project("pid_pfIsoFPRPhoton03",  "pid_pfIsoFPRPhoton03_presel", conditions.c_str());

  mc.Project("pid_pfIsoFPRRandomConeCharged03", "pid_pfIsoFPRRandomConeCharged03_presel", conditions.c_str());
  mc.Project("pid_pfIsoFPRRandomConeNeutral03", "pid_pfIsoFPRRandomConeNeutral03_presel", conditions.c_str());
  mc.Project("pid_pfIsoFPRRandomConePhoton03", "pid_pfIsoFPRRandomConePhoton03_presel", conditions.c_str());


  //iso in bdt bins
  for (int i=0; i<9; i++){
    sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<%f))*weight", SBconditions_genIso4.c_str(), ecalRegion.c_str(), BDTEdge[i], BDTEdge[i+1]);
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
  
  sprintf(conditions_char, "(%s && %s && (mvaIdPhot>%f && mvaIdPhot<1.))*weight", SBconditions_genIso4.c_str(), ecalRegion.c_str(), BDTEdge[9]);  
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


  // write on file
  cout << " " << endl;
  cout << "-------- write on file---------- " << endl;
  cout << " " << endl;

  BDToutput          ->Write();

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

  combinedPfIsoFPR03Phot_genIso4->Write();
  combinedPfIsoFPRRandomCone03Phot_genIso4->Write();
  combinedPfIsoFPR03Phot_genIso4->Write();
  combinedPfIsoFPRRandomCone03Phot_genIso4->Write();

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

