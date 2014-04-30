{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Mon Feb 10 21:54:04 2014) by ROOT version5.32/00
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
   
   TH1F *ptPhot_data_EE = new TH1F("ptPhot_data_EE","ptPhot_data_EE",60,0,300);
   ptPhot_data_EE->SetBinContent(34,18084);
   ptPhot_data_EE->SetBinContent(35,14258);
   ptPhot_data_EE->SetBinContent(36,12370);
   ptPhot_data_EE->SetBinError(34,134.4768);
   ptPhot_data_EE->SetBinError(35,119.4069);
   ptPhot_data_EE->SetBinError(36,111.2205);
   ptPhot_data_EE->SetMinimum(0);
   ptPhot_data_EE->SetMaximum(25317.6);
   ptPhot_data_EE->SetEntries(44712);
   ptPhot_data_EE->SetStats(0);
   ptPhot_data_EE->SetMarkerStyle(20);
   ptPhot_data_EE->SetMarkerSize(0.7);
   ptPhot_data_EE->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EE->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_EE->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EE->Draw("PE");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *ptPhot_mc_Bkg_EE = new TH1F("ptPhot_mc_Bkg_EE","ptPhot_mc_Bkg_EE",60,0,300);
   ptPhot_mc_Bkg_EE->SetBinContent(34,8169.79);
   ptPhot_mc_Bkg_EE->SetBinContent(35,6440.523);
   ptPhot_mc_Bkg_EE->SetBinContent(36,5390.085);
   ptPhot_mc_Bkg_EE->SetBinError(34,456.332);
   ptPhot_mc_Bkg_EE->SetBinError(35,360.9294);
   ptPhot_mc_Bkg_EE->SetBinError(36,302.947);
   ptPhot_mc_Bkg_EE->SetEntries(8060);
   ptPhot_mc_Bkg_EE->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EE->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EE->SetLineColor(ci);
   ptPhot_mc_Bkg_EE->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EE,"");
   
   TH1F *ptPhot_mc_Signal_EE = new TH1F("ptPhot_mc_Signal_EE","ptPhot_mc_Signal_EE",60,0,300);
   ptPhot_mc_Signal_EE->SetBinContent(34,1315.16);
   ptPhot_mc_Signal_EE->SetBinContent(35,1114.659);
   ptPhot_mc_Signal_EE->SetBinContent(36,917.9316);
   ptPhot_mc_Signal_EE->SetBinError(34,43.31105);
   ptPhot_mc_Signal_EE->SetBinError(35,83.0783);
   ptPhot_mc_Signal_EE->SetBinError(36,31.74767);
   ptPhot_mc_Signal_EE->SetEntries(6050);
   ptPhot_mc_Signal_EE->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EE->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EE->SetLineColor(ci);
   ptPhot_mc_Signal_EE->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EE,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EE = new TH1F("ptPhot_data_EE","ptPhot_data_EE",60,0,300);
   ptPhot_data_EE->SetBinContent(34,18084);
   ptPhot_data_EE->SetBinContent(35,14258);
   ptPhot_data_EE->SetBinContent(36,12370);
   ptPhot_data_EE->SetBinError(34,134.4768);
   ptPhot_data_EE->SetBinError(35,119.4069);
   ptPhot_data_EE->SetBinError(36,111.2205);
   ptPhot_data_EE->SetMinimum(0);
   ptPhot_data_EE->SetMaximum(25317.6);
   ptPhot_data_EE->SetEntries(44712);
   ptPhot_data_EE->SetStats(0);
   ptPhot_data_EE->SetMarkerStyle(20);
   ptPhot_data_EE->SetMarkerSize(0.7);
   ptPhot_data_EE->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EE->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_EE->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_data_EE->Draw("PESAME");
   
   TLegend *leg = new TLegend(3.506354e+151,3.680699e+180,1.471871e-319,1.809515e-319,NULL,"brNDC");
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
