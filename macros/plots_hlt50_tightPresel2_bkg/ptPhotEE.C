{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Tue Feb 18 12:50:42 2014) by ROOT version5.32/00
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
   
   TH1F *ptPhot_data_EE = new TH1F("ptPhot_data_EE","ptPhot_data_EE",60,0,1000);
   ptPhot_data_EE->SetBinContent(4,1160);
   ptPhot_data_EE->SetBinContent(5,6185);
   ptPhot_data_EE->SetBinContent(6,902);
   ptPhot_data_EE->SetBinError(4,34.05877);
   ptPhot_data_EE->SetBinError(5,78.64477);
   ptPhot_data_EE->SetBinError(6,30.03331);
   ptPhot_data_EE->SetMinimum(0);
   ptPhot_data_EE->SetMaximum(8659);
   ptPhot_data_EE->SetEntries(8247);
   ptPhot_data_EE->SetStats(0);
   ptPhot_data_EE->SetMarkerStyle(20);
   ptPhot_data_EE->SetMarkerSize(0.7);
   ptPhot_data_EE->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EE->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EE->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EE->Draw("PE");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *ptPhot_mc_Bkg_EE = new TH1F("ptPhot_mc_Bkg_EE","ptPhot_mc_Bkg_EE",60,0,1000);
   ptPhot_mc_Bkg_EE->SetBinContent(4,869.9286);
   ptPhot_mc_Bkg_EE->SetBinContent(5,4205.318);
   ptPhot_mc_Bkg_EE->SetBinContent(6,629.0751);
   ptPhot_mc_Bkg_EE->SetBinError(4,47.8106);
   ptPhot_mc_Bkg_EE->SetBinError(5,90.27624);
   ptPhot_mc_Bkg_EE->SetBinError(6,24.70502);
   ptPhot_mc_Bkg_EE->SetEntries(27850);
   ptPhot_mc_Bkg_EE->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EE->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EE->SetLineColor(ci);
   ptPhot_mc_Bkg_EE->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EE,"");
   
   TH1F *ptPhot_mc_Signal_EE = new TH1F("ptPhot_mc_Signal_EE","ptPhot_mc_Signal_EE",60,0,1000);
   ptPhot_mc_Signal_EE->SetBinContent(4,38.22416);
   ptPhot_mc_Signal_EE->SetBinContent(5,134.3249);
   ptPhot_mc_Signal_EE->SetBinContent(6,25.98187);
   ptPhot_mc_Signal_EE->SetBinError(4,8.227101);
   ptPhot_mc_Signal_EE->SetBinError(5,11.12881);
   ptPhot_mc_Signal_EE->SetBinError(6,4.95735);
   ptPhot_mc_Signal_EE->SetEntries(4344);
   ptPhot_mc_Signal_EE->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EE->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EE->SetLineColor(ci);
   ptPhot_mc_Signal_EE->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EE,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EE = new TH1F("ptPhot_data_EE","ptPhot_data_EE",60,0,1000);
   ptPhot_data_EE->SetBinContent(4,1160);
   ptPhot_data_EE->SetBinContent(5,6185);
   ptPhot_data_EE->SetBinContent(6,902);
   ptPhot_data_EE->SetBinError(4,34.05877);
   ptPhot_data_EE->SetBinError(5,78.64477);
   ptPhot_data_EE->SetBinError(6,30.03331);
   ptPhot_data_EE->SetMinimum(0);
   ptPhot_data_EE->SetMaximum(8659);
   ptPhot_data_EE->SetEntries(8247);
   ptPhot_data_EE->SetStats(0);
   ptPhot_data_EE->SetMarkerStyle(20);
   ptPhot_data_EE->SetMarkerSize(0.7);
   ptPhot_data_EE->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EE->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EE->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EE->Draw("PESAME");
   
   TLegend *leg = new TLegend(3.506354e+151,3.680699e+180,4.307083e-57,1.809515e-319,NULL,"brNDC");
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
   entry=leg->AddEntry("ptPhot_data_EE","Data","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Bkg_EE","Bkg","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_EE","Signal","F");
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
