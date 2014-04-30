{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Wed Feb  5 21:43:06 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-2.385,-0.1234568,2.115,1.111111);
   etaPhot->SetFillColor(0);
   etaPhot->SetBorderMode(0);
   etaPhot->SetBorderSize(2);
   etaPhot->SetTickx(1);
   etaPhot->SetLeftMargin(0.13);
   etaPhot->SetRightMargin(0.07);
   etaPhot->SetFrameFillStyle(0);
   etaPhot->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(30);
   grae->SetName("divide_etaPhot_mc_EBBkg__recoAndID_by_etaPhot_mc_Bkg_EB");
   grae->SetTitle("etaPhot_mc_Bkg_EB_recoAndID");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetPoint(0,-1.45,0.3547689);
   grae->SetPointError(0,0.05,0.05,0.02805776,0.02805776);
   grae->SetPoint(1,-1.35,0.3658979);
   grae->SetPointError(1,0.05,0.05,0.01280478,0.01280478);
   grae->SetPoint(2,-1.25,0.3813869);
   grae->SetPointError(2,0.05,0.05,0.01520936,0.01520936);
   grae->SetPoint(3,-1.15,0.4327074);
   grae->SetPointError(3,0.05,0.05,0.01276694,0.01276694);
   grae->SetPoint(4,-1.05,0.4543487);
   grae->SetPointError(4,0.05,0.05,0.01113439,0.01113439);
   grae->SetPoint(5,-0.95,0.4799212);
   grae->SetPointError(5,0.05,0.05,0.01160388,0.01160388);
   grae->SetPoint(6,-0.85,0.4969801);
   grae->SetPointError(6,0.05,0.05,0.009397892,0.009397892);
   grae->SetPoint(7,-0.75,0.5324942);
   grae->SetPointError(7,0.05,0.05,0.01047125,0.01047125);
   grae->SetPoint(8,-0.65,0.5439428);
   grae->SetPointError(8,0.05,0.05,0.009205643,0.009205643);
   grae->SetPoint(9,-0.55,0.5333959);
   grae->SetPointError(9,0.05,0.05,0.008548025,0.008548025);
   grae->SetPoint(10,-0.45,0.5027399);
   grae->SetPointError(10,0.05,0.05,0.01017561,0.01017561);
   grae->SetPoint(11,-0.35,0.5305939);
   grae->SetPointError(11,0.05,0.05,0.008363769,0.008363769);
   grae->SetPoint(12,-0.25,0.544398);
   grae->SetPointError(12,0.05,0.05,0.008582623,0.008582623);
   grae->SetPoint(13,-0.15,0.5140418);
   grae->SetPointError(13,0.05,0.05,0.008218601,0.008218601);
   grae->SetPoint(14,-0.05,0.427021);
   grae->SetPointError(14,0.05,0.05,0.009279088,0.009279088);
   grae->SetPoint(15,0.05,0.5031436);
   grae->SetPointError(15,0.05,0.05,0.008600048,0.008600048);
   grae->SetPoint(16,0.15,0.518052);
   grae->SetPointError(16,0.05,0.05,0.007639268,0.007639268);
   grae->SetPoint(17,0.25,0.5231283);
   grae->SetPointError(17,0.05,0.05,0.008588352,0.008588352);
   grae->SetPoint(18,0.35,0.5197366);
   grae->SetPointError(18,0.05,0.05,0.008383993,0.008383993);
   grae->SetPoint(19,0.45,0.4709373);
   grae->SetPointError(19,0.05,0.05,0.009838807,0.009838807);
   grae->SetPoint(20,0.55,0.5272227);
   grae->SetPointError(20,0.05,0.05,0.008999513,0.008999513);
   grae->SetPoint(21,0.65,0.5379432);
   grae->SetPointError(21,0.05,0.05,0.0103897,0.0103897);
   grae->SetPoint(22,0.75,0.5468364);
   grae->SetPointError(22,0.05,0.05,0.01114531,0.01114531);
   grae->SetPoint(23,0.85,0.5550116);
   grae->SetPointError(23,0.05,0.05,0.01001577,0.01001577);
   grae->SetPoint(24,0.95,0.5294887);
   grae->SetPointError(24,0.05,0.05,0.0114512,0.0114512);
   grae->SetPoint(25,1.05,0.5464179);
   grae->SetPointError(25,0.05,0.05,0.01160815,0.01160815);
   grae->SetPoint(26,1.15,0.5202771);
   grae->SetPointError(26,0.05,0.05,0.01413206,0.01413206);
   grae->SetPoint(27,1.25,0.4480875);
   grae->SetPointError(27,0.05,0.05,0.01338652,0.01338652);
   grae->SetPoint(28,1.35,0.4448801);
   grae->SetPointError(28,0.05,0.05,0.01484451,0.01484451);
   grae->SetPoint(29,1.45,0.4658867);
   grae->SetPointError(29,0.05,0.05,0.01786417,0.01786417);
   
   TH1F *Graph_divide_etaPhot_mc_EBBkg__recoAndID_by_etaPhot_mc_Bkg_EB5 = new TH1F("Graph_divide_etaPhot_mc_EBBkg__recoAndID_by_etaPhot_mc_Bkg_EB5","etaPhot_mc_Bkg_EB_recoAndID",100,-1.8,1.8);
   Graph_divide_etaPhot_mc_EBBkg__recoAndID_by_etaPhot_mc_Bkg_EB5->SetMinimum(0);
   Graph_divide_etaPhot_mc_EBBkg__recoAndID_by_etaPhot_mc_Bkg_EB5->SetMaximum(1);
   Graph_divide_etaPhot_mc_EBBkg__recoAndID_by_etaPhot_mc_Bkg_EB5->SetDirectory(0);
   Graph_divide_etaPhot_mc_EBBkg__recoAndID_by_etaPhot_mc_Bkg_EB5->SetStats(0);
   grae->SetHistogram(Graph_divide_etaPhot_mc_EBBkg__recoAndID_by_etaPhot_mc_Bkg_EB5);
   
   grae->Draw("ap");
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
