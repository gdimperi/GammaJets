{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Mon Feb 10 21:54:05 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-21046.67,326.25,189420);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,300);
   ptPhot_data_EB->SetBinContent(34,30419);
   ptPhot_data_EB->SetBinContent(35,25786);
   ptPhot_data_EB->SetBinContent(36,21911);
   ptPhot_data_EB->SetBinError(34,174.4104);
   ptPhot_data_EB->SetBinError(35,160.5802);
   ptPhot_data_EB->SetBinError(36,148.0236);
   ptPhot_data_EB->SetMinimum(0);
   ptPhot_data_EB->SetMaximum(42586.6);
   ptPhot_data_EB->SetEntries(78116);
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
   ptPhot_mc_Bkg_EB->SetBinContent(34,11915.28);
   ptPhot_mc_Bkg_EB->SetBinContent(35,9899.839);
   ptPhot_mc_Bkg_EB->SetBinContent(36,7656.599);
   ptPhot_mc_Bkg_EB->SetBinError(34,606.7357);
   ptPhot_mc_Bkg_EB->SetBinError(35,500.6249);
   ptPhot_mc_Bkg_EB->SetBinError(36,377.2145);
   ptPhot_mc_Bkg_EB->SetEntries(12436);
   ptPhot_mc_Bkg_EB->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetLineColor(ci);
   ptPhot_mc_Bkg_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EB,"");
   
   TH1F *ptPhot_mc_Signal_EB = new TH1F("ptPhot_mc_Signal_EB","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB->SetBinContent(34,8547.797);
   ptPhot_mc_Signal_EB->SetBinContent(35,7655.09);
   ptPhot_mc_Signal_EB->SetBinContent(36,6197.417);
   ptPhot_mc_Signal_EB->SetBinError(34,224.0299);
   ptPhot_mc_Signal_EB->SetBinError(35,237.3846);
   ptPhot_mc_Signal_EB->SetBinError(36,175.3965);
   ptPhot_mc_Signal_EB->SetEntries(45785);
   ptPhot_mc_Signal_EB->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetLineColor(ci);
   ptPhot_mc_Signal_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EB,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,300);
   ptPhot_data_EB->SetBinContent(34,30419);
   ptPhot_data_EB->SetBinContent(35,25786);
   ptPhot_data_EB->SetBinContent(36,21911);
   ptPhot_data_EB->SetBinError(34,174.4104);
   ptPhot_data_EB->SetBinError(35,160.5802);
   ptPhot_data_EB->SetBinError(36,148.0236);
   ptPhot_data_EB->SetMinimum(0);
   ptPhot_data_EB->SetMaximum(42586.6);
   ptPhot_data_EB->SetEntries(78116);
   ptPhot_data_EB->SetStats(0);
   ptPhot_data_EB->SetMarkerStyle(20);
   ptPhot_data_EB->SetMarkerSize(0.7);
   ptPhot_data_EB->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_EB->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EB->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.256388e-315,0,0,0,NULL,"brNDC");
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
