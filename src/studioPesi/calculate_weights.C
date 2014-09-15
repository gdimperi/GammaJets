#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"

#include "iostream"

void calculate_weights(int hltCut, int isFPR){

  gStyle->SetOptStat(0);

  // input: v6
  TChain mc("finalTree");
  TChain data("finalTree");

  //string inputDir = "/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/";
  string inputDir = "/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";
  string s_hltcut;

  //hight pt bins exlcluded
  if (hltCut==30) {
    //mc.Add((inputDir+"HLT30/G_Pt*root");
    s_hltcut="hlt30";
    mc.Add((inputDir+"HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT30/QCDEM*root").c_str());
    
    data.Add((inputDir+"HLT30/*2012A*root").c_str());
    data.Add((inputDir+"HLT30/*2012B*root").c_str());
    data.Add((inputDir+"HLT30/*2012C*root").c_str());
    data.Add((inputDir+"HLT30/*2012D*root").c_str());
    
  } else if (hltCut==50) {
    s_hltcut="hlt50"; 
   //mc.Add((inputDir+"HLT50/G_Pt*root").c_str());
    mc.Add((inputDir+"HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT50/QCDEM*root").c_str());

    data.Add((inputDir+"HLT50/*2012A*root").c_str());
    data.Add((inputDir+"HLT50/*2012B*root").c_str());
    data.Add((inputDir+"HLT50/*2012C*root").c_str());
    data.Add((inputDir+"HLT50/*2012D*root").c_str());

  } else if (hltCut==75) {
    s_hltcut="hlt75";
    //mc.Add((inputDir+"HLT75/G_Pt*root").c_str());
    mc.Add((inputDir+"HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT75/QCDEM*root").c_str());

    data.Add((inputDir+"HLT75/*2012A*root").c_str());
    data.Add((inputDir+"HLT75/*2012B*root").c_str());
    data.Add((inputDir+"HLT75/*2012C*root").c_str());
    data.Add((inputDir+"HLT75/*2012D*root").c_str());

  } else if (hltCut==90) {
    s_hltcut="hlt90";
    //mc.Add((inputDir+"HLT90/G_Pt*root").c_str());
    mc.Add((inputDir+"HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT90/QCDEM*root").c_str());

    data.Add((inputDir+"HLT90/*2012A*root").c_str());
    data.Add((inputDir+"HLT90/*2012B*root").c_str());
    data.Add((inputDir+"HLT90/*2012C*root").c_str());
    data.Add((inputDir+"HLT90/*2012D*root").c_str());

  } else if (hltCut==135) {
    s_hltcut="hlt135";
    //mc.Add((inputDir+"HLT135/G_Pt*root").c_str());
    mc.Add((inputDir+"HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT135/QCDEM*root").c_str());

    data.Add((inputDir+"HLT135/*2012A*root").c_str());
    data.Add((inputDir+"HLT135/*2012B*root").c_str());
    data.Add((inputDir+"HLT135/*2012C*root").c_str());
    data.Add((inputDir+"HLT135/*2012D*root").c_str());
    
  } else if (hltCut==150) {
    s_hltcut="hlt150";
    //mc.Add((inputDir+"HLT150/G_Pt*root").c_str());
    mc.Add((inputDir+"HLT150/G_Pt-120to170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT150/G_Pt-15to30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT150/G_Pt-170to300_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT150/G_Pt-300to470_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT150/G_Pt-30to50_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT150/G_Pt-50to80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT150/G_Pt-80to120_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());
    mc.Add((inputDir+"HLT150/QCDEM*root").c_str());
    
    data.Add((inputDir+"HLT150/*2012A*root").c_str());
    data.Add((inputDir+"HLT150/*2012B*root").c_str());
    data.Add((inputDir+"HLT150/*2012C*root").c_str());
    data.Add((inputDir+"HLT150/*2012D*root").c_str());

  } 

  // output
  std::string outputDir;
  if (isFPR) outputDir = "histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/";
  else outputDir = "histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/";
  TFile* outputFile = new TFile((outputDir+"isoWeights_"+s_hltcut+".root").c_str(), "RECREATE");
  

  // WP95
  std::string passMVA_EB, notPassMVA_EB, passMVA_EE, notPassMVA_EE;
  passMVA_EB    = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot<1. && mvaIdPhot>0.83548)";
  notPassMVA_EB = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6)";
  passMVA_EE    = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot<1. && mvaIdPhot>0.87382)";
  notPassMVA_EE = "(weight>0 && weight<15000) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6)";
    
    //ptCut
  string ptCut;
  if(hltCut==30) ptCut = "(ptPhot>40. && ptPhot<65.)";
  if(hltCut==50) ptCut = "(ptPhot>65. && ptPhot<90.)";
  if(hltCut==75) ptCut = "(ptPhot>90. && ptPhot<105.)";
  if(hltCut==90) ptCut = "(ptPhot>105. && ptPhot<165.)";
  if(hltCut==135) ptCut = "(ptPhot>165. && ptPhot<180.)";
  if(hltCut==150) ptCut = "(ptPhot>180. && ptPhot<200000.)";

  TH1F* h_isoWeight_EB;
  TH1F* h_isoWeight_EE;

  //w1 and w2 (for systematics) 
  TH1F* h_syst_EB;
  TH1F* h_syst_EE;
  TH1F* h_isoWeight1_EB;
  TH1F* h_isoWeight1_EE;
  TH1F* h_isoWeight2_EB;
  TH1F* h_isoWeight2_EE;

  // histos
  TH1F* combPfIso03Phot_notMatched_passMVA_EB    = new TH1F("combPfIso03Phot_notMatched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* combPfIso03Phot_notMatched_notPassMVA_EB = new TH1F("combPfIso03Phot_notMatched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* combPfIso03Phot_notMatched_passMVA_EE    = new TH1F("combPfIso03Phot_notMatched_passMVA_EE"   , "", 60, -5., 15.);
  TH1F* combPfIso03Phot_notMatched_notPassMVA_EE = new TH1F("combPfIso03Phot_notMatched_notPassMVA_EE", "", 60, -5., 15.);
  
  TH1F* combPfIso03Phot_matched_passMVA_EB    = new TH1F("combPfIso03Phot_matched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* combPfIso03Phot_matched_notPassMVA_EB = new TH1F("combPfIso03Phot_matched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* combPfIso03Phot_matched_passMVA_EE    = new TH1F("combPfIso03Phot_matched_passMVA_EE"   , "", 60, -5., 15.);
  TH1F* combPfIso03Phot_matched_notPassMVA_EE = new TH1F("combPfIso03Phot_matched_notPassMVA_EE", "", 60, -5., 15.);
  
  TH1F* combPfIso03Phot_data_passMVA_EB    = new TH1F("combPfIso03Phot_data_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* combPfIso03Phot_data_notPassMVA_EB = new TH1F("combPfIso03Phot_data_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* combPfIso03Phot_data_passMVA_EE    = new TH1F("combPfIso03Phot_data_passMVA_EE"   , "", 60, -5., 15.);
  TH1F* combPfIso03Phot_data_notPassMVA_EE = new TH1F("combPfIso03Phot_data_notPassMVA_EE", "", 60, -5., 15.);
  
  // errors
  combPfIso03Phot_notMatched_passMVA_EB    -> Sumw2();
  combPfIso03Phot_notMatched_notPassMVA_EB -> Sumw2();
  combPfIso03Phot_notMatched_passMVA_EE    -> Sumw2();
  combPfIso03Phot_notMatched_notPassMVA_EE -> Sumw2();
  
  combPfIso03Phot_matched_passMVA_EB    -> Sumw2();
  combPfIso03Phot_matched_notPassMVA_EB -> Sumw2();
  combPfIso03Phot_matched_passMVA_EE    -> Sumw2();
  combPfIso03Phot_matched_notPassMVA_EE -> Sumw2();
  
  combPfIso03Phot_data_passMVA_EB    -> Sumw2();
  combPfIso03Phot_data_notPassMVA_EB -> Sumw2();
  combPfIso03Phot_data_passMVA_EE    -> Sumw2();
  combPfIso03Phot_data_notPassMVA_EE -> Sumw2();
  
  outputFile->cd();
  if (!isFPR){

    //################################################
    //#                                              #   
    //#               non FPR                        #
    //#                                              #
    //################################################    
    
    cout << "now projecting fake photons for" << s_hltcut << endl;
    mc.Project("combPfIso03Phot_notMatched_passMVA_EB",    "combinedPfIso03Phot", ("("+ptCut+" && !isIsolatedGenPhot && "+passMVA_EB+")*weight").c_str());
    mc.Project("combPfIso03Phot_notMatched_notPassMVA_EB", "combinedPfIso03Phot", ("("+ptCut+" && !isIsolatedGenPhot && "+notPassMVA_EB+")*weight").c_str());
    mc.Project("combPfIso03Phot_notMatched_passMVA_EE",    "combinedPfIso03Phot", ("("+ptCut+" && !isIsolatedGenPhot && "+passMVA_EE+")*weight").c_str());
    mc.Project("combPfIso03Phot_notMatched_notPassMVA_EE", "combinedPfIso03Phot", ("("+ptCut+" && !isIsolatedGenPhot && "+notPassMVA_EE+")*weight").c_str());
    
    cout << "now projecting inclusive signal gammas for " << s_hltcut << endl;
    mc.Project("combPfIso03Phot_matched_passMVA_EB",    "combinedPfIso03Phot", ("("+ptCut+" && isIsolatedGenPhot && "+passMVA_EB+")*weight").c_str());
    mc.Project("combPfIso03Phot_matched_notPassMVA_EB", "combinedPfIso03Phot", ("("+ptCut+" && isIsolatedGenPhot && "+notPassMVA_EB+")*weight").c_str());
    mc.Project("combPfIso03Phot_matched_passMVA_EE",    "combinedPfIso03Phot", ("("+ptCut+" && isIsolatedGenPhot && "+passMVA_EE+")*weight").c_str());
    mc.Project("combPfIso03Phot_matched_notPassMVA_EE", "combinedPfIso03Phot", ("("+ptCut+" && isIsolatedGenPhot && "+notPassMVA_EE+")*weight").c_str());
    
    cout << "now projecting data for " << s_hltcut << endl;
    data.Project("combPfIso03Phot_data_passMVA_EB",    "combinedPfIso03Phot", ("("+ptCut+"  && "+passMVA_EB+")*weight").c_str());
    data.Project("combPfIso03Phot_data_notPassMVA_EB", "combinedPfIso03Phot", ("("+ptCut+"  && "+notPassMVA_EB+")*weight").c_str());
    data.Project("combPfIso03Phot_data_passMVA_EE",    "combinedPfIso03Phot", ("("+ptCut+"  && "+passMVA_EE+")*weight").c_str());
    data.Project("combPfIso03Phot_data_notPassMVA_EE", "combinedPfIso03Phot", ("("+ptCut+"  && "+notPassMVA_EE+")*weight").c_str());
    
    cout << "done with the projections" << endl;
  }
  else{
    
    //################################################
    //#                                              #   
    //#                    FPR                       #
    //#                                              #
    //################################################    
        
    cout << "now projecting fake photons for " << s_hltcut << endl;
    mc.Project("combPfIso03Phot_notMatched_passMVA_EB",    "combinedPfIsoFPR03Phot", ("("+ptCut+" && !isIsolatedGenPhot && "+passMVA_EB+")*weight").c_str());
    mc.Project("combPfIso03Phot_notMatched_notPassMVA_EB", "combinedPfIsoFPR03Phot", ("("+ptCut+" && !isIsolatedGenPhot && "+notPassMVA_EB+")*weight").c_str());
    mc.Project("combPfIso03Phot_notMatched_passMVA_EE",    "combinedPfIsoFPR03Phot", ("("+ptCut+" && !isIsolatedGenPhot && "+passMVA_EE+")*weight").c_str());
    mc.Project("combPfIso03Phot_notMatched_notPassMVA_EE", "combinedPfIsoFPR03Phot", ("("+ptCut+" && !isIsolatedGenPhot && "+notPassMVA_EE+")*weight").c_str());
    
    cout << "now projecting inclusive signal gammas for " << s_hltcut << endl;
    mc.Project("combPfIso03Phot_matched_passMVA_EB",    "combinedPfIsoFPR03Phot", ("("+ptCut+" && isIsolatedGenPhot && "+passMVA_EB+")*weight").c_str());
    mc.Project("combPfIso03Phot_matched_notPassMVA_EB", "combinedPfIsoFPR03Phot", ("("+ptCut+" && isIsolatedGenPhot && "+notPassMVA_EB+")*weight").c_str());
    mc.Project("combPfIso03Phot_matched_passMVA_EE",    "combinedPfIsoFPR03Phot", ("("+ptCut+" && isIsolatedGenPhot && "+passMVA_EE+")*weight").c_str());
    mc.Project("combPfIso03Phot_matched_notPassMVA_EE", "combinedPfIsoFPR03Phot", ("("+ptCut+" && isIsolatedGenPhot && "+notPassMVA_EE+")*weight").c_str());
    
    cout << "now projecting data for " << s_hltcut << endl;
    data.Project("combPfIso03Phot_data_passMVA_EB",    "combinedPfIsoFPR03Phot", ("("+ptCut+"  && "+passMVA_EB+")*weight").c_str());
    data.Project("combPfIso03Phot_data_notPassMVA_EB", "combinedPfIsoFPR03Phot", ("("+ptCut+"  && "+notPassMVA_EB+")*weight").c_str());
    data.Project("combPfIso03Phot_data_passMVA_EE",    "combinedPfIsoFPR03Phot", ("("+ptCut+"  && "+passMVA_EE+")*weight").c_str());
    data.Project("combPfIso03Phot_data_notPassMVA_EE", "combinedPfIsoFPR03Phot", ("("+ptCut+"  && "+notPassMVA_EE+")*weight").c_str());
    
    cout << "done with the projections" << endl;


  }

    
  // normalize histos
  float integral;
  
  integral = combPfIso03Phot_notMatched_passMVA_EB			->Integral();
  combPfIso03Phot_notMatched_passMVA_EB					->Scale(1./integral);
  integral = combPfIso03Phot_notMatched_notPassMVA_EB			->Integral();
  combPfIso03Phot_notMatched_notPassMVA_EB				->Scale(1./integral);
  integral = combPfIso03Phot_notMatched_passMVA_EE			->Integral();
  combPfIso03Phot_notMatched_passMVA_EE					->Scale(1./integral);
  integral = combPfIso03Phot_notMatched_notPassMVA_EE			->Integral();
  combPfIso03Phot_notMatched_notPassMVA_EE				->Scale(1./integral);
  
  integral = combPfIso03Phot_matched_passMVA_EB    			->Integral();
  combPfIso03Phot_matched_passMVA_EB		      			->Scale(1./integral);
  integral = combPfIso03Phot_matched_notPassMVA_EB 			->Integral();
  combPfIso03Phot_matched_notPassMVA_EB	      				->Scale(1./integral);
  integral = combPfIso03Phot_matched_passMVA_EE    			->Integral();
  combPfIso03Phot_matched_passMVA_EE		      			->Scale(1./integral);
  integral = combPfIso03Phot_matched_notPassMVA_EE 			->Integral();
  combPfIso03Phot_matched_notPassMVA_EE	      				->Scale(1./integral);
  
  integral = combPfIso03Phot_data_passMVA_EB    			->Integral();
  combPfIso03Phot_data_passMVA_EB		      			->Scale(1./integral);
  integral = combPfIso03Phot_data_notPassMVA_EB 			->Integral();
  combPfIso03Phot_data_notPassMVA_EB	      				->Scale(1./integral);
  integral = combPfIso03Phot_data_passMVA_EE    			->Integral();
  combPfIso03Phot_data_passMVA_EE		      			->Scale(1./integral);
  integral = combPfIso03Phot_data_notPassMVA_EE 			->Integral();
  combPfIso03Phot_data_notPassMVA_EE	      				->Scale(1./integral);
  
  //rebin
  combPfIso03Phot_matched_passMVA_EB					->Rebin(3);	  
  combPfIso03Phot_matched_notPassMVA_EB					->Rebin(3);	  
  combPfIso03Phot_matched_passMVA_EE					->Rebin(3);	  
  combPfIso03Phot_matched_notPassMVA_EE					->Rebin(3);	  
  
  combPfIso03Phot_notMatched_passMVA_EB					->Rebin(3);	  
  combPfIso03Phot_notMatched_notPassMVA_EB				->Rebin(3);
  combPfIso03Phot_notMatched_passMVA_EE					->Rebin(3);	  
  combPfIso03Phot_notMatched_notPassMVA_EE				->Rebin(3);
  
  combPfIso03Phot_data_passMVA_EB					->Rebin(3);   
  combPfIso03Phot_data_notPassMVA_EB					->Rebin(3);
  combPfIso03Phot_data_passMVA_EE					->Rebin(3);   
  combPfIso03Phot_data_notPassMVA_EE					->Rebin(3);
  
  
  //   //smoothing
  //   combPfIso03Phot_matched_passMVA_EB					->Smooth();	  
  //   combPfIso03Phot_matched_notPassMVA_EB					->Smooth();	  
  //   combPfIso03Phot_matched_passMVA_EE					->Smooth();	  
  //   combPfIso03Phot_matched_notPassMVA_EE					->Smooth();	  
  
  //   combPfIso03Phot_notMatched_passMVA_EB					->Smooth();	  
  //   combPfIso03Phot_notMatched_notPassMVA_EB				->Smooth();
  //   combPfIso03Phot_notMatched_passMVA_EE					->Smooth();	  
  //   combPfIso03Phot_notMatched_notPassMVA_EE				->Smooth();
  
  //   combPfIso03Phot_data_passMVA_EB					->Smooth();   
  //   combPfIso03Phot_data_notPassMVA_EB					->Smooth();
  //   combPfIso03Phot_data_passMVA_EE					->Smooth();   
  //   combPfIso03Phot_data_notPassMVA_EE					->Smooth();
  
  
  // saving in the output file
  combPfIso03Phot_notMatched_passMVA_EB	->Write();
  combPfIso03Phot_notMatched_notPassMVA_EB	->Write();
  combPfIso03Phot_notMatched_passMVA_EE	->Write();
  combPfIso03Phot_notMatched_notPassMVA_EE	->Write();
  
  combPfIso03Phot_matched_passMVA_EB    ->Write();
  combPfIso03Phot_matched_notPassMVA_EB ->Write();
  combPfIso03Phot_matched_passMVA_EE	   ->Write();
  combPfIso03Phot_matched_notPassMVA_EE ->Write();

  combPfIso03Phot_data_passMVA_EB    ->Write();
  combPfIso03Phot_data_notPassMVA_EB ->Write();
  combPfIso03Phot_data_passMVA_EE	   ->Write();
  combPfIso03Phot_data_notPassMVA_EE ->Write();  

  cout << "done with first step. Moving to the weights" << endl;
  
  // now computing the weights
  
  h_isoWeight_EB = (TH1F*)combPfIso03Phot_notMatched_passMVA_EB	->Clone("h_isoWeight_EB");
  h_isoWeight_EB							->Divide(combPfIso03Phot_notMatched_notPassMVA_EB);
  h_isoWeight_EE = (TH1F*)combPfIso03Phot_notMatched_passMVA_EE	->Clone("h_isoWeight_EE");
  h_isoWeight_EE							->Divide(combPfIso03Phot_notMatched_notPassMVA_EE);
  
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
  
  
  h_isoWeight_EB->Smooth();
  h_isoWeight_EE->Smooth();
  h_isoWeight1_EB->Smooth();
  h_isoWeight1_EE->Smooth();
  h_isoWeight2_EB->Smooth();
  h_isoWeight2_EE->Smooth();
  
  
  h_isoWeight_EB->Write();
  h_isoWeight_EE->Write();
  h_isoWeight1_EB->Write();
  h_isoWeight1_EE->Write();
  h_isoWeight2_EB->Write();
  h_isoWeight2_EE->Write();
  
 

  
  TCanvas* c1 = new TCanvas("c1", "", 1);
  c1->cd();
  
  // some basic checks
  combPfIso03Phot_notMatched_notPassMVA_EB->SetLineColor(6);
  combPfIso03Phot_notMatched_passMVA_EB->SetLineColor(3);
  TLegend* leg2=new TLegend(0.5,0.6,0.85, 0.8);
  leg2->SetBorderSize(0);
  leg2->SetFillColor(0);
  leg2->AddEntry(combPfIso03Phot_notMatched_notPassMVA_EB, "not matched, Bregion", "l");
  leg2->AddEntry(combPfIso03Phot_notMatched_passMVA_EB, "not matched, Sregion", "l");
  combPfIso03Phot_notMatched_passMVA_EB->DrawNormalized("hist");
  combPfIso03Phot_notMatched_notPassMVA_EB->DrawNormalized("histsame");
  leg2->Draw();
  c1->SaveAs((outputDir+"fotoniDiFondo_cheNONPassanoMVA_chePassanoMVA_"+s_hltcut+"_EB.png").c_str());
  c1->Clear();
  
  combPfIso03Phot_notMatched_passMVA_EB->SetLineColor(4);
  combPfIso03Phot_matched_passMVA_EB->SetLineColor(2);
  TLegend* leg3=new TLegend(0.5,0.6,0.85, 0.8);
  leg3->SetBorderSize(0);
  leg3->SetFillColor(0);
  leg3->AddEntry(combPfIso03Phot_notMatched_passMVA_EB, "not matched, Sregion", "l");
  leg3->AddEntry(combPfIso03Phot_matched_passMVA_EB, "matched, Sregion", "l");
  combPfIso03Phot_matched_passMVA_EB->DrawNormalized("hist");
  combPfIso03Phot_notMatched_passMVA_EB->DrawNormalized("histsame");
  leg3->Draw();
  c1->SaveAs((outputDir+"fotoniDiSegnale_fotoniDiFondo_chePassanoMVA_"+s_hltcut+"_EB.png").c_str());
  c1->Clear();
  
  combPfIso03Phot_notMatched_notPassMVA_EB->SetLineColor(4);
  combPfIso03Phot_matched_notPassMVA_EB->SetLineColor(2);
  TLegend* leg4=new TLegend(0.5,0.6,0.85, 0.8);
  leg4->SetBorderSize(0);
  leg4->SetFillColor(0);
  leg4->AddEntry(combPfIso03Phot_notMatched_notPassMVA_EB, "not matched, Bregion", "l");
  leg4->AddEntry(combPfIso03Phot_matched_notPassMVA_EB, "matched, Bregion", "l");
  combPfIso03Phot_matched_notPassMVA_EB->DrawNormalized("hist");
  combPfIso03Phot_notMatched_notPassMVA_EB->DrawNormalized("histsame");
  leg4->Draw();
  c1->SaveAs((outputDir+"fotoniDiSegnale_fotoniDiFondo_cheNonPassanoMVA_"+s_hltcut+"_EB.png").c_str());
  c1->Clear();
  
  c1->Close();

  outputFile->Close();

}
