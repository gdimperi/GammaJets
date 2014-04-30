{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Tue Feb 18 12:57:47 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-162.5,-12153.38,1087.5,109380.4);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0,0,1,1);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetFrameBorderMode(0);
   
   TH1F *ptPhot_data_EE = new TH1F("ptPhot_data_EE","ptPhot_data_EE",60,0,1000);
   ptPhot_data_EE->SetBinContent(10,11271);
   ptPhot_data_EE->SetBinContent(11,70316);
   ptPhot_data_EE->SetBinError(10,106.165);
   ptPhot_data_EE->SetBinError(11,265.1716);
   ptPhot_data_EE->SetMinimum(0.1);
   ptPhot_data_EE->SetMaximum(393769.6);
   ptPhot_data_EE->SetEntries(81587);
   ptPhot_data_EE->SetStats(0);
   ptPhot_data_EE->SetMarkerStyle(20);
   ptPhot_data_EE->SetMarkerSize(0.7);
   ptPhot_data_EE->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EE->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EE->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_data_EE->Draw("PE");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_1 = new TH1F("_stack_1","",60,0,1000);
   _stack_1->SetMinimum(0);
   _stack_1->SetMaximum(65319.5);
   _stack_1->SetDirectory(0);
   _stack_1->SetStats(0);
   ->SetHistogram(_stack_1);
   
   
   TH1F *ptPhot_mc_Bkg_EE = new TH1F("ptPhot_mc_Bkg_EE","ptPhot_mc_Bkg_EE",60,0,1000);
   ptPhot_mc_Bkg_EE->SetBinContent(10,2184.317);
   ptPhot_mc_Bkg_EE->SetBinContent(11,13993.13);
   ptPhot_mc_Bkg_EE->SetBinError(10,290.5275);
   ptPhot_mc_Bkg_EE->SetBinError(11,647.4869);
   ptPhot_mc_Bkg_EE->SetEntries(7391);
   ptPhot_mc_Bkg_EE->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EE->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EE->SetLineColor(ci);
   ptPhot_mc_Bkg_EE->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EE,"");
   
   TH1F *ptPhot_mc_Signal_EE = new TH1F("ptPhot_mc_Signal_EE","ptPhot_mc_Signal_EE",60,0,1000);
   ptPhot_mc_Signal_EE->SetBinContent(10,7457.843);
   ptPhot_mc_Signal_EE->SetBinContent(11,48215.93);
   ptPhot_mc_Signal_EE->SetBinError(10,145.3886);
   ptPhot_mc_Signal_EE->SetBinError(11,480.2578);
   ptPhot_mc_Signal_EE->SetEntries(114859);
   ptPhot_mc_Signal_EE->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EE->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EE->SetLineColor(ci);
   ptPhot_mc_Signal_EE->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EE,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EE = new TH1F("ptPhot_data_EE","ptPhot_data_EE",60,0,1000);
   ptPhot_data_EE->SetBinContent(10,11271);
   ptPhot_data_EE->SetBinContent(11,70316);
   ptPhot_data_EE->SetBinError(10,106.165);
   ptPhot_data_EE->SetBinError(11,265.1716);
   ptPhot_data_EE->SetMinimum(0.1);
   ptPhot_data_EE->SetMaximum(393769.6);
   ptPhot_data_EE->SetEntries(81587);
   ptPhot_data_EE->SetStats(0);
   ptPhot_data_EE->SetMarkerStyle(20);
   ptPhot_data_EE->SetMarkerSize(0.7);
   ptPhot_data_EE->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EE->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EE->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_data_EE->Draw("PESAME");
   
   TLegend *leg = new TLegend(-1.79776e+255,3.097996e+216,-1.340994e-108,1.408782e+173,NULL,"brNDC");
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
   pad1->Modified();
   ptPhot->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "pad2",0,0,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetBottomMargin(0.2);
   pad2->SetFrameBorderMode(0);
   
   TH1F *ratio = new TH1F("ratio","ptPhot_data_EE",60,0,1000);
   ratio->SetBinContent(10,1.168929);
   ratio->SetBinContent(11,1.130318);
   ratio->SetBinError(10,0.04089509);
   ratio->SetBinError(11,0.0152552);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2774.896);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("Data/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,1000,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","ptPhot_data_EE",60,0,1000);
   ratio->SetBinContent(10,1.168929);
   ratio->SetBinContent(11,1.130318);
   ratio->SetBinError(10,0.04089509);
   ratio->SetBinError(11,0.0152552);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2774.896);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("Data/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   ptPhot->cd();
   ptPhot->Modified();
   ptPhot->cd();
   ptPhot->SetSelected(ptPhot);
}
