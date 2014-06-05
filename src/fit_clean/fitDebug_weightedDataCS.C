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
#include "RooCBmyCrujff.h"
#include "TChain.h"
#include "TTree.h"
#include "RooDataSet.h"
#include "RooAddPdf.h"
#include "RooRealConstant.h"
#include "RooCategory.h"
#include "RooSimultaneous.h"
#include "RooWorkspace.h"
#include "RooFitResult.h"
#include "RooGlobalFunc.h"
#include "TPaveLabel.h"
#include "RooProduct.h"
#include "TMath.h"

using namespace RooFit;

int main()
{
  return 0;
}

void fitDebug(string cut, string filename, string hlt, bool binned, string outdir, int isoWeight, int isFPR){
  
  //  string outdir = "";
  
  TChain data("myTrees_withWeight");
  /*  
  if(hlt=="hltcut30")
    data.Add("/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt30.root");
  if(hlt=="hltcut50")
    data.Add("/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt50.root");
  if(hlt=="hltcut75")
    data.Add("/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt75.root");
  if(hlt=="hltcut90")
    data.Add("/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt90.root");
  if(hlt=="hltcut135")
    data.Add("/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt135.root");
  if(hlt=="hltcut150")
    data.Add("/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt150.root");
  */


  if(hlt=="hltcut30")
    data.Add("/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt30.root");
  if(hlt=="hltcut50")
    data.Add("/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt50.root");
  if(hlt=="hltcut75")
    data.Add("/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt75.root");
  if(hlt=="hltcut90")
    data.Add("/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt90.root");
  if(hlt=="hltcut135")
    data.Add("/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt135.root");
  if(hlt=="hltcut150")
    data.Add("/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/data2012ABCD_withWeights_hlt150.root");


  RooRealVar combinedPfIso03Phot("combinedPfIso03Phot", "combinedPfIso03Phot", -7., 15.);
  RooRealVar combinedPfIsoFPR03Phot("combinedPfIsoFPR03Phot", "combinedPfIsoFPR03Phot", -7., 15.);
  RooRealVar etaPhot("etaPhot", "etaPhot", -2.5, 2.5);
  RooRealVar mvaIdPhot("mvaIdPhot", "mvaIdPhot", -1.,1.);
  RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  RooRealVar isIsolatedGenPhot("isIsolatedGenPhot","isIsolatedGenPhot", -1., 2.);
  RooRealVar ptPhot("ptPhot", "ptPhot", 0., 1000.);
  RooRealVar weight("weight","weight", 0., 100.);
  RooRealVar isoW_EB("isoW_EB","isoW_EB", 0., 100.);
  RooRealVar isoW1_EB("isoW1_EB","isoW1_EB", 0., 100.);
  RooRealVar isoW2_EB("isoW2_EB","isoW2_EB", 0., 100.);
  RooRealVar isoFPRW_EB("isoFPRW_EB","isoW_EB", 0., 100.);
  RooRealVar isoFPRW1_EB("isoFPRW1_EB","isoFPRW1_EB", 0., 100.);
  RooRealVar isoFPRW2_EB("isoFPRW2_EB","isoFPRW2_EB", 0., 100.);


  RooProduct weight_times_isoWeight("weight_times_isoWeight", "weight_times_isoWeight", RooArgSet(weight,isoW_EB));

  
  RooArgSet argSet("argSet");
  //creating set of variables for the datasets
  std::cout<<"Creating RooArgSet with variables for fit"<<std::endl;
  argSet.add(combinedPfIso03Phot);
  argSet.add(combinedPfIsoFPR03Phot);
  argSet.add(etaPhot);
  argSet.add(mvaIdPhot);
  argSet.add(isMatchedPhot);
  argSet.add(isIsolatedGenPhot);
  argSet.add(ptPhot);
  argSet.add(weight);
  argSet.add(isoW_EB);
  argSet.add(isoW1_EB);
  argSet.add(isoW2_EB);
  argSet.add(isoFPRW_EB);
  argSet.add(isoFPRW1_EB);
  argSet.add(isoFPRW2_EB);


  //binning variables
  //std::cout<<"Binning variables for eventual binned fit"<<std::endl;
  //combinedPfIsoFPR03Phot.setBins(121);
  //etaPhot.setBins(120);
  //mvaIdPhot.setBins(180);
  //isIsolatedGenPhot.setBins(3);
  //ptPhot.setBins(1200);
  //weight_times_isoWeight.setBins(10000000);

  //creating complete dataset
  std::cout<<"Reading trees of MC into a complete general dataset"<<std::endl;
  RooDataSet* allSet;
  if(isFPR){
    if(isoWeight==0)
      allSet = new RooDataSet("allSet", "allSet", argSet, WeightVar("isoFPRW_EB"), RooFit::Import(data));
    if(isoWeight==1)
      allSet = new RooDataSet("allSet", "allSet", argSet, WeightVar("isoFPRW1_EB"), RooFit::Import(data));
    if(isoWeight==2)
      allSet = new RooDataSet("allSet", "allSet", argSet, WeightVar("isoFPRW2_EB"), RooFit::Import(data));
  }
  else{
    if(isoWeight==0)
      allSet = new RooDataSet("allSet", "allSet", argSet, WeightVar("isoW_EB"), RooFit::Import(data));
    if(isoWeight==1)
      allSet = new RooDataSet("allSet", "allSet", argSet, WeightVar("isoW1_EB"), RooFit::Import(data));
    if(isoWeight==2)
      allSet = new RooDataSet("allSet", "allSet", argSet, WeightVar("isoW2_EB"), RooFit::Import(data));
  }
  //allSet.setWeightVar(weight_times_isoWeight);

  std::cout<<"Complete dataset "<<allSet->GetName()<<" created"<<std::endl<<std::endl;
  std::cout<<"******************** "<<std::endl;
  std::cout<<" isWeighted =  " <<  allSet->isWeighted() <<std::endl;
  std::cout<<"******************** "<<std::endl<<std::endl;

  //reducing complete dataset to interesting ones
  
  RooDataSet* d_r = (RooDataSet*)allSet->reduce((cut+" && mvaIdPhot<0.6 && mvaIdPhot>-0.6").c_str());
  d_r->SetName("d_r");
  std::cout<<"Reduced dataset "<<d_r->GetName()<<" created with cut "<<cut<<" && -0.6 < mvaIdPhot < 0.6"<<std::endl;
    std::cout<<"d_r entries: "<<d_r->sumEntries()<<std::endl;
  
  //models for fit
  //gaussian
  RooRealVar gaussmean("gaussmean","gaussmean", -1., -10., 20.);
  RooRealVar gausssigma("gausssigma", "gausssigma", 1., 0., 20.);

  RooGaussian* my_gauss;
  if(isFPR)
    my_gauss = new RooGaussian("my_gauss", "my_gauss", combinedPfIsoFPR03Phot, gaussmean, gausssigma);
  else
    my_gauss = new RooGaussian("my_gauss", "my_gauss", combinedPfIso03Phot, gaussmean, gausssigma);
  

  //crystalBall
  RooRealVar cbmean("cbmean", "cbmean", -1., -5., 15.);
  RooRealVar cbsigma("cbsigma", "cbsigma", 1., 0., 20.);

  RooRealVar cbalpha("cbalpha", "cbaplha", -1., -1000., 0.);
  RooRealVar cbn("cbn","cbn",10., 0., 1000.);

  RooCBShape* my_cb;
  if(isFPR)
    my_cb = new RooCBShape("my_cb", "my_cb",  combinedPfIsoFPR03Phot, cbmean, cbsigma, cbalpha, cbn);
  else
    my_cb = new RooCBShape("my_cb", "my_cb",  combinedPfIso03Phot, cbmean, cbsigma, cbalpha, cbn);

  RooRealVar frac("frac", "frac", 0.5, 0., 1.);

  //adding gauss to cb for both fit regions
  RooAddPdf my_add("my_add", "my_add", *my_cb, *my_gauss, frac);


  //creating simultaneous fit model
  //RooSimultaneous simPdf("simPdf", "simultaneous pdfs, scut and rcut", sample);
  //simPdf.addPdf(my_add_s, "scut");
  //simPdf.addPdf(my_add_r, "rcut");

  //fit
  RooFitResult* result;
  //unbinned
  if(!binned) result =  my_add.fitTo(*d_r, Save(), Range(-5.,15.), SumW2Error(kFALSE));
  
  //binned
  //if(binned)  result =  simPdf.fitTo(srcut_h, Save(), Range(-5.,15.), SumW2Error(kFALSE));

  //drawing results
  RooPlot* frame_r;
  if(isFPR)
   frame_r = combinedPfIsoFPR03Phot.frame(RooFit::Title("Fit to combinedPfIsoFPR03Phot, rcut region"));
  else  
    frame_r = combinedPfIso03Phot.frame(RooFit::Title("Fit to combinedPfIso03Phot, rcut region"));

  if(!binned) d_r->plotOn(frame_r,  Name("data_rcut"));
  my_add.plotOn(frame_r,Name("pdf_r"),LineColor(kCyan)) ;
  my_add.plotOn(frame_r, RooFit::LineColor(kMagenta), Components("my_cb"));
  my_add.plotOn(frame_r, RooFit::LineColor(kMagenta), Components("my_gauss"));
  

  frame_r->SetMinimum(0.00001);


  TCanvas* c = new TCanvas();

  c->SetTitle(frame_r->GetTitle());
  frame_r->Draw("");
  c->SaveAs((outdir+filename+"_r_dataReweight.png").c_str());
  c->SaveAs((outdir+filename+"_r_dataReweight.root").c_str());

  //Double_t chi2 = frame_r->chiSquare("pdf_r", "data_rcut", 6);
  Double_t chi2 = frame_r->chiSquare("pdf_r", "data_rcut", 7);
  Double_t prob = TMath::Prob(chi2,7);
  
  TPaveLabel *t1_r = new TPaveLabel(0.6,0.4,0.83,0.5, Form("#chi^{2}/dof = %.3f", chi2),"brNDC");
  t1_r->SetFillColor(0);
  t1_r->SetLineWidth(0);
  t1_r->SetLineColor(0);
  t1_r->SetShadowColor(0);
  TPaveLabel *t2_r = new TPaveLabel(0.6,0.5,0.83,0.60, Form("Prob(#chi^{2},dof) = %.3f", prob),"brNDC");
  t2_r->SetFillColor(0);
  t2_r->SetLineWidth(0);
  t2_r->SetLineColor(0);
  t2_r->SetShadowColor(0);

  std::cout<<"ChiSquared value, rcut: "<<chi2<<std::endl;

  c->SetLogy();

  frame_r->Draw("");
  t1_r->Draw();
  t2_r->Draw();
  c->SetTitle(frame_r->GetTitle());
  c->SaveAs((outdir+filename+"_r_dataRewight_log.png").c_str());
  c->SaveAs((outdir+filename+"_r_dataReweight_log.root").c_str());

  TFile* f_fitRes = new TFile((outdir+"fitResult_"+filename+"_dataReweight.root").c_str(), "RECREATE");
  result->Write();
  //  f_fitRes->Write();
  f_fitRes->Close();
  RooWorkspace* w_bg = new RooWorkspace("w_bg", "workspace");

  w_bg->import(*d_r);
  w_bg->import(my_add);
  w_bg->import(combinedPfIsoFPR03Phot);
  w_bg->import(combinedPfIso03Phot);

  w_bg->Print();

  w_bg->writeToFile((outdir+"workspace_"+filename+"_dataReweight.root").c_str());

}
