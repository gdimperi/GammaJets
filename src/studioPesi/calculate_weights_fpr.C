#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"

#include "iostream"
#include "sstream"

using namespace std;

void calculate_weights(int hltCut);


void calculate_weights(int hltCut){

  // ---------------------------
  // to be changed
  //int hltCut = 135;
  // ---------------------------


  gStyle->SetOptStat(0);

  // input: v6
  TChain mc("finalTree");
  TChain data("finalTree");

  //hight pt bins exlcluded
  if (hltCut==30) {
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

  } else if (hltCut==50) {
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

  } else if (hltCut==75) {
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

  } else if (hltCut==90) {
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

  } else if (hltCut==135) {
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

  } else if (hltCut==150) {
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

  } 

  // output
  std::string hlt;
  ostringstream hltString;
  hltString << hltCut;
  hlt = "hlt" + hltString.str();
  std::string outputDir = "histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/";
  TFile* outputFile = new TFile((outputDir+"isoWeights_"+hlt+".root").c_str(), "RECREATE");
  outputFile->cd();

  // histos
  TH1F* combPfIsoFPR03Phot_notMatched_passMVA_EB    = new TH1F("combPfIsoFPR03Phot_notMatched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_notMatched_notPassMVA_EB = new TH1F("combPfIsoFPR03Phot_notMatched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_notMatched_passMVA_EE    = new TH1F("combPfIsoFPR03Phot_notMatched_passMVA_EE"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_notMatched_notPassMVA_EE = new TH1F("combPfIsoFPR03Phot_notMatched_notPassMVA_EE", "", 60, -5., 15.);

  TH1F* combPfIsoFPR03Phot_matched_passMVA_EB    = new TH1F("combPfIsoFPR03Phot_matched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_matched_notPassMVA_EB = new TH1F("combPfIsoFPR03Phot_matched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_matched_passMVA_EE    = new TH1F("combPfIsoFPR03Phot_matched_passMVA_EE"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_matched_notPassMVA_EE = new TH1F("combPfIsoFPR03Phot_matched_notPassMVA_EE", "", 60, -5., 15.);

  TH1F* combPfIsoFPR03Phot_data_passMVA_EB    = new TH1F("combPfIsoFPR03Phot_data_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_data_notPassMVA_EB = new TH1F("combPfIsoFPR03Phot_data_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_data_passMVA_EE    = new TH1F("combPfIsoFPR03Phot_data_passMVA_EE"   , "", 60, -5., 15.);
  TH1F* combPfIsoFPR03Phot_data_notPassMVA_EE = new TH1F("combPfIsoFPR03Phot_data_notPassMVA_EE", "", 60, -5., 15.);

  // errors
  combPfIsoFPR03Phot_notMatched_passMVA_EB    -> Sumw2();
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB -> Sumw2();
  combPfIsoFPR03Phot_notMatched_passMVA_EE    -> Sumw2();
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE -> Sumw2();

  combPfIsoFPR03Phot_matched_passMVA_EB    -> Sumw2();
  combPfIsoFPR03Phot_matched_notPassMVA_EB -> Sumw2();
  combPfIsoFPR03Phot_matched_passMVA_EE    -> Sumw2();
  combPfIsoFPR03Phot_matched_notPassMVA_EE -> Sumw2();
  
  combPfIsoFPR03Phot_data_passMVA_EB    -> Sumw2();
  combPfIsoFPR03Phot_data_notPassMVA_EB -> Sumw2();
  combPfIsoFPR03Phot_data_passMVA_EE    -> Sumw2();
  combPfIsoFPR03Phot_data_notPassMVA_EE -> Sumw2();


  // WP95
  std::string passMVA_EB, notPassMVA_EB, passMVA_EE, notPassMVA_EE;
  passMVA_EB    = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot<1. && mvaIdPhot>0.83548)";
  notPassMVA_EB = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6)";
  passMVA_EE    = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot<1. && mvaIdPhot>0.87382)";
  notPassMVA_EE = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6)";

  // ptcut 
  std::string pt;
  if (hltCut==30) {
    cout << "HLT cut = 30 ==> projecting 40-65" << endl;
    pt = "(ptPhot>40. && ptPhot<65.)"; 
  } else if (hltCut==50) {
    cout << "HLT cut = 50 ==> projecting 65-90" << endl;
    pt = "(ptPhot>65. && ptPhot<90.)"; 
  } else if (hltCut==75) {
    cout << "HLT cut = 75 ==> projecting 90-105" << endl;
    pt = "(ptPhot>90. && ptPhot<105.)"; 
  } else if (hltCut==90) {
    cout << "HLT cut = 90 ==> projecting 105-165" << endl;
    pt = "(ptPhot>105. && ptPhot<165.)"; 
  } else if (hltCut==135) {
    cout << "HLT cut = 135 ==> projecting 165-180" << endl;
    pt = "(ptPhot>165. && ptPhot<180.)"; 
  } else if (hltCut==150) {
    cout << "HLT cut = 150 ==> projecting >180" << endl;
    pt = "(ptPhot>180.)"; 
  }

  cout << "now projecting" << endl;
  mc.Project("combPfIsoFPR03Phot_matched_passMVA_EB"	  	,"combinedPfIsoFPR03Phot",("(isIsolatedGenPhot && "+passMVA_EB+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_matched_notPassMVA_EB"	  	,"combinedPfIsoFPR03Phot",("(isIsolatedGenPhot && "+notPassMVA_EB+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_matched_passMVA_EE"	  	,"combinedPfIsoFPR03Phot",("(isIsolatedGenPhot && "+passMVA_EE+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_matched_notPassMVA_EE"	  	,"combinedPfIsoFPR03Phot",("(isIsolatedGenPhot && "+notPassMVA_EE+" && "+pt+")*weight").c_str());
              						  
  mc.Project("combPfIsoFPR03Phot_notMatched_passMVA_EB"	  	,"combinedPfIsoFPR03Phot",("(!isIsolatedGenPhot && "+passMVA_EB+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_notMatched_notPassMVA_EB"      ,"combinedPfIsoFPR03Phot",("(!isIsolatedGenPhot && "+notPassMVA_EB+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_notMatched_passMVA_EE"	  	,"combinedPfIsoFPR03Phot",("(!isIsolatedGenPhot && "+passMVA_EE+" && "+pt+")*weight").c_str());
  mc.Project("combPfIsoFPR03Phot_notMatched_notPassMVA_EE"      ,"combinedPfIsoFPR03Phot",("(!isIsolatedGenPhot && "+notPassMVA_EE+" && "+pt+")*weight").c_str());
  
  data.Project("combPfIsoFPR03Phot_data_passMVA_EB"   		,"combinedPfIsoFPR03Phot",("("+passMVA_EB+" && "+pt+")*weight").c_str());
  data.Project("combPfIsoFPR03Phot_data_notPassMVA_EB"		,"combinedPfIsoFPR03Phot",("("+notPassMVA_EB+" && "+pt+")*weight").c_str());
  data.Project("combPfIsoFPR03Phot_data_passMVA_EE"   		,"combinedPfIsoFPR03Phot",("("+passMVA_EE+" && "+pt+")*weight").c_str());
  data.Project("combPfIsoFPR03Phot_data_notPassMVA_EE"		,"combinedPfIsoFPR03Phot",("("+notPassMVA_EE+" && "+pt+")*weight").c_str());
  
  cout << "done with the projections" << endl;


  // normalize histos
  float integral;

  integral = combPfIsoFPR03Phot_notMatched_passMVA_EB		->Integral();
  combPfIsoFPR03Phot_notMatched_passMVA_EB			->Scale(1./integral);
  integral = combPfIsoFPR03Phot_notMatched_notPassMVA_EB	->Integral();
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB			->Scale(1./integral);
  integral = combPfIsoFPR03Phot_notMatched_passMVA_EE		->Integral();
  combPfIsoFPR03Phot_notMatched_passMVA_EE			->Scale(1./integral);
  integral = combPfIsoFPR03Phot_notMatched_notPassMVA_EE	->Integral();
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE			->Scale(1./integral);

  integral = combPfIsoFPR03Phot_matched_passMVA_EB    		->Integral();
  combPfIsoFPR03Phot_matched_passMVA_EB		      		->Scale(1./integral);
  integral = combPfIsoFPR03Phot_matched_notPassMVA_EB 		->Integral();
  combPfIsoFPR03Phot_matched_notPassMVA_EB	      		->Scale(1./integral);
  integral = combPfIsoFPR03Phot_matched_passMVA_EE    		->Integral();
  combPfIsoFPR03Phot_matched_passMVA_EE		      		->Scale(1./integral);
  integral = combPfIsoFPR03Phot_matched_notPassMVA_EE 		->Integral();
  combPfIsoFPR03Phot_matched_notPassMVA_EE	      		->Scale(1./integral);

  integral = combPfIsoFPR03Phot_data_passMVA_EB    		->Integral();
  combPfIsoFPR03Phot_data_passMVA_EB		      		->Scale(1./integral);
  integral = combPfIsoFPR03Phot_data_notPassMVA_EB 		->Integral();
  combPfIsoFPR03Phot_data_notPassMVA_EB	      			->Scale(1./integral);
  integral = combPfIsoFPR03Phot_data_passMVA_EE    		->Integral();
  combPfIsoFPR03Phot_data_passMVA_EE		      		->Scale(1./integral);
  integral = combPfIsoFPR03Phot_data_notPassMVA_EE 		->Integral();
  combPfIsoFPR03Phot_data_notPassMVA_EE	      			->Scale(1./integral);

  //rebin
  combPfIsoFPR03Phot_matched_passMVA_EB				->Rebin(3);	  
  combPfIsoFPR03Phot_matched_notPassMVA_EB			->Rebin(3);	  
  combPfIsoFPR03Phot_matched_passMVA_EE				->Rebin(3);	  
  combPfIsoFPR03Phot_matched_notPassMVA_EE			->Rebin(3);	  
  
  combPfIsoFPR03Phot_notMatched_passMVA_EB			->Rebin(3);	  
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB			->Rebin(3);
  combPfIsoFPR03Phot_notMatched_passMVA_EE			->Rebin(3);	  
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE			->Rebin(3);

  combPfIsoFPR03Phot_data_passMVA_EB				->Rebin(3);   
  combPfIsoFPR03Phot_data_notPassMVA_EB				->Rebin(3);
  combPfIsoFPR03Phot_data_passMVA_EE				->Rebin(3);   
  combPfIsoFPR03Phot_data_notPassMVA_EE				->Rebin(3);

  
  //smoothing
  combPfIsoFPR03Phot_matched_passMVA_EB				->Smooth();	  
  combPfIsoFPR03Phot_matched_notPassMVA_EB			->Smooth();	  
  combPfIsoFPR03Phot_matched_passMVA_EE				->Smooth();	  
  combPfIsoFPR03Phot_matched_notPassMVA_EE			->Smooth();	  
  
  combPfIsoFPR03Phot_notMatched_passMVA_EB			->Smooth();	  
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB			->Smooth();
  combPfIsoFPR03Phot_notMatched_passMVA_EE			->Smooth();	  
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE			->Smooth();

  combPfIsoFPR03Phot_data_passMVA_EB				->Smooth();   
  combPfIsoFPR03Phot_data_notPassMVA_EB				->Smooth();
  combPfIsoFPR03Phot_data_passMVA_EE				->Smooth();   
  combPfIsoFPR03Phot_data_notPassMVA_EE				->Smooth();
  

  // saving in the output file
  // combPfIsoFPR03Phot_notMatched_passMVA_EB				->Write();
  // combPfIsoFPR03Phot_notMatched_notPassMVA_EB				->Write();
  // combPfIsoFPR03Phot_notMatched_passMVA_EE				->Write();
  // combPfIsoFPR03Phot_notMatched_notPassMVA_EE				->Write();
  // combPfIsoFPR03Phot_matched_passMVA_EB    				->Write();
  // combPfIsoFPR03Phot_matched_notPassMVA_EB 				->Write();
  // combPfIsoFPR03Phot_matched_passMVA_EE	   				->Write();
  // combPfIsoFPR03Phot_matched_notPassMVA_EE 				->Write();

  cout << "done with first step. Moving to the weights" << endl;


  // now computing the weights
  TH1F* h_isoWeight_EB = (TH1F*)combPfIsoFPR03Phot_notMatched_passMVA_EB	->Clone("h_isoWeight_EB");
  h_isoWeight_EB								->Divide(combPfIsoFPR03Phot_notMatched_notPassMVA_EB);
  TH1F* h_isoWeight_EE = (TH1F*)combPfIsoFPR03Phot_notMatched_passMVA_EE	->Clone("h_isoWeight_EE");
  h_isoWeight_EE								->Divide(combPfIsoFPR03Phot_notMatched_notPassMVA_EE);

  //w1 and w2 (for systematics) 
  TH1F* h_syst_EB = (TH1F*)combPfIsoFPR03Phot_notMatched_notPassMVA_EB    	->Clone("h_syst_EB");
  h_syst_EB									->Divide(combPfIsoFPR03Phot_data_notPassMVA_EB);
  TH1F* h_syst_EE = (TH1F*)combPfIsoFPR03Phot_notMatched_notPassMVA_EE    	->Clone("h_syst_EE");
  h_syst_EE									->Divide(combPfIsoFPR03Phot_data_notPassMVA_EE);

  TH1F* h_isoWeight1_EB = (TH1F*)h_isoWeight_EB					->Clone("h_isoWeight1_EB");
  h_isoWeight1_EB								->Multiply(h_syst_EB);
  TH1F* h_isoWeight1_EE = (TH1F*)h_isoWeight_EE					->Clone("h_isoWeight1_EE");
  h_isoWeight1_EE								->Multiply(h_syst_EE);

  TH1F* h_isoWeight2_EB = (TH1F*)h_isoWeight_EB					->Clone("h_isoWeight2_EB");
  h_isoWeight2_EB								->Divide(h_syst_EB);
  TH1F* h_isoWeight2_EE = (TH1F*)h_isoWeight_EE					->Clone("h_isoWeight2_EE");
  h_isoWeight2_EE								->Divide(h_syst_EE);

  /*
  h_isoWeight_EB->Smooth();
  h_isoWeight_EE->Smooth();
  h_isoWeight1_EB->Smooth();
  h_isoWeight1_EE->Smooth();
  h_isoWeight2_EB->Smooth();
  h_isoWeight2_EE->Smooth();
  */


  /*
  TH1F* h_w1_deltaw_EB = (TH1F*)h_isoWeight_EB				->Clone("h_w1_deltaw_EB");
  h_w1_deltaw_EB							->Add(h_isoWeight_EB);
  h_w1_deltaw_EB							->Add(h_isoWeight2_EB,-1.);
  TH1F* h_w1_deltaw_EE = (TH1F*)h_isoWeight_EE				->Clone("h_w1_deltaw_EE");
  h_w1_deltaw_EE							->Add(h_isoWeight_EE);
  h_w1_deltaw_EE							->Add(h_isoWeight2_EE,-1.);

  TH1F* h_w1_w2_EB = (TH1F*)h_isoWeight_EB				->Clone("h_w1_w2_EB");
  h_w1_w2_EB								->Divide(h_isoWeight2_EB);
  TH1F* h_w2_w1_EB = (TH1F*)h_isoWeight2_EB				->Clone("h_w2_w1_EB");
  h_w2_w1_EB								->Divide(h_isoWeight_EB);
  TH1F* h_w1_w2_EE = (TH1F*)h_isoWeight_EE				->Clone("h_w1_w2_EE");
  h_w1_w2_EE								->Divide(h_isoWeight2_EE);
  TH1F* h_w2_w1_EE = (TH1F*)h_isoWeight2_EE				->Clone("h_w2_w1_EE");
  h_w2_w1_EE								->Divide(h_isoWeight_EE);
  */


  // weights histos
  h_isoWeight_EB	->GetXaxis()->SetTitle("combinedPfIsoFPR03");
  h_isoWeight_EE	->GetXaxis()->SetTitle("combinedPfIsoFPR03");
  h_isoWeight_EB	->GetYaxis()->SetTitle("weight");
  h_isoWeight_EE	->GetYaxis()->SetTitle("weight");

  h_isoWeight_EB	->SetMarkerSize(0.8);
  h_isoWeight_EE	->SetMarkerSize(0.8);
  h_isoWeight_EB	->SetMarkerSize(0.8);
  h_isoWeight_EE	->SetMarkerSize(0.8);

  h_isoWeight_EB	->SetLineWidth(1);
  h_isoWeight_EE	->SetLineWidth(1);
  h_isoWeight_EB	->SetLineWidth(1);
  h_isoWeight_EE	->SetLineWidth(1);

  h_isoWeight_EB	->GetYaxis()->SetRangeUser(-0.5,5.);
  h_isoWeight_EE	->GetYaxis()->SetRangeUser(-0.5,5.);

  h_isoWeight1_EB	->GetXaxis()->SetTitle("combinedPfIsoFPR03");
  h_isoWeight1_EE	->GetXaxis()->SetTitle("combinedPfIsoFPR03");

  h_isoWeight1_EB	->SetMarkerStyle(4);
  h_isoWeight1_EE	->SetMarkerStyle(4);
  h_isoWeight2_EB       ->SetMarkerStyle(4);
  h_isoWeight2_EE       ->SetMarkerStyle(4);

  h_isoWeight1_EB	->SetMarkerSize(0.8);
  h_isoWeight1_EE	->SetMarkerSize(0.8);
  h_isoWeight2_EB       ->SetMarkerSize(0.8);
  h_isoWeight2_EE       ->SetMarkerSize(0.8);

  h_isoWeight1_EB	->SetMarkerColor(kMagenta);
  h_isoWeight1_EE	->SetMarkerColor(kMagenta);
  h_isoWeight2_EB       ->SetMarkerColor(kGreen);
  h_isoWeight2_EE       ->SetMarkerColor(kGreen);

  h_isoWeight1_EB	->SetLineColor(kMagenta);
  h_isoWeight1_EE	->SetLineColor(kMagenta);
  h_isoWeight2_EB       ->SetLineColor(kGreen);
  h_isoWeight2_EE       ->SetLineColor(kGreen);

  h_isoWeight1_EB	->SetLineWidth(1);
  h_isoWeight1_EE	->SetLineWidth(1);
  h_isoWeight2_EB       ->SetLineWidth(1);
  h_isoWeight2_EE       ->SetLineWidth(1);

  h_isoWeight1_EB	->GetYaxis()->SetRangeUser(-0.5,5.);
  h_isoWeight1_EE	->GetYaxis()->SetRangeUser(-0.5,5.);
  h_isoWeight2_EB       ->GetYaxis()->SetRangeUser(-0.5,5.);
  h_isoWeight2_EE       ->GetYaxis()->SetRangeUser(-0.5,5.);

  /*  
  h_w1_w2_EB 		-> SetMarkerStyle(4);
  h_w1_w2_EE 		-> SetMarkerStyle(4);
  h_w2_w1_EB 		-> SetMarkerStyle(4);
  h_w2_w1_EE 		-> SetMarkerStyle(4);

  h_w1_w2_EB 		-> SetMarkerSize(0.8);
  h_w1_w2_EE 		-> SetMarkerSize(0.8);
  h_w2_w1_EB 		-> SetMarkerSize(0.8);
  h_w2_w1_EE 		-> SetMarkerSize(0.8);

  h_w1_w2_EB 		-> SetMarkerColor(kMagenta);
  h_w1_w2_EE 		-> SetMarkerColor(kMagenta);
  h_w2_w1_EB 		-> SetMarkerColor(kGreen);
  h_w2_w1_EE 		-> SetMarkerColor(kGreen);

  h_w1_w2_EB 		-> SetLineColor(kMagenta);
  h_w1_w2_EE 		-> SetLineColor(kMagenta);
  h_w2_w1_EB 		-> SetLineColor(kGreen);
  h_w2_w1_EE 		-> SetLineColor(kGreen);
  */
  
  // plots
  TCanvas* c1 = new TCanvas("c1", "", 1);
  c1			->cd();
  h_isoWeight_EB	->Draw("PE1");
  c1			->SaveAs((outputDir+"isoWeights_"+hlt+"_EB.png").c_str());
  c1			->Clear();
  
  h_isoWeight_EE	->Draw("PE1");
  c1			->SaveAs((outputDir+"isoWeights_"+hlt+"_EE.png").c_str());
  c1			->Clear();  

  TLegend* leg1= new TLegend(0.5,0.6,0.85,0.8);
  leg1			->SetFillColor(0);
  leg1			->SetBorderSize(0);
  leg1			->AddEntry(h_isoWeight_EB, "w (real weight)", "p");
  leg1			->AddEntry(h_isoWeight1_EB,"w1 (for syst.)", "p");
  leg1			->AddEntry(h_isoWeight2_EB,"w2 (for syst.)", "p");
  
  h_isoWeight_EB	->Draw("PE1");
  h_isoWeight1_EB       ->Draw("PE1SAME");
  h_isoWeight2_EB       ->Draw("PE1SAME");
  leg1                  ->Draw();
  c1			->SaveAs((outputDir+"w1_w2_"+hlt+"_EB.png").c_str());
  c1			->Clear();
  
  h_isoWeight_EE	->Draw("PE1");
  h_isoWeight1_EE       ->Draw("PE1SAME");
  h_isoWeight2_EE       ->Draw("PE1SAME");
  leg1                  ->Draw();
  c1			->SaveAs((outputDir+"w1_w2_"+hlt+"_EE.png").c_str());
  c1			->Clear();
  
  /*
  TLegend* leg= new TLegend(0.5,0.6,0.85,0.8);
  leg			->SetFillColor(0);
  leg			->SetBorderSize(0);
  leg			->AddEntry(h_isoWeight_EB, "weight", "p");
  leg			->AddEntry(h_w1_w2_EB, "w1/w2 (data/MC)", "p");
  leg			->AddEntry(h_w2_w1_EB, "w2/w1 (MC/data)", "p");

  h_isoWeight_EB	->Draw("PE1");
  h_w1_w2_EB            ->Draw("PE1SAME");
  h_w2_w1_EB            ->Draw("PE1SAME");
  leg                   ->Draw();
  c1			->SaveAs((outputDir+"isoWeights_"+hlt+"_syst_EB.png").c_str());
  c1			->Clear();
  
  h_isoWeight_EE	->Draw("PE1");
  h_w1_w2_EE            ->Draw("PE1SAME");
  h_w2_w1_EE            ->Draw("PE1SAME");
  leg                   ->Draw();
  c1			->SaveAs((outputDir+"isoWeights_"+hlt+"_syst_EE.png").c_str());
  c1			->Clear();  
  */

  h_isoWeight_EB	->Write();
  h_isoWeight_EE	->Write();
  h_isoWeight1_EB       ->Write();
  h_isoWeight1_EE       ->Write();
  h_isoWeight2_EB       ->Write();
  h_isoWeight2_EE       ->Write();

  // some basic checks
  //barrel
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB->SetLineColor(6);
  combPfIsoFPR03Phot_notMatched_passMVA_EB->SetLineColor(3);
  TLegend* leg2=new TLegend(0.5,0.6,0.85, 0.8);
  leg2->SetBorderSize(0);
  leg2->SetFillColor(0);
  leg2->AddEntry(combPfIsoFPR03Phot_notMatched_notPassMVA_EB, "not matched, Bregion", "l");
  leg2->AddEntry(combPfIsoFPR03Phot_notMatched_passMVA_EB, "not matched, Sregion", "l");
  combPfIsoFPR03Phot_notMatched_passMVA_EB->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB->DrawNormalized("histsame");
  leg2->Draw();
  c1->SaveAs((outputDir+"fotoniDiFondo_cheNONPassanoMVA_chePassanoMVA_"+hlt+"_EB.png").c_str());
  c1->Clear();

  combPfIsoFPR03Phot_data_notPassMVA_EB->SetLineColor(6);
  combPfIsoFPR03Phot_data_passMVA_EB->SetLineColor(3);
  combPfIsoFPR03Phot_data_passMVA_EB->DrawNormalized("hist");
  combPfIsoFPR03Phot_data_notPassMVA_EB->DrawNormalized("histsame");
  leg2->Draw();
  c1->SaveAs((outputDir+"fotoniDati_cheNONPassanoMVA_chePassanoMVA_"+hlt+"_EB.png").c_str());
  c1->Clear();


  combPfIsoFPR03Phot_notMatched_passMVA_EB->SetLineColor(4);
  combPfIsoFPR03Phot_matched_passMVA_EB->SetLineColor(2);
  TLegend* leg3=new TLegend(0.5,0.6,0.85, 0.8);
  leg3->SetBorderSize(0);
  leg3->SetFillColor(0);
  leg3->AddEntry(combPfIsoFPR03Phot_notMatched_passMVA_EB, "not matched, Sregion", "l");
  leg3->AddEntry(combPfIsoFPR03Phot_matched_passMVA_EB, "matched, Sregion", "l");
  combPfIsoFPR03Phot_matched_passMVA_EB->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_passMVA_EB->DrawNormalized("histsame");
  leg3->Draw();
  c1->SaveAs((outputDir+"fotoniDiSegnale_fotoniDiFondo_chePassanoMVA_"+hlt+"_EB.png").c_str());
  c1->Clear();

  combPfIsoFPR03Phot_notMatched_notPassMVA_EB->SetLineColor(4);
  combPfIsoFPR03Phot_matched_notPassMVA_EB->SetLineColor(2);
  TLegend* leg4=new TLegend(0.5,0.6,0.85, 0.8);
  leg4->SetBorderSize(0);
  leg4->SetFillColor(0);
  leg4->AddEntry(combPfIsoFPR03Phot_notMatched_notPassMVA_EB, "not matched, Bregion", "l");
  leg4->AddEntry(combPfIsoFPR03Phot_matched_notPassMVA_EB, "matched, Bregion", "l");
  combPfIsoFPR03Phot_matched_notPassMVA_EB->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_notPassMVA_EB->DrawNormalized("histsame");
  leg4->Draw();
  c1->SaveAs((outputDir+"fotoniDiSegnale_fotoniDiFondo_cheNonPassanoMVA_"+hlt+"_EB.png").c_str());
  c1->Clear();

  //endcap
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE->SetLineColor(6);
  combPfIsoFPR03Phot_notMatched_passMVA_EE->SetLineColor(3);
  combPfIsoFPR03Phot_notMatched_passMVA_EE->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE->DrawNormalized("histsame");
  leg2->Draw();
  c1->SaveAs((outputDir+"fotoniDiFondo_cheNONPassanoMVA_chePassanoMVA_"+hlt+"_EE.png").c_str());
  c1->Clear();


  combPfIsoFPR03Phot_data_notPassMVA_EE->SetLineColor(6);
  combPfIsoFPR03Phot_data_passMVA_EE->SetLineColor(3);
  combPfIsoFPR03Phot_data_passMVA_EE->DrawNormalized("hist");
  combPfIsoFPR03Phot_data_notPassMVA_EE->DrawNormalized("histsame");
  leg2->Draw();
  c1->SaveAs((outputDir+"fotoniDati_cheNONPassanoMVA_chePassanoMVA_"+hlt+"_EE.png").c_str());
  c1->Clear();



  combPfIsoFPR03Phot_notMatched_passMVA_EE->SetLineColor(4);
  combPfIsoFPR03Phot_matched_passMVA_EE->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_passMVA_EE->DrawNormalized("histsame");
  leg3->Draw();
  c1->SaveAs((outputDir+"fotoniDiSegnale_fotoniDiFondo_chePassanoMVA_"+hlt+"_EE.png").c_str());
  c1->Clear();

  combPfIsoFPR03Phot_notMatched_notPassMVA_EE->SetLineColor(4);
  combPfIsoFPR03Phot_matched_notPassMVA_EE->SetLineColor(2);
  combPfIsoFPR03Phot_matched_notPassMVA_EE->DrawNormalized("hist");
  combPfIsoFPR03Phot_notMatched_notPassMVA_EE->DrawNormalized("histsame");
  leg4->Draw();
  c1->SaveAs((outputDir+"fotoniDiSegnale_fotoniDiFondo_cheNonPassanoMVA_"+hlt+"_EE.png").c_str());
  c1->Clear();


  c1->Close();
  
  outputFile->Close();
}
