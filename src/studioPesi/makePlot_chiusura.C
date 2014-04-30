#include "TCanvas.h"
#include "string"
#include "sstream"
#include "iostream"
#include "cstdio"
#include "TFile.h"
#include "TH2F.h"
#include "TChain.h"
#include "TTree.h"
#include "TStyle.h"
#include "TColor.h"
#include "TMath.h"
#include "TProfile.h"
#include "TLegend.h"
#include "TF1.h"
//livia's macro include
#include"TPaveText.h"
#include "TH1F.h"
#include <vector>
#include <cmath>
#include "TPad.h"
#include "THStack.h"
#include <stdio.h>
#include "TGraphErrors.h"
#include "TColor.h"
#include "TLatex.h"

void makePlot_chiusura() {

  string inputDir = "histo_v6/genIso/";
  string outputDir = "histo_v6/genIso/";
 
  TFile* inputFile_sig_EB = new TFile((inputDir+"mvaIso_histo_EB_isMatch.root").c_str(), "READ"); 
  TFile* inputFile_sig_EE = new TFile((inputDir+"mvaIso_histo_EE_isMatch.root").c_str(), "READ"); 
  TFile* inputFile_bkg_EB = new TFile((inputDir+"mvaIso_histo_EB_isNotMatch.root").c_str(), "READ"); 
  TFile* inputFile_bkg_EE = new TFile((inputDir+"mvaIso_histo_EE_isNotMatch.root").c_str(), "READ"); 

  //FPR

  TH1F* pid_pfIsoFPRCharged03_sig_EB 	      	;
  TH1F* pid_pfIsoFPRNeutral03_sig_EB 	      	;
  TH1F* pid_pfIsoFPRPhoton03_sig_EB  	      	;
  TH1F* pid_pfIsoFPRCharged03_sig_EE 	      	;
  TH1F* pid_pfIsoFPRNeutral03_sig_EE 	      	;
  TH1F* pid_pfIsoFPRPhoton03_sig_EE  	      	;
						 
  TH1F* pid_pfIsoFPRRandomConeCharged03_sig_EB 	;
  TH1F* pid_pfIsoFPRRandomConeNeutral03_sig_EB 	;
  TH1F* pid_pfIsoFPRRandomConePhoton03_sig_EB  	;
  TH1F* pid_pfIsoFPRRandomConeCharged03_sig_EE 	;
  TH1F* pid_pfIsoFPRRandomConeNeutral03_sig_EE 	;
  TH1F* pid_pfIsoFPRRandomConePhoton03_sig_EE  	;
  					      	 	  
  TH1F* pid_pfIsoFPRRandomConeCharged03_bkg_EB 	;
  TH1F* pid_pfIsoFPRRandomConeNeutral03_bkg_EB 	;
  TH1F* pid_pfIsoFPRRandomConePhoton03_bkg_EB  	;
  TH1F* pid_pfIsoFPRRandomConeCharged03_bkg_EE 	;
  TH1F* pid_pfIsoFPRRandomConeNeutral03_bkg_EE 	;
  TH1F* pid_pfIsoFPRRandomConePhoton03_bkg_EE  	;


  //combined

  TH1F* combinedPfIsoFPR03Phot_sig_EB 	       	;
  TH1F* combinedPfIsoFPR03Phot_bkg_EB 	       	;
  TH1F* combinedPfIsoFPR03Phot_sig_EE 	       	;
  TH1F* combinedPfIsoFPR03Phot_bkg_EE 	       	;
  TH1F* combinedPfIsoFPRRandomCone03Phot_sig_EB ;
  TH1F* combinedPfIsoFPRRandomCone03Phot_bkg_EB ;
  TH1F* combinedPfIsoFPRRandomCone03Phot_sig_EE ;
  TH1F* combinedPfIsoFPRRandomCone03Phot_bkg_EE ;

  pid_pfIsoFPRCharged03_sig_EB 	      = (TH1F*)inputFile_sig_EB->Get("pid_pfIsoFPRCharged03");	    
  pid_pfIsoFPRNeutral03_sig_EB 	      = (TH1F*)inputFile_sig_EB->Get("pid_pfIsoFPRNeutral03");	    
  pid_pfIsoFPRPhoton03_sig_EB  	      = (TH1F*)inputFile_sig_EB->Get("pid_pfIsoFPRPhoton03");	    
  pid_pfIsoFPRCharged03_sig_EE 	      = (TH1F*)inputFile_sig_EE->Get("pid_pfIsoFPRCharged03");	    
  pid_pfIsoFPRNeutral03_sig_EE 	      = (TH1F*)inputFile_sig_EE->Get("pid_pfIsoFPRNeutral03");	    
  pid_pfIsoFPRPhoton03_sig_EE  	      = (TH1F*)inputFile_sig_EE->Get("pid_pfIsoFPRPhoton03");	    
  
  pid_pfIsoFPRRandomConeCharged03_sig_EB= (TH1F*)inputFile_sig_EB->Get("pid_pfIsoFPRRandomConeCharged03"); 
  pid_pfIsoFPRRandomConeNeutral03_sig_EB= (TH1F*)inputFile_sig_EB->Get("pid_pfIsoFPRRandomConeNeutral03"); 
  pid_pfIsoFPRRandomConePhoton03_sig_EB = (TH1F*)inputFile_sig_EB->Get("pid_pfIsoFPRRandomConePhoton03");  
  pid_pfIsoFPRRandomConeCharged03_sig_EE= (TH1F*)inputFile_sig_EE->Get("pid_pfIsoFPRRandomConeCharged03"); 
  pid_pfIsoFPRRandomConeNeutral03_sig_EE= (TH1F*)inputFile_sig_EE->Get("pid_pfIsoFPRRandomConeNeutral03"); 
  pid_pfIsoFPRRandomConePhoton03_sig_EE = (TH1F*)inputFile_sig_EE->Get("pid_pfIsoFPRRandomConePhoton03");  
  
  pid_pfIsoFPRRandomConeCharged03_bkg_EB= (TH1F*)inputFile_bkg_EB->Get("pid_pfIsoFPRRandomConeCharged03"); 
  pid_pfIsoFPRRandomConeNeutral03_bkg_EB= (TH1F*)inputFile_bkg_EB->Get("pid_pfIsoFPRRandomConeNeutral03"); 
  pid_pfIsoFPRRandomConePhoton03_bkg_EB = (TH1F*)inputFile_bkg_EB->Get("pid_pfIsoFPRRandomConePhoton03");  
  pid_pfIsoFPRRandomConeCharged03_bkg_EE= (TH1F*)inputFile_bkg_EE->Get("pid_pfIsoFPRRandomConeCharged03"); 
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE= (TH1F*)inputFile_bkg_EE->Get("pid_pfIsoFPRRandomConeNeutral03"); 
  pid_pfIsoFPRRandomConePhoton03_bkg_EE = (TH1F*)inputFile_bkg_EE->Get("pid_pfIsoFPRRandomConePhoton03");  
  


  combinedPfIsoFPR03Phot_sig_EB 	       = (TH1F*)inputFile_sig_EB->Get("combinedPfIsoFPR03Phot");	    
  combinedPfIsoFPR03Phot_bkg_EB 	       = (TH1F*)inputFile_bkg_EB->Get("combinedPfIsoFPR03Phot");	    
  combinedPfIsoFPR03Phot_sig_EE 	       = (TH1F*)inputFile_sig_EE->Get("combinedPfIsoFPR03Phot");	    
  combinedPfIsoFPR03Phot_bkg_EE 	       = (TH1F*)inputFile_bkg_EE->Get("combinedPfIsoFPR03Phot");	    
  combinedPfIsoFPRRandomCone03Phot_sig_EB= (TH1F*)inputFile_sig_EB->Get("combinedPfIsoFPRRandomCone03Phot");
  combinedPfIsoFPRRandomCone03Phot_bkg_EB= (TH1F*)inputFile_bkg_EB->Get("combinedPfIsoFPRRandomCone03Phot");
  combinedPfIsoFPRRandomCone03Phot_sig_EE= (TH1F*)inputFile_sig_EE->Get("combinedPfIsoFPRRandomCone03Phot");
  combinedPfIsoFPRRandomCone03Phot_bkg_EE= (TH1F*)inputFile_bkg_EE->Get("combinedPfIsoFPRRandomCone03Phot");


  cout << "setting style" << endl;
  //set plot style

  combinedPfIsoFPR03Phot_sig_EB          ->SetMarkerSize(0);
  combinedPfIsoFPR03Phot_sig_EE          ->SetMarkerSize(0);
  combinedPfIsoFPRRandomCone03Phot_sig_EB->SetMarkerSize(0);
  combinedPfIsoFPRRandomCone03Phot_sig_EE->SetMarkerSize(0);
  combinedPfIsoFPRRandomCone03Phot_bkg_EB->SetMarkerSize(0);
  combinedPfIsoFPRRandomCone03Phot_bkg_EE->SetMarkerSize(0);
  
  combinedPfIsoFPR03Phot_sig_EB          ->SetLineColor(kBlue);
  combinedPfIsoFPR03Phot_sig_EE          ->SetLineColor(kBlue);
  combinedPfIsoFPRRandomCone03Phot_sig_EB->SetLineColor(kRed);
  combinedPfIsoFPRRandomCone03Phot_sig_EE->SetLineColor(kRed);
  combinedPfIsoFPRRandomCone03Phot_bkg_EB->SetLineColor(kOrange);
  combinedPfIsoFPRRandomCone03Phot_bkg_EE->SetLineColor(kOrange);

  pid_pfIsoFPRCharged03_sig_EB ->SetLineColor(kBlue);
  pid_pfIsoFPRNeutral03_sig_EB ->SetLineColor(kBlue);
  pid_pfIsoFPRPhoton03_sig_EB  ->SetLineColor(kBlue);
  pid_pfIsoFPRCharged03_sig_EE ->SetLineColor(kBlue);
  pid_pfIsoFPRNeutral03_sig_EE ->SetLineColor(kBlue);
  pid_pfIsoFPRPhoton03_sig_EE  ->SetLineColor(kBlue);

  pid_pfIsoFPRRandomConeCharged03_sig_EB ->SetLineColor(kRed);
  pid_pfIsoFPRRandomConeNeutral03_sig_EB ->SetLineColor(kRed);
  pid_pfIsoFPRRandomConePhoton03_sig_EB  ->SetLineColor(kRed);
  pid_pfIsoFPRRandomConeCharged03_sig_EE ->SetLineColor(kRed);
  pid_pfIsoFPRRandomConeNeutral03_sig_EE ->SetLineColor(kRed);
  pid_pfIsoFPRRandomConePhoton03_sig_EE  ->SetLineColor(kRed);
  					 
  pid_pfIsoFPRRandomConeCharged03_bkg_EB ->SetLineColor(kOrange);
  pid_pfIsoFPRRandomConeNeutral03_bkg_EB ->SetLineColor(kOrange);
  pid_pfIsoFPRRandomConePhoton03_bkg_EB  ->SetLineColor(kOrange);
  pid_pfIsoFPRRandomConeCharged03_bkg_EE ->SetLineColor(kOrange);
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE ->SetLineColor(kOrange);
  pid_pfIsoFPRRandomConePhoton03_bkg_EE  ->SetLineColor(kOrange);



  combinedPfIsoFPR03Phot_sig_EB          ->SetLineWidth(2);
  combinedPfIsoFPR03Phot_sig_EE          ->SetLineWidth(2);
  combinedPfIsoFPRRandomCone03Phot_sig_EB->SetLineWidth(2);
  combinedPfIsoFPRRandomCone03Phot_sig_EE->SetLineWidth(2);
  combinedPfIsoFPRRandomCone03Phot_bkg_EB->SetLineWidth(2);
  combinedPfIsoFPRRandomCone03Phot_bkg_EE->SetLineWidth(2);

  pid_pfIsoFPRCharged03_sig_EB ->SetLineWidth(2);
  pid_pfIsoFPRNeutral03_sig_EB ->SetLineWidth(2);
  pid_pfIsoFPRPhoton03_sig_EB  ->SetLineWidth(2);
  pid_pfIsoFPRCharged03_sig_EE ->SetLineWidth(2);
  pid_pfIsoFPRNeutral03_sig_EE ->SetLineWidth(2);
  pid_pfIsoFPRPhoton03_sig_EE  ->SetLineWidth(2);
  
  pid_pfIsoFPRRandomConeCharged03_sig_EB ->SetLineWidth(2);
  pid_pfIsoFPRRandomConeNeutral03_sig_EB ->SetLineWidth(2);
  pid_pfIsoFPRRandomConePhoton03_sig_EB  ->SetLineWidth(2);
  pid_pfIsoFPRRandomConeCharged03_sig_EE ->SetLineWidth(2);
  pid_pfIsoFPRRandomConeNeutral03_sig_EE ->SetLineWidth(2);
  pid_pfIsoFPRRandomConePhoton03_sig_EE  ->SetLineWidth(2);
  					 
  pid_pfIsoFPRRandomConeCharged03_bkg_EB ->SetLineWidth(2);
  pid_pfIsoFPRRandomConeNeutral03_bkg_EB ->SetLineWidth(2);
  pid_pfIsoFPRRandomConePhoton03_bkg_EB  ->SetLineWidth(2);
  pid_pfIsoFPRRandomConeCharged03_bkg_EE ->SetLineWidth(2);
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE ->SetLineWidth(2);
  pid_pfIsoFPRRandomConePhoton03_bkg_EE  ->SetLineWidth(2);  


  pid_pfIsoFPRCharged03_sig_EB ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRNeutral03_sig_EB ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRPhoton03_sig_EB  ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRCharged03_sig_EE ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRNeutral03_sig_EE ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRPhoton03_sig_EE  ->GetXaxis()->SetRangeUser(0.,10.);

  pid_pfIsoFPRRandomConeCharged03_sig_EB ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConeNeutral03_sig_EB ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConePhoton03_sig_EB  ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConeCharged03_sig_EE ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConeNeutral03_sig_EE ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConePhoton03_sig_EE  ->GetXaxis()->SetRangeUser(0.,10.);
  
  pid_pfIsoFPRRandomConeCharged03_bkg_EB ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConeNeutral03_bkg_EB ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConePhoton03_bkg_EB  ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConeCharged03_bkg_EE ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE ->GetXaxis()->SetRangeUser(0.,10.);
  pid_pfIsoFPRRandomConePhoton03_bkg_EE  ->GetXaxis()->SetRangeUser(0.,10.);

  combinedPfIsoFPR03Phot_sig_EB->GetXaxis()->SetTitle("combinedPfIsoFPR03");
  pid_pfIsoFPRCharged03_sig_EB ->GetXaxis()->SetTitle("pfIsoFPRCharged03");
  pid_pfIsoFPRNeutral03_sig_EB ->GetXaxis()->SetTitle("pfIsoFPRNeutral03");
  pid_pfIsoFPRPhoton03_sig_EB  ->GetXaxis()->SetTitle("pfIsoFPRPhoton03");
  pid_pfIsoFPRCharged03_sig_EE ->GetXaxis()->SetTitle("pfIsoFPRCharged03");
  pid_pfIsoFPRNeutral03_sig_EE ->GetXaxis()->SetTitle("pfIsoFPRNeutral03");
  pid_pfIsoFPRPhoton03_sig_EE  ->GetXaxis()->SetTitle("pfIsoFPRPhoton03");
  
  combinedPfIsoFPR03Phot_sig_EB->GetYaxis()->SetTitle("arb. units");
  pid_pfIsoFPRCharged03_sig_EB ->GetYaxis()->SetTitle("arb. units");
  pid_pfIsoFPRNeutral03_sig_EB ->GetYaxis()->SetTitle("arb. units");
  pid_pfIsoFPRPhoton03_sig_EB  ->GetYaxis()->SetTitle("arb. units");
  pid_pfIsoFPRCharged03_sig_EE ->GetYaxis()->SetTitle("arb. units");
  pid_pfIsoFPRNeutral03_sig_EE ->GetYaxis()->SetTitle("arb. units");
  pid_pfIsoFPRPhoton03_sig_EE  ->GetYaxis()->SetTitle("arb. units");
  
  /*
  pid_pfIsoFPRCharged03_sig_EB ->GetXaxis()->SetTitle("pfIsoFPRCharged03 [GeV]") ;
  pid_pfIsoFPRNeutral03_sig_EB ->GetXaxis()->SetTitle("pfIsoFPRNeutral03 [GeV]") ;
  pid_pfIsoFPRPhoton03_sig_EB  ->GetXaxis()->SetTitle("pfIsoFPRPhoton03 [GeV]") ; 
  pid_pfIsoFPRCharged03_sig_EE ->GetXaxis()->SetTitle("pfIsoFPRCharged03 [GeV]") ;
  pid_pfIsoFPRNeutral03_sig_EE ->GetXaxis()->SetTitle("pfIsoFPRNeutral03 [GeV]") ;
  pid_pfIsoFPRPhoton03_sig_EE  ->GetXaxis()->SetTitle("pfIsoFPRPhoton03 [GeV]") ; 
  */
  cout << "setting legend" << endl;
  TLegend* leg = new TLegend(0.5,0.6,0.8,0.8);
  leg->SetFillColor(0); 
  leg->SetBorderSize(0);
  leg->SetTextSize(0.045);
  leg->AddEntry(pid_pfIsoFPRCharged03_sig_EB, "iso FPR for matched phot", "l");
  leg->AddEntry(pid_pfIsoFPRRandomConeCharged03_sig_EB, "Random Cone for matched phot", "l");
  leg->AddEntry(pid_pfIsoFPRRandomConeCharged03_bkg_EB, "Random Cone for unmatched phot", "l");

  TCanvas* c2 = new TCanvas("c2", "", 1);
  c2->cd();

  //EB

  combinedPfIsoFPRRandomCone03Phot_sig_EB->DrawNormalized("hist");
  combinedPfIsoFPRRandomCone03Phot_bkg_EB->DrawNormalized("hist same");
  combinedPfIsoFPR03Phot_sig_EB->DrawNormalized("hist same");
  leg->Draw();
  c2->SaveAs((outputDir+"combinedPfIsoFPR03Phot_EB.png").c_str());
  c2->Clear();



  pid_pfIsoFPRRandomConeCharged03_sig_EB->DrawNormalized("l");
  pid_pfIsoFPRRandomConeCharged03_bkg_EB->DrawNormalized("lsame");
  pid_pfIsoFPRCharged03_sig_EB->DrawNormalized("lsame");
  leg->Draw();
  c2->SaveAs((outputDir+"pfIsoFPRCharged03_EB.png").c_str());
  c2->Clear();


  pid_pfIsoFPRRandomConeNeutral03_sig_EB->DrawNormalized("l");
  pid_pfIsoFPRRandomConeNeutral03_bkg_EB->DrawNormalized("lsame");
  pid_pfIsoFPRNeutral03_sig_EB->DrawNormalized("lsame");
  leg->Draw();
  c2->SaveAs((outputDir+"pfIsoFPRNeutral03_EB.png").c_str());
  c2->Clear();


  pid_pfIsoFPRRandomConePhoton03_sig_EB->DrawNormalized("l");
  pid_pfIsoFPRRandomConePhoton03_bkg_EB->DrawNormalized("lsame");
  pid_pfIsoFPRPhoton03_sig_EB->DrawNormalized("lsame");
  leg->Draw();
  c2->SaveAs((outputDir+"pfIsoFPRPhoton03_EB.png").c_str());
  c2->Clear();
  //EE

  combinedPfIsoFPRRandomCone03Phot_sig_EE->DrawNormalized("hist");
  combinedPfIsoFPRRandomCone03Phot_bkg_EE->DrawNormalized("hist same");
  combinedPfIsoFPR03Phot_sig_EE->DrawNormalized("hist same");
  leg->Draw();
  c2->SaveAs((outputDir+"combinedPfIsoFPR03Phot_EE.png").c_str());
  c2->Clear();



  pid_pfIsoFPRRandomConeCharged03_sig_EE->DrawNormalized("l");
  pid_pfIsoFPRRandomConeCharged03_bkg_EE->DrawNormalized("lsame");
  pid_pfIsoFPRCharged03_sig_EE->DrawNormalized("lsame");
  leg->Draw();
  c2->SaveAs((outputDir+"pfIsoFPRCharged03_EE.png").c_str());
  c2->Clear();


  pid_pfIsoFPRRandomConeNeutral03_sig_EE->DrawNormalized("l");
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE->DrawNormalized("lsame");
  pid_pfIsoFPRNeutral03_sig_EE->DrawNormalized("lsame");
  leg->Draw();
  c2->SaveAs((outputDir+"pfIsoFPRNeutral03_EE.png").c_str());
  c2->Clear();


  pid_pfIsoFPRRandomConePhoton03_sig_EE->DrawNormalized("l");
  pid_pfIsoFPRRandomConePhoton03_bkg_EE->DrawNormalized("lsame");
  pid_pfIsoFPRPhoton03_sig_EE->DrawNormalized("lsame");
  leg->Draw();
  c2->SaveAs((outputDir+"pfIsoFPRPhoton03_EE.png").c_str());
  c2->Clear();
  c2->Close();


  //---------------------------
  //       BARREL                
  //------------------------

 
  //normalize to 1.
  float integral;

  integral = combinedPfIsoFPR03Phot_sig_EB->Integral();
  combinedPfIsoFPR03Phot_sig_EB->Scale(1./integral);
  integral = combinedPfIsoFPRRandomCone03Phot_sig_EB->Integral();
  combinedPfIsoFPRRandomCone03Phot_sig_EB->Scale(1./integral);
  integral = combinedPfIsoFPRRandomCone03Phot_bkg_EB->Integral();
  combinedPfIsoFPRRandomCone03Phot_bkg_EB->Scale(1./integral);

  integral = pid_pfIsoFPRCharged03_sig_EB->Integral();
  pid_pfIsoFPRCharged03_sig_EB->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConeCharged03_sig_EB->Integral();
  pid_pfIsoFPRRandomConeCharged03_sig_EB->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConeCharged03_bkg_EB->Integral();
  pid_pfIsoFPRRandomConeCharged03_bkg_EB->Scale(1./integral);

  integral = pid_pfIsoFPRNeutral03_sig_EB->Integral();
  pid_pfIsoFPRNeutral03_sig_EB->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConeNeutral03_sig_EB->Integral();
  pid_pfIsoFPRRandomConeNeutral03_sig_EB->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConeNeutral03_bkg_EB->Integral();
  pid_pfIsoFPRRandomConeNeutral03_bkg_EB->Scale(1./integral);

  integral = pid_pfIsoFPRPhoton03_sig_EB->Integral();
  pid_pfIsoFPRPhoton03_sig_EB->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConePhoton03_sig_EB->Integral();
  pid_pfIsoFPRRandomConePhoton03_sig_EB->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConePhoton03_bkg_EB->Integral();
  pid_pfIsoFPRRandomConePhoton03_bkg_EB->Scale(1./integral);


  //TFile* file_output = new TFile("mva_chiusura.root", "RECREATE");
  //file_output->cd();
  cout << "save plots" << endl;
  TCanvas* c1 = new TCanvas("c1", "", 1);
  c1->cd();
  c1->SetLogy();

  cout << "drawing combined iso" << endl; 
  //combined iso
  //--------pad 1--------//                                                                                                                                              
  TPad * pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  combinedPfIsoFPR03Phot_sig_EB->Draw("hist");
  combinedPfIsoFPRRandomCone03Phot_sig_EB ->Draw("hist same");
  combinedPfIsoFPRRandomCone03Phot_bkg_EB ->Draw("hist same");
  leg->Draw();

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  
  TPad * pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.32);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  Double_t xmax = combinedPfIsoFPR03Phot_sig_EB->GetXaxis()->GetXmax();
  Double_t xmin = combinedPfIsoFPR03Phot_sig_EB->GetXaxis()->GetXmin();
  //TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio = (TH1F*)combinedPfIsoFPR03Phot_sig_EB->Clone("h1_ratio");

  h1_ratio->SetStats(0);
  h1_ratio->Divide(combinedPfIsoFPRRandomCone03Phot_sig_EB);
  h1_ratio->SetMarkerColor(kBlack);
  h1_ratio->SetMarkerStyle(20);
  h1_ratio->SetMarkerSize(0.8);
  h1_ratio->SetLineColor(kBlack);
  h1_ratio->SetLineWidth(1);
  //h1_ratio->SetMarkerSize(1.7);
  //h1_ratio->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio->GetYaxis()->SetNdivisions(3,false);
  h1_ratio->GetYaxis()->SetTitle("isoFPR/isoFPR RC");
  //h1_ratio->GetYaxis()->SetTitleFont(42);
  //h1_ratio->GetXaxis()->SetTitleFont(42);
  h1_ratio->GetYaxis()->SetRangeUser(0.5,3.);

  h1_ratio->GetXaxis()->SetTitleSize(0.14);
  h1_ratio->GetXaxis()->SetLabelSize(0.14);
  h1_ratio->GetYaxis()->SetLabelSize(0.10);
  h1_ratio->GetYaxis()->SetTitleSize(0.10);
  h1_ratio->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio->GetXaxis()->SetTitleOffset(1.);


  h1_ratio->SetTitle("Bin by Bin Ratio of two histograms");
  h1_ratio->Draw("pe1");
  //line->SetLineWidth(1.);
  //line->Draw("same");

  c1->SaveAs((outputDir+"combinedPfIsoFPR03Phot_EB_log_2pad.png").c_str());

  //file_output->Close();

  c1->Clear();
  
  cout << "drawing combinedPfIsoFPR03Phot_sig_EBcharged iso" << endl; 
  /*
  //charged iso
  //--------pad 1--------//                                                                                                                                              
  pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  pid_pfIsoFPRCharged03_sig_EB->Draw("hist");
  pid_pfIsoFPRRandomConeCharged03_sig_EB ->Draw("hist same");
  pid_pfIsoFPRRandomConeCharged03_bkg_EB ->Draw("hist same");

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  
  pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.32);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  xmax = pid_pfIsoFPRCharged03_sig_EB->GetXaxis()->GetXmax();
  xmin = pid_pfIsoFPRCharged03_sig_EB->GetXaxis()->GetXmin();
  //TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio_ch = (TH1F*)pid_pfIsoFPRCharged03_sig_EB->Clone("h1_ratio_ch");

  h1_ratio_ch->SetStats(0);
  h1_ratio_ch->Divide(pid_pfIsoFPRRandomConeCharged03_sig_EB);
  h1_ratio_ch->SetMarkerColor(kBlack);
  h1_ratio_ch->SetMarkerStyle(20);
  h1_ratio_ch->SetLineColor(kBlack);
  h1_ratio_ch->SetLineWidth(1);
  //h1_ratio_ch->SetMarkerSize(1.7);
  //h1_ratio_ch->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio_ch->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio_ch->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_ch->GetYaxis()->SetTitle("isoFPR/isoFPR RC");
  //h1_ratio_ch->GetYaxis()->SetTitleFont(42);
  //h1_ratio_ch->GetXaxis()->SetTitleFont(42);

  h1_ratio_ch->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_ch->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_ch->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_ch->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_ch->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_ch->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_ch->SetTitle("Bin by Bin Ratio_Ch of two histograms");
  h1_ratio_ch->Draw("pe1");
  //line->SetLineWidth(1.);
  //line->Draw("same");

  c1->SaveAs((outputDir+"pfIsoFPRCharged03_EB_log_2pad.png").c_str());


  c1->Clear();

  cout << "drawing neutral iso" << endl; 
  //neutral iso
  //--------pad 1--------//                                                                                                                                              
  pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  pid_pfIsoFPRNeutral03_sig_EB->Draw("hist");
  pid_pfIsoFPRRandomConeNeutral03_sig_EB ->Draw("hist same");
  pid_pfIsoFPRRandomConeNeutral03_bkg_EB ->Draw("hist same");

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  
  pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.32);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  xmax = pid_pfIsoFPRNeutral03_sig_EB->GetXaxis()->GetXmax();
  xmin = pid_pfIsoFPRNeutral03_sig_EB->GetXaxis()->GetXmin();
  //TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio_n = (TH1F*)pid_pfIsoFPRNeutral03_sig_EB->Clone("h1_ratio_n");

  h1_ratio_n->SetStats(0);
  h1_ratio_n->Divide(pid_pfIsoFPRRandomConeNeutral03_sig_EB);
  h1_ratio_n->SetMarkerColor(kBlack);
  h1_ratio_n->SetMarkerStyle(20);
  h1_ratio_n->SetLineColor(kBlack);
  h1_ratio_n->SetLineWidth(1);
  //h1_ratio_n->SetMarkerSize(1.7);
  //h1_ratio_n->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio_n->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio_n->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_n->GetYaxis()->SetTitle("isoFPR/isoFPR RC");
  //h1_ratio_n->GetYaxis()->SetTitleFont(42);
  //h1_ratio_n->GetXaxis()->SetTitleFont(42);

  h1_ratio_n->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_n->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_n->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_n->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_n->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_n->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_n->SetTitle("Bin by Bin Ratio_N of two histograms");
  h1_ratio_n->Draw("pe1");
  //line->SetLineWidth(1.);
  //line->Draw("same");

  c1->SaveAs((outputDir+"pfIsoFPRNeutral03_EB_log_2pad.png").c_str());


  c1->Clear();
 
  cout << "drawing photon iso" << endl; 
  //photon iso
  //--------pad 1--------//                                                                                                                                              
  pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  pid_pfIsoFPRPhoton03_sig_EB->Draw("hist");
  pid_pfIsoFPRRandomConePhoton03_sig_EB ->Draw("hist same");
  pid_pfIsoFPRRandomConePhoton03_bkg_EB ->Draw("hist same");

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  
  pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.32);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  pid_pfIsoFPRPhoton03_sig_EB->GetXaxis()->GetXmax();
  pid_pfIsoFPRPhoton03_sig_EB->GetXaxis()->GetXmin();
  //TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio_pho = (TH1F*)pid_pfIsoFPRPhoton03_sig_EB->Clone("h1_ratio_pho");

  h1_ratio_pho->SetStats(0);
  h1_ratio_pho->Divide(pid_pfIsoFPRRandomConePhoton03_sig_EB);
  h1_ratio_pho->SetMarkerColor(kBlack);
  h1_ratio_pho->SetMarkerStyle(20);
  h1_ratio_pho->SetLineColor(kBlack);
  h1_ratio_pho->SetLineWidth(1);
  //h1_ratio_pho->SetMarkerSize(1.7);
  //h1_ratio_pho->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio_pho->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio_pho->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_pho->GetYaxis()->SetTitle("isoFPR/isoFPR RC");
  //h1_ratio_pho->GetYaxis()->SetTitleFont(42);
  //h1_ratio_pho->GetXaxis()->SetTitleFont(42);

  h1_ratio_pho->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_pho->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_pho->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_pho->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_pho->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_pho->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_pho->SetTitle("Bin by Bin Ratio_Pho of two histograms");
  h1_ratio_pho->Draw("pe1");
  //line->SetLineWidth(1.);
  //line->Draw("same");

  c1->SaveAs((outputDir+"pfIsoFPRPhoton03_EB_log_2pad.png").c_str());


  c1->Clear();


  /*
  //EB
  pid_pfIsoFPRCharged03_sig_EB->DrawNormalized();
  pid_pfIsoFPRRandomConeCharged03_sig_EB->DrawNormalized("same");
  pid_pfIsoFPRRandomConeCharged03_bkg_EB->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRCharged03_EB_log.png").c_str());
  c1->Clear();

  pid_pfIsoFPRNeutral03_sig_EB->DrawNormalized();
  pid_pfIsoFPRRandomConeNeutral03_sig_EB->DrawNormalized("same");
  pid_pfIsoFPRRandomConeNeutral03_bkg_EB->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRNeutral03_EB_log.png").c_str());
  c1->Clear();

  pid_pfIsoFPRPhoton03_sig_EB->DrawNormalized();
  pid_pfIsoFPRRandomConePhoton03_sig_EB->DrawNormalized("same");
  pid_pfIsoFPRRandomConePhoton03_bkg_EB->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRPhoton03_EB_log.png").c_str());
  c1->Clear();
  //EE
  pid_pfIsoFPRCharged03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConeCharged03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConeCharged03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRCharged03_EE_log.png").c_str());
  c1->Clear();

  pid_pfIsoFPRNeutral03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConeNeutral03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRNeutral03_EE_log.png").c_str());
  c1->Clear();

  pid_pfIsoFPRPhoton03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConePhoton03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConePhoton03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRPhoton03_EE_log.png").c_str());
  c1->Clear();
  //
  */

  //-------------------------------
  //            ENDCAP
  //------------------------------

  //normalize to 1.
  integral = combinedPfIsoFPR03Phot_sig_EE->Integral();
  combinedPfIsoFPR03Phot_sig_EE->Scale(1./integral);
  integral = combinedPfIsoFPRRandomCone03Phot_sig_EE->Integral();
  combinedPfIsoFPRRandomCone03Phot_sig_EE->Scale(1./integral);
  integral = combinedPfIsoFPRRandomCone03Phot_bkg_EE->Integral();
  combinedPfIsoFPRRandomCone03Phot_bkg_EE->Scale(1./integral);

  integral = pid_pfIsoFPRCharged03_sig_EE->Integral();
  pid_pfIsoFPRCharged03_sig_EE->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConeCharged03_sig_EE->Integral();
  pid_pfIsoFPRRandomConeCharged03_sig_EE->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConeCharged03_bkg_EE->Integral();
  pid_pfIsoFPRRandomConeCharged03_bkg_EE->Scale(1./integral);

  integral = pid_pfIsoFPRNeutral03_sig_EE->Integral();
  pid_pfIsoFPRNeutral03_sig_EE->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConeNeutral03_sig_EE->Integral();
  pid_pfIsoFPRRandomConeNeutral03_sig_EE->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConeNeutral03_bkg_EE->Integral();
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE->Scale(1./integral);

  integral = pid_pfIsoFPRPhoton03_sig_EE->Integral();
  pid_pfIsoFPRPhoton03_sig_EE->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConePhoton03_sig_EE->Integral();
  pid_pfIsoFPRRandomConePhoton03_sig_EE->Scale(1./integral);
  integral = pid_pfIsoFPRRandomConePhoton03_bkg_EE->Integral();
  pid_pfIsoFPRRandomConePhoton03_bkg_EE->Scale(1./integral);



  //file_output->cd();
  cout << "save plots" << endl;
  c1->cd();
  c1->SetLogy();

  cout << "drawing combined iso" << endl; 
  //combined iso
  //--------pad 1--------//                                                                                                                                              
  pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  combinedPfIsoFPR03Phot_sig_EE->Draw("hist");
  combinedPfIsoFPRRandomCone03Phot_sig_EE ->Draw("hist same");
  combinedPfIsoFPRRandomCone03Phot_bkg_EE ->Draw("hist same");

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  
  pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.32);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  xmax = combinedPfIsoFPR03Phot_sig_EE->GetXaxis()->GetXmax();
  xmin = combinedPfIsoFPR03Phot_sig_EE->GetXaxis()->GetXmin();
  //TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio_EE = (TH1F*)combinedPfIsoFPR03Phot_sig_EE->Clone("h1_ratio_EE");

  h1_ratio_EE->SetStats(0);
  h1_ratio_EE->Divide(combinedPfIsoFPRRandomCone03Phot_sig_EE);
  h1_ratio_EE->SetMarkerColor(kBlack);
  h1_ratio_EE->SetMarkerSize(0.8);
  h1_ratio_EE->SetMarkerStyle(20);
  h1_ratio_EE->SetLineColor(kBlack);
  h1_ratio_EE->SetLineWidth(1);
  //h1_ratio_EE->SetMarkerSize(1.7);
  //h1_ratio_EE->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio_EE->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio_EE->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_EE->GetYaxis()->SetTitle("isoFPR/isoFPR RC");
  //h1_ratio_EE->GetYaxis()->SetTitleFont(42);
  //h1_ratio_EE->GetXaxis()->SetTitleFont(42);
  h1_ratio_EE->GetYaxis()->SetRangeUser(0.5,3.);

  h1_ratio_EE->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_EE->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_EE->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_EE->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_EE->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_EE->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_EE->SetTitle("Bin by Bin Ratio of two histograms");
  h1_ratio_EE->Draw("pe1");
  //line->SetLineWidth(1.);
  //line->Draw("same");

  c1->SaveAs((outputDir+"combinedPfIsoFPR03Phot_EE_log_2pad.png").c_str());


  c1->Clear();

  cout << "drawing charged iso" << endl; 
  
  /*
  //charged iso
  //--------pad 1--------//                                                                                                                                              
  pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  pid_pfIsoFPRCharged03_sig_EE->Draw("hist");
  pid_pfIsoFPRRandomConeCharged03_sig_EE ->Draw("hist same");
  pid_pfIsoFPRRandomConeCharged03_bkg_EE ->Draw("hist same");

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  
  pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.32);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  xmax = pid_pfIsoFPRCharged03_sig_EE->GetXaxis()->GetXmax();
  xmin = pid_pfIsoFPRCharged03_sig_EE->GetXaxis()->GetXmin();
  //TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio_ch_EE = (TH1F*)pid_pfIsoFPRCharged03_sig_EE->Clone("h1_ratio_ch_EE");

  h1_ratio_ch_EE->SetStats(0);
  h1_ratio_ch_EE->Divide(pid_pfIsoFPRRandomConeCharged03_sig_EE);
  h1_ratio_ch_EE->SetMarkerColor(kBlack);
  h1_ratio_ch_EE->SetMarkerStyle(20);
  h1_ratio_ch_EE->SetLineColor(kBlack);
  h1_ratio_ch_EE->SetLineWidth(1);
  //h1_ratio_ch_EE->SetMarkerSize(1.7);
  //h1_ratio_ch_EE->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio_ch_EE->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio_ch_EE->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_ch_EE->GetYaxis()->SetTitle("isoFPR/isoFPR RC");
  //h1_ratio_ch_EE->GetYaxis()->SetTitleFont(42);
  //h1_ratio_ch_EE->GetXaxis()->SetTitleFont(42);

  h1_ratio_ch_EE->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_ch_EE->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_ch_EE->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_ch_EE->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_ch_EE->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_ch_EE->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_ch_EE->SetTitle("Bin by Bin Ratio_ch_EE of two histograms");
  h1_ratio_ch_EE->Draw("pe1");
  //line->SetLineWidth(1.);
  //line->Draw("same");

  c1->SaveAs((outputDir+"pfIsoFPRCharged03_EE_log_2pad.png").c_str());


  c1->Clear();

  cout << "drawing neutral iso" << endl; 
  //neutral iso
  //--------pad 1--------//                                                                                                                                              
  pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  pid_pfIsoFPRNeutral03_sig_EE->Draw("hist");
  pid_pfIsoFPRRandomConeNeutral03_sig_EE ->Draw("hist same");
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE ->Draw("hist same");

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  
  pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.32);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  xmax = pid_pfIsoFPRNeutral03_sig_EE->GetXaxis()->GetXmax();
  xmin = pid_pfIsoFPRNeutral03_sig_EE->GetXaxis()->GetXmin();
  //TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio_n_EE = (TH1F*)pid_pfIsoFPRNeutral03_sig_EE->Clone("h1_ratio_n_EE");

  h1_ratio_n_EE->SetStats(0);
  h1_ratio_n_EE->Divide(pid_pfIsoFPRRandomConeNeutral03_sig_EE);
  h1_ratio_n_EE->SetMarkerColor(kBlack);
  h1_ratio_n_EE->SetMarkerStyle(20);
  h1_ratio_n_EE->SetLineColor(kBlack);
  h1_ratio_n_EE->SetLineWidth(1);
  //h1_ratio_n_EE->SetMarkerSize(1.7);
  //h1_ratio_n_EE->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio_n_EE->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio_n_EE->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_n_EE->GetYaxis()->SetTitle("isoFPR/isoFPR RC");
  //h1_ratio_n_EE->GetYaxis()->SetTitleFont(42);
  //h1_ratio_n_EE->GetXaxis()->SetTitleFont(42);

  h1_ratio_n_EE->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_n_EE->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_n_EE->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_n_EE->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_n_EE->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_n_EE->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_n_EE->SetTitle("Bin by Bin Ratio of two histograms");
  h1_ratio_n_EE->Draw("pe1");
  //line->SetLineWidth(1.);
  //line->Draw("same");

  c1->SaveAs((outputDir+"pfIsoFPRNeutral03_EE_log_2pad.png").c_str());


  c1->Clear();

  cout << "drawing photon iso" << endl; 
  //photon iso
  //--------pad 1--------//                                                                                                                                              
  pad1 = new TPad("pad1", "pad1",0.01,0.33,0.99,0.99);

  pad1->SetTopMargin(0.1);
  pad1->SetBottomMargin(0.01);
  pad1->SetRightMargin(0.1);

  pad1->SetLogy();
  pad1->Draw();
  pad1->cd();

  pid_pfIsoFPRPhoton03_sig_EE->Draw("hist");
  pid_pfIsoFPRRandomConePhoton03_sig_EE ->Draw("hist same");
  pid_pfIsoFPRRandomConePhoton03_bkg_EE ->Draw("hist same");

  //h1_g->GetYaxis()->SetTitle(("Number of Events / "+s_amplitude).c_str());
  //h1_g->GetYaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitleFont(42);
  //h1_g->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_data_control->Draw("PEsame");

  pad1->RedrawAxis();

  c1->cd();


  //------pad 2------//                                                                                                                                                  
  pad2 = new TPad("pad2", "pad2",0.01,0.01,0.99,0.32);
  pad2->SetGrid();

  pad2->SetTopMargin(0.01);
  pad2->SetBottomMargin(0.3);
  pad2->SetRightMargin(0.1);
  pad2->Draw();
  pad2->cd();


  pid_pfIsoFPRPhoton03_sig_EE->GetXaxis()->GetXmax();
  pid_pfIsoFPRPhoton03_sig_EE->GetXaxis()->GetXmin();
  //TLine* line = new TLine(xmin,1.,xmax,1.);

  TH1F* h1_ratio_pho_EE = (TH1F*)pid_pfIsoFPRPhoton03_sig_EE->Clone("h1_ratio_pho_EE");

  h1_ratio_pho_EE->SetStats(0);
  h1_ratio_pho_EE->Divide(pid_pfIsoFPRRandomConePhoton03_sig_EE);
  h1_ratio_pho_EE->SetMarkerColor(kBlack);
  h1_ratio_pho_EE->SetMarkerStyle(20);
  h1_ratio_pho_EE->SetLineColor(kBlack);
  h1_ratio_pho_EE->SetLineWidth(1);
  //h1_ratio_pho_EE->SetMarkerSize(1.7);
  //h1_ratio_pho_EE->GetXaxis()->SetTitle(xAxis.c_str());
  //h1_ratio_pho_EE->GetYaxis()->SetRangeUser(-2., 4.);
  //h1_ratio_pho_EE->GetYaxis()->SetNdivisions(3,false);
  h1_ratio_pho_EE->GetYaxis()->SetTitle("isoFPR/isoFPR RC");
  //h1_ratio_pho_EE->GetYaxis()->SetTitleFont(42);
  //h1_ratio_pho_EE->GetXaxis()->SetTitleFont(42);

  h1_ratio_pho_EE->GetXaxis()->SetTitleSize(0.14);
  h1_ratio_pho_EE->GetXaxis()->SetLabelSize(0.14);
  h1_ratio_pho_EE->GetYaxis()->SetLabelSize(0.10);
  h1_ratio_pho_EE->GetYaxis()->SetTitleSize(0.10);
  h1_ratio_pho_EE->GetYaxis()->SetTitleOffset(0.6);
  h1_ratio_pho_EE->GetXaxis()->SetTitleOffset(1.);


  h1_ratio_pho_EE->SetTitle("Bin by Bin Ratio of two histograms");
  h1_ratio_pho_EE->Draw("pe1");
  //line->SetLineWidth(1.);
  //line->Draw("same");

  c1->SaveAs((outputDir+"pfIsoFPRPhoton03_EE_log_2pad.png").c_str());

  c1->Clear();
  */ 

  /*
  //EE
  pid_pfIsoFPRCharged03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConeCharged03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConeCharged03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRCharged03_EE_log.png").c_str());
  c1->Clear();

  pid_pfIsoFPRNeutral03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConeNeutral03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRNeutral03_EE_log.png").c_str());
  c1->Clear();

  pid_pfIsoFPRPhoton03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConePhoton03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConePhoton03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRPhoton03_EE_log.png").c_str());
  c1->Clear();
  //EE
  pid_pfIsoFPRCharged03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConeCharged03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConeCharged03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRCharged03_EE_log.png").c_str());
  c1->Clear();

  pid_pfIsoFPRNeutral03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConeNeutral03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConeNeutral03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRNeutral03_EE_log.png").c_str());
  c1->Clear();

  pid_pfIsoFPRPhoton03_sig_EE->DrawNormalized();
  pid_pfIsoFPRRandomConePhoton03_sig_EE->DrawNormalized("same");
  pid_pfIsoFPRRandomConePhoton03_bkg_EE->DrawNormalized("same");
  leg->Draw();
  c1->SaveAs((outputDir+"pfIsoFPRPhoton03_EE_log.png").c_str());
  c1->Clear();
  */

  c1->Close();
  


}
