{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Tue Feb 18 12:52:13 2014) by ROOT version5.32/00
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
   ptPhot_data_EE->SetBinContent(7,4751);
   ptPhot_data_EE->SetBinContent(8,3358);
   ptPhot_data_EE->SetBinContent(9,1552);
   ptPhot_data_EE->SetBinContent(10,682);
   ptPhot_data_EE->SetBinError(7,68.9275);
   ptPhot_data_EE->SetBinError(8,57.94825);
   ptPhot_data_EE->SetBinError(9,39.39543);
   ptPhot_data_EE->SetBinError(10,26.11513);
   ptPhot_data_EE->SetMinimum(0);
   ptPhot_data_EE->SetMaximum(6651.4);
   ptPhot_data_EE->SetEntries(10343);
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
   ptPhot_mc_Bkg_EE->SetBinContent(7,2674.3);
   ptPhot_mc_Bkg_EE->SetBinContent(8,1748.946);
   ptPhot_mc_Bkg_EE->SetBinContent(9,735.8144);
   ptPhot_mc_Bkg_EE->SetBinContent(10,309.3532);
   ptPhot_mc_Bkg_EE->SetBinError(7,105.7193);
   ptPhot_mc_Bkg_EE->SetBinError(8,52.73594);
   ptPhot_mc_Bkg_EE->SetBinError(9,31.92255);
   ptPhot_mc_Bkg_EE->SetBinError(10,17.14177);
   ptPhot_mc_Bkg_EE->SetEntries(14299);
   ptPhot_mc_Bkg_EE->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EE->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EE->SetLineColor(ci);
   ptPhot_mc_Bkg_EE->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EE,"");
   
   TH1F *ptPhot_mc_Signal_EE = new TH1F("ptPhot_mc_Signal_EE","ptPhot_mc_Signal_EE",60,0,1000);
   ptPhot_mc_Signal_EE->SetBinContent(7,72.25539);
   ptPhot_mc_Signal_EE->SetBinContent(8,58.77878);
   ptPhot_mc_Signal_EE->SetBinContent(9,36.91681);
   ptPhot_mc_Signal_EE->SetBinContent(10,12.9784);
   ptPhot_mc_Signal_EE->SetBinError(7,9.82967);
   ptPhot_mc_Signal_EE->SetBinError(8,8.833515);
   ptPhot_mc_Signal_EE->SetBinError(9,6.915001);
   ptPhot_mc_Signal_EE->SetBinError(10,3.28153);
   ptPhot_mc_Signal_EE->SetEntries(1600);
   ptPhot_mc_Signal_EE->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EE->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EE->SetLineColor(ci);
   ptPhot_mc_Signal_EE->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EE,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EE = new TH1F("ptPhot_data_EE","ptPhot_data_EE",60,0,1000);
   ptPhot_data_EE->SetBinContent(7,4751);
   ptPhot_data_EE->SetBinContent(8,3358);
   ptPhot_data_EE->SetBinContent(9,1552);
   ptPhot_data_EE->SetBinContent(10,682);
   ptPhot_data_EE->SetBinError(7,68.9275);
   ptPhot_data_EE->SetBinError(8,57.94825);
   ptPhot_data_EE->SetBinError(9,39.39543);
   ptPhot_data_EE->SetBinError(10,26.11513);
   ptPhot_data_EE->SetMinimum(0);
   ptPhot_data_EE->SetMaximum(6651.4);
   ptPhot_data_EE->SetEntries(10343);
   ptPhot_data_EE->SetStats(0);
   ptPhot_data_EE->SetMarkerStyle(20);
   ptPhot_data_EE->SetMarkerSize(0.7);
   ptPhot_data_EE->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EE->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EE->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EE->Draw("PESAME");
   
   TLegend *leg = new TLegend(3.506354e+151,3.680699e+180,-4.655183e+261,1.809515e-319,NULL,"brNDC");
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
