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

#include <iostream>
#include <sstream>

#include "RooGaussian.h"
#include "RooConstVar.h"
#include "RooPolynomial.h"

using namespace RooFit;

int main()
{
  return 0;
}


void fitDebug_sigNonParam(string cut, string filename, string hlt,  string workdir, int isFPR, int isEB){

  std::cout << "debug: start the fit " << endl;

  //loading data to fit
  TChain data("finalTree");

  //string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";
  //string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/studioPesi/histo_v6/genIso4/isoWeight/tightPresel2/weights_rebin/";
  string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/";
  data.Add((input_dir+"DoubleElectron_Run2012All_tagTight_mcMatch1_HLT30.root").c_str()); 


  // DATA PHOTONS
//   // data
//   if( hlt=="hltcut30"){
//     data.Add((inputDir+"HLT30/*2012A*root").c_str());
//     data.Add((inputDir+"HLT30/*2012B*root").c_str());
//     data.Add((inputDir+"HLT30/*2012C*root").c_str());
//     data.Add((inputDir+"HLT30/*2012D*root").c_str());

//   }
//   else if( hlt=="hltcut50"){
//     data.Add((inputDir+"HLT50/*2012A*root").c_str());
//     data.Add((inputDir+"HLT50/*2012B*root").c_str());
//     data.Add((inputDir+"HLT50/*2012C*root").c_str());
//     data.Add((inputDir+"HLT50/*2012D*root").c_str());

//   }
//   else if( hlt=="hltcut75"){
//     data.Add((inputDir+"HLT75/*2012A*root").c_str());
//     data.Add((inputDir+"HLT75/*2012B*root").c_str());
//     data.Add((inputDir+"HLT75/*2012C*root").c_str());
//     data.Add((inputDir+"HLT75/*2012D*root").c_str());

//   }
//   else if( hlt=="hltcut90"){
//     data.Add((inputDir+"HLT90/*2012A*root").c_str());
//     data.Add((inputDir+"HLT90/*2012B*root").c_str());
//     data.Add((inputDir+"HLT90/*2012C*root").c_str());
//     data.Add((inputDir+"HLT90/*2012D*root").c_str());

//   }
//   else if(hlt=="hltcut135"){
//     data.Add((inputDir+"HLT135/*2012A*root").c_str());
//     data.Add((inputDir+"HLT135/*2012B*root").c_str());
//     data.Add((inputDir+"HLT135/*2012C*root").c_str());
//     data.Add((inputDir+"HLT135/*2012D*root").c_str());

//   }
//   else if(hlt=="hltcut150"){
//     data.Add((inputDir+"HLT150/*2012A*root").c_str());
//     data.Add((inputDir+"HLT150/*2012B*root").c_str());
//     data.Add((inputDir+"HLT150/*2012C*root").c_str());
//     data.Add((inputDir+"HLT150/*2012D*root").c_str());

//   }

  ////////////////////////////////////////////////////////////////////////
  // CHANGE NAME OF VARIABLES /////////////
  ////////////////////////////////////////// 

  RooRealVar probe_combinedPfIso03("probe_combinedPfIso03", "probe_combinedPfIso03", -7., 15.);
  RooRealVar probe_combinedPfIsoFPR03("probe_combinedPfIsoFPR03", "probe_combinedPfIsoFPR03", -7., 15.);
  RooRealVar combinedPfIso03Phot("combinedPfIso03Phot", "combinedPfIso03Phot", -7., 15.);
  RooRealVar combinedPfIsoFPR03Phot("combinedPfIsoFPR03Phot", "combinedPfIsoFPR03Phot", -7., 15.);
  RooRealVar probe_eta("probe_eta", "probe_eta", -2.5, 2.5);
  RooRealVar probe_mvaId("probe_mvaId", "probe_mvaId", -1.,1.);
  //RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  //RooRealVar isIsolatedGenPhot("isIsolatedGenPhot","isIsolatedGenPhot", -1., 2.);
  RooRealVar probe_pt("probe_pt", "probe_pt", 0., 200.);
  RooRealVar puW30("puW30","puW30", 0., 100.);
  RooRealVar puW50("puW50","puW50", 0., 100.);
  RooRealVar puW75("puW75","puW75", 0., 100.);
  RooRealVar puW90("puW90","puW90", 0., 100.);
  RooRealVar puW135("puW135","puW135", 0., 100.);
  RooRealVar puW150("puW150","puW150", 0., 100.);
  RooRealVar rhoWeight30("rhoWeight30","rhoWeight30", 0., 100.);
  RooRealVar rhoWeight50("rhoWeight50","rhoWeight50", 0., 100.);
  RooRealVar rhoWeight75("rhoWeight75","rhoWeight75", 0., 100.);
  RooRealVar rhoWeight90("rhoWeight90","rhoWeight90", 0., 100.);
  RooRealVar rhoWeight135("rhoWeight135","rhoWeight135", 0., 100.);
  RooRealVar rhoWeight150("rhoWeight150","rhoWeight150", 0., 100.);
  RooRealVar etaWeight("etaWeight","etaWeight", 0., 100.);
  RooRealVar r9WeightEB_hlt30("r9WeightEB_hlt30","r9WeightEB_hlt30", 0., 100.);
  RooRealVar r9WeightEE_hlt30("r9WeightEE_hlt30","r9WeightEE_hlt30", 0., 100.);
  RooRealVar r9WeightEB_hlt50("r9WeightEB_hlt50","r9WeightEB_hlt50", 0., 100.);
  RooRealVar r9WeightEE_hlt50("r9WeightEE_hlt50","r9WeightEE_hlt50", 0., 100.);
  RooRealVar r9WeightEB_hlt75("r9WeightEB_hlt75","r9WeightEB_hlt75", 0., 100.);
  RooRealVar r9WeightEE_hlt75("r9WeightEE_hlt75","r9WeightEE_hlt75", 0., 100.);
  RooRealVar r9WeightEB_hlt90("r9WeightEB_hlt90","r9WeightEB_hlt90", 0., 100.);
  RooRealVar r9WeightEE_hlt90("r9WeightEE_hlt90","r9WeightEE_hlt90", 0., 100.);
  RooRealVar r9WeightEB_hlt135("r9WeightEB_hlt135","r9WeightEB_hlt135", 0., 100.);
  RooRealVar r9WeightEE_hlt135("r9WeightEE_hlt135","r9WeightEE_hlt135", 0., 100.);
  RooRealVar r9WeightEB_hlt150("r9WeightEB_hlt150","r9WeightEB_hlt150", 0., 100.);
  RooRealVar r9WeightEE_hlt150("r9WeightEE_hlt150","r9WeightEE_hlt150", 0., 100.);
  vector<RooRealVar> isoW_EB;
  vector<RooRealVar> isoW_EE;
  
  int bin_low_edge_EB[61] = {40,47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480};
  int bin_high_edge_EB[61] ={47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480,1000};
  int bin_low_edge_EE[18]={40,65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270 };
  int bin_high_edge_EE[18]={65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270,1000 };

  std::ostringstream stringtmp;

  for (int i=0; i<61; i++){
    stringtmp << "isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    isoW_EB.push_back((stringtmp.str()).c_str(),(stringtmp.str()).c_str(), 0., 100.);
    stringtmp.str("");
    stringtmp.clear();
  }

  for (int i=0; i<18; i++){
    stringtmp << "isoW_EE_bin_"<< bin_low_edge_EE[i] << "_" << bin_high_edge_EE[i] ; 
    isoW_EE.push_back((stringtmp.str()).c_str(),(stringtmp.str()).c_str(), 0., 100.);
    stringtmp.str("");
    stringtmp.clear();
  }



  RooArgSet argSet("argSet");
  //creating set of variables for the datasets
  std::cout<<"Creating RooArgSet with variables for fit"<<std::endl;
  argSet.add(probe_combinedPfIso03);
  argSet.add(probe_combinedPfIsoFPR03);
  argSet.add(combinedPfIso03Phot);
  argSet.add(combinedPfIsoFPR03Phot);
  argSet.add(probe_eta);
  argSet.add(probe_mvaId);
  argSet.add(probe_pt);
  argSet.add(puW30);
  argSet.add(puW50);
  argSet.add(puW75);
  argSet.add(puW90);
  argSet.add(puW135);
  argSet.add(puW150);
  argSet.add(rhoWeight30);
  argSet.add(rhoWeight50);
  argSet.add(rhoWeight75);
  argSet.add(rhoWeight90);
  argSet.add(rhoWeight135);
  argSet.add(rhoWeight150);
  argSet.add(etaWeight);
  argSet.add(r9WeightEB_hlt30);
  argSet.add(r9WeightEE_hlt30);
  argSet.add(r9WeightEB_hlt50);
  argSet.add(r9WeightEE_hlt50);
  argSet.add(r9WeightEB_hlt75);
  argSet.add(r9WeightEE_hlt75);
  argSet.add(r9WeightEB_hlt90);
  argSet.add(r9WeightEE_hlt90);
  argSet.add(r9WeightEB_hlt135);
  argSet.add(r9WeightEE_hlt135);
  argSet.add(r9WeightEB_hlt150);
  argSet.add(r9WeightEE_hlt150);
  for (int i=0; i<61; i++){
    argSet.add(isoW_EB[i]);
  }
  for (int i=0; i<18; i++){
    argSet.add(isoW_EE[i]);
  }

  //creating complete dataset
  std::cout<<"Reading trees of data into a complete general dataset"<<std::endl;
  RooDataSet* allSet;
  RooDataSet* allSet_weighted;


  allSet= new RooDataSet("allSet", "allSet", argSet, RooFit::Import(data));


  RooFormulaVar* weightprod; 

  int hltcut;
  if(hlt=="hltcut30") hltcut = 30;
  if(hlt=="hltcut50") hltcut = 50;
  if(hlt=="hltcut75") hltcut = 75;
  if(hlt=="hltcut90") hltcut = 90;
  if(hlt=="hltcut135") hltcut = 135;
  if(hlt=="hltcut150") hltcut = 150;

  if(isEB){
    if(hltcut==30)  weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW30, rhoWeight30, etaWeight, r9WeightEB));   
    if(hltcut==50)  weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW50, rhoWeight50, etaWeight, r9WeightEB));   
    if(hltcut==75)  weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW75, rhoWeight75, etaWeight, r9WeightEB));   
    if(hltcut==90)  weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW90, rhoWeight90, etaWeight, r9WeightEB));   

  }
  else{
    if(hltcut==30)  weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW30, rhoWeight30, etaWeight, r9WeightEE));       
    if(hltcut==50)  weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW50, rhoWeight50, etaWeight, r9WeightEE));   
    if(hltcut==75)  weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW75, rhoWeight75, etaWeight, r9WeightEE));   
    if(hltcut==90)  weightprod   = new RooFormulaVar("weightprod","@0*@1*@2*@3", RooArgList(puW90, rhoWeight90, etaWeight, r9WeightEE));   

  }
  //----------- test of adding branch to dataset -NOT WORKING- -----------------
  //  RooFormulaVar* combinedPfIso03Phot_ = new RooFormulaVar("combinedPfIso03Phot_","@0",RooArgList(probe_combinedPfIso03));
  //  RooFormulaVar* combinedPfIsoFPR03Phot_ = new RooFormulaVar("combinedPfIsoFPR03Phot_","@0",RooArgList(probe_combinedPfIsoFPR03));
  //  RooRealVar* combinedPfIso03Phot = (RooRealVar*)allSet->addColumn(*combinedPfIso03Phot_);
  //  RooRealVar* combinedPfIsoFPR03Phot = (RooRealVar*)allSet->addColumn(*combinedPfIsoFPR03Phot_);
  //  combinedPfIso03Phot->SetNameTitle("combinedPfIso03Phot", "combinedPfIso03Phot");
  //  combinedPfIsoFPR03Phot->SetNameTitle("combinedPfIsoFPR03Phot", "combinedPfIsoFPR03Phot");
  //-------------------------------------------------------------------------------
 
  RooRealVar* weight = (RooRealVar*)allSet->addColumn(*weightprod);
  weight->SetNameTitle("weight","weight");

  allSet_weighted = new RooDataSet(allSet->GetName(),allSet->GetTitle(),allSet,*allSet->get(),0,weight->GetName()) ;


  std::cout<<"Complete dataset "<<allSet_weighted->GetName()<<" created"<<std::endl;

  //reducing complete dataset to interesting ones
  std::cout<<"Reducing complete dataset to smaller interesting ones"<<std::endl;

  RooDataSet* d_s;

  if(isEB)
    //d_s = (RooDataSet*)allSet->reduce((cut+" && probe_mvaId>0.83548").c_str());
    d_s = (RooDataSet*)allSet_weighted->reduce((cut+" && probe_mvaId>0.83548").c_str());
  else
    //d_s = (RooDataSet*)allSet->reduce((cut+" && probe_mvaId>0.87382").c_str());
    d_s = (RooDataSet*)allSet_weighted->reduce((cut+" && probe_mvaId>0.87382").c_str());

  d_s->SetName("d_s");
  std::cout<<"is Datset weighted? "<<d_s->isWeighted()<<std::endl;
  std::cout<<"is Datset nonPoisson weighted? "<<d_s->isNonPoissonWeighted()<<std::endl;
  d_s->Print();
  std::cout<<"Reduced dataset "<<d_s->GetName()<<" created with cut "<<cut<<" && probe_mvaId>0.83548"<<std::endl;
  std::cout<<"d_s entries: "<<d_s->sumEntries()<<std::endl;
  
  // Create adaptive kernel estimation pdf. In this configuration the input data
  // is mirrored over the boundaries to minimize edge effects in distribution
  // that do not fall to zero towards the edges
  


  RooKeysPdf* kest1;
  RooKeysPdf* kest2;
  RooKeysPdf* kest3;

  cout << "debug : rookeys created" << endl; 

//   kest1 = new RooKeysPdf("kest1","kest1",probe_combinedPfIso03,*d_s,RooKeysPdf::MirrorBoth,1) ;
//   kest2 = new RooKeysPdf("kest2","kest2",probe_combinedPfIso03,*d_s,RooKeysPdf::MirrorBoth,1.5) ;
//   kest3 = new RooKeysPdf("kest3","kest3",probe_combinedPfIso03,*d_s,RooKeysPdf::MirrorBoth,2) ;

  kest1 = new RooKeysPdf("kest1","kest1",combinedPfIso03Phot,*d_s,RooKeysPdf::MirrorBoth,1) ;
  kest2 = new RooKeysPdf("kest2","kest2",combinedPfIso03Phot,*d_s,RooKeysPdf::MirrorBoth,1.5) ;
  kest3 = new RooKeysPdf("kest3","kest3",combinedPfIso03Phot,*d_s,RooKeysPdf::MirrorBoth,2) ;

  cout << "debug : rookeys assigned" << endl; 

  //RooPlot* frame_s = probe_combinedPfIso03.frame(RooFit::Bins(120),RooFit::Title("Fit to combinedPfIso03, scut region"));
  RooPlot* frame_s = combinedPfIso03Phot.frame(RooFit::Bins(120),RooFit::Title("Fit to combinedPfIso03, scut region"));
  
  d_s->plotOn(frame_s, Name("data_scut"), DataError(RooAbsData::SumW2), MarkerSize(0.2));
  
  kest1->plotOn(frame_s, Name("bw1"), LineColor(kBlue)) ;
  kest2->plotOn(frame_s, Name("bw1_5"),LineColor(kMagenta)) ;
  kest3->plotOn(frame_s, Name("bw2"),LineColor(kCyan)) ;
  
  frame_s->SetMinimum(0.00001);
  

  TLegend* a = new TLegend(0.63,0.68, 0.88, 0.88);
  a->SetBorderSize(0);
  a->SetFillColor(0);
  a->SetFillStyle(0);
  a->SetTextSize(0.038);
  a->AddEntry(frame_s->findObject("data_scut"), "data","p");
  a->AddEntry(frame_s->findObject("bw1"), "bw = 1","l");
  a->AddEntry(frame_s->findObject("bw1_5"), "bw = 1.5","l");
  a->AddEntry(frame_s->findObject("bw2"), "bw = 2","l");


  TCanvas* c = new TCanvas();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  a->Draw();
  c->SaveAs((workdir+filename+"_s.png").c_str());
  //c->SaveAs((workdir+filename+"_s.root").c_str());
  c->Clear();

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  a->Draw();
  c->SaveAs((workdir+filename+"_s_log.png").c_str());
  //c->SaveAs((workdir+filename+"_s_log.root").c_str());

  RooWorkspace* w_sig = new RooWorkspace("w_sig", "workspace");
  w_sig->import(*d_s);
  w_sig->import(*kest1);
  w_sig->import(*kest2);
  w_sig->import(*kest3);
  w_sig->Print();
  w_sig->writeToFile((workdir+"workspace_"+filename+".root").c_str());



}
