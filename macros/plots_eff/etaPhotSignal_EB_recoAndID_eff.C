{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Mon Mar  3 23:29:57 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,3.488568,3.525,4.716163);
   etaPhot->SetFillColor(0);
   etaPhot->SetBorderMode(0);
   etaPhot->SetBorderSize(2);
   etaPhot->SetTickx(1);
   etaPhot->SetLeftMargin(0.13);
   etaPhot->SetRightMargin(0.07);
   etaPhot->SetFrameFillStyle(0);
   etaPhot->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(30);
   grae->SetName("divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB");
   grae->SetTitle("etaPhot_mc_Signal_EB_recoAndID");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00ffff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetPoint(0,-1.45,0.9515073);
   grae->SetPointError(0,0.05,0.05,0.002239447,0.002239447);
   grae->SetPoint(1,-1.35,0.9488091);
   grae->SetPointError(1,0.05,0.05,0.001474399,0.001474399);
   grae->SetPoint(2,-1.25,0.9405902);
   grae->SetPointError(2,0.05,0.05,0.004354315,0.004354315);
   grae->SetPoint(3,-1.15,0.9520257);
   grae->SetPointError(3,0.05,0.05,0.001412632,0.001412632);
   grae->SetPoint(4,-1.05,0.9495636);
   grae->SetPointError(4,0.05,0.05,0.001363315,0.001363315);
   grae->SetPoint(5,-0.95,0.9474526);
   grae->SetPointError(5,0.05,0.05,0.001659556,0.001659556);
   grae->SetPoint(6,-0.85,0.9509086);
   grae->SetPointError(6,0.05,0.05,0.001644858,0.001644858);
   grae->SetPoint(7,-0.75,0.9522957);
   grae->SetPointError(7,0.05,0.05,0.001975262,0.001975262);
   grae->SetPoint(8,-0.65,0.9510172);
   grae->SetPointError(8,0.05,0.05,0.001490582,0.001490582);
   grae->SetPoint(9,-0.55,0.9535723);
   grae->SetPointError(9,0.05,0.05,0.00139684,0.00139684);
   grae->SetPoint(10,-0.45,0.9538881);
   grae->SetPointError(10,0.05,0.05,0.001338418,0.001338418);
   grae->SetPoint(11,-0.35,0.9496569);
   grae->SetPointError(11,0.05,0.05,0.002220775,0.002220775);
   grae->SetPoint(12,-0.25,0.9522288);
   grae->SetPointError(12,0.05,0.05,0.001517868,0.001517868);
   grae->SetPoint(13,-0.15,0.9513072);
   grae->SetPointError(13,0.05,0.05,0.001765372,0.001765372);
   grae->SetPoint(14,-0.05,0.9526667);
   grae->SetPointError(14,0.05,0.05,0.001459961,0.001459961);
   grae->SetPoint(15,0.05,0.9547557);
   grae->SetPointError(15,0.05,0.05,0.001341078,0.001341078);
   grae->SetPoint(16,0.15,0.9528488);
   grae->SetPointError(16,0.05,0.05,0.001350709,0.001350709);
   grae->SetPoint(17,0.25,0.9460803);
   grae->SetPointError(17,0.05,0.05,0.003974186,0.003974186);
   grae->SetPoint(18,0.35,0.9554803);
   grae->SetPointError(18,0.05,0.05,0.001385323,0.001385323);
   grae->SetPoint(19,0.45,0.9468862);
   grae->SetPointError(19,0.05,0.05,0.001575483,0.001575483);
   grae->SetPoint(20,0.55,0.9457182);
   grae->SetPointError(20,0.05,0.05,0.003699319,0.003699319);
   grae->SetPoint(21,0.65,0.952552);
   grae->SetPointError(21,0.05,0.05,0.001491888,0.001491888);
   grae->SetPoint(22,0.75,0.9540129);
   grae->SetPointError(22,0.05,0.05,0.001410047,0.001410047);
   grae->SetPoint(23,0.85,0.9472765);
   grae->SetPointError(23,0.05,0.05,0.001527897,0.001527897);
   grae->SetPoint(24,0.95,0.9457956);
   grae->SetPointError(24,0.05,0.05,0.001629897,0.001629897);
   grae->SetPoint(25,1.05,0.9403529);
   grae->SetPointError(25,0.05,0.05,0.00597211,0.00597211);
   grae->SetPoint(26,1.15,0.9530252);
   grae->SetPointError(26,0.05,0.05,0.001459117,0.001459117);
   grae->SetPoint(27,1.25,0.9477743);
   grae->SetPointError(27,0.05,0.05,0.006097755,0.006097755);
   grae->SetPoint(28,1.35,0.9481633);
   grae->SetPointError(28,0.05,0.05,0.001514183,0.001514183);
   grae->SetPoint(29,1.45,0.959003);
   grae->SetPointError(29,0.05,0.05,0.00332099,0.00332099);
   
   TH1F *Graph_divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB10 = new TH1F("Graph_divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB10","etaPhot_mc_Signal_EB_recoAndID",100,-1.8,1.8);
   Graph_divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB10->SetMinimum(0);
   Graph_divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB10->SetMaximum(1);
   Graph_divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB10->SetDirectory(0);
   Graph_divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB10->SetStats(0);
   Graph_divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB10->GetXaxis()->SetTitle("#gamma #eta");
   grae->SetHistogram(Graph_divide_etaPhot_mc_Signal_EB_recoAndID_by_etaPhot_mc_Signal_EB10);
   
   grae->Draw("ap");
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
