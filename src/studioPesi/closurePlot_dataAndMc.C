#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"

#include "iostream"
#include "sstream"
#include <string>

#include"TPaveText.h"
#include "TPad.h"
#include "THStack.h"
#include "TGraphErrors.h"
#include "TColor.h"
#include "TLatex.h"



using namespace std;

void closurePlot_dataAndMc(int hlt){

  string workDir = "histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/";
  string workDirFPR = "histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/";

  // mc 
  TChain mcChain("myTrees_withWeight");
  // data
  TChain dataChain("myTrees_withWeight");

  //mcChain.Add("outputWithWeight__Gjet__HLT135.root");
  //mcChain.Add("outputWithWeight__QCD__HLT135.root");
  //dataChain.Add("outputWithWeight__data2012__HLT135.root");     

  if(hlt==30){
    mcChain.Add((workDir+"gjTrees_withWeights_hlt30.root").c_str());
    mcChain.Add((workDir+"qcdTrees_withWeights_hlt30.root").c_str());
    dataChain.Add((workDir+"data2012ABCD_withWeights_hlt30.root").c_str());
  }
  if(hlt==50){
    mcChain.Add((workDir+"gjTrees_withWeights_hlt50.root").c_str());
    mcChain.Add((workDir+"qcdTrees_withWeights_hlt50.root").c_str());
    dataChain.Add((workDir+"data2012ABCD_withWeights_hlt50.root").c_str());
  }
  if(hlt==75){
    mcChain.Add((workDir+"gjTrees_withWeights_hlt75.root").c_str());
    mcChain.Add((workDir+"qcdTrees_withWeights_hlt75.root").c_str());
    dataChain.Add((workDir+"data2012ABCD_withWeights_hlt75.root").c_str());
  }
  if(hlt==90){
    mcChain.Add((workDir+"gjTrees_withWeights_hlt90.root").c_str());
    mcChain.Add((workDir+"qcdTrees_withWeights_hlt90.root").c_str());
    dataChain.Add((workDir+"data2012ABCD_withWeights_hlt90.root").c_str());
  }
  if(hlt==135){
    mcChain.Add((workDir+"gjTrees_withWeights_hlt135.root").c_str());
    mcChain.Add((workDir+"qcdTrees_withWeights_hlt135.root").c_str());
    dataChain.Add((workDir+"data2012ABCD_withWeights_hlt135.root").c_str());
  }
  if(hlt==150){
    mcChain.Add((workDir+"gjTrees_withWeights_hlt150.root").c_str());
    mcChain.Add((workDir+"qcdTrees_withWeights_hlt150.root").c_str());
    dataChain.Add((workDir+"data2012ABCD_withWeights_hlt150.root").c_str());
  }


  // -----------------------------------------------------------------------------
  //################### non FPR #######################

  // only to check the closure: bkg MC in the bkg region
  TH1F* mc_comb03Phot_isNotMatched_notPassMVA_EB = new TH1F("mc_comb03Phot_isNotMatched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* mc_comb03Phot_isNotMatched_notPassMVA_EE = new TH1F("mc_comb03Phot_isNotMatched_notPassMVA_EE", "", 60, -5., 15.);
							
  // for the real analysis: bkg MC in the sgn region
  TH1F* mc_comb03Phot_isNotMatched_passMVA_EB = new TH1F("mc_comb03Phot_isNotMatched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* mc_comb03Phot_isNotMatched_passMVA_EE = new TH1F("mc_comb03Phot_isNotMatched_passMVA_EE"   , "", 60, -5., 15.);
							
  // for the real analysis: data in the bkg region
  TH1F* data_comb03Phot_notPassMVA_EB = new TH1F("data_comb03Phot_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* data_comb03Phot_notPassMVA_EE = new TH1F("data_comb03Phot_notPassMVA_EE", "", 60, -5., 15.);
  //systematics					
  TH1F* data1_comb03Phot_notPassMVA_EB = new TH1F("data1_comb03Phot_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* data1_comb03Phot_notPassMVA_EE = new TH1F("data1_comb03Phot_notPassMVA_EE", "", 60, -5., 15.);
  TH1F* data2_comb03Phot_notPassMVA_EB = new TH1F("data2_comb03Phot_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* data2_comb03Phot_notPassMVA_EE = new TH1F("data2_comb03Phot_notPassMVA_EE", "", 60, -5., 15.);

  //############## FPR  #################################

  // only to check the closure: bkg MC in the bkg region
  TH1F* mc_combFPR03Phot_isNotMatched_notPassMVA_EB = new TH1F("mc_combFPR03Phot_isNotMatched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* mc_combFPR03Phot_isNotMatched_notPassMVA_EE = new TH1F("mc_combFPR03Phot_isNotMatched_notPassMVA_EE", "", 60, -5., 15.);

  // for the real analysis: bkg MC in the sgn region
  TH1F* mc_combFPR03Phot_isNotMatched_passMVA_EB = new TH1F("mc_combFPR03Phot_isNotMatched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* mc_combFPR03Phot_isNotMatched_passMVA_EE = new TH1F("mc_combFPR03Phot_isNotMatched_passMVA_EE"   , "", 60, -5., 15.);

  // for the real analysis: data in the bkg region
  TH1F* data_combFPR03Phot_notPassMVA_EB = new TH1F("data_combFPR03Phot_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* data_combFPR03Phot_notPassMVA_EE = new TH1F("data_combFPR03Phot_notPassMVA_EE", "", 60, -5., 15.);
  //systematics
  TH1F* data1_combFPR03Phot_notPassMVA_EB = new TH1F("data1_combFPR03Phot_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* data1_combFPR03Phot_notPassMVA_EE = new TH1F("data1_combFPR03Phot_notPassMVA_EE", "", 60, -5., 15.);
  TH1F* data2_combFPR03Phot_notPassMVA_EB = new TH1F("data2_combFPR03Phot_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* data2_combFPR03Phot_notPassMVA_EE = new TH1F("data2_combFPR03Phot_notPassMVA_EE", "", 60, -5., 15.);


  // -----------------------------------------------------------------------------
  //################### non FPR #######################

  mc_comb03Phot_isNotMatched_passMVA_EB -> Sumw2();
  mc_comb03Phot_isNotMatched_passMVA_EE -> Sumw2();

  mc_comb03Phot_isNotMatched_notPassMVA_EB -> Sumw2();
  mc_comb03Phot_isNotMatched_notPassMVA_EE -> Sumw2();

  data_comb03Phot_notPassMVA_EB -> Sumw2();
  data_comb03Phot_notPassMVA_EE -> Sumw2();
  data1_comb03Phot_notPassMVA_EB -> Sumw2();
  data1_comb03Phot_notPassMVA_EE -> Sumw2();
  data2_comb03Phot_notPassMVA_EB -> Sumw2();
  data2_comb03Phot_notPassMVA_EE -> Sumw2();
  
  //###################  FPR #######################

  mc_combFPR03Phot_isNotMatched_passMVA_EB -> Sumw2();
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> Sumw2();

  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> Sumw2();
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> Sumw2();

  data_combFPR03Phot_notPassMVA_EB -> Sumw2();
  data_combFPR03Phot_notPassMVA_EE -> Sumw2();
  data1_combFPR03Phot_notPassMVA_EB -> Sumw2();
  data1_combFPR03Phot_notPassMVA_EE -> Sumw2();
  data2_combFPR03Phot_notPassMVA_EB -> Sumw2();
  data2_combFPR03Phot_notPassMVA_EE -> Sumw2();

  // -----------------------------------------------------------------------------
  cout << "start projecting" << endl;

  // ptcut 
  std::string pt;
  if (hlt==30) {
    cout << "HLT cut = 30 ==> projecting 40-65" << endl;
    pt = "(ptPhot>40. && ptPhot<65.)"; 
  } else if (hlt==50) {
    cout << "HLT cut = 50 ==> projecting 65-90" << endl;
    pt = "(ptPhot>65. && ptPhot<90.)"; 
  } else if (hlt==75) {
    cout << "HLT cut = 75 ==> projecting 90-105" << endl;
    pt = "(ptPhot>90. && ptPhot<105.)"; 
  } else if (hlt==90) {
    cout << "HLT cut = 90 ==> projecting 105-165" << endl;
    pt = "(ptPhot>105. && ptPhot<165.)"; 
  } else if (hlt==135) {
    cout << "HLT cut = 135 ==> projecting 165-180" << endl;
    pt = "(ptPhot>165. && ptPhot<180.)"; 
  } else if (hlt==150) {
    cout << "HLT cut = 150 ==> projecting >180" << endl;
    pt = "(ptPhot>180.)"; 
  }


  //################### non FPR #######################

  // only to check the closure: bkg MC in the bkg region
  mcChain.Project("mc_comb03Phot_isNotMatched_notPassMVA_EB", "combinedPfIso03Phot", ("("+pt+" && (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*weight*isoW_EB").c_str());   
  mcChain.Project("mc_comb03Phot_isNotMatched_notPassMVA_EE", "combinedPfIso03Phot", ("("+pt+" &&  (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*weight*isoW_EE").c_str());

  // for the real analysis: bkg MC in the sgn region
  mcChain.Project("mc_comb03Phot_isNotMatched_passMVA_EB", "combinedPfIso03Phot", ("("+pt+" &&  (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot<1. && mvaIdPhot>0.83548) )*weight").c_str());
  mcChain.Project("mc_comb03Phot_isNotMatched_passMVA_EE", "combinedPfIso03Phot", ("("+pt+" &&  (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot<1. && mvaIdPhot>0.87382) )*weight").c_str());

  // for the real analysis: data in the bkg region 
  dataChain.Project("data_comb03Phot_notPassMVA_EB", "combinedPfIso03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoW_EB").c_str());
  dataChain.Project("data_comb03Phot_notPassMVA_EE", "combinedPfIso03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoW_EE").c_str());
  dataChain.Project("data1_comb03Phot_notPassMVA_EB", "combinedPfIso03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoW1_EB").c_str());
  dataChain.Project("data1_comb03Phot_notPassMVA_EE", "combinedPfIso03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoW1_EE").c_str());
  dataChain.Project("data2_comb03Phot_notPassMVA_EB", "combinedPfIso03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoW2_EB").c_str());
  dataChain.Project("data2_comb03Phot_notPassMVA_EE", "combinedPfIso03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoW2_EE").c_str());

  //###################  FPR #######################

  // only to check the closure: bkg MC in the bkg region
  mcChain.Project("mc_combFPR03Phot_isNotMatched_notPassMVA_EB", "combinedPfIsoFPR03Phot", ("("+pt+" && (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*weight*isoFPRW_EB").c_str());   
  mcChain.Project("mc_combFPR03Phot_isNotMatched_notPassMVA_EE", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*weight*isoFPRW_EE").c_str());

  // for the real analysis: bkg MC in the sgn region
  mcChain.Project("mc_combFPR03Phot_isNotMatched_passMVA_EB", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot<1. && mvaIdPhot>0.83548) )*weight").c_str());
  mcChain.Project("mc_combFPR03Phot_isNotMatched_passMVA_EE", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot<1. && mvaIdPhot>0.87382) )*weight").c_str());

  // for the real analysis: data in the bkg region 
  dataChain.Project("data_combFPR03Phot_notPassMVA_EB", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoFPRW_EB").c_str());
  dataChain.Project("data_combFPR03Phot_notPassMVA_EE", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoFPRW_EE").c_str());
  dataChain.Project("data1_combFPR03Phot_notPassMVA_EB", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoFPRW1_EB").c_str());
  dataChain.Project("data1_combFPR03Phot_notPassMVA_EE", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoFPRW1_EE").c_str());
  dataChain.Project("data2_combFPR03Phot_notPassMVA_EB", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoFPRW2_EB").c_str());
  dataChain.Project("data2_combFPR03Phot_notPassMVA_EE", "combinedPfIsoFPR03Phot", ("("+pt+" &&  (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-0.6 && mvaIdPhot<0.6) )*isoFPRW2_EE").c_str());


  cout << "done with projecting" << endl;


  //Normalize to unit
  double integral;
  integral=mc_comb03Phot_isNotMatched_notPassMVA_EB->Integral();
  mc_comb03Phot_isNotMatched_notPassMVA_EB	->Scale(1./integral);
  integral=mc_comb03Phot_isNotMatched_notPassMVA_EE->Integral();
  mc_comb03Phot_isNotMatched_notPassMVA_EE	->Scale(1./integral);
  integral=mc_comb03Phot_isNotMatched_passMVA_EB->Integral();
  mc_comb03Phot_isNotMatched_passMVA_EB 	->Scale(1./integral);
  integral=mc_comb03Phot_isNotMatched_passMVA_EE->Integral();
  mc_comb03Phot_isNotMatched_passMVA_EE 	->Scale(1./integral);

  integral=data_comb03Phot_notPassMVA_EB->Integral();
  data_comb03Phot_notPassMVA_EB 		->Scale(1./integral);
  integral=data_comb03Phot_notPassMVA_EE->Integral();
  data_comb03Phot_notPassMVA_EE 		->Scale(1./integral);
  integral=data1_comb03Phot_notPassMVA_EB->Integral();
  data1_comb03Phot_notPassMVA_EB		->Scale(1./integral);
  integral=data1_comb03Phot_notPassMVA_EE->Integral();
  data1_comb03Phot_notPassMVA_EE		->Scale(1./integral);
  integral=data2_comb03Phot_notPassMVA_EB->Integral();
  data2_comb03Phot_notPassMVA_EB		->Scale(1./integral);
  integral=data2_comb03Phot_notPassMVA_EE->Integral();
  data2_comb03Phot_notPassMVA_EE		->Scale(1./integral);

  integral=mc_combFPR03Phot_isNotMatched_notPassMVA_EB->Integral();
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB	->Scale(1./integral);
  integral=mc_combFPR03Phot_isNotMatched_notPassMVA_EE->Integral();
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE	->Scale(1./integral);
  integral=mc_combFPR03Phot_isNotMatched_passMVA_EB->Integral();
  mc_combFPR03Phot_isNotMatched_passMVA_EB 	->Scale(1./integral);
  integral=mc_combFPR03Phot_isNotMatched_passMVA_EE->Integral();
  mc_combFPR03Phot_isNotMatched_passMVA_EE 	->Scale(1./integral);

  integral=data_combFPR03Phot_notPassMVA_EB->Integral();
  data_combFPR03Phot_notPassMVA_EB 		->Scale(1./integral);
  integral=data_combFPR03Phot_notPassMVA_EE->Integral();
  data_combFPR03Phot_notPassMVA_EE 		->Scale(1./integral);
  integral=data1_combFPR03Phot_notPassMVA_EB->Integral();
  data1_combFPR03Phot_notPassMVA_EB		->Scale(1./integral);
  integral=data1_combFPR03Phot_notPassMVA_EE->Integral();
  data1_combFPR03Phot_notPassMVA_EE		->Scale(1./integral);
  integral=data2_combFPR03Phot_notPassMVA_EB->Integral();
  data2_combFPR03Phot_notPassMVA_EB		->Scale(1./integral);
  integral=data2_combFPR03Phot_notPassMVA_EE->Integral();
  data2_combFPR03Phot_notPassMVA_EE		->Scale(1./integral);



  //Rebin 
  mc_comb03Phot_isNotMatched_notPassMVA_EB	->Rebin(3);
  mc_comb03Phot_isNotMatched_notPassMVA_EE	->Rebin(3);
  mc_comb03Phot_isNotMatched_passMVA_EB 	->Rebin(3);
  mc_comb03Phot_isNotMatched_passMVA_EE 	->Rebin(3);

  data_comb03Phot_notPassMVA_EB 		->Rebin(3);
  data_comb03Phot_notPassMVA_EE 		->Rebin(3);
  data1_comb03Phot_notPassMVA_EB		->Rebin(3);
  data1_comb03Phot_notPassMVA_EE		->Rebin(3);
  data2_comb03Phot_notPassMVA_EB		->Rebin(3);
  data2_comb03Phot_notPassMVA_EE		->Rebin(3);

  mc_combFPR03Phot_isNotMatched_notPassMVA_EB	->Rebin(3);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE	->Rebin(3);
  mc_combFPR03Phot_isNotMatched_passMVA_EB 	->Rebin(3);
  mc_combFPR03Phot_isNotMatched_passMVA_EE 	->Rebin(3);

  data_combFPR03Phot_notPassMVA_EB 		->Rebin(3);
  data_combFPR03Phot_notPassMVA_EE 		->Rebin(3);
  data1_combFPR03Phot_notPassMVA_EB		->Rebin(3);
  data1_combFPR03Phot_notPassMVA_EE		->Rebin(3);
  data2_combFPR03Phot_notPassMVA_EB		->Rebin(3);
  data2_combFPR03Phot_notPassMVA_EE		->Rebin(3);


  //------   giulia debug    ---------
  mc_comb03Phot_isNotMatched_notPassMVA_EB	->Smooth();
  mc_comb03Phot_isNotMatched_notPassMVA_EE	->Smooth();
  mc_comb03Phot_isNotMatched_passMVA_EB 	->Smooth();
  mc_comb03Phot_isNotMatched_passMVA_EE 	->Smooth();

  data_comb03Phot_notPassMVA_EB 		->Smooth();
  data_comb03Phot_notPassMVA_EE 		->Smooth();
  data1_comb03Phot_notPassMVA_EB		->Smooth();
  data1_comb03Phot_notPassMVA_EE		->Smooth();
  data2_comb03Phot_notPassMVA_EB		->Smooth();
  data2_comb03Phot_notPassMVA_EE		->Smooth();

  mc_combFPR03Phot_isNotMatched_notPassMVA_EB	->Smooth();
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE	->Smooth();
  mc_combFPR03Phot_isNotMatched_passMVA_EB 	->Smooth();
  mc_combFPR03Phot_isNotMatched_passMVA_EE 	->Smooth();

  data_combFPR03Phot_notPassMVA_EB 		->Smooth();
  data_combFPR03Phot_notPassMVA_EE 		->Smooth();
  data1_combFPR03Phot_notPassMVA_EB		->Smooth();
  data1_combFPR03Phot_notPassMVA_EE		->Smooth();
  data2_combFPR03Phot_notPassMVA_EB		->Smooth();
  data2_combFPR03Phot_notPassMVA_EE		->Smooth();



  //################## non FPR ####################

  // Now plotting: cosmetics
  mc_comb03Phot_isNotMatched_passMVA_EB -> SetFillColor(kGreen-9);
  mc_comb03Phot_isNotMatched_passMVA_EE -> SetFillColor(kGreen-9);

  mc_comb03Phot_isNotMatched_notPassMVA_EB -> SetMarkerStyle(20);
  mc_comb03Phot_isNotMatched_notPassMVA_EE -> SetMarkerStyle(20);
  mc_comb03Phot_isNotMatched_notPassMVA_EB -> SetMarkerColor(2);
  mc_comb03Phot_isNotMatched_notPassMVA_EE -> SetMarkerColor(2);
  mc_comb03Phot_isNotMatched_notPassMVA_EB -> SetMarkerSize(0.8);
  mc_comb03Phot_isNotMatched_notPassMVA_EE -> SetMarkerSize(0.8);

  data_comb03Phot_notPassMVA_EB -> SetMarkerStyle(20);
  data_comb03Phot_notPassMVA_EE -> SetMarkerStyle(20);
  data_comb03Phot_notPassMVA_EB -> SetMarkerSize(0.8);
  data_comb03Phot_notPassMVA_EE -> SetMarkerSize(0.8);

  data1_comb03Phot_notPassMVA_EB -> SetMarkerStyle(4);
  data1_comb03Phot_notPassMVA_EE -> SetMarkerStyle(4);
  data1_comb03Phot_notPassMVA_EB -> SetMarkerSize(0.8);
  data1_comb03Phot_notPassMVA_EE -> SetMarkerSize(0.8);
  data1_comb03Phot_notPassMVA_EB -> SetMarkerColor(kBlue);
  data1_comb03Phot_notPassMVA_EE -> SetMarkerColor(kBlue);
  data1_comb03Phot_notPassMVA_EB -> SetLineColor(kBlue);
  data1_comb03Phot_notPassMVA_EE -> SetLineColor(kBlue);

  data2_comb03Phot_notPassMVA_EB -> SetMarkerStyle(4);
  data2_comb03Phot_notPassMVA_EE -> SetMarkerStyle(4);
  data2_comb03Phot_notPassMVA_EB -> SetMarkerSize(0.8);
  data2_comb03Phot_notPassMVA_EE -> SetMarkerSize(0.8);
  data2_comb03Phot_notPassMVA_EB -> SetMarkerColor(kMagenta);
  data2_comb03Phot_notPassMVA_EE -> SetMarkerColor(kMagenta);
  data2_comb03Phot_notPassMVA_EB -> SetLineColor(kMagenta);
  data2_comb03Phot_notPassMVA_EE -> SetLineColor(kMagenta);

  // titles 
  mc_comb03Phot_isNotMatched_passMVA_EB -> GetXaxis()->SetTitle("combined PFiso [GeV]");
  mc_comb03Phot_isNotMatched_passMVA_EE -> GetXaxis()->SetTitle("combined PFiso [GeV]");
  data_comb03Phot_notPassMVA_EB -> GetXaxis()->SetTitle("combined PFiso [GeV]");
  data_comb03Phot_notPassMVA_EE -> GetXaxis()->SetTitle("combined PFiso [GeV]");

  mc_comb03Phot_isNotMatched_passMVA_EB -> GetYaxis()->SetTitle("arb. units");
  mc_comb03Phot_isNotMatched_passMVA_EE -> GetYaxis()->SetTitle("arb. units");
  data_comb03Phot_notPassMVA_EB -> GetYaxis()->SetTitle("arb. units");
  data_comb03Phot_notPassMVA_EE -> GetYaxis()->SetTitle("arb. units");


  //################## FPR ####################

  mc_combFPR03Phot_isNotMatched_passMVA_EB -> SetFillColor(kGreen-9);
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> SetFillColor(kGreen-9);

  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerStyle(20);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerStyle(20);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerColor(2);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerColor(2);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerSize(0.8);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerSize(0.8);

  data_combFPR03Phot_notPassMVA_EB -> SetMarkerStyle(20);
  data_combFPR03Phot_notPassMVA_EE -> SetMarkerStyle(20);
  data_combFPR03Phot_notPassMVA_EB -> SetMarkerSize(0.8);
  data_combFPR03Phot_notPassMVA_EE -> SetMarkerSize(0.8);

  data1_combFPR03Phot_notPassMVA_EB -> SetMarkerStyle(4);
  data1_combFPR03Phot_notPassMVA_EE -> SetMarkerStyle(4);
  data1_combFPR03Phot_notPassMVA_EB -> SetMarkerSize(0.8);
  data1_combFPR03Phot_notPassMVA_EE -> SetMarkerSize(0.8);
  data1_combFPR03Phot_notPassMVA_EB -> SetMarkerColor(kBlue);
  data1_combFPR03Phot_notPassMVA_EE -> SetMarkerColor(kBlue);
  data1_combFPR03Phot_notPassMVA_EB -> SetLineColor(kBlue);
  data1_combFPR03Phot_notPassMVA_EE -> SetLineColor(kBlue);

  data2_combFPR03Phot_notPassMVA_EB -> SetMarkerStyle(4);
  data2_combFPR03Phot_notPassMVA_EE -> SetMarkerStyle(4);
  data2_combFPR03Phot_notPassMVA_EB -> SetMarkerSize(0.8);
  data2_combFPR03Phot_notPassMVA_EE -> SetMarkerSize(0.8);
  data2_combFPR03Phot_notPassMVA_EB -> SetMarkerColor(kMagenta);
  data2_combFPR03Phot_notPassMVA_EE -> SetMarkerColor(kMagenta);
  data2_combFPR03Phot_notPassMVA_EB -> SetLineColor(kMagenta);
  data2_combFPR03Phot_notPassMVA_EE -> SetLineColor(kMagenta);

  // titles 
  mc_combFPR03Phot_isNotMatched_passMVA_EB -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  data_combFPR03Phot_notPassMVA_EB -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  data_combFPR03Phot_notPassMVA_EE -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");

  mc_combFPR03Phot_isNotMatched_passMVA_EB -> GetYaxis()->SetTitle("arb. units");
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> GetYaxis()->SetTitle("arb. units");
  data_combFPR03Phot_notPassMVA_EB -> GetYaxis()->SetTitle("arb. units");
  data_combFPR03Phot_notPassMVA_EE -> GetYaxis()->SetTitle("arb. units");


  // plots
  TLegend* leg=new TLegend(0.6,0.65,0.85, 0.85);
  leg->SetBorderSize(0);
  leg->SetFillColor(4000); //transparent?
  leg->AddEntry(data_comb03Phot_notPassMVA_EB, "weighted data (in bkg region)", "p");
  leg->AddEntry(data1_comb03Phot_notPassMVA_EB, "data * w1 (syst.)", "p");
  leg->AddEntry(data2_comb03Phot_notPassMVA_EB, "data * w2 (syst.)", "p");
  leg->AddEntry(mc_comb03Phot_isNotMatched_passMVA_EB, "MC in signal region", "l");

  std::string hltcut;
  ostringstream hltString;
  hltString << hlt;
  hltcut = "hlt" + hltString.str();

  //##################### non  FPR #####################
  TCanvas* c1 = new TCanvas("c1", "closureData EB", 1);
  mc_comb03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  data_comb03Phot_notPassMVA_EB->DrawNormalized("samepE");
  data1_comb03Phot_notPassMVA_EB->DrawNormalized("samepE");
  data2_comb03Phot_notPassMVA_EB->DrawNormalized("samepE");
  leg->Draw();
  c1->SaveAs((workDir+"dataMC_closure_iso"+hltcut+"_EB.png").c_str());
  c1->Clear();

  TCanvas* c2 = new TCanvas("c2", "by def, EB", 1);
  mc_comb03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  mc_comb03Phot_isNotMatched_notPassMVA_EB->DrawNormalized("pEsame");
  c2->SaveAs((workDir+"closure_iso"+hltcut+"_EB.png").c_str());
  c2->Clear();

  TCanvas* c11 = new TCanvas("c11", "closureData EE", 1);
  mc_comb03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  data_comb03Phot_notPassMVA_EE->DrawNormalized("samepE");
  data1_comb03Phot_notPassMVA_EE->DrawNormalized("samepE");
  data2_comb03Phot_notPassMVA_EE->DrawNormalized("samepE");
  leg->Draw();
  c11->SaveAs((workDir+"dataMC_closure_iso"+hltcut+"_EE.png").c_str());
  c11->Clear();

  TCanvas* c12 = new TCanvas("c12", "by def, EE", 1);
  mc_comb03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  mc_comb03Phot_isNotMatched_notPassMVA_EE->DrawNormalized("pEsame");
  c12->SaveAs((workDir+"closure_iso"+hltcut+"_EE.png").c_str());
  c12->Clear();

  //#####################  FPR #####################

  c1->cd();
  mc_combFPR03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  data_combFPR03Phot_notPassMVA_EB->DrawNormalized("samepE");
  data1_combFPR03Phot_notPassMVA_EB->DrawNormalized("samepE");
  data2_combFPR03Phot_notPassMVA_EB->DrawNormalized("samepE");
  leg->Draw();
  c1->SaveAs((workDirFPR+"dataMC_closure_iso"+hltcut+"_EB.png").c_str());


  c2->cd();
  mc_combFPR03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB->DrawNormalized("pEsame");
  c2->SaveAs((workDirFPR+"closure_iso"+hltcut+"_EB.png").c_str());
  
  c11->cd();
  mc_combFPR03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  data_combFPR03Phot_notPassMVA_EE->DrawNormalized("samepE");
  data1_combFPR03Phot_notPassMVA_EE->DrawNormalized("samepE");
  data2_combFPR03Phot_notPassMVA_EE->DrawNormalized("samepE");
  leg->Draw();
  c11->SaveAs((workDirFPR+"dataMC_closure_iso"+hltcut+"_EE.png").c_str());

  c12->cd();
  mc_combFPR03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE->DrawNormalized("pEsame");
  c12->SaveAs((workDirFPR+"closure_iso"+hltcut+"_EE.png").c_str());

  c1->Clear();
  c2->Clear();
  c11->Clear();
  c12->Clear();

  //############ logscale with ratio plots ################

  //################ non FPR ##############################

  c1->cd();
  //--------pad 1--------//                                                                                                                                              
  TPad * pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  mc_comb03Phot_isNotMatched_passMVA_EB->Draw("hist");
  data_comb03Phot_notPassMVA_EB->Draw("samepE");
  data1_comb03Phot_notPassMVA_EB->Draw("samepE");
  data2_comb03Phot_notPassMVA_EB->Draw("samepE");
  leg->Draw();

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();
  
  //------pad 2------//                                                                                                                                                  
  TPad * pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.325);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  Double_t xmax = data_comb03Phot_notPassMVA_EB->GetXaxis()->GetXmax();
  Double_t xmin = data_comb03Phot_notPassMVA_EB->GetXaxis()->GetXmin();
  TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio_EB =  (TH1F*)data_comb03Phot_notPassMVA_EB->Clone("h1_ratio_EB");
  TH1F* h1_ratio1_EB = (TH1F*)data1_comb03Phot_notPassMVA_EB->Clone("h1_ratio1_EB");
  TH1F* h1_ratio2_EB = (TH1F*)data2_comb03Phot_notPassMVA_EB->Clone("h1_ratio2_EB");

  h1_ratio_EB->SetStats(0);
  h1_ratio_EB->Divide(mc_comb03Phot_isNotMatched_passMVA_EB);
  h1_ratio_EB->SetMarkerColor(kBlack);
  h1_ratio_EB->SetMarkerStyle(20);
  h1_ratio_EB->SetMarkerSize(0.8);
  h1_ratio_EB->SetLineColor(kBlack);
  h1_ratio_EB->SetLineWidth(1);

  h1_ratio1_EB->SetStats(0);
  h1_ratio1_EB->Divide(mc_comb03Phot_isNotMatched_passMVA_EB);
  h1_ratio1_EB->SetMarkerColor(kBlue);
  h1_ratio1_EB->SetMarkerStyle(4);
  h1_ratio1_EB->SetMarkerSize(0.8);
  h1_ratio1_EB->SetLineColor(kBlue);
  h1_ratio1_EB->SetLineWidth(1);

  h1_ratio2_EB->SetStats(0);
  h1_ratio2_EB->Divide(mc_comb03Phot_isNotMatched_passMVA_EB);
  h1_ratio2_EB->SetMarkerColor(kMagenta);
  h1_ratio2_EB->SetMarkerStyle(4);
  h1_ratio2_EB->SetMarkerSize(0.8);
  h1_ratio2_EB->SetLineColor(kMagenta);
  h1_ratio2_EB->SetLineWidth(1);


  //h1_ratio->SetMarkerSize(1.7);
  //h1_ratio->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_EB->GetYaxis()->SetTitle("data/MC");
  //h1_ratio->GetYaxis()->SetTitleFont(42);
  //h1_ratio->GetXaxis()->SetTitleFont(42);
  h1_ratio_EB->GetYaxis()->SetRangeUser(0.5,3.);

  h1_ratio_EB->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_EB->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_EB->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_EB->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_EB->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_EB->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_EB->SetTitle("Bin by Bin Ratio of two histograms");
  h1_ratio_EB->Draw("pe1");
  h1_ratio1_EB->Draw("pe1same");
  h1_ratio2_EB->Draw("pe1same");
  line->SetLineWidth(1.);
  line->Draw("same");

  c1->SaveAs((workDir+"dataMC_closure_iso"+hltcut+"_EB_log_2pad.png").c_str());
  
  pad1->Clear();
  pad2->Clear();

  //-----------------------------------------------------------

  //--------pad 1--------//                                                                                                                                              
    
  
   pad1->cd();

  mc_comb03Phot_isNotMatched_passMVA_EE->Draw("hist");
  data_comb03Phot_notPassMVA_EE->Draw("samepE");
  data1_comb03Phot_notPassMVA_EE->Draw("samepE");
  data2_comb03Phot_notPassMVA_EE->Draw("samepE");
  leg->Draw();

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  

  //------pad 2------//                                                                                                                                                  
  
 
  pad2->cd();


  TH1F* h1_ratio_EE =  (TH1F*)data_comb03Phot_notPassMVA_EE->Clone("h1_ratio_EE");
  TH1F* h1_ratio1_EE = (TH1F*)data1_comb03Phot_notPassMVA_EE->Clone("h1_ratio1_EE");
  TH1F* h1_ratio2_EE = (TH1F*)data2_comb03Phot_notPassMVA_EE->Clone("h1_ratio2_EE");

  h1_ratio_EE->SetStats(0);
  h1_ratio_EE->Divide(mc_comb03Phot_isNotMatched_passMVA_EE);
  h1_ratio_EE->SetMarkerColor(kBlack);
  h1_ratio_EE->SetMarkerStyle(20);
  h1_ratio_EE->SetMarkerSize(0.8);
  h1_ratio_EE->SetLineColor(kBlack);
  h1_ratio_EE->SetLineWidth(1);

  h1_ratio1_EE->SetStats(0);
  h1_ratio1_EE->Divide(mc_comb03Phot_isNotMatched_passMVA_EE);
  h1_ratio1_EE->SetMarkerColor(kBlue);
  h1_ratio1_EE->SetMarkerStyle(4);
  h1_ratio1_EE->SetMarkerSize(0.8);
  h1_ratio1_EE->SetLineColor(kBlue);
  h1_ratio1_EE->SetLineWidth(1);

  h1_ratio2_EE->SetStats(0);
  h1_ratio2_EE->Divide(mc_comb03Phot_isNotMatched_passMVA_EE);
  h1_ratio2_EE->SetMarkerColor(kMagenta);
  h1_ratio2_EE->SetMarkerStyle(4);
  h1_ratio2_EE->SetMarkerSize(0.8);
  h1_ratio2_EE->SetLineColor(kMagenta);
  h1_ratio2_EE->SetLineWidth(1);


  //h1_ratio->SetMarkerSize(1.7);
  //h1_ratio->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_EE->GetYaxis()->SetTitle("data/MC");
  //h1_ratio->GetYaxis()->SetTitleFont(42);
  //h1_ratio->GetXaxis()->SetTitleFont(42);
  h1_ratio_EE->GetYaxis()->SetRangeUser(0.5,3.);

  h1_ratio_EE->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_EE->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_EE->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_EE->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_EE->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_EE->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_EE->SetTitle("Bin by Bin Ratio of two histograms");
  h1_ratio_EE->Draw("pe1");
  h1_ratio1_EE->Draw("pe1same");
  h1_ratio2_EE->Draw("pe1same");
  line->SetLineWidth(1.);
  line->Draw("same");

  c1->SaveAs((workDir+"dataMC_closure_iso"+hltcut+"_EE_log_2pad.png").c_str());
  
  pad1->Clear();
  pad2->Clear();


  //-----------------------------------------------------------

  //--------pad 1--------//                                                                                                                                              

 
  pad1->cd();

  mc_combFPR03Phot_isNotMatched_passMVA_EB->Draw("hist");
  data_combFPR03Phot_notPassMVA_EB->Draw("samepE");
  data1_combFPR03Phot_notPassMVA_EB->Draw("samepE");
  data2_combFPR03Phot_notPassMVA_EB->Draw("samepE");
  leg->Draw();

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();



  //------pad 2------//                                                                                                                                                  

 
  pad2->cd();

  TH1F* h1_ratioFPR_EB =  (TH1F*)data_combFPR03Phot_notPassMVA_EB->Clone("h1_ratioFPR_EB");
  TH1F* h1_ratioFPR1_EB = (TH1F*)data1_combFPR03Phot_notPassMVA_EB->Clone("h1_ratioFPR1_EB");
  TH1F* h1_ratioFPR2_EB = (TH1F*)data2_combFPR03Phot_notPassMVA_EB->Clone("h1_ratioFPR2_EB");

  h1_ratioFPR_EB->SetStats(0);
  h1_ratioFPR_EB->Divide(mc_combFPR03Phot_isNotMatched_passMVA_EB);
  h1_ratioFPR_EB->SetMarkerColor(kBlack);
  h1_ratioFPR_EB->SetMarkerStyle(20);
  h1_ratioFPR_EB->SetMarkerSize(0.8);
  h1_ratioFPR_EB->SetLineColor(kBlack);
  h1_ratioFPR_EB->SetLineWidth(1);

  h1_ratioFPR1_EB->SetStats(0);
  h1_ratioFPR1_EB->Divide(mc_combFPR03Phot_isNotMatched_passMVA_EB);
  h1_ratioFPR1_EB->SetMarkerColor(kBlue);
  h1_ratioFPR1_EB->SetMarkerStyle(4);
  h1_ratioFPR1_EB->SetMarkerSize(0.8);
  h1_ratioFPR1_EB->SetLineColor(kBlue);
  h1_ratioFPR1_EB->SetLineWidth(1);

  h1_ratioFPR2_EB->SetStats(0);
  h1_ratioFPR2_EB->Divide(mc_combFPR03Phot_isNotMatched_passMVA_EB);
  h1_ratioFPR2_EB->SetMarkerColor(kMagenta);
  h1_ratioFPR2_EB->SetMarkerStyle(4);
  h1_ratioFPR2_EB->SetMarkerSize(0.8);
  h1_ratioFPR2_EB->SetLineColor(kMagenta);
  h1_ratioFPR2_EB->SetLineWidth(1);


  //h1_ratioFPR->SetMarkerSize(1.7);
  //h1_ratioFPR->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratioFPR->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratioFPR->GetYaxis()->SetNdivisions(3,false);
  h1_ratioFPR_EB->GetYaxis()->SetTitle("data/MC");
  //h1_ratioFPR->GetYaxis()->SetTitleFont(42);
  //h1_ratioFPR->GetXaxis()->SetTitleFont(42);
  h1_ratioFPR_EB->GetYaxis()->SetRangeUser(0.5,3.);

  h1_ratioFPR_EB->GetXaxis()->SetTitleSize(0.14);
  h1_ratioFPR_EB->GetXaxis()->SetLabelSize(0.14);
  h1_ratioFPR_EB->GetYaxis()->SetLabelSize(0.10);
  h1_ratioFPR_EB->GetYaxis()->SetTitleSize(0.10);
  h1_ratioFPR_EB->GetYaxis()->SetTitleOffset(0.6);
  h1_ratioFPR_EB->GetXaxis()->SetTitleOffset(1.);


  h1_ratioFPR_EB->SetTitle("Bin by Bin Ratio of two histograms");
  h1_ratioFPR_EB->Draw("pe1");
  h1_ratioFPR1_EB->Draw("pe1same");
  h1_ratioFPR2_EB->Draw("pe1same");
  line->SetLineWidth(1.);
  line->Draw("same");

  c1->SaveAs((workDirFPR+"dataMC_closure_iso"+hltcut+"_EB_log_2pad.png").c_str());
  
  pad1->Clear();
  pad2->Clear();


  //-----------------------------------------------------------



  //--------pad 1--------//                                                                                                                                              
 
  pad1->cd();

  mc_combFPR03Phot_isNotMatched_passMVA_EE->Draw("hist");
  data_combFPR03Phot_notPassMVA_EE->Draw("samepE");
  data1_combFPR03Phot_notPassMVA_EE->Draw("samepE");
  data2_combFPR03Phot_notPassMVA_EE->Draw("samepE");
  leg->Draw();

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  

 
  pad2->cd();


  TH1F* h1_ratioFPR_EE =  (TH1F*)data_combFPR03Phot_notPassMVA_EE->Clone("h1_ratioFPR_EE");
  TH1F* h1_ratioFPR1_EE = (TH1F*)data1_combFPR03Phot_notPassMVA_EE->Clone("h1_ratioFPR1_EE");
  TH1F* h1_ratioFPR2_EE = (TH1F*)data2_combFPR03Phot_notPassMVA_EE->Clone("h1_ratioFPR2_EE");

  h1_ratioFPR_EE->SetStats(0);
  h1_ratioFPR_EE->Divide(mc_combFPR03Phot_isNotMatched_passMVA_EE);
  h1_ratioFPR_EE->SetMarkerColor(kBlack);
  h1_ratioFPR_EE->SetMarkerStyle(20);
  h1_ratioFPR_EE->SetMarkerSize(0.8);
  h1_ratioFPR_EE->SetLineColor(kBlack);
  h1_ratioFPR_EE->SetLineWidth(1);

  h1_ratioFPR1_EE->SetStats(0);
  h1_ratioFPR1_EE->Divide(mc_combFPR03Phot_isNotMatched_passMVA_EE);
  h1_ratioFPR1_EE->SetMarkerColor(kBlue);
  h1_ratioFPR1_EE->SetMarkerStyle(4);
  h1_ratioFPR1_EE->SetMarkerSize(0.8);
  h1_ratioFPR1_EE->SetLineColor(kBlue);
  h1_ratioFPR1_EE->SetLineWidth(1);

  h1_ratioFPR2_EE->SetStats(0);
  h1_ratioFPR2_EE->Divide(mc_combFPR03Phot_isNotMatched_passMVA_EE);
  h1_ratioFPR2_EE->SetMarkerColor(kMagenta);
  h1_ratioFPR2_EE->SetMarkerStyle(4);
  h1_ratioFPR2_EE->SetMarkerSize(0.8);
  h1_ratioFPR2_EE->SetLineColor(kMagenta);
  h1_ratioFPR2_EE->SetLineWidth(1);


  //h1_ratioFPR->SetMarkerSize(1.7);
  //h1_ratioFPR->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratioFPR->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratioFPR->GetYaxis()->SetNdivisions(3,false);
  h1_ratioFPR_EE->GetYaxis()->SetTitle("data/MC");
  //h1_ratioFPR->GetYaxis()->SetTitleFont(42);
  //h1_ratioFPR->GetXaxis()->SetTitleFont(42);
  h1_ratioFPR_EE->GetYaxis()->SetRangeUser(0.5,3.);

  h1_ratioFPR_EE->GetXaxis()->SetTitleSize(0.14);
  h1_ratioFPR_EE->GetXaxis()->SetLabelSize(0.14);
  h1_ratioFPR_EE->GetYaxis()->SetLabelSize(0.10);
  h1_ratioFPR_EE->GetYaxis()->SetTitleSize(0.10);
  h1_ratioFPR_EE->GetYaxis()->SetTitleOffset(0.6);
  h1_ratioFPR_EE->GetXaxis()->SetTitleOffset(1.);


  h1_ratioFPR_EE->SetTitle("Bin by Bin Ratio of two histograms");
  h1_ratioFPR_EE->Draw("pe1");
  h1_ratioFPR1_EE->Draw("pe1same");
  h1_ratioFPR2_EE->Draw("pe1same");
  line->SetLineWidth(1.);
  line->Draw("same");

  c1->SaveAs((workDirFPR+"dataMC_closure_iso"+hltcut+"_EE_log_2pad.png").c_str());
  
  
  //-----------------------------------------------------------

  

}
