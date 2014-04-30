{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Mon Mar  3 23:29:51 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,3.319446,3.525,4.658047);
   etaPhot->SetFillColor(0);
   etaPhot->SetBorderMode(0);
   etaPhot->SetBorderSize(2);
   etaPhot->SetTickx(1);
   etaPhot->SetLeftMargin(0.13);
   etaPhot->SetRightMargin(0.07);
   etaPhot->SetFrameFillStyle(0);
   etaPhot->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20);
   grae->SetName("divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE");
   grae->SetTitle("etaPhot_mc_Signal_EE_recoAndID");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00ffff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetPoint(0,-2.45,0.9714798);
   grae->SetPointError(0,0.05,0.05,0.001647292,0.001647292);
   grae->SetPoint(1,-2.35,0.957331);
   grae->SetPointError(1,0.05,0.05,0.005200108,0.005200108);
   grae->SetPoint(2,-2.25,0.9605392);
   grae->SetPointError(2,0.05,0.05,0.001913599,0.001913599);
   grae->SetPoint(3,-2.15,0.9577121);
   grae->SetPointError(3,0.05,0.05,0.002096829,0.002096829);
   grae->SetPoint(4,-2.05,0.9607746);
   grae->SetPointError(4,0.05,0.05,0.001587005,0.001587005);
   grae->SetPoint(5,-1.95,0.9562554);
   grae->SetPointError(5,0.05,0.05,0.001663279,0.001663279);
   grae->SetPoint(6,-1.85,0.9577273);
   grae->SetPointError(6,0.05,0.05,0.001434377,0.001434377);
   grae->SetPoint(7,-1.75,0.9425917);
   grae->SetPointError(7,0.05,0.05,0.001770058,0.001770058);
   grae->SetPoint(8,-1.65,0.9380147);
   grae->SetPointError(8,0.05,0.05,0.001622724,0.001622724);
   grae->SetPoint(9,-1.55,0.9079419);
   grae->SetPointError(9,0.05,0.05,0.003828524,0.003828524);
   grae->SetPoint(10,1.55,0.9021491);
   grae->SetPointError(10,0.05,0.05,0.004770474,0.004770474);
   grae->SetPoint(11,1.65,0.9160645);
   grae->SetPointError(11,0.05,0.05,0.002070835,0.002070835);
   grae->SetPoint(12,1.75,0.9314939);
   grae->SetPointError(12,0.05,0.05,0.007844033,0.007844033);
   grae->SetPoint(13,1.85,0.9551205);
   grae->SetPointError(13,0.05,0.05,0.001608247,0.001608247);
   grae->SetPoint(14,1.95,0.9605539);
   grae->SetPointError(14,0.05,0.05,0.001495471,0.001495471);
   grae->SetPoint(15,2.05,0.9642729);
   grae->SetPointError(15,0.05,0.05,0.001513676,0.001513676);
   grae->SetPoint(16,2.15,0.9608324);
   grae->SetPointError(16,0.05,0.05,0.00174836,0.00174836);
   grae->SetPoint(17,2.25,0.9550414);
   grae->SetPointError(17,0.05,0.05,0.002043444,0.002043444);
   grae->SetPoint(18,2.35,0.958378);
   grae->SetPointError(18,0.05,0.05,0.002313897,0.002313897);
   grae->SetPoint(19,2.45,0.9674285);
   grae->SetPointError(19,0.05,0.05,0.001856739,0.001856739);
   
   TH1F *Graph_divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE9 = new TH1F("Graph_divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE9","etaPhot_mc_Signal_EE_recoAndID",100,-3,3);
   Graph_divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE9->SetMinimum(0);
   Graph_divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE9->SetMaximum(1);
   Graph_divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE9->SetDirectory(0);
   Graph_divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE9->SetStats(0);
   Graph_divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE9->GetXaxis()->SetTitle("#gamma #eta");
   grae->SetHistogram(Graph_divide_etaPhot_mc_Signal_EE_recoAndID_by_etaPhot_mc_Signal_EE9);
   
   grae->Draw("ap");
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
