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
#include "RooKeysPdf.h"
#include "RooNDKeysPdf.h"
#include "RooProdPdf.h"
#include "TLegend.h"


using namespace RooFit;

int main()
{
  return 0;
}

void fitDebug(string cut, string filename, string hlt, bool binned, string outdir, int isoWeight, int isFPR){

  //string outdir = "template_nonParam/";
    
  TChain data("myTrees_withWeight");
  string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";

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


  //binning variables
  //std::cout<<"Binning variables for eventual binned fit"<<std::endl;
  //combinedPfIsoFPR03Phot.setBins(121);
  //etaPhot.setBins(120);
  //mvaIdPhot.setBins(180);
  //isMatchedPhot.setBins(3);
  //ptPhot.setBins(1200);
  //weight.setBins(10000000);
  //isoW_EB.setBins(10000000);

  //creating complete dataset
  std::cout<<"Reading trees of data into a complete general dataset"<<std::endl;
  RooDataSet* allSet;
  if(isoWeight==0) {
    if(isFPR)
      allSet= new RooDataSet("allSet", "allSet", argSet, WeightVar("isoFPRW_EB"), RooFit::Import(data));
    else
      allSet= new RooDataSet("allSet", "allSet", argSet, WeightVar("isoW_EB"), RooFit::Import(data));
  }
  if(isoWeight==1){
    if(isFPR)
      allSet= new RooDataSet("allSet", "allSet", argSet, WeightVar("isoFPRW1_EB"), RooFit::Import(data));
    else
      allSet= new RooDataSet("allSet", "allSet", argSet, WeightVar("isoW1_EB"), RooFit::Import(data));
  }
  if(isoWeight==2){
    if(isFPR)
      allSet= new RooDataSet("allSet", "allSet", argSet, WeightVar("isoFPRW2_EB"), RooFit::Import(data));
   else
      allSet= new RooDataSet("allSet", "allSet", argSet, WeightVar("isoW2_EB"), RooFit::Import(data));
  }

  std::cout<<"Complete dataset "<<allSet->GetName()<<" created"<<std::endl<<std::endl;
  std::cout<<"******************** "<<std::endl;
  std::cout<<" isWeighted =  " <<  allSet->isWeighted() <<std::endl;
  std::cout<<"******************** "<<std::endl<<std::endl;


  //reducing complete dataset to interesting ones
  std::cout<<"Reducing complete dataset to smaller interesting ones"<<std::endl;
  RooDataSet* d_bkg= (RooDataSet*)allSet->reduce((cut+" && mvaIdPhot<0.6 && mvaIdPhot>-0.6").c_str());
  d_bkg->SetName("d_bkg");
  std::cout<<"Reduced dataset "<<d_bkg->GetName()<<" created with cut "<<cut<<" && -0.6 < mvaIdPhot < 0.6"<<std::endl;
  std::cout<<"d_bkg entries: "<<d_bkg->sumEntries()<<std::endl;
  /*
  //binning datasets to obtain roodatahists
  std::cout<<"Converting RooDataSets in RooDataHists for eventual binned fit"<<std::endl;
  RooDataHist dh_s("dh_s", "dh_s", RooArgSet(combinedPfIsoFPR03Phot, weight), *d_s);
  std::cout<<"Reduced datahist with name "<<dh_s.GetName()<<std::endl;
  std::cout<<dh_s.sum(kTRUE)<<std::endl;

  RooDataHist dh_r("dh_r", "dh_r", RooArgSet(combinedPfIsoFPR03Phot, weight), *d_r);
  std::cout<<"Reduced datahist with name "<<dh_r.GetName()<<std::endl;
  std::cout<<dh_r.sum(kTRUE)<<std::endl;
  */

  // Create adaptive kernel estimation pdf. In this configuration the input data
  // is mirrored over the boundaries to minimize edge effects in distribution
  // that do not fall to zero towards the edges
  RooKeysPdf* kest1;
  RooKeysPdf* kest2;
  RooKeysPdf* kest3;
  RooKeysPdf* kest4;
  if(isFPR)
    kest1 = new RooKeysPdf("kest1","kest1",combinedPfIsoFPR03Phot,*d_bkg,RooKeysPdf::MirrorBoth) ;
  else
    kest1 = new RooKeysPdf("kest1","kest1",combinedPfIso03Phot,*d_bkg,RooKeysPdf::MirrorBoth) ;

  // An adaptive kernel estimation pdf on the same data without mirroring option
  // for comparison
  if(isFPR)
    kest2 = new RooKeysPdf("kest2","kest2",combinedPfIsoFPR03Phot,*d_bkg,RooKeysPdf::NoMirror) ;
  else
    kest2 = new RooKeysPdf("kest2","kest2",combinedPfIso03Phot,*d_bkg,RooKeysPdf::NoMirror) ;

  // Adaptive kernel estimation pdf with increased bandwidth scale factor
  // (promotes smoothness over detail preservation)
  if(isFPR){
    kest3 = new RooKeysPdf("kest3","kest3",combinedPfIsoFPR03Phot,*d_bkg,RooKeysPdf::MirrorBoth,1.5) ;
    kest4 = new RooKeysPdf("kest4","kest4",combinedPfIsoFPR03Phot,*d_bkg,RooKeysPdf::MirrorBoth,2) ;
  }
  else{
    kest3 = new RooKeysPdf("kest3","kest3",combinedPfIso03Phot,*d_bkg,RooKeysPdf::MirrorBoth,1.5) ;
    kest4 = new RooKeysPdf("kest4","kest4",combinedPfIso03Phot,*d_bkg,RooKeysPdf::MirrorBoth,2) ;
  }
  /*
  TLegend* leg= new TLegend(0.65,0.73,0.86,0.87);
  leg->SetFillColor(0);
  leg->SetLineColor(0);
  leg->AddEntry(d_bkg, "data", "p");
  leg->AddEntry(kest2, "bandwidth 1", "l");
  leg->AddEntry(kest3, "bandwidth 2", "l");
  leg->AddEntry(kest4, "bandwidth 3", "l");
  */

  // Plot kernel estimation pdfs with and without mirroring over data
  RooPlot* frame;
  if(isFPR)  
    frame = combinedPfIsoFPR03Phot.frame(Title("Adaptive kernel estimation pdf with and w/o mirroring"),Bins(100)) ;
  else
    frame = combinedPfIso03Phot.frame(Title("Adaptive kernel estimation pdf with and w/o mirroring"),Bins(100)) ;

  d_bkg->plotOn(frame) ;
  kest1->plotOn(frame) ;    
  kest2->plotOn(frame,LineStyle(kDashed),LineColor(kRed)) ;    


  // Plot kernel estimation pdfs with regular and increased bandwidth
  RooPlot* frame2;
  if(isFPR)  
    frame2 = combinedPfIsoFPR03Phot.frame(Title("Adaptive kernel estimation pdf with regular, increased bandwidth"), Bins(100)) ;
  else
    frame2 = combinedPfIso03Phot.frame(Title("Adaptive kernel estimation pdf with regular, increased bandwidth"), Bins(100)) ;

  d_bkg->plotOn(frame2) ;
  kest1->plotOn(frame2, LineColor(kBlue)) ;    
  kest3->plotOn(frame2,LineColor(kMagenta)) ;
  kest4->plotOn(frame2,LineColor(kCyan)) ;
  //leg->Draw();

  /*
  //fit
  RooFitResult* result;
  //unbinned
  if(!binned) result =  simPdf.fitTo(srcut, Save(), Range(-5.,15.), SumW2Error(kFALSE));
  //binned
  //if(binned)  result =  simPdf.fitTo(srcut_h, Save(), Range(-5.,15.), SumW2Error(kFALSE));

  //drawing results
  RooPlot* frame_s = combinedPfIsoFPR03Phot.frame(RooFit::Title("Fit to combinedPfIsoFPR03Phot, scut region"));

  if(!binned) srcut.plotOn(frame_s, Cut("sample==sample::scut"), Name("mc_scut"));
  //if(binned)  srcut_h.plotOn(frame_s, Cut("sample==sample::scut"), Name("mc_scut"));
  simPdf.plotOn(frame_s,Name("pdf_s"),LineColor(kCyan),Slice(sample,"scut"),ProjWData(sample,srcut)) ;
  simPdf.plotOn(frame_s, RooFit::LineColor(kMagenta), Slice(sample,"scut"), Components("my_cb_s"),ProjWData(sample,srcut));
  simPdf.plotOn(frame_s, RooFit::LineColor(kMagenta), Slice(sample,"scut"), Components("my_gauss_s"),ProjWData(sample,srcut));

  RooPlot* frame_r = combinedPfIsoFPR03Phot.frame(RooFit::Title("Fit to combinedPfIsoFPR03Phot, rcut region"));

  if(!binned) srcut.plotOn(frame_r, Cut("sample==sample::rcut"), Name("mc_rcut"));
  //if(binned)  srcut_h.plotOn(frame_r, Cut("sample==sample::rcut"), Name("mc_rcut"));
  
  simPdf.plotOn(frame_r,Name("pdf_r"),LineColor(kCyan),Slice(sample,"rcut"),ProjWData(sample,srcut)) ;
  simPdf.plotOn(frame_r, RooFit::LineColor(kMagenta), Slice(sample,"rcut"), Components("my_cb_r"),ProjWData(sample,srcut));
  simPdf.plotOn(frame_r, RooFit::LineColor(kMagenta), Slice(sample,"rcut"), Components("my_gauss_r"),ProjWData(sample,srcut));
  
  frame_s->SetMinimum(0.00001);
  frame_r->SetMinimum(0.00001);
  //  frame->SetMaximum(30000.);
  */
  TCanvas* c = new TCanvas();
  c->SetTitle(frame->GetTitle());
  frame->Draw("");
  c->SaveAs((outdir+filename+"_frame1.png").c_str());
  //c->SaveAs((filename+"_frame1.root").c_str());

  frame2->Draw("");
  c->SaveAs((outdir+filename+"_frame2.png").c_str());

  /*
  Double_t chi2 = frame_s->chiSquare("pdf_s", "mc_scut", 6);

  std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetTitle(frame_r->GetTitle());
  frame_r->Draw("");
  c->SaveAs((filename+"_r.png").c_str());
  c->SaveAs((filename+"_r.root").c_str());

  chi2 = frame_r->chiSquare("pdf_r", "mc_rcut", 6);

  std::cout<<"ChiSquared value, rcut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  c->SaveAs((filename+"_s_log.png").c_str());
  c->SaveAs((filename+"_s_log.root").c_str());

  frame_r->Draw("");
  c->SetTitle(frame_r->GetTitle());
  c->SaveAs((filename+"_r_log.png").c_str());
  c->SaveAs((filename+"_r_log.root").c_str());

  */

  RooWorkspace* w_bg = new RooWorkspace("w_bg", "workspace");

  w_bg->import(*d_bkg);
  w_bg->import(*kest1);
  w_bg->import(*kest2);
  w_bg->import(*kest3);
  w_bg->import(combinedPfIsoFPR03Phot);
  w_bg->import(combinedPfIso03Phot);

  w_bg->Print();

  w_bg->writeToFile((outdir+"workspace_"+filename+".root").c_str());
  
}
