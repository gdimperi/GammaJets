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

using namespace RooFit;

int main()
{
  return 0;
}

void fitDebug_sig(string cut, string filename, string hlt, bool binned, string workdir, int isFPR, int isEB){

 
  //loading MC to fit
  TChain mc("finalTree");

  //string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";
  string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";

  if(hlt=="hltcut30"){
    mc.Add((input_dir+"HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());   
    mc.Add((input_dir+"HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str()); 
    mc.Add((input_dir+"HLT30/QCDEM_Pt_80_170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT30/QCDEM_Pt_170_250_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT30/QCDEM_Pt_30_80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT30/QCDEM_Pt_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT30/QCDEM_Pt_20_30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT30/QCDEM_Pt_250_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root").c_str()); 
  }
  if(hlt=="hltcut50"){
    mc.Add((input_dir+"HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());   
    mc.Add((input_dir+"HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT50/QCDEM_Pt_80_170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT50/QCDEM_Pt_170_250_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT50/QCDEM_Pt_30_80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT50/QCDEM_Pt_350_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT50/QCDEM_Pt_20_30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT50/QCDEM_Pt_250_350_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root").c_str()); 
  }
  if(hlt=="hltcut75"){
    mc.Add((input_dir+"HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());   
    mc.Add((input_dir+"HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT75/QCDEM_Pt_80_170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT75/QCDEM_Pt_170_250_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT75/QCDEM_Pt_30_80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT75/QCDEM_Pt_350_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT75/QCDEM_Pt_20_30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT75/QCDEM_Pt_250_350_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root").c_str()); 
  }
  if(hlt=="hltcut90"){
    mc.Add((input_dir+"HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());   
    mc.Add((input_dir+"HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT90/QCDEM_Pt_80_170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT90/QCDEM_Pt_170_250_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT90/QCDEM_Pt_30_80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT90/QCDEM_Pt_350_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT90/QCDEM_Pt_20_30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT90/QCDEM_Pt_250_350_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root").c_str()); 
  }
  if(hlt=="hltcut135"){
    mc.Add((input_dir+"HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());   
    mc.Add((input_dir+"HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT135/QCDEM_Pt_80_170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT135/QCDEM_Pt_170_250_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT135/QCDEM_Pt_30_80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT135/QCDEM_Pt_350_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT135/QCDEM_Pt_20_30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT135/QCDEM_Pt_250_350_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root").c_str()); 
  }
  if(hlt=="hltcut150"){
    mc.Add((input_dir+"HLT150/G_Pt-170to300_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT150/G_Pt-120to170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT150/G_Pt-30to50_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT150/G_Pt-50to80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT150/G_Pt-300to470_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());  
    mc.Add((input_dir+"HLT150/G_Pt-80to120_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());   
    mc.Add((input_dir+"HLT150/G_Pt-15to30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());    
    mc.Add((input_dir+"HLT150/QCDEM_Pt_80_170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT150/QCDEM_Pt_170_250_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT150/QCDEM_Pt_30_80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT150/QCDEM_Pt_350_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT150/QCDEM_Pt_20_30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str());	
    mc.Add((input_dir+"HLT150/QCDEM_Pt_250_350_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root").c_str()); 
  }
  
  RooRealVar combinedPfIso03Phot("combinedPfIso03Phot", "combinedPfIso03Phot", -7., 15.);
  RooRealVar etaPhot("etaPhot", "etaPhot", -2.5, 2.5);
  RooRealVar mvaIdPhot("mvaIdPhot", "mvaIdPhot", -1.,1.);
  RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  RooRealVar isIsolatedGenPhot("isIsolatedGenPhot","isIsolatedGenPhot", -1., 2.);
  RooRealVar ptPhot("ptPhot", "ptPhot", 0., 1000.);
  RooRealVar weight("weight","weight", 0., 100.);

  RooArgSet argSet("argSet");
  //creating set of variables for the datasets
  std::cout<<"Creating RooArgSet with variables for fit"<<std::endl;
  argSet.add(combinedPfIso03Phot);
  argSet.add(etaPhot);
  argSet.add(mvaIdPhot);
  argSet.add(isMatchedPhot);
  argSet.add(isIsolatedGenPhot);
  argSet.add(ptPhot);
  argSet.add(weight);

  //binning variables
  std::cout<<"Binning variables for eventual binned fit"<<std::endl;
  combinedPfIso03Phot.setBins(121);
  etaPhot.setBins(120);
  mvaIdPhot.setBins(180);
  isMatchedPhot.setBins(3);
  isIsolatedGenPhot.setBins(3);
  ptPhot.setBins(1200);
  weight.setBins(1000);

  //creating complete dataset
  std::cout<<"Reading trees of MC into a complete general dataset"<<std::endl;
  RooDataSet allSet("allSet", "allSet", argSet, WeightVar("weight"), RooFit::Import(mc));
  std::cout<<"Complete dataset "<<allSet.GetName()<<" created"<<std::endl;

  //reducing complete dataset to interesting ones
  std::cout<<"Reducing complete dataset to smaller interesting ones"<<std::endl;

  RooDataSet* d_s;
  if(isEB)
    d_s = (RooDataSet*)allSet.reduce((cut+" && mvaIdPhot>0.83548").c_str());
  else
    d_s = (RooDataSet*)allSet.reduce((cut+" && mvaIdPhot>0.87382").c_str());

  d_s->SetName("d_s");
  std::cout<<"Datset pesato? "<<d_s->isWeighted()<<std::endl;
  d_s->Print();
  std::cout<<"Reduced dataset "<<d_s->GetName()<<" created with cut "<<cut<<" && mvaIdPhot>0.83548"<<std::endl;
  std::cout<<"d_s entries: "<<d_s->sumEntries()<<std::endl;

  //binning datasets to obtain roodatahists 
  std::cout<<"Converting RooDataSets in RooDataHists for eventual binned fit"<<std::endl;
  RooDataHist dh_s("dh_s", "dh_s", RooArgSet(combinedPfIso03Phot, weight), *d_s);
  std::cout<<"Reduced datahist with name "<<dh_s.GetName()<<std::endl;
  std::cout<<dh_s.sum(kTRUE)<<std::endl;
  

  //models for fit
  
  RooRealVar CBC_mean("CBC_mean", "CBC_mean", -1., -3., 3.);
  RooRealVar CBC_sigma("CBC_sigma", "CBC_sigma", 1., 0., 3.);
  RooRealVar CBC_alphaC("CBC_alphaC", "CBC_alphaC", 0.7, 0., 10.);
  RooRealVar CBC_alphaCB("CBC_alphaCB", "CBC_alphaCB", -0.7, -4., 0.);
  RooRealVar CBC_n("CBC_n", "CBC_n", 4., 0., 100.);

  //RooCBmyCrujff CBmyCrujff_s("CBmyCrujff_s", "CBmyCrujff_s", combinedPfIso03Phot, CBC_mean, CBC_sigma, CBC_alphaC, CBC_alphaCB, CBC_n);
  RooCBShape cb_sig("cb_sig", "cb_sig", combinedPfIso03Phot, CBC_mean, CBC_sigma,CBC_alphaCB,CBC_n);
  
  //fit
  RooFitResult* result;
  //unbinned
  if(!binned) result =  cb_sig.fitTo(*d_s, Save(), Range(-5.,15.), SumW2Error(kFALSE));
  if(binned)  result =  cb_sig.fitTo(dh_s, Save(), Range(-5.,15.), SumW2Error(kFALSE));

  RooPlot* frame_s = combinedPfIso03Phot.frame(RooFit::Title("Fit to combinedPfIso03Phot, scut region"));

  if(!binned) d_s->plotOn(frame_s, Name("mc_scut"));
  if(binned)  dh_s.plotOn(frame_s, Name("mc_scut"));
  cb_sig.plotOn(frame_s,Name("pdf_s"),LineColor(kCyan)) ;

  frame_s->SetMinimum(0.00001);
  
  TLegend* a = new TLegend(0.63,0.68, 0.88, 0.88);
  a->SetBorderSize(0);
  a->SetFillColor(0);
  a->SetFillStyle(0);
  a->SetTextSize(0.038);
  a->AddEntry(frame_s->findObject("mc_scut"), "MC","p");
  a->AddEntry(frame_s->findObject("pdf_s"), "fitting PDF","l");
  
  TCanvas* c = new TCanvas();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  a->Draw();
  c->SaveAs((workdir+filename+"_s.png").c_str());
  //c->SaveAs((workdir+filename+"_s.root").c_str());

  Double_t chi2 = frame_s->chiSquare("pdf_s", "mc_scut", 4);

  std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  a->Draw();
  c->SaveAs((workdir+filename+"_s_log.png").c_str());
  //c->SaveAs((workdir+filename+"_s_log.root").c_str());

  RooWorkspace* w_sig = new RooWorkspace("w_sig", "workspace");
  
  w_sig->import(*d_s);
  w_sig->import(cb_sig);

  w_sig->Print();

  w_sig->writeToFile((workdir+"workspace_"+filename+".root").c_str());

  TFile* f_fitRes = new TFile((workdir+"fitResult_"+filename+".root").c_str(), "RECREATE");
  result->Write();
  //  f_fitRes->Write();
  f_fitRes->Close();
  

}
