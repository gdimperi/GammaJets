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
#include "Math/MinimizerOptions.h"

using namespace RooFit;

void fitDebug_Data(string cut, string filename, string hlt, string ptMin, string ptMax){
  


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

  //models from fitted MC
  TFile* f_ws_sig = new TFile(("../workspace_fit_EB_sig_WP095_pt"+ptMin+"_"+ptMax+".root").c_str(), "READ");
  TFile* f_ws_bg = new TFile(("../workspace_fit_EB_bg_WP095_pt"+ptMin+"_"+ptMax+".root").c_str(), "READ");

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

  RooCBShape model_sig("model_sig", "model_sig", combinedPfIso03Phot, data_CBC_mean, data_CBC_sigma, data_CBC_alphaCB, data_CBC_n);
  
  /*
  // vittorio configuration
  //data_data_CBC_mean.setConstant(kTRUE);
  //data_CBC_sigma.setConstant(kTRUE);
  //data_CBC_alphaC.setConstant(kTRUE);
  data_CBC_alphaCB.setConstant(kTRUE);
  data_CBC_n.setConstant(kTRUE);
  */ 

  data_CBC_mean.setConstant(kTRUE);
  data_CBC_sigma.setConstant(kTRUE);
  data_CBC_alphaCB.setConstant(kTRUE);
  data_CBC_n.setConstant(kTRUE);


  //model for background

  RooRealVar data_cbmean("data_cbmean", "data_cbmean", w_bg->var("cbmean")->getVal(), -1., 4.);
  RooRealVar data_cbsigma("data_cbsigma", "data_cbsigma", w_bg->var("cbsigma")->getVal(), 1., 6.) ;  
  RooRealVar data_cbalpha_s("data_cbalpha_s", "data_cbalpha_s", w_bg->var("cbalpha_s")->getVal(), -5., 0.);  
  RooRealVar data_cbn_s("data_cbn_s", "data_cbn_s", w_bg->var("cbn_s")->getVal(), 0., 500.);  

  RooCBShape cb_bg("cb_bg", "cb_bg", combinedPfIso03Phot, data_cbmean, data_cbsigma, data_cbalpha_s, data_cbn_s);

  RooRealVar data_gaussmean("data_gaussmean", "data_gaussmean", w_bg->var("gaussmean")->getVal(), -3., 1.);  
  RooRealVar data_gausssigma("data_gausssigma", "data_gausssigma", w_bg->var("gausssigma")->getVal(), 0., 5.);  

  RooGaussian gauss_bg("gauss_bg", "gauss_bg", combinedPfIso03Phot, data_gaussmean, data_gausssigma);

  RooRealVar data_frac_s("data_frac_s", "data_frac_s", w_bg->var("frac_s")->getVal(), 0., 1.);  

  RooAddPdf model_bg("model_bg", "model_bg", cb_bg, gauss_bg, data_frac_s);


  data_cbmean.setConstant(kTRUE);      
  data_cbsigma.setConstant(kTRUE);     
  data_cbalpha_s.setConstant(kTRUE);   
  data_cbn_s.setConstant(kTRUE);       
  data_frac_s.setConstant(kTRUE);      
  data_gaussmean.setConstant(kTRUE);      
  data_gausssigma.setConstant(kTRUE);     

  /*
  // vittorio configuration
  data_cbmean.setConstant(kTRUE);      
  data_cbsigma.setConstant(kTRUE);     
  data_cbalpha_s.setConstant(kTRUE);   
  data_cbn_s.setConstant(kTRUE);       
  data_frac_s.setConstant(kTRUE);      
  data_gaussmean.setConstant(kTRUE);      
  data_gausssigma.setConstant(kTRUE);     
  */

  //TChain data("finalTree");
  TChain data("myTrees_withWeight");

  /*
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon-Run2012A-recover-06Aug2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012B-13Jul2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-24Aug2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-EcalRecover_11Dec2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-PromptReco-v2_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012D-PromptReco-v1_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  */

  data.Add(("/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_"+hlt+".root").c_str());


  RooDataSet allData("allData", "allData", argSet, RooFit::Import(data));

  std::cout<<"created complete dataset for data"<<endl;
  
  std::cout<<allData.GetName()<<std::endl;
  
  //  RooDataSet* data_scut = (RooDataSet*)allData.reduce((cut+" && mvaIdPhot>0.711099").c_str());
  //  RooDataSet* data_rcut = (RooDataSet*)allData.reduce((cut+" && mvaIdPhot<0.711099").c_str());

  RooDataSet* data_scut = (RooDataSet*)allData.reduce((cut+" && mvaIdPhot>0.83548").c_str());
  RooDataSet* data_rcut = (RooDataSet*)allData.reduce((cut+" && mvaIdPhot<0.6 && mvaIdPhot>-0.6").c_str());
  std::cout<<"data_scut entries: "<<data_scut->sumEntries()<<std::endl;
  std::cout<<"data_rcut entries: "<<data_rcut->sumEntries()<<std::endl;
  std::cout<<"created reduced dataset"<<std::endl;

  TH1F* h_set_scut = (TH1F*)data_scut->createHistogram("h_set_scut", combinedPfIso03Phot, RooFit::Binning(combinedPfIso03Phot.getBinning()));
  TH1F* h_set_rcut = (TH1F*)data_rcut->createHistogram("h_set_rcut", combinedPfIso03Phot, RooFit::Binning(combinedPfIso03Phot.getBinning()));

  RooDataHist datah_scut("datah_scut", "datah_scut", combinedPfIso03Phot, Import(*h_set_scut));
  RooDataHist datah_rcut("datah_rcut", "datah_rcut", combinedPfIso03Phot, Import(*h_set_rcut));

  //adding and extending models                                                                                                                                                                           
  //option 1: adding sig and bg and extending their sum                                                                                                                                                    
  RooRealVar frac_scut("frac_scut", "frac_scut", 0.5, 0., 1.);                                                                                                                                         
  RooAddPdf model_scut("model_scut", "model_scut", model_sig, model_bg, frac_scut);//using fit templates from MC

  //vittorio
  //RooRealVar N_scut("N_scut", "expected number of ev for scut", 20000., 1000., 100000.);
  //giulia
  RooRealVar N_scut("N_scut", "expected number of ev for scut", 10000., 1000., 100000.);

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
  ext_model_scut.getParameters(combinedPfIso03Phot)->Print("s");

  m.hesse();

  m.minos();
  std::cout<<"MINOS PARAMETERS"<<std::endl;
  ext_model_scut.getParameters(combinedPfIso03Phot)->Print("s");
  
  RooFitResult* result = m.save();
  result->Print();*/


  //  ROOT::Math::MinimizerOptions::SetDefaultTolerance(1e-100); 
  RooFitResult* result = ext_model_scut.fitTo(*data_scut, Save(), Range(-5.,15.), Extended(kTRUE), SumW2Error(kFALSE));
  //RooFitResult* result = cbmyc_d.fitTo(datah_scut, Save(), Range(-5.,15.), SumW2Error(kTRUE));


  std::cout<<cut<<std::endl;

  RooPlot* frame_s = combinedPfIso03Phot.frame(RooFit::Title("Fit to combinedPfIso03Phot, scut region"));

  data_scut->plotOn(frame_s, Name("dh_s"));

  
  model_sig.plotOn(frame_s, Name("pdf_sig"), LineColor(kCyan), LineStyle(2) /*,Normalization(frac_scut.getVal()*N_scut.getVal())*/);
  model_bg.plotOn(frame_s, Name("pdf_bg"), LineColor(kMagenta), LineStyle(2) /*,Normalization((1-frac_scut.getVal())*N_scut.getVal())*/);
  
  /*
    model_sig.plotOn(frame_s, Name("pdf_sig"), LineColor(kCyan), LineStyle(2) , Normalization(frac_scut.getVal()*N_scut.getVal()));
    model_bg.plotOn(frame_s, Name("pdf_bg"), LineColor(kMagenta), LineStyle(2), Normalization((1-frac_scut.getVal())*N_scut.getVal()));
  */
  // vittorio
  ext_model_scut.plotOn(frame_s, Name("pdf_scut"), LineColor(kBlue), Normalization(1.0,RooAbsReal::RelativeExpected));
  
  frame_s->SetMinimum(0.00001);
  //  frame->SetMaximum(30000.);

  TCanvas* c = new TCanvas();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  c->SaveAs((filename+"_s.png").c_str());
  c->SaveAs((filename+"_s.root").c_str());

  Double_t chi2 = frame_s->chiSquare("pdf_scut", "dh_s", 4);

  std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  c->SaveAs((filename+"_s_log.png").c_str());
  c->SaveAs((filename+"_s_log.root").c_str());

  TFile* f_fitRes = new TFile(("fitResult_"+filename+".root").c_str(), "RECREATE");
  result->Write();
  f_fitRes->Write();
  f_fitRes->Close();

  RooRealVar N_sig_real("N_sig_real", "N_sig_real", N_sig.getVal(), 10., 10000000.);
  N_sig_real.setError(N_sig.getPropagatedError(*result));

  RooWorkspace* w_data = new RooWorkspace("w_data", "workspace");

  w_data->import(*data_scut);
  w_data->import(ext_model_scut);
  w_data->import(combinedPfIso03Phot);
  w_data->import(N_sig_real);

  w_data->Print();

  w_data->writeToFile(("workspace_"+filename+".root").c_str());


}
