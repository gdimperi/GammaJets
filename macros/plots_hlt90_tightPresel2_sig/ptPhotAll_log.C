{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Tue Feb 18 12:58:53 2014) by ROOT version5.32/00
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
   
   TH1F *ptPhot_data_All = new TH1F("ptPhot_data_All","ptPhot_data_All",60,0,1000);
   ptPhot_data_All->SetBinContent(7,57438);
   ptPhot_data_All->SetBinContent(8,43643);
   ptPhot_data_All->SetBinContent(9,22257);
   ptPhot_data_All->SetBinContent(10,11159);
   ptPhot_data_All->SetBinError(7,239.6623);
   ptPhot_data_All->SetBinError(8,208.9091);
   ptPhot_data_All->SetBinError(9,149.1878);
   ptPhot_data_All->SetBinError(10,105.6362);
   ptPhot_data_All->SetMinimum(0.1);
   ptPhot_data_All->SetMaximum(321652.8);
   ptPhot_data_All->SetEntries(134497);
   ptPhot_data_All->SetStats(0);
   ptPhot_data_All->SetMarkerStyle(20);
   ptPhot_data_All->SetMarkerSize(0.7);
   ptPhot_data_All->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_All->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_All->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_data_All->Draw("PE");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   
   TH1F *_stack_2 = new TH1F("_stack_2","",60,0,1000);
   _stack_2->SetMinimum(0);
   _stack_2->SetMaximum(48107.92);
   _stack_2->SetDirectory(0);
   _stack_2->SetStats(0);
   ->SetHistogram(_stack_2);
   
   
   TH1F *ptPhot_mc_Bkg_All = new TH1F("ptPhot_mc_Bkg_All","ptPhot_mc_Bkg_All",60,0,1000);
   ptPhot_mc_Bkg_All->SetBinContent(7,21436.39);
   ptPhot_mc_Bkg_All->SetBinContent(8,14161.42);
   ptPhot_mc_Bkg_All->SetBinContent(9,6373.172);
   ptPhot_mc_Bkg_All->SetBinContent(10,2867.751);
   ptPhot_mc_Bkg_All->SetBinError(7,333.0988);
   ptPhot_mc_Bkg_All->SetBinError(8,212.9584);
   ptPhot_mc_Bkg_All->SetBinError(9,114.7055);
   ptPhot_mc_Bkg_All->SetBinError(10,54.37886);
   ptPhot_mc_Bkg_All->SetEntries(159446);
   ptPhot_mc_Bkg_All->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_All->SetFillColor(ci);

   ci = TColor::GetColor("#ff00ff");
   ptPhot_mc_Bkg_All->SetLineColor(ci);
   ptPhot_mc_Bkg_All->SetLineWidth(2);
   ->Add(ptPhot_mc_Bkg_All,"");
   
   TH1F *ptPhot_mc_Signal_All = new TH1F("ptPhot_mc_Signal_All","ptPhot_mc_Signal_All",60,0,1000);
   ptPhot_mc_Signal_All->SetBinContent(7,24380.67);
   ptPhot_mc_Signal_All->SetBinContent(8,19520.62);
   ptPhot_mc_Signal_All->SetBinContent(9,10428.45);
   ptPhot_mc_Signal_All->SetBinContent(10,5494.369);
   ptPhot_mc_Signal_All->SetBinError(7,138.569);
   ptPhot_mc_Signal_All->SetBinError(8,80.30675);
   ptPhot_mc_Signal_All->SetBinError(9,45.32663);
   ptPhot_mc_Signal_All->SetBinError(10,27.36111);
   ptPhot_mc_Signal_All->SetEntries(1709353);
   ptPhot_mc_Signal_All->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_All->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   ptPhot_mc_Signal_All->SetLineColor(ci);
   ptPhot_mc_Signal_All->SetLineWidth(2);
   ->Add(ptPhot_mc_Signal_All,"");
   ->Draw("hsame");
   
   TH1F *ptPhot_data_All = new TH1F("ptPhot_data_All","ptPhot_data_All",60,0,1000);
   ptPhot_data_All->SetBinContent(7,57438);
   ptPhot_data_All->SetBinContent(8,43643);
   ptPhot_data_All->SetBinContent(9,22257);
   ptPhot_data_All->SetBinContent(10,11159);
   ptPhot_data_All->SetBinError(7,239.6623);
   ptPhot_data_All->SetBinError(8,208.9091);
   ptPhot_data_All->SetBinError(9,149.1878);
   ptPhot_data_All->SetBinError(10,105.6362);
   ptPhot_data_All->SetMinimum(0.1);
   ptPhot_data_All->SetMaximum(321652.8);
   ptPhot_data_All->SetEntries(134497);
   ptPhot_data_All->SetStats(0);
   ptPhot_data_All->SetMarkerStyle(20);
   ptPhot_data_All->SetMarkerSize(0.7);
   ptPhot_data_All->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_All->GetYaxis()->SetTitle("Entries/16.6666666667");
   ptPhot_data_All->GetYaxis()->SetTitleOffset(0.9);
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_data_All",60,0,1000);
   ratio->SetBinContent(7,1.253638);
   ratio->SetBinContent(8,1.295735);
   ratio->SetBinContent(9,1.324694);
   ratio->SetBinContent(10,1.33447);
   ratio->SetBinError(7,0.01117164);
   ratio->SetBinError(8,0.01072985);
   ratio->SetBinError(9,0.0131683);
   ratio->SetBinError(10,0.01593611);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(40654.73);
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_data_All",60,0,1000);
   ratio->SetBinContent(7,1.253638);
   ratio->SetBinContent(8,1.295735);
   ratio->SetBinContent(9,1.324694);
   ratio->SetBinContent(10,1.33447);
   ratio->SetBinError(7,0.01117164);
   ratio->SetBinError(8,0.01072985);
   ratio->SetBinError(9,0.0131683);
   ratio->SetBinError(10,0.01593611);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(40654.73);
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
