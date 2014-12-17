{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Nov 29 19:51:35 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.04786291,326.25,0.4307662);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_EB__7 = new TH1F("ptPhot_mc_Z_EB__7","ptPhot_mc_Z_EB",60,0,300);
   ptPhot_mc_Z_EB__7->SetBinContent(9,0.4064995);
   ptPhot_mc_Z_EB__7->SetBinContent(10,0.2572539);
   ptPhot_mc_Z_EB__7->SetBinContent(11,0.1611707);
   ptPhot_mc_Z_EB__7->SetBinContent(12,0.1031418);
   ptPhot_mc_Z_EB__7->SetBinContent(13,0.07193409);
   ptPhot_mc_Z_EB__7->SetBinError(9,0.002734792);
   ptPhot_mc_Z_EB__7->SetBinError(10,0.002191717);
   ptPhot_mc_Z_EB__7->SetBinError(11,0.002208652);
   ptPhot_mc_Z_EB__7->SetBinError(12,0.002135327);
   ptPhot_mc_Z_EB__7->SetBinError(13,0.00196208);
   ptPhot_mc_Z_EB__7->SetEntries(78589);
   ptPhot_mc_Z_EB__7->SetDirectory(0);
   ptPhot_mc_Z_EB__7->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__7->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__7->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__7->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__7->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__7->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EB__8 = new TH1F("ptPhot_mc_Signal_EB__8","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB__8->SetBinContent(19,0.4235827);
   ptPhot_mc_Signal_EB__8->SetBinContent(20,0.32006);
   ptPhot_mc_Signal_EB__8->SetBinContent(21,0.2563573);
   ptPhot_mc_Signal_EB__8->SetBinError(19,0.005829994);
   ptPhot_mc_Signal_EB__8->SetBinError(20,0.003026372);
   ptPhot_mc_Signal_EB__8->SetBinError(21,0.00304085);
   ptPhot_mc_Signal_EB__8->SetEntries(303504);
   ptPhot_mc_Signal_EB__8->SetDirectory(0);
   ptPhot_mc_Signal_EB__8->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__8->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__8->SetLineColor(ci);
   ptPhot_mc_Signal_EB__8->SetLineWidth(2);
   ptPhot_mc_Signal_EB__8->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EB__9 = new TH1F("ptPhot_mc_Z_EB__9","ptPhot_mc_Z_EB",60,0,300);
   ptPhot_mc_Z_EB__9->SetBinContent(9,0.4064995);
   ptPhot_mc_Z_EB__9->SetBinContent(10,0.2572539);
   ptPhot_mc_Z_EB__9->SetBinContent(11,0.1611707);
   ptPhot_mc_Z_EB__9->SetBinContent(12,0.1031418);
   ptPhot_mc_Z_EB__9->SetBinContent(13,0.07193409);
   ptPhot_mc_Z_EB__9->SetBinError(9,0.002734792);
   ptPhot_mc_Z_EB__9->SetBinError(10,0.002191717);
   ptPhot_mc_Z_EB__9->SetBinError(11,0.002208652);
   ptPhot_mc_Z_EB__9->SetBinError(12,0.002135327);
   ptPhot_mc_Z_EB__9->SetBinError(13,0.00196208);
   ptPhot_mc_Z_EB__9->SetMinimum(0);
   ptPhot_mc_Z_EB__9->SetMaximum(0.5690993);
   ptPhot_mc_Z_EB__9->SetEntries(78589);
   ptPhot_mc_Z_EB__9->SetDirectory(0);
   ptPhot_mc_Z_EB__9->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__9->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__9->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__9->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__9->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__9->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EB__9->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EB__9->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_mc_Z_EB__9->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.067364e-311,0,1.777659e-315,1.779262e-315,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","EB","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ptPhot_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_EB","signal #gamma + jet","F");
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
