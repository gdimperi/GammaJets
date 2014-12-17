#include "RooPolynomial.h"
#include "RooGaussian.h"
#include "RooExponential.h"
#include "RooLandau.h"
#include "RooRealVar.h"
#include "RooArgList.h"
#include "RooArgSet.h"
#include "RooFFTConvPdf.h"
#include "RooPlot.h"
#include "TCanvas.h"
#include "RooProdPdf.h"
#include "RooExtendPdf.h"
#include "string"
#include "TFile.h"
#include "TH1F.h"
#include "RooAbsReal.h"
#include "RooDataHist.h"
#include "RooCBShape.h"
#include "TChain.h"
#include "TTree.h"
#include "RooDataSet.h"
#include "RooAddPdf.h"
#include "RooRealConstant.h"
#include "RooCategory.h"
#include "RooSimultaneous.h"
#include "RooFitResult.h"
#include "RooMCStudy.h"
#include "RooCBCrujffPdf.h"
#include "TLegend.h"
#include "THStack.h"
#include "RooWorkspace.h"

using namespace RooFit;

void fitData(string cut, string filename){
 
  TChain data("finalTree");
  
  data.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon-Run2012A-recover-06Aug2012_hltcut30_hltiso0_mvaWP4.root");
  data.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012B-13Jul2012_hltcut30_hltiso0_mvaWP4.root");
  data.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-24Aug2012_hltcut30_hltiso0_mvaWP4.root");
  data.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-EcalRecover_11Dec2012_hltcut30_hltiso0_mvaWP4.root");
  data.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-PromptReco-v2_hltcut30_hltiso0_mvaWP4.root");
  data.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012D-PromptReco-v1_hltcut30_hltiso0_mvaWP4.root");

  TChain mc("finalTree");
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_170_250_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_20_30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_250_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_30_80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");
  mc.Add("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_80_170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");


  RooRealVar combinedPfIso03Phot("combinedPfIso03Phot", "combinedPfIso03Phot", -7., 15.);
  RooRealVar etaPhot("etaPhot", "etaPhot", -2.5, 2.5);
  RooRealVar mvaIdPhot("mvaIdPhot", "mvaIdPhot", -1.,1.);
  RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  RooRealVar ptPhot("ptPhot", "ptPhot", 0., 1000.);
  RooRealVar weight("weight","weight", 0., 100.);

  RooArgSet argSet("argSet");

  argSet.add(combinedPfIso03Phot);
  argSet.add(etaPhot);
  argSet.add(mvaIdPhot);
  argSet.add(isMatchedPhot);
  argSet.add(ptPhot);
  argSet.add(weight);

  combinedPfIso03Phot.setBins(121);
  etaPhot.setBins(120);
  mvaIdPhot.setBins(180);
  isMatchedPhot.setBins(3);
  ptPhot.setBins(1200);
  weight.setBins(1000);

  std::cout<<"set binning"<<std::endl;


  RooDataSet allData("allData", "allData", argSet, RooFit::WeightVar("weight"), RooFit::Import(data));
  RooDataSet allSet("allSet", "allSet", argSet, RooFit::WeightVar("weight"), RooFit::Import(mc));

  std::cout<<"created complete dataset for data"<<endl;

  std::cout<<allData.GetName()<<std::endl;

  RooDataSet* data_scut = (RooDataSet*)allData.reduce((cut+" && mvaIdPhot>0.711099").c_str());
  RooDataSet* data_rcut = (RooDataSet*)allData.reduce((cut+" && mvaIdPhot<0.711099").c_str());
  std::cout<<"data_scut entries: "<<data_scut->sumEntries()<<std::endl;
  std::cout<<"data_rcut entries: "<<data_rcut->sumEntries()<<std::endl;
  std::cout<<"created reduced dataset"<<std::endl;

  TH1F* h_set_scut = (TH1F*)data_scut->createHistogram("h_set_scut", combinedPfIso03Phot, RooFit::Binning(combinedPfIso03Phot.getBinning()));
  TH1F* h_pt_scut = (TH1F*)data_scut->createHistogram("h_set_scut", ptPhot, RooFit::Binning(ptPhot.getBinning()));
  TH1F* h_eta_scut = (TH1F*)data_scut->createHistogram("h_set_scut", etaPhot, RooFit::Binning(etaPhot.getBinning()));
  TH1F* h_mva_scut = (TH1F*)data_scut->createHistogram("h_set_scut", mvaIdPhot, RooFit::Binning(mvaIdPhot.getBinning()));
  std::cout<<"entries h_set_scut"<<h_set_scut->Integral()<<std::endl;


  /*RooDataSets from mc*/
  RooDataSet* d_bg = (RooDataSet*)allSet.reduce((cut+" && isMatchedPhot==0 && mvaIdPhot>0.711099").c_str());
  d_bg->SetName("AllBkg");
  RooDataSet* d_sig = (RooDataSet*)allSet.reduce((cut+" && isMatchedPhot==1 && mvaIdPhot>0.711099").c_str());
  d_sig->SetName("AllSignal");

  TH1F* h_bg = (TH1F*)d_bg->createHistogram("h_bg", combinedPfIso03Phot, RooFit::Binning(combinedPfIso03Phot.getBinning()));
  TH1F* h_sig = (TH1F*)d_sig->createHistogram("h_sig", combinedPfIso03Phot, RooFit::Binning(combinedPfIso03Phot.getBinning()));
  h_bg->SetFillColor(kMagenta);
  h_bg->SetLineColor(kMagenta);
  h_bg->SetFillStyle(1001);
  h_bg->SetMarkerSize(0);
  h_sig->SetFillColor(kCyan);
  h_sig->SetLineColor(kCyan);
  h_sig->SetFillStyle(1001);
  h_sig->SetMarkerSize(0);

  THStack* stack = new THStack();
  stack->Add(h_bg);
  stack->Add(h_sig);

  TCanvas* c2 = new TCanvas();
  h_set_scut->Draw();
  c2->SaveAs("debugEntries.png");
  c2->SaveAs("debugEntries.root");

  h_pt_scut->Draw();
  c2->SaveAs("debugPt.png");

  h_eta_scut->Draw();
  c2->SaveAs("debugEta.png");
  
  h_mva_scut->Draw();
  c2->SaveAs("debugMVA.png");

  stack->Draw("H");
  h_set_scut->Draw("PSAME");


  TH1F* h_set_rcut = (TH1F*)data_rcut->createHistogram("h_set_rcut", combinedPfIso03Phot, RooFit::Binning(combinedPfIso03Phot.getBinning()));
  std::cout<<"entries h_set_rcut"<<h_set_rcut->Integral()<<std::endl;


  RooDataHist datah_scut("datah_scut", "datah_scut", combinedPfIso03Phot, Import(*h_set_scut));

  TFile* f_ws_sig = new TFile("workspace_fit_EB_sig_WP095_CBCrujff_pt40_65.root", "READ");
  TFile* f_ws_bg = new TFile("workspace_fit_EB_bg_WP095_pt40_65.root", "READ");

  RooWorkspace* w_sig =(RooWorkspace*)f_ws_sig->Get("w_sig");
  RooWorkspace* w_bg =(RooWorkspace*)f_ws_bg->Get("w_bg");

  //model for signal
  RooRealVar* CBC_mean    = (RooRealVar*)w_sig->var("CBC_mean");
  RooRealVar* CBC_sigma   = (RooRealVar*)w_sig->var("CBC_sigma");
  RooRealVar* CBC_alphaC  = (RooRealVar*)w_sig->var("CBC_alphaC");
  RooRealVar* CBC_alphaCB = (RooRealVar*)w_sig->var("CBC_alphaCB");
  RooRealVar* CBC_n       = (RooRealVar*)w_sig->var("CBC_n");

  RooCBCrujffPdf* model_sig = (RooCBCrujffPdf*)w_sig->pdf("CBCrujff_s");

  CBC_mean->setConstant(kTRUE);   
  CBC_sigma->setConstant(kTRUE);     
  CBC_alphaC->setConstant(kTRUE);      
  CBC_alphaCB->setConstant(kTRUE);     
  CBC_n->setConstant(kTRUE);     
      
  //model for background

  RooRealVar* cbmean    = (RooRealVar*)w_bg->var("cbmean");
  RooRealVar* cbsigma   = (RooRealVar*)w_bg->var("cbsigma");  
  RooRealVar* cbalpha_s = (RooRealVar*)w_bg->var("cbalpha_s");  
  RooRealVar* cbn_s     = (RooRealVar*)w_bg->var("cbn_s");  
  RooRealVar* frac_s    = (RooRealVar*)w_bg->var("frac_s");  
  RooRealVar* gaussmean    = (RooRealVar*)w_bg->var("gaussmean");  
  RooRealVar* gausssigma   = (RooRealVar*)w_bg->var("gausssigma");  


  RooSimultaneous* simPdf = (RooSimultaneous*)w_bg->pdf("simPdf");
  RooAddPdf* model_bg = (RooAddPdf*)simPdf->getPdf("scut");

  cbmean->setConstant(kTRUE);      
  cbsigma->setConstant(kTRUE);     
  cbalpha_s->setConstant(kTRUE);   
  cbn_s->setConstant(kTRUE);       
  frac_s->setConstant(kTRUE);      
  gaussmean->setConstant(kTRUE);      
  gausssigma->setConstant(kTRUE);     

  //adding and extending models
  //option 1: adding sig and bg and extending their sum
  /*  RooRealVar frac_scut("frac_scut", "frac_scut", 0.534, 0., 1.);
  RooAddPdf model_scut("model_scut", "model_scut", *model_sig, *model_bg, frac_scut);

  RooRealVar N_scut("N_scut", "expected number of ev for scut", 250000., 10., 100000000.);

  RooExtendPdf ext_model_scut("ext_model_scut", "ext_model_scut", model_scut, N_scut);

  RooExtendPdf ext_bg("ext_bg", "ext_bg", *model_bg, N_scut);
  */
  //option 2: extending separately sig and bg and then adding them together
  RooRealVar N_sig("N_sig", "expected number of ev for signal", 14000., 10., 100000000.);
  RooRealVar N_bg("N_bg", "expected number of ev for background", 14000., 10., 100000000.);
  RooAddPdf ext_model_scut("ext_model_scut", "ext_model_scut", RooArgList(*model_sig, *model_bg), RooArgList(N_sig, N_bg));

  RooFitResult* result = ext_model_scut.FitTo(datah_scut, Save(), Range(-5.,15.), Extended(kTRUE), SumW2Error(kTRUE));
  RooFitResult* result_chi2 = model_scut.chi2FitTo(datah_scut, Save(), Range(-5.,15.),  Extended(kTRUE), SumW2Error(kTRUE));
  RooPlot* frame_scut = combinedPfIso03Phot.frame(RooFit::Title("Fit to combinedPfIso03Phot, scut region"));

  datah_scut.plotOn(frame_scut, Name("data_scut"));
  ext_model_scut.plotOn(frame_scut,Name("model_scut"),LineColor(kBlue),Normalization(1,RooAbsReal::RelativeExpected));
  //model_scut.plotOn(frame_scut,Name("model_scut"),LineColor(kCyan));
  //ext_bg.plotOn(frame_scut,Name("model_scut"),LineColor(kCyan),Normalization(1,RooAbsReal::RelativeExpected));
  /*
  RooPlot* frame_rcut = combinedPfIso03Phot.frame(RooFit::Title("Fit to combinedPfIso03Phot, rcut region"));

  srcut.plotOn(frame_rcut, Cut("sample==sample::rcut"), Name("datah_rcut"));
  model.plotOn(frame_rcut,Name("model_rcut"),LineColor(kCyan),Slice(sample,"rcut"),ProjWData(sample,srcut));
  */

  frame_scut->SetMinimum(0.00001);
    
  TLegend* a = new TLegend(0.63,0.68, 0.88, 0.88);
  a->SetBorderSize(0);
  a->SetFillColor(0);
  a->SetFillStyle(0);
  a->SetTextSize(0.038);
  a->AddEntry(frame_scut->findObject("data_scut"), "data","p");
  a->AddEntry(frame_scut->findObject("model_scut"), "fitting PDF","l");
  //  a->AddEntry(frame_s->findObject("my_cb"), "PDF components","l");
  
  frame_scut->Draw("same");
  c2->SaveAs("debugDataMC.png");
  c2->SaveAs("debugDataMC.root");

  TCanvas* c = new TCanvas();
  c->SetTitle(frame_scut->GetTitle());
  frame_scut->Draw("");
  a->Draw();
  c->SaveAs((filename+"_scut.png").c_str());
  c->SaveAs((filename+"_scut.root").c_str());
  
  Double_t chi2 = frame_scut->chiSquare("model_scut", "data_scut", 8);

  std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SaveAs((filename+"_scut_log.png").c_str());
  c->SaveAs((filename+"_scut_log.root").c_str());


  TFile* f_fitRes = new TFile(("fitResult_"+filename+".root").c_str(), "RECREATE");
  result->Write();
  f_fitRes->Close();

}
