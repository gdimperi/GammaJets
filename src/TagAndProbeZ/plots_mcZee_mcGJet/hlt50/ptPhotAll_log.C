{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Thu Sep 18 00:09:05 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.04987128,326.25,0.4488415);
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
   
   TH1F *ptPhot_mc_Z_All__10 = new TH1F("ptPhot_mc_Z_All__10","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__10->SetBinContent(14,0.3822359);
   ptPhot_mc_Z_All__10->SetBinContent(15,0.2456484);
   ptPhot_mc_Z_All__10->SetBinContent(16,0.1679907);
   ptPhot_mc_Z_All__10->SetBinContent(17,0.1180533);
   ptPhot_mc_Z_All__10->SetBinContent(18,0.08607177);
   ptPhot_mc_Z_All__10->SetBinError(14,0.00248542);
   ptPhot_mc_Z_All__10->SetBinError(15,0.001991738);
   ptPhot_mc_Z_All__10->SetBinError(16,0.001647294);
   ptPhot_mc_Z_All__10->SetBinError(17,0.001380933);
   ptPhot_mc_Z_All__10->SetBinError(18,0.001180608);
   ptPhot_mc_Z_All__10->SetMinimum(1.4475e-06);
   ptPhot_mc_Z_All__10->SetMaximum(2.140521);
   ptPhot_mc_Z_All__10->SetEntries(64314);
   ptPhot_mc_Z_All__10->SetDirectory(0);
   ptPhot_mc_Z_All__10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__10->SetMarkerColor(ci);
   ptPhot_mc_Z_All__10->SetMarkerStyle(20);
   ptPhot_mc_Z_All__10->SetMarkerSize(0.7);
   ptPhot_mc_Z_All__10->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_All__10->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_All__10->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_All__10->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_All__11 = new TH1F("ptPhot_mc_Signal_All__11","ptPhot_mc_Signal_All",60,0,300);
   ptPhot_mc_Signal_All__11->SetBinContent(14,0.3416983);
   ptPhot_mc_Signal_All__11->SetBinContent(15,0.2442794);
   ptPhot_mc_Signal_All__11->SetBinContent(16,0.1793998);
   ptPhot_mc_Signal_All__11->SetBinContent(17,0.1325285);
   ptPhot_mc_Signal_All__11->SetBinContent(18,0.102094);
   ptPhot_mc_Signal_All__11->SetBinError(14,0.002709669);
   ptPhot_mc_Signal_All__11->SetBinError(15,0.002012682);
   ptPhot_mc_Signal_All__11->SetBinError(16,0.001547287);
   ptPhot_mc_Signal_All__11->SetBinError(17,0.001116659);
   ptPhot_mc_Signal_All__11->SetBinError(18,0.0008893087);
   ptPhot_mc_Signal_All__11->SetEntries(1081887);
   ptPhot_mc_Signal_All__11->SetDirectory(0);
   ptPhot_mc_Signal_All__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__11->SetLineColor(ci);
   ptPhot_mc_Signal_All__11->SetLineWidth(2);
   ptPhot_mc_Signal_All__11->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_All__12 = new TH1F("ptPhot_mc_Z_All__12","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__12->SetBinContent(14,0.3822359);
   ptPhot_mc_Z_All__12->SetBinContent(15,0.2456484);
   ptPhot_mc_Z_All__12->SetBinContent(16,0.1679907);
   ptPhot_mc_Z_All__12->SetBinContent(17,0.1180533);
   ptPhot_mc_Z_All__12->SetBinContent(18,0.08607177);
   ptPhot_mc_Z_All__12->SetBinError(14,0.00248542);
   ptPhot_mc_Z_All__12->SetBinError(15,0.001991738);
   ptPhot_mc_Z_All__12->SetBinError(16,0.001647294);
   ptPhot_mc_Z_All__12->SetBinError(17,0.001380933);
   ptPhot_mc_Z_All__12->SetBinError(18,0.001180608);
   ptPhot_mc_Z_All__12->SetMinimum(1.4475e-06);
   ptPhot_mc_Z_All__12->SetMaximum(2.140521);
   ptPhot_mc_Z_All__12->SetEntries(64314);
   ptPhot_mc_Z_All__12->SetDirectory(0);
   ptPhot_mc_Z_All__12->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__12->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__12->SetMarkerColor(ci);
   ptPhot_mc_Z_All__12->SetMarkerStyle(20);
   ptPhot_mc_Z_All__12->SetMarkerSize(0.7);
   ptPhot_mc_Z_All__12->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_All__12->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_All__12->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_All__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.067364e-311,0,1.798816e-315,1.900148e-315,NULL,"brNDC");
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
   entry=leg->AddEntry("ptPhot_mc_Z_All","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_All","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_mc_Z_All",60,0,300);
   ratio->SetBinContent(14,1.118636);
   ratio->SetBinContent(15,1.005604);
   ratio->SetBinContent(16,0.9364038);
   ratio->SetBinContent(17,0.8907768);
   ratio->SetBinContent(18,0.8430638);
   ratio->SetBinError(14,0.01147161);
   ratio->SetBinError(15,0.01162448);
   ratio->SetBinError(16,0.01222866);
   ratio->SetBinError(17,0.01284161);
   ratio->SetBinError(18,0.01369868);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(29898.89);
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_mc_Z_All",60,0,300);
   ratio->SetBinContent(14,1.118636);
   ratio->SetBinContent(15,1.005604);
   ratio->SetBinContent(16,0.9364038);
   ratio->SetBinContent(17,0.8907768);
   ratio->SetBinContent(18,0.8430638);
   ratio->SetBinError(14,0.01147161);
   ratio->SetBinError(15,0.01162448);
   ratio->SetBinError(16,0.01222866);
   ratio->SetBinError(17,0.01284161);
   ratio->SetBinError(18,0.01369868);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(29898.89);
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
