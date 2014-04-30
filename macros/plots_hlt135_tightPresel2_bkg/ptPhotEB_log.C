{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Tue Feb 18 12:53:00 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-162.5,-2137.679,1087.5,19239.11);
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
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,1000);
   ptPhot_data_EB->SetBinContent(10,1974);
   ptPhot_data_EB->SetBinContent(11,12368);
   ptPhot_data_EB->SetBinError(10,44.42972);
   ptPhot_data_EB->SetBinError(11,111.2115);
   ptPhot_data_EB->SetMinimum(0.1);
   ptPhot_data_EB->SetMaximum(69260.8);
   ptPhot_data_EB->SetEntries(14342);
   ptPhot_data_EB->SetStats(0);
   ptPhot_data_EB->SetMarkerStyle(20);
   ptPhot_data_EB->SetMarkerSize(0.7);
   ptPhot_data_EB->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EB->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_data_EB->Draw("PE");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_3 = new TH1F("_stack_3","",60,0,1000);
   _stack_3->SetMinimum(0);
   _stack_3->SetMaximum(7926.328);
   _stack_3->SetDirectory(0);
   _stack_3->SetStats(0);
   ->SetHistogram(_stack_3);
   
   
   TH1F *ptPhot_mc_Bkg_EB = new TH1F("ptPhot_mc_Bkg_EB","ptPhot_mc_Bkg_EB",60,0,1000);
   ptPhot_mc_Bkg_EB->SetBinContent(10,1227.506);
   ptPhot_mc_Bkg_EB->SetBinContent(11,6954.947);
   ptPhot_mc_Bkg_EB->SetBinError(10,204.3356);
   ptPhot_mc_Bkg_EB->SetBinError(11,395.3309);
   ptPhot_mc_Bkg_EB->SetEntries(3085);
   ptPhot_mc_Bkg_EB->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetLineColor(ci);
   ptPhot_mc_Bkg_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EB,"");
   
   TH1F *ptPhot_mc_Signal_EB = new TH1F("ptPhot_mc_Signal_EB","ptPhot_mc_Signal_EB",60,0,1000);
   ptPhot_mc_Signal_EB->SetBinContent(10,112.2532);
   ptPhot_mc_Signal_EB->SetBinContent(11,593.9365);
   ptPhot_mc_Signal_EB->SetBinError(10,14.91504);
   ptPhot_mc_Signal_EB->SetBinError(11,44.91563);
   ptPhot_mc_Signal_EB->SetEntries(1210);
   ptPhot_mc_Signal_EB->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetLineColor(ci);
   ptPhot_mc_Signal_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EB,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,1000);
   ptPhot_data_EB->SetBinContent(10,1974);
   ptPhot_data_EB->SetBinContent(11,12368);
   ptPhot_data_EB->SetBinError(10,44.42972);
   ptPhot_data_EB->SetBinError(11,111.2115);
   ptPhot_data_EB->SetMinimum(0.1);
   ptPhot_data_EB->SetMaximum(69260.8);
   ptPhot_data_EB->SetEntries(14342);
   ptPhot_data_EB->SetStats(0);
   ptPhot_data_EB->SetMarkerStyle(20);
   ptPhot_data_EB->SetMarkerSize(0.7);
   ptPhot_data_EB->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EB->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_data_EB->Draw("PESAME");
   
   TLegend *leg = new TLegend(5.950076e-311,7.189322e-311,8.324589e-311,9.470467e-311,NULL,"brNDC");
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_data_EB",60,0,1000);
   ratio->SetBinContent(10,1.473399);
   ratio->SetBinContent(11,1.638388);
   ratio->SetBinError(10,0.227743);
   ratio->SetBinError(11,0.08760114);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(162.6315);
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_data_EB",60,0,1000);
   ratio->SetBinContent(10,1.473399);
   ratio->SetBinContent(11,1.638388);
   ratio->SetBinError(10,0.227743);
   ratio->SetBinError(11,0.08760114);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(162.6315);
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
