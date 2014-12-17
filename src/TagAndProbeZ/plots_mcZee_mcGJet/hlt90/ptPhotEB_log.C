{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Nov 29 19:52:18 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.05305806,326.25,0.4775225);
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
   
   TH1F *ptPhot_mc_Z_EB__10 = new TH1F("ptPhot_mc_Z_EB__10","ptPhot_mc_Z_EB",60,0,300);
   ptPhot_mc_Z_EB__10->SetBinContent(9,0.4065769);
   ptPhot_mc_Z_EB__10->SetBinContent(10,0.257206);
   ptPhot_mc_Z_EB__10->SetBinContent(11,0.1612295);
   ptPhot_mc_Z_EB__10->SetBinContent(12,0.1030772);
   ptPhot_mc_Z_EB__10->SetBinContent(13,0.07191042);
   ptPhot_mc_Z_EB__10->SetBinError(9,0.002728125);
   ptPhot_mc_Z_EB__10->SetBinError(10,0.002187539);
   ptPhot_mc_Z_EB__10->SetBinError(11,0.002205788);
   ptPhot_mc_Z_EB__10->SetBinError(12,0.002128885);
   ptPhot_mc_Z_EB__10->SetBinError(13,0.001958682);
   ptPhot_mc_Z_EB__10->SetMinimum(4.456001e-07);
   ptPhot_mc_Z_EB__10->SetMaximum(2.276831);
   ptPhot_mc_Z_EB__10->SetEntries(78589);
   ptPhot_mc_Z_EB__10->SetDirectory(0);
   ptPhot_mc_Z_EB__10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__10->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__10->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__10->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__10->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EB__10->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EB__10->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_EB__10->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EB__11 = new TH1F("ptPhot_mc_Signal_EB__11","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB__11->SetBinContent(22,0.1929361);
   ptPhot_mc_Signal_EB__11->SetBinContent(23,0.1587142);
   ptPhot_mc_Signal_EB__11->SetBinContent(24,0.1287216);
   ptPhot_mc_Signal_EB__11->SetBinContent(25,0.105088);
   ptPhot_mc_Signal_EB__11->SetBinContent(26,0.08795859);
   ptPhot_mc_Signal_EB__11->SetBinContent(27,0.07295357);
   ptPhot_mc_Signal_EB__11->SetBinContent(28,0.06190776);
   ptPhot_mc_Signal_EB__11->SetBinContent(29,0.05168139);
   ptPhot_mc_Signal_EB__11->SetBinContent(30,0.04340463);
   ptPhot_mc_Signal_EB__11->SetBinContent(31,0.03688936);
   ptPhot_mc_Signal_EB__11->SetBinContent(32,0.03189266);
   ptPhot_mc_Signal_EB__11->SetBinContent(33,0.02785216);
   ptPhot_mc_Signal_EB__11->SetBinError(22,0.001958993);
   ptPhot_mc_Signal_EB__11->SetBinError(23,0.001507613);
   ptPhot_mc_Signal_EB__11->SetBinError(24,0.001032429);
   ptPhot_mc_Signal_EB__11->SetBinError(25,0.0008458023);
   ptPhot_mc_Signal_EB__11->SetBinError(26,0.0007493154);
   ptPhot_mc_Signal_EB__11->SetBinError(27,0.0006252217);
   ptPhot_mc_Signal_EB__11->SetBinError(28,0.0005926454);
   ptPhot_mc_Signal_EB__11->SetBinError(29,0.0004793943);
   ptPhot_mc_Signal_EB__11->SetBinError(30,0.0004094691);
   ptPhot_mc_Signal_EB__11->SetBinError(31,0.0003382839);
   ptPhot_mc_Signal_EB__11->SetBinError(32,0.0003189249);
   ptPhot_mc_Signal_EB__11->SetBinError(33,0.0003152081);
   ptPhot_mc_Signal_EB__11->SetEntries(1049663);
   ptPhot_mc_Signal_EB__11->SetDirectory(0);
   ptPhot_mc_Signal_EB__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__11->SetLineColor(ci);
   ptPhot_mc_Signal_EB__11->SetLineWidth(2);
   ptPhot_mc_Signal_EB__11->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EB__12 = new TH1F("ptPhot_mc_Z_EB__12","ptPhot_mc_Z_EB",60,0,300);
   ptPhot_mc_Z_EB__12->SetBinContent(9,0.4065769);
   ptPhot_mc_Z_EB__12->SetBinContent(10,0.257206);
   ptPhot_mc_Z_EB__12->SetBinContent(11,0.1612295);
   ptPhot_mc_Z_EB__12->SetBinContent(12,0.1030772);
   ptPhot_mc_Z_EB__12->SetBinContent(13,0.07191042);
   ptPhot_mc_Z_EB__12->SetBinError(9,0.002728125);
   ptPhot_mc_Z_EB__12->SetBinError(10,0.002187539);
   ptPhot_mc_Z_EB__12->SetBinError(11,0.002205788);
   ptPhot_mc_Z_EB__12->SetBinError(12,0.002128885);
   ptPhot_mc_Z_EB__12->SetBinError(13,0.001958682);
   ptPhot_mc_Z_EB__12->SetMinimum(4.456001e-07);
   ptPhot_mc_Z_EB__12->SetMaximum(2.276831);
   ptPhot_mc_Z_EB__12->SetEntries(78589);
   ptPhot_mc_Z_EB__12->SetDirectory(0);
   ptPhot_mc_Z_EB__12->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__12->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__12->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__12->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__12->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__12->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EB__12->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EB__12->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_EB__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(4.452047e-313,4.834755e-310,3.777153e-312,2.207273e-305,NULL,"brNDC");
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
   entry=leg->AddEntry("ptPhot_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_EB","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_mc_Z_EB",60,0,300);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","ptPhot_mc_Z_EB",60,0,300);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
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
