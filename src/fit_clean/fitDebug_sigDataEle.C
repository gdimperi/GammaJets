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
#include "RooCBmyCrujff.h"
#include "RooCBShape.h"
#include "TLegend.h"
#include "RooWorkspace.h"
#include "RooFormulaVar.h"
#include "RooGlobalFunc.h"
#include "TPaveLabel.h"
#include "TMath.h"

using namespace RooFit;

int main()
{
  return 0;
}

void fitDebug_sig(string cut, string filename,  string workdir, int isFPR, int isEB){

 
  //loading data to fit
  TChain data("myTaPDir/myTree");

  //string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";
  string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/";
  data.Add((input_dir+"DoubleElectron_Run2012All_tagTight_HLT30.root").c_str()); 
  
  
  RooRealVar probe_combinedPfIso03("probe_combinedPfIso03", "probe_combinedPfIso03", -7., 15.);
  RooRealVar probe_eta("probe_eta", "probe_eta", -2.5, 2.5);
  RooRealVar probe_mvaId("probe_mvaId", "probe_mvaId", -1.,1.);
  //RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  //RooRealVar isIsolatedGenPhot("isIsolatedGenPhot","isIsolatedGenPhot", -1., 2.);
  RooRealVar probe_pt("probe_pt", "probe_pt", 0., 1000.);
  RooRealVar puW30("puW30","puW30", 0., 100.);
  RooRealVar rhoWeight30("rhoWeight30","rhoWeight30", 0., 100.);
  RooRealVar etaWeight("etaWeight","etaWeight", 0., 100.);
  RooRealVar r9WeightEB("r9WeightEB","r9WeightEB", 0., 100.);
  RooRealVar r9WeightEE("r9WeightEE","r9WeightEE", 0., 100.);


  RooArgSet argSet("argSet");
  //creating set of variables for the datasets
  std::cout<<"Creating RooArgSet with variables for fit"<<std::endl;
  argSet.add(probe_combinedPfIso03);
  argSet.add(probe_eta);
  argSet.add(probe_mvaId);
  //argSet.add(isMatchedPhot);
  //argSet.add(isIsolatedGenPhot);
  argSet.add(probe_pt);
  argSet.add(puW30);
  argSet.add(rhoWeight30);
  argSet.add(etaWeight);
  argSet.add(r9WeightEB);
  argSet.add(r9WeightEE);

  
  
  //creating complete dataset
  std::cout<<"Reading trees of data into a complete general dataset"<<std::endl;
  RooDataSet* allSet;
  RooDataSet* allSet_weighted;
  RooRealVar* weight;
  allSet= new RooDataSet("allSet", "allSet", argSet, RooFit::Import(data));
  RooFormulaVar* weightprod; 

  if(isEB)
    weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW30, rhoWeight30, etaWeight, r9WeightEB));   
  else
    weightprod = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW30, rhoWeight30, etaWeight, r9WeightEE));       

  weight = (RooRealVar*)allSet->addColumn(*weightprod);
  weight->SetNameTitle("weight","weight");
  allSet_weighted = new RooDataSet(allSet->GetName(),allSet->GetTitle(),allSet,*allSet->get(),0,weight->GetName()) ;
    
  std::cout<<"Complete dataset "<<allSet_weighted->GetName()<<" created"<<std::endl;
  

  //reducing complete dataset to interesting ones
  std::cout<<"Reducing complete dataset to smaller interesting ones"<<std::endl;
  
  RooDataSet* d_s;
  if(isEB)
    //d_s = (RooDataSet*)allSet_weighted->reduce((cut+" && probe_mvaId>0.83548").c_str());
    d_s = (RooDataSet*)allSet->reduce((cut+" && probe_mvaId>0.83548").c_str());
  else
    //d_s = (RooDataSet*)allSet_weighted->reduce((cut+" && probe_mvaId>0.87382").c_str());
    d_s = (RooDataSet*)allSet->reduce((cut+" && probe_mvaId>0.83548").c_str());

  d_s->SetName("d_s");
  std::cout<<"Datset pesato? "<<d_s->isWeighted()<<std::endl;
  d_s->Print();
  std::cout<<"Reduced dataset "<<d_s->GetName()<<" created with cut "<<cut<<" && mvaIdPhot>0.83548"<<std::endl;
  std::cout<<"d_s entries: "<<d_s->sumEntries()<<std::endl;

  //models for fit
  
  RooRealVar CBC_mean("CBC_mean", "CBC_mean", -1., -3., 3.);
  RooRealVar CBC_sigma("CBC_sigma", "CBC_sigma", 1., 0., 3.);
  RooRealVar CBC_alphaC("CBC_alphaC", "CBC_alphaC", 0.7, 0., 10.);
  RooRealVar CBC_alphaCB("CBC_alphaCB", "CBC_alphaCB", -0.7, -4., 0.);
  RooRealVar CBC_n("CBC_n", "CBC_n", 4., 0., 100.);

  //RooCBmyCrujff CBmyCrujff_s("CBmyCrujff_s", "CBmyCrujff_s", combinedPfIso03Phot, CBC_mean, CBC_sigma, CBC_alphaC, CBC_alphaCB, CBC_n);
  RooCBShape cb_sig("cb_sig", "cb_sig", probe_combinedPfIso03, CBC_mean, CBC_sigma,CBC_alphaCB,CBC_n);
  
  //fit
  RooFitResult* result;
  result =  cb_sig.fitTo(*d_s, Save(), Range(-5.,15.), SumW2Error(kFALSE));

  RooPlot* frame_s = probe_combinedPfIso03.frame(RooFit::Bins(60),RooFit::Title("Fit to combinedPfIso03, scut region"));

  d_s->plotOn(frame_s, Name("data_scut"));
  cb_sig.plotOn(frame_s,Name("pdf_s"),LineColor(kCyan)) ;

  frame_s->SetMinimum(0.00001);
  
  TLegend* a = new TLegend(0.63,0.68, 0.88, 0.88);
  a->SetBorderSize(0);
  a->SetFillColor(0);
  a->SetFillStyle(0);
  a->SetTextSize(0.038);
  a->AddEntry(frame_s->findObject("data_scut"), "data","p");
  a->AddEntry(frame_s->findObject("pdf_s"), "fitting PDF","l");
  
  TCanvas* c = new TCanvas();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  a->Draw();
  c->SaveAs((workdir+filename+"_s.png").c_str());
  //c->SaveAs((workdir+filename+"_s.root").c_str());

  Double_t chi2 = frame_s->chiSquare("pdf_s", "data_scut", 4);
  Double_t prob = TMath::Prob(chi2,4); //non so se ci va il chi2 ridotto o no


  TPaveLabel *t1_r = new TPaveLabel(0.6,0.4,0.83,0.5, Form("#chi^{2}/dof = %.3f", chi2),"brNDC");
  t1_r->SetFillColor(0);
  t1_r->SetLineWidth(0);
  t1_r->SetLineColor(0);
  t1_r->SetShadowColor(0);
  // TPaveLabel *t2_r = new TPaveLabel(0.6,0.5,0.83,0.60, Form("Prob(#chi^{2},dof) = %.3f", prob),"brNDC");
//   t2_r->SetFillColor(0);
//   t2_r->SetLineWidth(0);
//   t2_r->SetLineColor(0);
//   t2_r->SetShadowColor(0);

  std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  t1_r->Draw();
  //  t2_r->Draw();
  a->Draw();
  c->SaveAs((workdir+filename+"_s_log.png").c_str());
  //c->SaveAs((workdir+filename+"_s_log.root").c_str());

  RooWorkspace* w_sig = new RooWorkspace("w_sig", "workspace");
  
  w_sig->import(*d_s);
  w_sig->import(cb_sig);

  w_sig->Print();

  w_sig->writeToFile((workdir+"workspace_"+filename+".root").c_str());

  TFile* f_fitRes;
  f_fitRes = new TFile((workdir+"fitResult_"+filename+".root").c_str(), "RECREATE");
  
  result->Write();
  //  f_fitRes->Write();
  f_fitRes->Close();
  

}
