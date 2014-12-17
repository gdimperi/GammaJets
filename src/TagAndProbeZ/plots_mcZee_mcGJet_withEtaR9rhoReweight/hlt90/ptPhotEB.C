{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Wed Dec  3 10:37:46 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-97.49999,-0.1027189,652.5,0.9244704);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_EB__7 = new TH1F("ptPhot_mc_Z_EB__7","ptPhot_mc_Z_EB",60,0,600);
   ptPhot_mc_Z_EB__7->SetBinContent(5,0.7991079);
   ptPhot_mc_Z_EB__7->SetBinContent(6,0.1708078);
   ptPhot_mc_Z_EB__7->SetBinContent(7,0.03008427);
   ptPhot_mc_Z_EB__7->SetBinError(5,0.001378147);
   ptPhot_mc_Z_EB__7->SetBinError(6,0.000645752);
   ptPhot_mc_Z_EB__7->SetBinError(7,0.0002755766);
   ptPhot_mc_Z_EB__7->SetEntries(1114625);
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
   ptPhot_mc_Signal_EB__8->SetBinContent(11,0.1950852);
   ptPhot_mc_Signal_EB__8->SetBinContent(12,0.2895032);
   ptPhot_mc_Signal_EB__8->SetBinContent(13,0.1925641);
   ptPhot_mc_Signal_EB__8->SetBinContent(14,0.1340163);
   ptPhot_mc_Signal_EB__8->SetBinContent(15,0.09401725);
   ptPhot_mc_Signal_EB__8->SetBinContent(16,0.06740388);
   ptPhot_mc_Signal_EB__8->SetBinContent(17,0.02740998);
   ptPhot_mc_Signal_EB__8->SetBinError(11,0.001882952);
   ptPhot_mc_Signal_EB__8->SetBinError(12,0.00178964);
   ptPhot_mc_Signal_EB__8->SetBinError(13,0.001118956);
   ptPhot_mc_Signal_EB__8->SetBinError(14,0.0008651942);
   ptPhot_mc_Signal_EB__8->SetBinError(15,0.0006318099);
   ptPhot_mc_Signal_EB__8->SetBinError(16,0.0004551154);
   ptPhot_mc_Signal_EB__8->SetBinError(17,0.0003133008);
   ptPhot_mc_Signal_EB__8->SetEntries(1117041);
   ptPhot_mc_Signal_EB__8->SetDirectory(0);
   ptPhot_mc_Signal_EB__8->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__8->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__8->SetLineColor(ci);
   ptPhot_mc_Signal_EB__8->SetLineWidth(2);
   ptPhot_mc_Signal_EB__8->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EB__9 = new TH1F("ptPhot_mc_Z_EB__9","ptPhot_mc_Z_EB",60,0,600);
   ptPhot_mc_Z_EB__9->SetBinContent(5,0.7991079);
   ptPhot_mc_Z_EB__9->SetBinContent(6,0.1708078);
   ptPhot_mc_Z_EB__9->SetBinContent(7,0.03008427);
   ptPhot_mc_Z_EB__9->SetBinError(5,0.001378147);
   ptPhot_mc_Z_EB__9->SetBinError(6,0.000645752);
   ptPhot_mc_Z_EB__9->SetBinError(7,0.0002755766);
   ptPhot_mc_Z_EB__9->SetMinimum(0);
   ptPhot_mc_Z_EB__9->SetMaximum(1.118751);
   ptPhot_mc_Z_EB__9->SetEntries(1114625);
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
   
   TLegend *leg = new TLegend(0.94,2.334091e-310,7.367676e-144,1.5,NULL,"brNDC");
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
