{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Tue Feb 18 12:58:55 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-162.5,-3534.914,1087.5,31814.22);
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
   ptPhot_data_EB->SetBinContent(7,20452);
   ptPhot_data_EB->SetBinContent(8,16363);
   ptPhot_data_EB->SetBinContent(9,8883);
   ptPhot_data_EB->SetBinContent(10,4810);
   ptPhot_data_EB->SetBinError(7,143.0105);
   ptPhot_data_EB->SetBinError(8,127.9179);
   ptPhot_data_EB->SetBinError(9,94.24967);
   ptPhot_data_EB->SetBinError(10,69.35416);
   ptPhot_data_EB->SetMinimum(0.1);
   ptPhot_data_EB->SetMaximum(114531.2);
   ptPhot_data_EB->SetEntries(50508);
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
   _stack_3->SetMaximum(18085.57);
   _stack_3->SetDirectory(0);
   _stack_3->SetStats(0);
   ->SetHistogram(_stack_3);
   
   
   TH1F *ptPhot_mc_Bkg_EB = new TH1F("ptPhot_mc_Bkg_EB","ptPhot_mc_Bkg_EB",60,0,1000);
   ptPhot_mc_Bkg_EB->SetBinContent(7,3421.511);
   ptPhot_mc_Bkg_EB->SetBinContent(8,2633.607);
   ptPhot_mc_Bkg_EB->SetBinContent(9,1165.296);
   ptPhot_mc_Bkg_EB->SetBinContent(10,545.5778);
   ptPhot_mc_Bkg_EB->SetBinError(7,113.7193);
   ptPhot_mc_Bkg_EB->SetBinError(8,107.4926);
   ptPhot_mc_Bkg_EB->SetBinError(9,39.30944);
   ptPhot_mc_Bkg_EB->SetBinError(10,23.00773);
   ptPhot_mc_Bkg_EB->SetEntries(52207);
   ptPhot_mc_Bkg_EB->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_EB->SetLineColor(ci);
   ptPhot_mc_Bkg_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_EB,"");
   
   TH1F *ptPhot_mc_Signal_EB = new TH1F("ptPhot_mc_Signal_EB","ptPhot_mc_Signal_EB",60,0,1000);
   ptPhot_mc_Signal_EB->SetBinContent(7,13802.84);
   ptPhot_mc_Signal_EB->SetBinContent(8,11367.38);
   ptPhot_mc_Signal_EB->SetBinContent(9,6241.471);
   ptPhot_mc_Signal_EB->SetBinContent(10,3359.703);
   ptPhot_mc_Signal_EB->SetBinError(7,88.4919);
   ptPhot_mc_Signal_EB->SetBinError(8,52.22154);
   ptPhot_mc_Signal_EB->SetBinError(9,32.26337);
   ptPhot_mc_Signal_EB->SetBinError(10,19.53146);
   ptPhot_mc_Signal_EB->SetEntries(1049663);
   ptPhot_mc_Signal_EB->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_EB->SetLineColor(ci);
   ptPhot_mc_Signal_EB->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_EB,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_EB = new TH1F("ptPhot_data_EB","ptPhot_data_EB",60,0,1000);
   ptPhot_data_EB->SetBinContent(7,20452);
   ptPhot_data_EB->SetBinContent(8,16363);
   ptPhot_data_EB->SetBinContent(9,8883);
   ptPhot_data_EB->SetBinContent(10,4810);
   ptPhot_data_EB->SetBinError(7,143.0105);
   ptPhot_data_EB->SetBinError(8,127.9179);
   ptPhot_data_EB->SetBinError(9,94.24967);
   ptPhot_data_EB->SetBinError(10,69.35416);
   ptPhot_data_EB->SetMinimum(0.1);
   ptPhot_data_EB->SetMaximum(114531.2);
   ptPhot_data_EB->SetEntries(50508);
   ptPhot_data_EB->SetStats(0);
   ptPhot_data_EB->SetMarkerStyle(20);
   ptPhot_data_EB->SetMarkerSize(0.7);
   ptPhot_data_EB->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_EB->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_data_EB->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
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
   ratio->SetBinContent(7,1.187389);
   ratio->SetBinContent(8,1.168703);
   ratio->SetBinContent(9,1.199309);
   ratio->SetBinContent(10,1.231665);
   ratio->SetBinError(7,0.01294633);
   ratio->SetBinError(8,0.01352716);
   ratio->SetBinError(9,0.01515669);
   ratio->SetBinError(10,0.02014902);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(23234.32);
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
   ratio->SetBinContent(7,1.187389);
   ratio->SetBinContent(8,1.168703);
   ratio->SetBinContent(9,1.199309);
   ratio->SetBinContent(10,1.231665);
   ratio->SetBinError(7,0.01294633);
   ratio->SetBinError(8,0.01352716);
   ratio->SetBinError(9,0.01515669);
   ratio->SetBinError(10,0.02014902);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(23234.32);
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
