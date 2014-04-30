{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Mon Feb 10 21:48:56 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-5220.791,326.25,46987.11);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,300);
   ptPhot_data_EB->SetBinContent(19,9393);
   ptPhot_data_EB->SetBinContent(20,7063);
   ptPhot_data_EB->SetBinContent(21,5204);
   ptPhot_data_EB->SetBinError(19,96.91749);
   ptPhot_data_EB->SetBinError(20,84.04166);
   ptPhot_data_EB->SetBinError(21,72.13876);
   ptPhot_data_EB->SetMinimum(0);
   ptPhot_data_EB->SetMaximum(13150.2);
   ptPhot_data_EB->SetEntries(21660);
   ptPhot_data_EB->SetStats(0);
   ptPhot_data_EB->SetMarkerStyle(20);
   ptPhot_data_EB->SetMarkerSize(0.7);
   ptPhot_data_EB->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_EB->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EB->Draw("PE");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *ptPhot_mc_Bkg_EB = new TH1F("ptPhot_mc_Bkg_EB","ptPhot_mc_Bkg_EB",60,0,300);
   ptPhot_mc_Bkg_EB->SetBinContent(19,5548.024);
   ptPhot_mc_Bkg_EB->SetBinContent(20,3934.229);
   ptPhot_mc_Bkg_EB->SetBinContent(21,2875.197);
   ptPhot_mc_Bkg_EB->SetBinError(19,154.4042);
   ptPhot_mc_Bkg_EB->SetBinError(20,117.9266);
   ptPhot_mc_Bkg_EB->SetBinError(21,87.58061);
   ptPhot_mc_Bkg_EB->SetEntries(27246);
   ptPhot_mc_Bkg_EB->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetLineColor(ci);
   ptPhot_mc_Bkg_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EB,"");
   
   TH1F *ptPhot_mc_Signal_EB = new TH1F("ptPhot_mc_Signal_EB","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB->SetBinContent(19,2083.032);
   ptPhot_mc_Signal_EB->SetBinContent(20,1471.433);
   ptPhot_mc_Signal_EB->SetBinContent(21,1157.446);
   ptPhot_mc_Signal_EB->SetBinError(19,59.63673);
   ptPhot_mc_Signal_EB->SetBinError(20,18.23359);
   ptPhot_mc_Signal_EB->SetBinError(21,27.88401);
   ptPhot_mc_Signal_EB->SetEntries(87427);
   ptPhot_mc_Signal_EB->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetLineColor(ci);
   ptPhot_mc_Signal_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EB,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,300);
   ptPhot_data_EB->SetBinContent(19,9393);
   ptPhot_data_EB->SetBinContent(20,7063);
   ptPhot_data_EB->SetBinContent(21,5204);
   ptPhot_data_EB->SetBinError(19,96.91749);
   ptPhot_data_EB->SetBinError(20,84.04166);
   ptPhot_data_EB->SetBinError(21,72.13876);
   ptPhot_data_EB->SetMinimum(0);
   ptPhot_data_EB->SetMaximum(13150.2);
   ptPhot_data_EB->SetEntries(21660);
   ptPhot_data_EB->SetStats(0);
   ptPhot_data_EB->SetMarkerStyle(20);
   ptPhot_data_EB->SetMarkerSize(0.7);
   ptPhot_data_EB->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_EB->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EB->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.411912e-309,3.237958e-319,2.321196e-310,0,NULL,"brNDC");
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
   entry=leg->AddEntry("ptPhot_data_EB","Data","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Bkg_EB","Bkg","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_EB","Signal","F");
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
