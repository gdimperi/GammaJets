{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Wed Dec  3 10:37:42 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",0,0,1000,900);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(0,0,1,1);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_EE__1 = new TH1F("ptPhot_mc_Z_EE__1","ptPhot_mc_Z_EE",60,0,600);
   ptPhot_mc_Z_EE__1->SetBinContent(5,0.7876272);
   ptPhot_mc_Z_EE__1->SetBinContent(6,0.1795945);
   ptPhot_mc_Z_EE__1->SetBinContent(7,0.03277823);
   ptPhot_mc_Z_EE__1->SetBinError(5,0.004775959);
   ptPhot_mc_Z_EE__1->SetBinError(6,0.00223909);
   ptPhot_mc_Z_EE__1->SetBinError(7,0.0009693846);
   ptPhot_mc_Z_EE__1->SetEntries(458246);
   ptPhot_mc_Z_EE__1->SetDirectory(0);
   ptPhot_mc_Z_EE__1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__1->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__1->SetMarkerColor(ci);
   ptPhot_mc_Z_EE__1->SetMarkerStyle(20);
   ptPhot_mc_Z_EE__1->SetMarkerSize(0.7);
   ptPhot_mc_Z_EE__1->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EE__2 = new TH1F("ptPhot_mc_Signal_EE__2","ptPhot_mc_Signal_EE",60,0,600);
   ptPhot_mc_Signal_EE__2->SetBinContent(11,0.2093824);
   ptPhot_mc_Signal_EE__2->SetBinContent(12,0.2932647);
   ptPhot_mc_Signal_EE__2->SetBinContent(13,0.1925695);
   ptPhot_mc_Signal_EE__2->SetBinContent(14,0.129059);
   ptPhot_mc_Signal_EE__2->SetBinContent(15,0.0886263);
   ptPhot_mc_Signal_EE__2->SetBinContent(16,0.06340198);
   ptPhot_mc_Signal_EE__2->SetBinContent(17,0.02369619);
   ptPhot_mc_Signal_EE__2->SetBinError(11,0.003815298);
   ptPhot_mc_Signal_EE__2->SetBinError(12,0.003204256);
   ptPhot_mc_Signal_EE__2->SetBinError(13,0.001632886);
   ptPhot_mc_Signal_EE__2->SetBinError(14,0.001222157);
   ptPhot_mc_Signal_EE__2->SetBinError(15,0.0009089924);
   ptPhot_mc_Signal_EE__2->SetBinError(16,0.0007200558);
   ptPhot_mc_Signal_EE__2->SetBinError(17,0.0003512933);
   ptPhot_mc_Signal_EE__2->SetEntries(592312);
   ptPhot_mc_Signal_EE__2->SetDirectory(0);
   ptPhot_mc_Signal_EE__2->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__2->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__2->SetLineColor(ci);
   ptPhot_mc_Signal_EE__2->SetLineWidth(2);
   ptPhot_mc_Signal_EE__2->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EE__3 = new TH1F("ptPhot_mc_Z_EE__3","ptPhot_mc_Z_EE",60,0,600);
   ptPhot_mc_Z_EE__3->SetBinContent(5,0.7876272);
   ptPhot_mc_Z_EE__3->SetBinContent(6,0.1795945);
   ptPhot_mc_Z_EE__3->SetBinContent(7,0.03277823);
   ptPhot_mc_Z_EE__3->SetBinError(5,0.004775959);
   ptPhot_mc_Z_EE__3->SetBinError(6,0.00223909);
   ptPhot_mc_Z_EE__3->SetBinError(7,0.0009693846);
   ptPhot_mc_Z_EE__3->SetMinimum(0);
   ptPhot_mc_Z_EE__3->SetMaximum(1.102678);
   ptPhot_mc_Z_EE__3->SetEntries(458246);
   ptPhot_mc_Z_EE__3->SetDirectory(0);
   ptPhot_mc_Z_EE__3->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__3->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__3->SetMarkerColor(ci);
   ptPhot_mc_Z_EE__3->SetMarkerStyle(20);
   ptPhot_mc_Z_EE__3->SetMarkerSize(0.7);
   ptPhot_mc_Z_EE__3->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EE__3->GetYaxis()->SetTitle("Entries/10.0");
   ptPhot_mc_Z_EE__3->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_mc_Z_EE__3->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,0,4.013694e-315,5.288973e-320,NULL,"brNDC");
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
   entry=leg->AddEntry("ptPhot_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_EE","signal #gamma + jet","F");
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
   ptPhot->Modified();
   ptPhot->cd();
   ptPhot->SetSelected(ptPhot);
}
