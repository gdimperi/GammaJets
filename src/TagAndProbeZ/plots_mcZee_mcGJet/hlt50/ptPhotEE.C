{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Nov 29 19:50:50 2014) by ROOT version5.32/00
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
   
   TH1F *ptPhot_mc_Z_EE__1 = new TH1F("ptPhot_mc_Z_EE__1","ptPhot_mc_Z_EE",60,0,300);
   ptPhot_mc_Z_EE__1->SetBinContent(9,0.363397);
   ptPhot_mc_Z_EE__1->SetBinContent(10,0.2661369);
   ptPhot_mc_Z_EE__1->SetBinContent(11,0.1780276);
   ptPhot_mc_Z_EE__1->SetBinContent(12,0.1156095);
   ptPhot_mc_Z_EE__1->SetBinContent(13,0.07682897);
   ptPhot_mc_Z_EE__1->SetBinError(9,0.005627194);
   ptPhot_mc_Z_EE__1->SetBinError(10,0.004845566);
   ptPhot_mc_Z_EE__1->SetBinError(11,0.004987142);
   ptPhot_mc_Z_EE__1->SetBinError(12,0.005079414);
   ptPhot_mc_Z_EE__1->SetBinError(13,0.004784634);
   ptPhot_mc_Z_EE__1->SetEntries(25857);
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
   
   TH1F *ptPhot_mc_Signal_EE__2 = new TH1F("ptPhot_mc_Signal_EE__2","ptPhot_mc_Signal_EE",60,0,300);
   ptPhot_mc_Signal_EE__2->SetBinContent(14,0.3334108);
   ptPhot_mc_Signal_EE__2->SetBinContent(15,0.2479397);
   ptPhot_mc_Signal_EE__2->SetBinContent(16,0.1794609);
   ptPhot_mc_Signal_EE__2->SetBinContent(17,0.134536);
   ptPhot_mc_Signal_EE__2->SetBinContent(18,0.1046526);
   ptPhot_mc_Signal_EE__2->SetBinError(14,0.004537297);
   ptPhot_mc_Signal_EE__2->SetBinError(15,0.0036419);
   ptPhot_mc_Signal_EE__2->SetBinError(16,0.002614725);
   ptPhot_mc_Signal_EE__2->SetBinError(17,0.001957456);
   ptPhot_mc_Signal_EE__2->SetBinError(18,0.00151383);
   ptPhot_mc_Signal_EE__2->SetEntries(353605);
   ptPhot_mc_Signal_EE__2->SetDirectory(0);
   ptPhot_mc_Signal_EE__2->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__2->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__2->SetLineColor(ci);
   ptPhot_mc_Signal_EE__2->SetLineWidth(2);
   ptPhot_mc_Signal_EE__2->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EE__3 = new TH1F("ptPhot_mc_Z_EE__3","ptPhot_mc_Z_EE",60,0,300);
   ptPhot_mc_Z_EE__3->SetBinContent(9,0.363397);
   ptPhot_mc_Z_EE__3->SetBinContent(10,0.2661369);
   ptPhot_mc_Z_EE__3->SetBinContent(11,0.1780276);
   ptPhot_mc_Z_EE__3->SetBinContent(12,0.1156095);
   ptPhot_mc_Z_EE__3->SetBinContent(13,0.07682897);
   ptPhot_mc_Z_EE__3->SetBinError(9,0.005627194);
   ptPhot_mc_Z_EE__3->SetBinError(10,0.004845566);
   ptPhot_mc_Z_EE__3->SetBinError(11,0.004987142);
   ptPhot_mc_Z_EE__3->SetBinError(12,0.005079414);
   ptPhot_mc_Z_EE__3->SetBinError(13,0.004784634);
   ptPhot_mc_Z_EE__3->SetMinimum(0);
   ptPhot_mc_Z_EE__3->SetMaximum(0.5087558);
   ptPhot_mc_Z_EE__3->SetEntries(25857);
   ptPhot_mc_Z_EE__3->SetDirectory(0);
   ptPhot_mc_Z_EE__3->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__3->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__3->SetMarkerColor(ci);
   ptPhot_mc_Z_EE__3->SetMarkerStyle(20);
   ptPhot_mc_Z_EE__3->SetMarkerSize(0.7);
   ptPhot_mc_Z_EE__3->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EE__3->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EE__3->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_mc_Z_EE__3->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.15236e-315,1.184667e-312,0,0,NULL,"brNDC");
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
