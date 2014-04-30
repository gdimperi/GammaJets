{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Tue Feb 18 12:52:16 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-162.5,-9927.556,1087.5,89348);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,1000);
   ptPhot_data_EB->SetBinContent(7,3446);
   ptPhot_data_EB->SetBinContent(8,2427);
   ptPhot_data_EB->SetBinContent(9,1125);
   ptPhot_data_EB->SetBinContent(10,513);
   ptPhot_data_EB->SetBinError(7,58.70264);
   ptPhot_data_EB->SetBinError(8,49.26459);
   ptPhot_data_EB->SetBinError(9,33.54102);
   ptPhot_data_EB->SetBinError(10,22.6495);
   ptPhot_data_EB->SetMinimum(0);
   ptPhot_data_EB->SetMaximum(4824.4);
   ptPhot_data_EB->SetEntries(7511);
   ptPhot_data_EB->SetStats(0);
   ptPhot_data_EB->SetMarkerStyle(20);
   ptPhot_data_EB->SetMarkerSize(0.7);
   ptPhot_data_EB->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EB->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EB->Draw("PE");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *ptPhot_mc_Bkg_EB = new TH1F("ptPhot_mc_Bkg_EB","ptPhot_mc_Bkg_EB",60,0,1000);
   ptPhot_mc_Bkg_EB->SetBinContent(7,2192.523);
   ptPhot_mc_Bkg_EB->SetBinContent(8,1654.78);
   ptPhot_mc_Bkg_EB->SetBinContent(9,704.5613);
   ptPhot_mc_Bkg_EB->SetBinContent(10,360.0797);
   ptPhot_mc_Bkg_EB->SetBinError(7,64.2678);
   ptPhot_mc_Bkg_EB->SetBinError(8,96.9632);
   ptPhot_mc_Bkg_EB->SetBinError(9,32.0115);
   ptPhot_mc_Bkg_EB->SetBinError(10,20.03134);
   ptPhot_mc_Bkg_EB->SetEntries(13126);
   ptPhot_mc_Bkg_EB->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetLineColor(ci);
   ptPhot_mc_Bkg_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EB,"");
   
   TH1F *ptPhot_mc_Signal_EB = new TH1F("ptPhot_mc_Signal_EB","ptPhot_mc_Signal_EB",60,0,1000);
   ptPhot_mc_Signal_EB->SetBinContent(7,181.5404);
   ptPhot_mc_Signal_EB->SetBinContent(8,116.7853);
   ptPhot_mc_Signal_EB->SetBinContent(9,50.30413);
   ptPhot_mc_Signal_EB->SetBinContent(10,21.1452);
   ptPhot_mc_Signal_EB->SetBinError(7,13.16398);
   ptPhot_mc_Signal_EB->SetBinError(8,9.649404);
   ptPhot_mc_Signal_EB->SetBinError(9,5.664247);
   ptPhot_mc_Signal_EB->SetBinError(10,2.233625);
   ptPhot_mc_Signal_EB->SetEntries(7405);
   ptPhot_mc_Signal_EB->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetLineColor(ci);
   ptPhot_mc_Signal_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EB,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,1000);
   ptPhot_data_EB->SetBinContent(7,3446);
   ptPhot_data_EB->SetBinContent(8,2427);
   ptPhot_data_EB->SetBinContent(9,1125);
   ptPhot_data_EB->SetBinContent(10,513);
   ptPhot_data_EB->SetBinError(7,58.70264);
   ptPhot_data_EB->SetBinError(8,49.26459);
   ptPhot_data_EB->SetBinError(9,33.54102);
   ptPhot_data_EB->SetBinError(10,22.6495);
   ptPhot_data_EB->SetMinimum(0);
   ptPhot_data_EB->SetMaximum(4824.4);
   ptPhot_data_EB->SetEntries(7511);
   ptPhot_data_EB->SetStats(0);
   ptPhot_data_EB->SetMarkerStyle(20);
   ptPhot_data_EB->SetMarkerSize(0.7);
   ptPhot_data_EB->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EB->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EB->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.411912e-309,3.237958e-319,2.337666e-310,0,NULL,"brNDC");
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
