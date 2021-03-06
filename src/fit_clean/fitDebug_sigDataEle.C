#include "RooPolynomial.h"
#include "RooGaussian.h"
#include "RooExponential.h"
#include "RooLandau.h"
#include "RooRealVar.h"
#include "RooArgList.h"
#include "RooArgSet.h"
#include "RooFFTConvPdf.h"
#include "RooPlot.h"
#include "RooHist.h"
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
#include "RooNLLVar.h"
#include "RooChi2Var.h"
#include "RooMinuit.h"

using namespace RooFit;

// int main()
// {
//   return 0;
// }

void fitDebug_sigDataEle(string cut, string filename, string hlt, bool binned,  string workdir, int isFPR, int isEB){

  std::cout << "debug: start the fit " << endl;
 

  //loading data to fit
  TChain data("myTaPDir/myTree");

  //string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_isoPF03_5/";
  string input_dir="/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/";


  if (hlt=="hltcut30") data.Add((input_dir+"DoubleElectron_Run2012All_tagTight_HLT30.root").c_str()); 
  if (hlt=="hltcut50") data.Add((input_dir+"DoubleElectron_Run2012All_tagTight_HLT50.root").c_str()); 
  if (hlt=="hltcut75") data.Add((input_dir+"DoubleElectron_Run2012All_tagTight_HLT75.root").c_str()); 
  if (hlt=="hltcut90") data.Add((input_dir+"DoubleElectron_Run2012All_tagTight_HLT90.root").c_str());


  //debug test with mc electrons
//   if (hlt=="hltcut30") data.Add((input_dir+"DYJetsToLL_M-50_madgraph_tagTight_HLT30.root").c_str()); 
//   if (hlt=="hltcut50") data.Add((input_dir+"DYJetsToLL_M-50_madgraph_tagTight_HLT50.root").c_str()); 
//   if (hlt=="hltcut75") data.Add((input_dir+"DYJetsToLL_M-50_madgraph_tagTight_HLT75.root").c_str()); 
//   if (hlt=="hltcut90") data.Add((input_dir+"DYJetsToLL_M-50_madgraph_tagTight_HLT90.root").c_str());

  // if(hlt=="hltcut30"){
//     //data.Add((input_dir+"data2012ABCD_withWeights_hlt30.root").c_str());
//     //debug :test with MC photons
//     data.Add((input_dir+"qcdTrees_withWeights_hlt30.root").c_str());
//     data.Add((input_dir+"gjTrees_withWeights_hlt30.root").c_str());
//   }
//   if(hlt=="hltcut50"){
//     //data.Add((input_dir+"data2012ABCD_withWeights_hlt50.root").c_str());
//     //debug :test with MC photons
//     data.Add((input_dir+"qcdTrees_withWeights_hlt50.root").c_str());
//     data.Add((input_dir+"gjTrees_withWeights_hlt50.root").c_str());
//   }
//   if(hlt=="hltcut75"){
//     // data.Add((input_dir+"data2012ABCD_withWeights_hlt75.root").c_str());
//     //debug :test with MC photons
//     data.Add((input_dir+"qcdTrees_withWeights_hlt75.root").c_str());
//     data.Add((input_dir+"gjTrees_withWeights_hlt75.root").c_str());
//   }
//   if(hlt=="hltcut90"){
//     //data.Add((input_dir+"data2012ABCD_withWeights_hlt90.root").c_str());
//     //debug :test with MC photons
//     data.Add((input_dir+"qcdTrees_withWeights_hlt90.root").c_str());
//     data.Add((input_dir+"gjTrees_withWeights_hlt90.root").c_str());
//   }
//   if(hlt=="hltcut135"){
//     //data.Add((input_dir+"data2012ABCD_withWeights_hlt135.root").c_str());
//     //debug :test with MC photons
//     data.Add((input_dir+"qcdTrees_withWeights_hlt135.root").c_str());
//     data.Add((input_dir+"gjTrees_withWeights_hlt135.root").c_str());
//   }
//   if(hlt=="hltcut150"){
//     //data.Add((input_dir+"data2012ABCD_withWeights_hlt150.root").c_str());
//     //debug :test with MC photons
//     data.Add((input_dir+"qcdTrees_withWeights_hlt150.root").c_str());
//     data.Add((input_dir+"gjTrees_withWeights_hlt150.root").c_str());
//   }

  std::cout<<"Tot entries chain = " << data.GetEntries() <<std::endl;
  

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
  RooRealVar r9WeightEB("r9WeightEB","r9WeightEB", 0., 100.);
  RooRealVar r9WeightEE("r9WeightEE","r9WeightEE", 0., 100.);


  RooArgSet argSet("argSet");
  //creating set of variables for the datasets
  std::cout<<"Creating RooArgSet with variables for fit"<<std::endl;
  argSet.add(probe_combinedPfIso03);
  argSet.add(probe_combinedPfIsoFPR03);
  argSet.add(combinedPfIso03Phot);
  argSet.add(combinedPfIsoFPR03Phot);
  argSet.add(probe_eta);
  argSet.add(probe_mvaId);
  //argSet.add(isMatchedPhot);
  //argSet.add(isIsolatedGenPhot);
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
  argSet.add(r9WeightEB);
  argSet.add(r9WeightEE);
  

  if(binned){
    //binning variables
    std::cout<<"Binning variables for eventual binned fit"<<std::endl;
    probe_combinedPfIso03.setBins(120);
    probe_combinedPfIsoFPR03.setBins(120);
    combinedPfIso03Phot.setBins(120);
    combinedPfIsoFPR03Phot.setBins(120);
    // probe_eta.setBins(120);
    //   probe_mvaId.setBins(180);
    //   probe_pt.setBins(120);
    //   puW30.setBins(100);
    //   rhoWeight30.setBins(100);
    //   etaWeight.setBins(100);
    //   r9WeightEB.setBins(100);
    //   r9WeightEE.setBins(100);  
  }

  //creating complete dataset
  std::cout<<"Reading trees of data into a complete general dataset"<<std::endl;
  RooDataSet* allSet;
  RooDataSet* allSet_weighted;
  RooRealVar* weight;
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

  weight = (RooRealVar*)allSet->addColumn(*weightprod);
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

  TH1F* h_set_scut = (TH1F*)d_s->createHistogram("h_set_scut", combinedPfIso03Phot, RooFit::Binning(combinedPfIso03Phot.getBinning()));

  //binning datasets to obtain roodatahists 
  std::cout<<"Converting RooDataSets in RooDataHists for eventual binned fit"<<std::endl;
  //RooDataHist dh_s("dh_s", "dh_s", RooArgSet(combinedPfIso03Phot, weight), *d_s);
  RooDataHist dh_s("dh_s", "dh_s", combinedPfIso03Phot, Import(*h_set_scut));

  std::cout<<"Reduced datahist with name "<<dh_s.GetName()<<std::endl;
  
  // Examine the statistics of a binned dataset
  cout << ">> number of bins in dh_s   : " << dh_s.numEntries() << endl ;
  cout << ">> sum of weights in dh_s   : " << dh_s.sum(kFALSE)  << endl ;
  std::cout<<"d_s entries: "<<dh_s.sumEntries()<<std::endl;
  cout << ">> integral over histogram: " << dh_s.sum(kTRUE)   << endl ; // accounts for bin volume
  cout << "is RooDataHist weighted? " << dh_s.isWeighted() << endl;  
  cout << "is RooDataHist nonPoisson weighted? " << dh_s.isNonPoissonWeighted() << endl;  

  //models for fit

  RooRealVar CBC_mean("CBC_mean", "CBC_mean", -1., -3., 3.);
  RooRealVar CBC_sigma("CBC_sigma", "CBC_sigma", 1., 0., 3.);
  RooRealVar CBC_alphaC("CBC_alphaC", "CBC_alphaC", 0.7, 0., 10.);
  RooRealVar CBC_alphaCB("CBC_alphaCB", "CBC_alphaCB", -0.7, -4., 0.);
  RooRealVar CBC_n("CBC_n", "CBC_n", 4., 0., 100.);

  //RooCBmyCrujff CBmyCrujff_s("CBmyCrujff_s", "CBmyCrujff_s", combinedPfIso03Phot, CBC_mean, CBC_sigma, CBC_alphaC, CBC_alphaCB, CBC_n);
  RooCBShape cb_sig("cb_sig", "cb_sig", combinedPfIso03Phot, CBC_mean, CBC_sigma,CBC_alphaCB,CBC_n);
  RooCBShape cb_sig_chi2("cb_sig_chi2", "cb_sig_chi2", combinedPfIso03Phot, CBC_mean, CBC_sigma,CBC_alphaCB,CBC_n);

  // //fit
  //RooFitResult* result;
  RooFitResult* result_nll;
  RooFitResult* result_chi2;
  // //Construct binned likelihood
  //RooNLLVar nll("nll","nll",cb_sig,dh_s) ;

  // //Construct Chi2
  //RooChi2Var chi2("chi2","chi2",cb_sig,dh_s,DataError(RooAbsData::SumW2)) ;

  if(!binned)
    //result =  cb_sig.fitTo(*d_s, Save(), Range(-5.,15.), SumW2Error(kFALSE));
    result_nll =  cb_sig.fitTo(*d_s, Save(), Range(-5.,15.),  /*Extended(kTRUE),*/ SumW2Error(kTRUE));
  
  if(binned){ // fit with chi2
    result_nll =  cb_sig.fitTo(dh_s, Save(), Range(-5.,15.),  /*Extended(kTRUE),*/ SumW2Error(kTRUE));
    result_chi2 =  cb_sig_chi2.chi2FitTo(dh_s, Save(), Range(-5.,15.) /*, Extended(kTRUE), SumW2Error(kTRUE)*/);
  }
  
  
//   if (binned){
    
//     // Start Minuit session on NLL
//     RooMinuit m(nll) ;      
//     m.migrad() ;
//     m.hesse() ;
//     result = m.save() ;

//     // Start Minuit session on Chi2
//     RooMinuit m2(chi2) ;
//     m2.migrad() ;
//     m2.hesse() ;
//     result = m2.save() ;

//     // Print results 
//     cout << "result of binned likelihood fit" << endl ;
//     result->Print("v") ;
//     cout << "result of chi2 fit" << endl ;
//     result_chi2->Print("v") ;
//   }

  RooPlot* frame_s = combinedPfIso03Phot.frame(RooFit::Bins(120),RooFit::Title("Fit to combinedPfIso03, scut region"));
  RooPlot* frame_s_chi2 = combinedPfIso03Phot.frame(RooFit::Bins(120),RooFit::Title("Fit to combinedPfIso03 chi2, scut region"));

  if(!binned)
    d_s->plotOn(frame_s, Name("data_scut"), DataError(RooAbsData::SumW2), MarkerSize(0.2));
  if(binned){
    dh_s.plotOn(frame_s, Name("data_scut"), DataError(RooAbsData::SumW2), MarkerSize(0.2));
    dh_s.plotOn(frame_s_chi2, Name("data_scut"), DataError(RooAbsData::SumW2), MarkerSize(0.2));
  }
  
  cb_sig.plotOn(frame_s,Name("pdf_s"),LineColor(kCyan)) ;
  if(binned) {
    cb_sig_chi2.plotOn(frame_s,Name("pdf_s_chi2"),LineColor(kMagenta)) ;   
    cb_sig_chi2.plotOn(frame_s_chi2,Name("pdf_s_chi2"),LineColor(kMagenta)) ;
  }
  frame_s->SetMinimum(0.00001);
  frame_s_chi2->SetMinimum(0.00001);

  TLegend* a = new TLegend(0.63,0.68, 0.88, 0.88);
  a->SetBorderSize(0);
  a->SetFillColor(0);
  a->SetFillStyle(0);
  a->SetTextSize(0.038);
  a->AddEntry(frame_s->findObject("data_scut"), "data","p");
  a->AddEntry(frame_s->findObject("pdf_s"), "fitting PDF with NLL","l");
  if(binned)
    a->AddEntry(frame_s_chi2->findObject("pdf_s_chi2"), "fitting PDF with #chi^2","l");

  // Construct a histogram with the pulls of the data w.r.t the curve
  RooHist* hpull = frame_s->pullHist() ;
  RooHist* hpull_chi2 = frame_s_chi2->pullHist() ;
  hpull->SetMarkerSize(0.2);
  hpull_chi2->SetMarkerSize(0.2);

// Construct a histogram with the residuals of the data w.r.t the curve
  RooHist* hresid = frame_s->residHist() ;
  RooHist* hresid_chi2 = frame_s_chi2->residHist() ;
  hresid->SetMarkerSize(0.2);
  hresid_chi2->SetMarkerSize(0.2);

  // Create a new frame to draw the pull distribution and add the distribution to the frame
  RooPlot* frame_s_2 = combinedPfIso03Phot.frame(RooFit::Bins(120),RooFit::Title("Pull distribution")); ;
  frame_s_2->addPlotable(hpull,"P") ;
  RooPlot* frame_s_chi2_2 = combinedPfIso03Phot.frame(RooFit::Bins(120),RooFit::Title("Pull distribution")); ;
  frame_s_chi2_2->addPlotable(hpull_chi2,"P") ;

  // Create a new frame to draw the residual distribution and add the distribution to the frame
  RooPlot* frame_s_3 = combinedPfIso03Phot.frame(RooFit::Bins(120),RooFit::Title("Residual distribution")); ;
  frame_s_3->addPlotable(hresid,  "P") ;
  RooPlot* frame_s_chi2_3 = combinedPfIso03Phot.frame(RooFit::Bins(120),RooFit::Title("Residual distribution")); ;
  frame_s_chi2_3->addPlotable(hresid_chi2, "P") ;


  TCanvas* c = new TCanvas();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  a->Draw();
  c->SaveAs((workdir+filename+"_s.png").c_str());
  //c->SaveAs((workdir+filename+"_s.root").c_str());
  c->Clear();
  frame_s_chi2->Draw();
  c->SaveAs((workdir+filename+"_s_chi2.png").c_str());

  c->Clear();
  frame_s_2->Draw("");
  c->SaveAs((workdir+filename+"_s_pull.png").c_str());

  c->Clear();
  frame_s_chi2_2->Draw("");
  c->SaveAs((workdir+filename+"_s_chi2_pull.png").c_str());

  c->Clear();
  frame_s_3->Draw("");
  c->SaveAs((workdir+filename+"_s_residual.png").c_str());

  c->Clear();
  frame_s_chi2_3->Draw("");
  c->SaveAs((workdir+filename+"_s_chi2_residual.png").c_str());


  Double_t chi2 = frame_s->chiSquare("pdf_s", "data_scut", 4);		     
  Double_t prob = TMath::Prob(chi2,116); //non so se ci va il chi2 ridotto o no

  Double_t chi2_2 = frame_s_chi2->chiSquare("pdf_s_chi2", "data_scut", 4);		     
  Double_t prob_2 = TMath::Prob(chi2_2,116); //non so se ci va il chi2 ridotto o no

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

  TPaveLabel *t3_r = new TPaveLabel(0.6,0.4,0.83,0.5, Form("#chi^{2}/dof = %.3f", chi2_2),"brNDC");
  t1_r->SetFillColor(0);
  t1_r->SetLineWidth(0);
  t1_r->SetLineColor(0);
  t1_r->SetShadowColor(0);
  TPaveLabel *t4_r = new TPaveLabel(0.6,0.5,0.83,0.60, Form("Prob(#chi^{2},dof) = %.3f", prob_2),"brNDC");
  t2_r->SetFillColor(0);
  t2_r->SetLineWidth(0);
  t2_r->SetLineColor(0);
  t2_r->SetShadowColor(0);


 std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  t1_r->Draw();
  t2_r->Draw();
  a->Draw();
  c->SaveAs((workdir+filename+"_s_log.png").c_str());
  //c->SaveAs((workdir+filename+"_s_log.root").c_str());
  c->Clear();
  frame_s_chi2->Draw("");
  t3_r->Draw();
  t4_r->Draw();
  c->SaveAs((workdir+filename+"_s_chi2_log.png").c_str());

  RooWorkspace* w_sig = new RooWorkspace("w_sig", "workspace");
  if(!binned)
    w_sig->import(*d_s);
  if(binned)
    w_sig->import(dh_s);

  w_sig->import(cb_sig);
  w_sig->Print();
  w_sig->writeToFile((workdir+"workspace_"+filename+".root").c_str());

  TFile* f_fitRes;
  f_fitRes = new TFile((workdir+"fitResult_"+filename+".root").c_str(), "RECREATE");

  result_nll->Write();
  if(binned) result_chi2->Write();
  //  f_fitRes->Write();
  f_fitRes->Close();
  

}
