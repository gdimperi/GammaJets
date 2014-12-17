{
//=========Macro generated from canvas: mvaIdPhot/mvaIdPhot
//=========  (Sun Nov 30 15:46:45 2014) by ROOT version5.32/00
   TCanvas *mvaIdPhot = new TCanvas("mvaIdPhot", "mvaIdPhot",0,0,1000,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mvaIdPhot->SetHighLightColor(2);
   mvaIdPhot->Range(0,0,1,1);
   mvaIdPhot->SetFillColor(0);
   mvaIdPhot->SetBorderMode(0);
   mvaIdPhot->SetBorderSize(2);
   mvaIdPhot->SetTickx(1);
   mvaIdPhot->SetLeftMargin(0.13);
   mvaIdPhot->SetRightMargin(0.07);
   mvaIdPhot->SetFrameFillStyle(0);
   mvaIdPhot->SetFrameBorderMode(0);
   
   TH1F *mvaIdPhot_mc_Z_EE__13 = new TH1F("mvaIdPhot_mc_Z_EE__13","mvaIdPhot_mc_Z_EE",60,0,1);
   mvaIdPhot_mc_Z_EE__13->SetBinContent(53,0.03458231);
   mvaIdPhot_mc_Z_EE__13->SetBinContent(54,0.07532795);
   mvaIdPhot_mc_Z_EE__13->SetBinContent(55,0.09946098);
   mvaIdPhot_mc_Z_EE__13->SetBinContent(56,0.1358762);
   mvaIdPhot_mc_Z_EE__13->SetBinContent(57,0.2296913);
   mvaIdPhot_mc_Z_EE__13->SetBinContent(58,0.3115241);
   mvaIdPhot_mc_Z_EE__13->SetBinContent(59,0.1097607);
   mvaIdPhot_mc_Z_EE__13->SetBinContent(60,0.003776422);
   mvaIdPhot_mc_Z_EE__13->SetBinError(53,0.001579881);
   mvaIdPhot_mc_Z_EE__13->SetBinError(54,0.002534007);
   mvaIdPhot_mc_Z_EE__13->SetBinError(55,0.003062616);
   mvaIdPhot_mc_Z_EE__13->SetBinError(56,0.003973528);
   mvaIdPhot_mc_Z_EE__13->SetBinError(57,0.006325097);
   mvaIdPhot_mc_Z_EE__13->SetBinError(58,0.009941905);
   mvaIdPhot_mc_Z_EE__13->SetBinError(59,0.006477292);
   mvaIdPhot_mc_Z_EE__13->SetBinError(60,0.001402387);
   mvaIdPhot_mc_Z_EE__13->SetEntries(14844);
   mvaIdPhot_mc_Z_EE__13->SetDirectory(0);
   mvaIdPhot_mc_Z_EE__13->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__13->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__13->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EE__13->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EE__13->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EE__13->Draw("PE");
   
   TH1F *mvaIdPhot_mc_Signal_EE__14 = new TH1F("mvaIdPhot_mc_Signal_EE__14","mvaIdPhot_mc_Signal_EE",60,0,1);
   mvaIdPhot_mc_Signal_EE__14->SetBinContent(53,0.008548189);
   mvaIdPhot_mc_Signal_EE__14->SetBinContent(54,0.02537078);
   mvaIdPhot_mc_Signal_EE__14->SetBinContent(55,0.0461411);
   mvaIdPhot_mc_Signal_EE__14->SetBinContent(56,0.09104571);
   mvaIdPhot_mc_Signal_EE__14->SetBinContent(57,0.1822296);
   mvaIdPhot_mc_Signal_EE__14->SetBinContent(58,0.3325462);
   mvaIdPhot_mc_Signal_EE__14->SetBinContent(59,0.3030317);
   mvaIdPhot_mc_Signal_EE__14->SetBinContent(60,0.01108671);
   mvaIdPhot_mc_Signal_EE__14->SetBinError(53,0.0007415819);
   mvaIdPhot_mc_Signal_EE__14->SetBinError(54,0.001211042);
   mvaIdPhot_mc_Signal_EE__14->SetBinError(55,0.0004975956);
   mvaIdPhot_mc_Signal_EE__14->SetBinError(56,0.001164588);
   mvaIdPhot_mc_Signal_EE__14->SetBinError(57,0.002153517);
   mvaIdPhot_mc_Signal_EE__14->SetBinError(58,0.002512741);
   mvaIdPhot_mc_Signal_EE__14->SetBinError(59,0.002244078);
   mvaIdPhot_mc_Signal_EE__14->SetBinError(60,0.000523438);
   mvaIdPhot_mc_Signal_EE__14->SetEntries(640592);
   mvaIdPhot_mc_Signal_EE__14->SetDirectory(0);
   mvaIdPhot_mc_Signal_EE__14->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EE__14->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EE__14->SetLineColor(ci);
   mvaIdPhot_mc_Signal_EE__14->SetLineWidth(2);
   mvaIdPhot_mc_Signal_EE__14->Draw("HSAME");
   
   TH1F *mvaIdPhot_mc_Z_EE__15 = new TH1F("mvaIdPhot_mc_Z_EE__15","mvaIdPhot_mc_Z_EE",60,0,1);
   mvaIdPhot_mc_Z_EE__15->SetBinContent(53,0.03458231);
   mvaIdPhot_mc_Z_EE__15->SetBinContent(54,0.07532795);
   mvaIdPhot_mc_Z_EE__15->SetBinContent(55,0.09946098);
   mvaIdPhot_mc_Z_EE__15->SetBinContent(56,0.1358762);
   mvaIdPhot_mc_Z_EE__15->SetBinContent(57,0.2296913);
   mvaIdPhot_mc_Z_EE__15->SetBinContent(58,0.3115241);
   mvaIdPhot_mc_Z_EE__15->SetBinContent(59,0.1097607);
   mvaIdPhot_mc_Z_EE__15->SetBinContent(60,0.003776422);
   mvaIdPhot_mc_Z_EE__15->SetBinError(53,0.001579881);
   mvaIdPhot_mc_Z_EE__15->SetBinError(54,0.002534007);
   mvaIdPhot_mc_Z_EE__15->SetBinError(55,0.003062616);
   mvaIdPhot_mc_Z_EE__15->SetBinError(56,0.003973528);
   mvaIdPhot_mc_Z_EE__15->SetBinError(57,0.006325097);
   mvaIdPhot_mc_Z_EE__15->SetBinError(58,0.009941905);
   mvaIdPhot_mc_Z_EE__15->SetBinError(59,0.006477292);
   mvaIdPhot_mc_Z_EE__15->SetBinError(60,0.001402387);
   mvaIdPhot_mc_Z_EE__15->SetMinimum(0);
   mvaIdPhot_mc_Z_EE__15->SetMaximum(0.4361338);
   mvaIdPhot_mc_Z_EE__15->SetEntries(14844);
   mvaIdPhot_mc_Z_EE__15->SetDirectory(0);
   mvaIdPhot_mc_Z_EE__15->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__15->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__15->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EE__15->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EE__15->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EE__15->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EE__15->GetYaxis()->SetTitle("Entries/0.0166666666667");
   mvaIdPhot_mc_Z_EE__15->GetYaxis()->SetTitleOffset(1.5);
   mvaIdPhot_mc_Z_EE__15->Draw("PESAME");
   
   TLegend *leg = new TLegend(6.640242e-321,9.48606e-322,1.897212e-321,9.48606e-322,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","EE","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mvaIdPhot_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mvaIdPhot_mc_Signal_EE","signal #gamma + jet","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.94,"CMS Preliminary #sqrt{s}=8 TeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.037);
   tex->SetLineWidth(2);
   tex->Draw();
   mvaIdPhot->Modified();
   mvaIdPhot->cd();
   mvaIdPhot->SetSelected(mvaIdPhot);
}
