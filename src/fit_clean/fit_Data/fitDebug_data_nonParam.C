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
#include "TChain.h"
#include "TTree.h"
#include "RooDataSet.h"
#include "RooAddPdf.h"
#include "RooRealConstant.h"
#include "RooCategory.h"
#include "RooSimultaneous.h"
#include "RooWorkspace.h"
#include "RooFitResult.h"
#include "RooHistPdf.h"
#include "RooCBmyCrujff.h"
#include "RooCBShape.h"
#include "RooMinuit.h"
#include "TMath.h"
#include "RooFormulaVar.h"
#include "TPaveLabel.h"
#include "Math/MinimizerOptions.h"
#include "TLegend.h"
#include "RooKeysPdf.h"


using namespace RooFit;

void fitDebug_Data(string cut, string filename, string hlt, string ptMin, string ptMax, int config, string inputdir, string inputdir_sig, string outdir, int isFPR){


  //string outdir = "fitData_weightedDataCS_FPR_config2/";
  //string workdir_mc = "../fit_FPR/";


  RooRealVar combinedPfIso03Phot("combinedPfIso03Phot", "combinedPfIso03Phot", -7., 15.);
  RooRealVar combinedPfIsoFPR03Phot("combinedPfIsoFPR03Phot", "combinedPfIsoFPR03Phot", -7., 15.);
  RooRealVar etaPhot("etaPhot", "etaPhot", -2.5, 2.5);
  RooRealVar mvaIdPhot("mvaIdPhot", "mvaIdPhot", -1.,1.);
  RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  RooRealVar ptPhot("ptPhot", "ptPhot", 0., 1000.);
  RooRealVar weight("weight","weight", 0., 100.);
  RooRealVar isoW_EB("isoW_EB","isoW_EB", 0., 100.);
  RooRealVar isoW1_EB("isoW1_EB","isoW1_EB", 0., 100.);
  RooRealVar isoW2_EB("isoW2_EB","isoW2_EB", 0., 100.);
  RooRealVar isoFPRW_EB("isoFPRW_EB","isoFPRW_EB", 0., 100.);
  RooRealVar isoFPRW1_EB("isoFPRW1_EB","isoFPRW1_EB", 0., 100.);
  RooRealVar isoFPRW2_EB("isoFPRW2_EB","isoFPRW2_EB", 0., 100.);

  RooArgSet argSet("argSet");
  //creating set of variables for the datasets
  std::cout<<"Creating RooArgSet with variables for fit"<<std::endl;
  argSet.add(combinedPfIso03Phot);
  argSet.add(combinedPfIsoFPR03Phot);
  argSet.add(etaPhot);
  argSet.add(mvaIdPhot);
  argSet.add(isMatchedPhot);
  argSet.add(ptPhot);
  argSet.add(weight);
  argSet.add(isoW_EB);
  argSet.add(isoW1_EB);
  argSet.add(isoW2_EB);
  argSet.add(isoFPRW_EB);
  argSet.add(isoFPRW1_EB);
  argSet.add(isoFPRW2_EB);

  //combinedPfIsoFPR03Phot.setBins(100);
  //etaPhot.setBins(120);
  //mvaIdPhot.setBins(180);
  //isMatchedPhot.setBins(3);
  //ptPhot.setBins(1200);
  //weight.setBins(1000);

  std::cout<<"set binning"<<std::endl;

  //models from fitted MC
  TFile* f_ws_sig = new TFile((inputdir_sig+"workspace_fit_EB_sig_WP095_pt"+ptMin+"_"+ptMax+".root").c_str(), "READ");
  TFile* f_ws_bg = new TFile((inputdir+"workspace_fit_EB_bg_WP095_pt"+ptMin+"_"+ptMax+".root").c_str(), "READ");

  RooWorkspace* w_sig =(RooWorkspace*)f_ws_sig->Get("w_sig");
  w_sig->Print();
  RooWorkspace* w_bg =(RooWorkspace*)f_ws_bg->Get("w_bg");
  w_bg->Print();

  //model for signal                                                                                                                                                                                         
  RooRealVar data_CBC_mean("data_CBC_mean", "data_CBC_mean", w_sig->var("CBC_mean")->getVal(), -2., 3.);
  data_CBC_mean.Print();
  RooRealVar data_CBC_sigma("data_CBC_sigma", "data_CBC_sigma", w_sig->var("CBC_sigma")->getVal(), 0., 3.);
  data_CBC_sigma.Print();
  RooRealVar data_CBC_alphaCB("data_CBC_alphaCB", "data_CBC_alphaCB", w_sig->var("CBC_alphaCB")->getVal(), 0., 3.);
  RooRealVar data_CBC_n("data_CBC_n", "data_CBC_n", w_sig->var("CBC_n")->getVal(), 0., 100.);

  RooCBShape* model_sig;
  if (isFPR)
    model_sig = new RooCBShape("model_sig", "model_sig", combinedPfIsoFPR03Phot, data_CBC_mean, data_CBC_sigma, data_CBC_alphaCB, data_CBC_n);
  else   
    model_sig = new RooCBShape("model_sig", "model_sig", combinedPfIso03Phot, data_CBC_mean, data_CBC_sigma, data_CBC_alphaCB, data_CBC_n);

  if(config==0){
    data_CBC_mean.setConstant(kTRUE);
    data_CBC_sigma.setConstant(kTRUE);
    data_CBC_alphaCB.setConstant(kTRUE);
    data_CBC_n.setConstant(kTRUE);
  }
  if(config==1){
    data_CBC_sigma.setConstant(kTRUE);
    data_CBC_alphaCB.setConstant(kTRUE);
    data_CBC_n.setConstant(kTRUE);
  }
  if(config==2){
    data_CBC_alphaCB.setConstant(kTRUE);
    data_CBC_n.setConstant(kTRUE);
  }
  if(config==3){
    data_CBC_n.setConstant(kTRUE);
  }


  //model for background
  //////////////////////////////////////////////////////////////////////////////////////////
  RooKeysPdf* model_bg = (RooKeysPdf*)w_bg->pdf("kest3");
  model_bg->SetName("model_bg");
  model_bg->SetTitle("model_bg");


  TChain data("myTrees_withWeight");

  data.Add(("/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_"+hlt+".root").c_str());

  /*
  TChain data("finalTree");
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon-Run2012A-recover-06Aug2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012B-13Jul2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-24Aug2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-EcalRecover_11Dec2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-PromptReco-v2_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012D-PromptReco-v1_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  */
  RooDataSet allData("allData", "allData", argSet, RooFit::Import(data));

  std::cout<<"created complete dataset for data"<<endl;
  
  std::cout<<allData.GetName()<<std::endl;
  
  RooDataSet* data_scut = (RooDataSet*)allData.reduce((cut+" && mvaIdPhot>0.83548").c_str());
  RooDataSet* data_rcut = (RooDataSet*)allData.reduce((cut+" && mvaIdPhot<0.6 && mvaIdPhot>-0.6").c_str());
  std::cout<<"data_scut entries: "<<data_scut->sumEntries()<<std::endl;
  std::cout<<"data_rcut entries: "<<data_rcut->sumEntries()<<std::endl;
  std::cout<<"created reduced dataset"<<std::endl;

  /*
  TH1F* h_set_scut = (TH1F*)data_scut->createHistogram("h_set_scut", combinedPfIsoFPR03Phot, RooFit::Binning(combinedPfIsoFPR03Phot.getBinning()));
  TH1F* h_set_rcut = (TH1F*)data_rcut->createHistogram("h_set_rcut", combinedPfIsoFPR03Phot, RooFit::Binning(combinedPfIsoFPR03Phot.getBinning()));

  RooDataHist datah_scut("datah_scut", "datah_scut", combinedPfIsoFPR03Phot, Import(*h_set_scut));
  RooDataHist datah_rcut("datah_rcut", "datah_rcut", combinedPfIsoFPR03Phot, Import(*h_set_rcut));
  */
  //adding and extending models                                                                                                                                                                           
  //option 1: adding sig and bg and extending their sum                                                                                                                                                    
  RooRealVar frac_scut("frac_scut", "frac_scut", 0.5, 0., 1.);                                                                                                                                        
  RooAddPdf model_scut("model_scut", "model_scut", *model_sig, *model_bg, frac_scut);//using fit templates from MC

  RooRealVar N_scut("N_scut", "expected number of ev for scut", 20000., 1000., 10000000.);
  RooExtendPdf ext_model_scut("ext_model_scut", "ext_model_scut", model_scut, N_scut);

  RooFormulaVar N_sig("N_sig","N_sig","@0*@1",RooArgList(N_scut,frac_scut));

   //option 2: extending separately sig and bg and then adding them together
  /*  RooRealVar N_sig("N_sig", "expected number of ev for signal", 14000., 10., 100000000.);
  RooRealVar N_bg("N_bg", "expected number of ev for background", 14000., 10., 100000000.);
  RooAddPdf ext_model_scut("ext_model_scut", "ext_model_scut", RooArgList(model_sig_scut, model_bg_scut), RooArgList(N_sig, N_bg));
  */
  /*  
  RooAbsReal* nll = ext_model_scut.createNLL(*data_scut, Extended());

  RooMinuit m(*nll);

  m.setVerbose(kFALSE);

  m.migrad();
  std::cout<<"MIGRAD PARAMETERS"<<std::endl;
  ext_model_scut.getParameters(combinedPfIsoFPR03Phot)->Print("s");

  m.hesse();

  m.minos();
  std::cout<<"MINOS PARAMETERS"<<std::endl;
  ext_model_scut.getParameters(combinedPfIsoFPR03Phot)->Print("s");
  
  RooFitResult* result = m.save();
  result->Print();*/


  //  ROOT::Math::MinimizerOptions::SetDefaultTolerance(1e-100); 
  RooFitResult* result = ext_model_scut.fitTo(*data_scut, Save(), Range(-5.,15.), Extended(kTRUE), SumW2Error(kFALSE));
  //RooFitResult* result = cbmyc_d.fitTo(datah_scut, Save(), Range(-5.,15.), SumW2Error(kTRUE));


  std::cout<<cut<<std::endl;

  RooPlot* frame_s;
  if(isFPR)
    frame_s = combinedPfIsoFPR03Phot.frame(RooFit::Title("Fit to combinedPfIsoFPR03Phot, scut region"), Binning(100, -7., 15.));
  else
    frame_s = combinedPfIso03Phot.frame(RooFit::Title("Fit to combinedPfIso03Phot, scut region"), Binning(100, -7., 15.));

  data_scut->plotOn(frame_s, Name("dh_s"));
  ext_model_scut.plotOn(frame_s, Name("pdf_scut"), LineColor(kBlue), Normalization(1.0,RooAbsReal::RelativeExpected));
  model_sig->plotOn(frame_s, Name("pdf_sig"), LineColor(kCyan), Normalization(frac_scut.getVal()/**N_scut.getVal()*/));
  model_bg->plotOn(frame_s, Name("pdf_bg"), LineColor(kMagenta), Normalization((1-frac_scut.getVal())/**N_scut.getVal()*/));
  
  frame_s->SetMinimum(0.00001);
  if(isFPR)
    frame_s->GetXaxis()->SetTitle("combinedPfIsoFPR03Phot [GeV]");
  else
    frame_s->GetXaxis()->SetTitle("combinedPfIso03Phot [GeV]");
  //  frame->SetMaximum(30000.);

  TLegend* a = new TLegend(0.63,0.68, 0.88, 0.88);
  a->SetBorderSize(0);
  a->SetFillColor(0);
  a->SetFillStyle(0);
  a->SetTextSize(0.038);
  a->AddEntry(frame_s->findObject("dh_s"), "Data","p");
  a->AddEntry(frame_s->findObject("pdf_scut"), "fitting PDF","l");
  a->AddEntry(frame_s->findObject("pdf_sig"), "sig component","l");
  a->AddEntry(frame_s->findObject("pdf_bg"), "bkg component","l");

  //Double_t chi2 = frame_s->chiSquare("pdf_scut", "dh_s", 7);	
  //Double_t prob = TMath::Prob(chi2, 7);                       
  Double_t chi2 = frame_s->chiSquare("pdf_scut", "dh_s", 5);	
  Double_t prob = TMath::Prob(chi2, 5);                       
  TPaveLabel *t1 = new TPaveLabel(0.6,0.40,0.80,0.50, Form("#chi^{2}/dof = %.3f", chi2),"brNDC");
  TPaveLabel *t2 = new TPaveLabel(0.6,0.50,0.83,0.60, Form("Prob(chi2,dof) = %.3f", prob),"brNDC");
  t1->SetFillColor(0);
  t1->SetLineWidth(0);
  t1->SetLineColor(0);
  t1->SetShadowColor(0);
  t2->SetFillColor(0);
  t2->SetLineWidth(0);
  t2->SetLineColor(0);
  t2->SetShadowColor(0);

  TCanvas* c = new TCanvas();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  t1->Draw();
  t2->Draw();
  a->Draw();
  c->SaveAs((outdir+filename+"_s.png").c_str());
  c->SaveAs((outdir+filename+"_s.pdf").c_str());
  c->SaveAs((outdir+filename+"_s.root").c_str());


  std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  t1->Draw();
  t2->Draw();
  c->SaveAs((outdir+filename+"_s_log.png").c_str());
  c->SaveAs((outdir+filename+"_s_log.pdf").c_str());
  c->SaveAs((outdir+filename+"_s_log.root").c_str());

  TFile* f_fitRes = new TFile((outdir+"fitResult_"+filename+"_fitResult.root").c_str(), "RECREATE");
  result->Write();
  f_fitRes->Write();
  f_fitRes->Close();

  RooRealVar N_sig_real("N_sig_real", "N_sig_real", N_sig.getVal(), 10., 10000000.);
  N_sig_real.setError(N_sig.getPropagatedError(*result));

  RooWorkspace* w_data = new RooWorkspace("w_data", "workspace");

  w_data->import(*data_scut);
  w_data->import(ext_model_scut);
  w_data->import(combinedPfIsoFPR03Phot);
  w_data->import(combinedPfIso03Phot);
  w_data->import(N_sig_real);

  w_data->Print();

  w_data->writeToFile((outdir +"workspace_"+filename+".root").c_str());


}
