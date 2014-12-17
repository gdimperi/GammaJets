{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Tue Dec  2 08:44:59 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-97.49999,-0.1038468,652.5,0.9346212);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_EB__7 = new TH1F("ptPhot_mc_Z_EB__7","ptPhot_mc_Z_EB",60,0,600);
   ptPhot_mc_Z_EB__7->SetBinContent(5,0.810236);
   ptPhot_mc_Z_EB__7->SetBinContent(6,0.1624992);
   ptPhot_mc_Z_EB__7->SetBinContent(7,0.02726485);
   ptPhot_mc_Z_EB__7->SetBinError(5,0.001183519);
   ptPhot_mc_Z_EB__7->SetBinError(6,0.0005308849);
   ptPhot_mc_Z_EB__7->SetBinError(7,0.0002196517);
   ptPhot_mc_Z_EB__7->SetEntries(825237);
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
   
   TH1F *ptPhot_mc_Signal_EB__8 = new TH1F("ptPhot_mc_Signal_EB__8","ptPhot_mc_Signal_EB",60,0,600);
   ptPhot_mc_Signal_EB__8->SetBinContent(5,0.6618303);
   ptPhot_mc_Signal_EB__8->SetBinContent(6,0.2658021);
   ptPhot_mc_Signal_EB__8->SetBinContent(7,0.07236762);
   ptPhot_mc_Signal_EB__8->SetBinError(5,0.002749208);
   ptPhot_mc_Signal_EB__8->SetBinError(6,0.001452427);
   ptPhot_mc_Signal_EB__8->SetBinError(7,0.000654987);
   ptPhot_mc_Signal_EB__8->SetEntries(1004991);
   ptPhot_mc_Signal_EB__8->SetDirectory(0);
   ptPhot_mc_Signal_EB__8->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__8->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__8->SetLineColor(ci);
   ptPhot_mc_Signal_EB__8->SetLineWidth(2);
   ptPhot_mc_Signal_EB__8->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EB__9 = new TH1F("ptPhot_mc_Z_EB__9","ptPhot_mc_Z_EB",60,0,600);
   ptPhot_mc_Z_EB__9->SetBinContent(5,0.810236);
   ptPhot_mc_Z_EB__9->SetBinContent(6,0.1624992);
   ptPhot_mc_Z_EB__9->SetBinContent(7,0.02726485);
   ptPhot_mc_Z_EB__9->SetBinError(5,0.001183519);
   ptPhot_mc_Z_EB__9->SetBinError(6,0.0005308849);
   ptPhot_mc_Z_EB__9->SetBinError(7,0.0002196517);
   ptPhot_mc_Z_EB__9->SetMinimum(0);
   ptPhot_mc_Z_EB__9->SetMaximum(1.13433);
   ptPhot_mc_Z_EB__9->SetEntries(825237);
   ptPhot_mc_Z_EB__9->SetDirectory(0);
   ptPhot_mc_Z_EB__9->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__9->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__9->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__9->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__9->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__9->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EB__9->GetYaxis()->SetTitle("Entries/10.0");
   ptPhot_mc_Z_EB__9->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_mc_Z_EB__9->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
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
