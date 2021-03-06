{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Nov 29 18:09:29 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.05103068,326.25,0.4592761);
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
   
   TH1F *ptPhot_dataZ_EB__10 = new TH1F("ptPhot_dataZ_EB__10","ptPhot_dataZ_EB",60,0,300);
   ptPhot_dataZ_EB__10->SetBinContent(9,0.3904746);
   ptPhot_dataZ_EB__10->SetBinContent(10,0.2537389);
   ptPhot_dataZ_EB__10->SetBinContent(11,0.1656756);
   ptPhot_dataZ_EB__10->SetBinContent(12,0.1116998);
   ptPhot_dataZ_EB__10->SetBinContent(13,0.07841107);
   ptPhot_dataZ_EB__10->SetBinError(9,0.003190637);
   ptPhot_dataZ_EB__10->SetBinError(10,0.002633006);
   ptPhot_dataZ_EB__10->SetBinError(11,0.002701564);
   ptPhot_dataZ_EB__10->SetBinError(12,0.00261941);
   ptPhot_dataZ_EB__10->SetBinError(13,0.002518964);
   ptPhot_dataZ_EB__10->SetMinimum(6.929135e-07);
   ptPhot_dataZ_EB__10->SetMaximum(2.186658);
   ptPhot_dataZ_EB__10->SetEntries(53105);
   ptPhot_dataZ_EB__10->SetDirectory(0);
   ptPhot_dataZ_EB__10->SetStats(0);
   ptPhot_dataZ_EB__10->SetMarkerStyle(20);
   ptPhot_dataZ_EB__10->SetMarkerSize(0.7);
   ptPhot_dataZ_EB__10->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_dataZ_EB__10->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_dataZ_EB__10->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_dataZ_EB__10->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EB__11 = new TH1F("ptPhot_mc_Signal_EB__11","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB__11->SetBinContent(9,0.396226);
   ptPhot_mc_Signal_EB__11->SetBinContent(10,0.2526188);
   ptPhot_mc_Signal_EB__11->SetBinContent(11,0.1649032);
   ptPhot_mc_Signal_EB__11->SetBinContent(12,0.1097666);
   ptPhot_mc_Signal_EB__11->SetBinContent(13,0.07648544);
   ptPhot_mc_Signal_EB__11->SetBinError(9,0.00237459);
   ptPhot_mc_Signal_EB__11->SetBinError(10,0.001752864);
   ptPhot_mc_Signal_EB__11->SetBinError(11,0.001291758);
   ptPhot_mc_Signal_EB__11->SetBinError(12,0.0009316857);
   ptPhot_mc_Signal_EB__11->SetBinError(13,0.0007217295);
   ptPhot_mc_Signal_EB__11->SetEntries(836234);
   ptPhot_mc_Signal_EB__11->SetDirectory(0);
   ptPhot_mc_Signal_EB__11->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__11->SetLineColor(ci);
   ptPhot_mc_Signal_EB__11->SetLineWidth(2);
   ptPhot_mc_Signal_EB__11->Draw("HSAME");
   
   TH1F *ptPhot_dataZ_EB__12 = new TH1F("ptPhot_dataZ_EB__12","ptPhot_dataZ_EB",60,0,300);
   ptPhot_dataZ_EB__12->SetBinContent(9,0.3904746);
   ptPhot_dataZ_EB__12->SetBinContent(10,0.2537389);
   ptPhot_dataZ_EB__12->SetBinContent(11,0.1656756);
   ptPhot_dataZ_EB__12->SetBinContent(12,0.1116998);
   ptPhot_dataZ_EB__12->SetBinContent(13,0.07841107);
   ptPhot_dataZ_EB__12->SetBinError(9,0.003190637);
   ptPhot_dataZ_EB__12->SetBinError(10,0.002633006);
   ptPhot_dataZ_EB__12->SetBinError(11,0.002701564);
   ptPhot_dataZ_EB__12->SetBinError(12,0.00261941);
   ptPhot_dataZ_EB__12->SetBinError(13,0.002518964);
   ptPhot_dataZ_EB__12->SetMinimum(6.929135e-07);
   ptPhot_dataZ_EB__12->SetMaximum(2.186658);
   ptPhot_dataZ_EB__12->SetEntries(53105);
   ptPhot_dataZ_EB__12->SetDirectory(0);
   ptPhot_dataZ_EB__12->SetStats(0);
   ptPhot_dataZ_EB__12->SetMarkerStyle(20);
   ptPhot_dataZ_EB__12->SetMarkerSize(0.7);
   ptPhot_dataZ_EB__12->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_dataZ_EB__12->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_dataZ_EB__12->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_dataZ_EB__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(0.94,2.365083e-310,4.244024e-314,1.5,NULL,"brNDC");
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
   entry=leg->AddEntry("ptPhot_dataZ_EB","DataZ Z #rightarrow ee","PL");
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_dataZ_EB",60,0,300);
   ratio->SetBinContent(9,0.9854845);
   ratio->SetBinContent(10,1.004434);
   ratio->SetBinContent(11,1.004683);
   ratio->SetBinContent(12,1.017613);
   ratio->SetBinContent(13,1.025176);
   ratio->SetBinError(9,0.009986241);
   ratio->SetBinError(10,0.01253835);
   ratio->SetBinError(11,0.01817505);
   ratio->SetBinError(12,0.02537851);
   ratio->SetBinError(13,0.03432526);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(10531.1);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","ptPhot_dataZ_EB",60,0,300);
   ratio->SetBinContent(9,0.9854845);
   ratio->SetBinContent(10,1.004434);
   ratio->SetBinContent(11,1.004683);
   ratio->SetBinContent(12,1.017613);
   ratio->SetBinContent(13,1.025176);
   ratio->SetBinError(9,0.009986241);
   ratio->SetBinError(10,0.01253835);
   ratio->SetBinError(11,0.01817505);
   ratio->SetBinError(12,0.02537851);
   ratio->SetBinError(13,0.03432526);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(10531.1);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
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
