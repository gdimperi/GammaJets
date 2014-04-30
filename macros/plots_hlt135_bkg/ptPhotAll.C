{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Mon Feb 10 21:54:05 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-3125.63,326.25,28130.67);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_data_All = new TH1F("ptPhot_data_All","ptPhot_data_All",60,0,300);
   ptPhot_data_All->SetBinContent(34,121770);
   ptPhot_data_All->SetBinContent(35,103297);
   ptPhot_data_All->SetBinContent(36,89076);
   ptPhot_data_All->SetBinError(34,348.9556);
   ptPhot_data_All->SetBinError(35,321.3985);
   ptPhot_data_All->SetBinError(36,298.456);
   ptPhot_data_All->SetMinimum(0);
   ptPhot_data_All->SetMaximum(170478);
   ptPhot_data_All->SetEntries(314143);
   ptPhot_data_All->SetStats(0);
   ptPhot_data_All->SetMarkerStyle(20);
   ptPhot_data_All->SetMarkerSize(0.7);
   ptPhot_data_All->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_All->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_All->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_All->Draw("PE");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *ptPhot_mc_Bkg_All = new TH1F("ptPhot_mc_Bkg_All","ptPhot_mc_Bkg_All",60,0,300);
   ptPhot_mc_Bkg_All->SetBinContent(34,30079.65);
   ptPhot_mc_Bkg_All->SetBinContent(35,23412.97);
   ptPhot_mc_Bkg_All->SetBinContent(36,18702.82);
   ptPhot_mc_Bkg_All->SetBinError(34,971.7917);
   ptPhot_mc_Bkg_All->SetBinError(35,736.6794);
   ptPhot_mc_Bkg_All->SetBinError(36,580.4093);
   ptPhot_mc_Bkg_All->SetEntries(35191);
   ptPhot_mc_Bkg_All->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_All->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_All->SetLineColor(ci);
   ptPhot_mc_Bkg_All->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_All,"");
   
   TH1F *ptPhot_mc_Signal_All = new TH1F("ptPhot_mc_Signal_All","ptPhot_mc_Signal_All",60,0,300);
   ptPhot_mc_Signal_All->SetBinContent(34,66063.7);
   ptPhot_mc_Signal_All->SetBinContent(35,57795.54);
   ptPhot_mc_Signal_All->SetBinContent(36,48952.94);
   ptPhot_mc_Signal_All->SetBinError(34,568.8559);
   ptPhot_mc_Signal_All->SetBinError(35,542.9889);
   ptPhot_mc_Signal_All->SetBinError(36,392.7885);
   ptPhot_mc_Signal_All->SetEntries(366758);
   ptPhot_mc_Signal_All->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_All->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_All->SetLineColor(ci);
   ptPhot_mc_Signal_All->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_All,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_All = new TH1F("ptPhot_data_All","ptPhot_data_All",60,0,300);
   ptPhot_data_All->SetBinContent(34,121770);
   ptPhot_data_All->SetBinContent(35,103297);
   ptPhot_data_All->SetBinContent(36,89076);
   ptPhot_data_All->SetBinError(34,348.9556);
   ptPhot_data_All->SetBinError(35,321.3985);
   ptPhot_data_All->SetBinError(36,298.456);
   ptPhot_data_All->SetMinimum(0);
   ptPhot_data_All->SetMaximum(170478);
   ptPhot_data_All->SetEntries(314143);
   ptPhot_data_All->SetStats(0);
   ptPhot_data_All->SetMarkerStyle(20);
   ptPhot_data_All->SetMarkerSize(0.7);
   ptPhot_data_All->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_All->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_All->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_All->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","All","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ptPhot_data_All","Data","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Bkg_All","Bkg","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_All","Signal","F");
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
