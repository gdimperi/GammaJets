{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Mon Mar  3 23:30:03 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,2.989142,3.525,4.520822);
   etaPhot->SetFillColor(0);
   etaPhot->SetBorderMode(0);
   etaPhot->SetBorderSize(2);
   etaPhot->SetTickx(1);
   etaPhot->SetLeftMargin(0.13);
   etaPhot->SetRightMargin(0.07);
   etaPhot->SetFrameFillStyle(0);
   etaPhot->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20);
   grae->SetName("divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE");
   grae->SetTitle("etaPhot_mc_Bkg_EE_recoAndID");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetPoint(0,-2.45,0.2836327);
   grae->SetPointError(0,0.05,0.05,0.02484886,0.02484886);
   grae->SetPoint(1,-2.35,0.3828913);
   grae->SetPointError(1,0.05,0.05,0.01604243,0.01604243);
   grae->SetPoint(2,-2.25,0.4052155);
   grae->SetPointError(2,0.05,0.05,0.01475052,0.01475052);
   grae->SetPoint(3,-2.15,0.3737601);
   grae->SetPointError(3,0.05,0.05,0.01622357,0.01622357);
   grae->SetPoint(4,-2.05,0.3957163);
   grae->SetPointError(4,0.05,0.05,0.0162984,0.0162984);
   grae->SetPoint(5,-1.95,0.4082151);
   grae->SetPointError(5,0.05,0.05,0.01587583,0.01587583);
   grae->SetPoint(6,-1.85,0.3948411);
   grae->SetPointError(6,0.05,0.05,0.01451606,0.01451606);
   grae->SetPoint(7,-1.75,0.3828877);
   grae->SetPointError(7,0.05,0.05,0.01607429,0.01607429);
   grae->SetPoint(8,-1.65,0.3991311);
   grae->SetPointError(8,0.05,0.05,0.01653936,0.01653936);
   grae->SetPoint(9,-1.55,0.3922933);
   grae->SetPointError(9,0.05,0.05,0.03854578,0.03854578);
   grae->SetPoint(10,1.55,0.3263431);
   grae->SetPointError(10,0.05,0.05,0.03033974,0.03033974);
   grae->SetPoint(11,1.65,0.3974954);
   grae->SetPointError(11,0.05,0.05,0.02083036,0.02083036);
   grae->SetPoint(12,1.75,0.356095);
   grae->SetPointError(12,0.05,0.05,0.01451064,0.01451064);
   grae->SetPoint(13,1.85,0.3982376);
   grae->SetPointError(13,0.05,0.05,0.01981426,0.01981426);
   grae->SetPoint(14,1.95,0.4118476);
   grae->SetPointError(14,0.05,0.05,0.01595418,0.01595418);
   grae->SetPoint(15,2.05,0.3963381);
   grae->SetPointError(15,0.05,0.05,0.01697521,0.01697521);
   grae->SetPoint(16,2.15,0.3959483);
   grae->SetPointError(16,0.05,0.05,0.01549144,0.01549144);
   grae->SetPoint(17,2.25,0.4160588);
   grae->SetPointError(17,0.05,0.05,0.01815887,0.01815887);
   grae->SetPoint(18,2.35,0.3593937);
   grae->SetPointError(18,0.05,0.05,0.01604553,0.01604553);
   grae->SetPoint(19,2.45,0.2720672);
   grae->SetPointError(19,0.05,0.05,0.02483572,0.02483572);
   
   TH1F *Graph_divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE11 = new TH1F("Graph_divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE11","etaPhot_mc_Bkg_EE_recoAndID",100,-3,3);
   Graph_divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE11->SetMinimum(0);
   Graph_divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE11->SetMaximum(1);
   Graph_divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE11->SetDirectory(0);
   Graph_divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE11->SetStats(0);
   Graph_divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE11->GetXaxis()->SetTitle("#gamma #eta");
   grae->SetHistogram(Graph_divide_etaPhot_mc_Bkg_EE_recoAndID_by_etaPhot_mc_Bkg_EE11);
   
   grae->Draw("ap");
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
