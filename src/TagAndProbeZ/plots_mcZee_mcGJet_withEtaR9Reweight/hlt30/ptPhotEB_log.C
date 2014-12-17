{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Sep 27 23:43:18 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.06509271,326.25,0.5858343);
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
   
   TH1F *ptPhot_mc_Z_EB__16 = new TH1F("ptPhot_mc_Z_EB__16","ptPhot_mc_Z_EB",60,0,300);
   ptPhot_mc_Z_EB__16->SetBinContent(9,0.5011016);
   ptPhot_mc_Z_EB__16->SetBinContent(10,0.3040583);
   ptPhot_mc_Z_EB__16->SetBinContent(11,0.1134866);
   ptPhot_mc_Z_EB__16->SetBinContent(12,0.05233064);
   ptPhot_mc_Z_EB__16->SetBinContent(13,0.02902289);
   ptPhot_mc_Z_EB__16->SetBinError(9,0.001042106);
   ptPhot_mc_Z_EB__16->SetBinError(10,0.0008029104);
   ptPhot_mc_Z_EB__16->SetBinError(11,0.000490001);
   ptPhot_mc_Z_EB__16->SetBinError(12,0.000331626);
   ptPhot_mc_Z_EB__16->SetBinError(13,0.0002476634);
   ptPhot_mc_Z_EB__16->SetMinimum(4.41016e-08);
   ptPhot_mc_Z_EB__16->SetMaximum(2.806169);
   ptPhot_mc_Z_EB__16->SetEntries(787055);
   ptPhot_mc_Z_EB__16->SetDirectory(0);
   ptPhot_mc_Z_EB__16->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__16->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__16->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__16->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__16->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__16->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EB__16->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EB__16->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_EB__16->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EB__17 = new TH1F("ptPhot_mc_Signal_EB__17","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB__17->SetBinContent(9,0.396226);
   ptPhot_mc_Signal_EB__17->SetBinContent(10,0.2526188);
   ptPhot_mc_Signal_EB__17->SetBinContent(11,0.1649032);
   ptPhot_mc_Signal_EB__17->SetBinContent(12,0.1097666);
   ptPhot_mc_Signal_EB__17->SetBinContent(13,0.07648544);
   ptPhot_mc_Signal_EB__17->SetBinError(9,0.00237459);
   ptPhot_mc_Signal_EB__17->SetBinError(10,0.001752864);
   ptPhot_mc_Signal_EB__17->SetBinError(11,0.001291758);
   ptPhot_mc_Signal_EB__17->SetBinError(12,0.0009316857);
   ptPhot_mc_Signal_EB__17->SetBinError(13,0.0007217295);
   ptPhot_mc_Signal_EB__17->SetEntries(836234);
   ptPhot_mc_Signal_EB__17->SetDirectory(0);
   ptPhot_mc_Signal_EB__17->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__17->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__17->SetLineColor(ci);
   ptPhot_mc_Signal_EB__17->SetLineWidth(2);
   ptPhot_mc_Signal_EB__17->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EB__18 = new TH1F("ptPhot_mc_Z_EB__18","ptPhot_mc_Z_EB",60,0,300);
   ptPhot_mc_Z_EB__18->SetBinContent(9,0.5011016);
   ptPhot_mc_Z_EB__18->SetBinContent(10,0.3040583);
   ptPhot_mc_Z_EB__18->SetBinContent(11,0.1134866);
   ptPhot_mc_Z_EB__18->SetBinContent(12,0.05233064);
   ptPhot_mc_Z_EB__18->SetBinContent(13,0.02902289);
   ptPhot_mc_Z_EB__18->SetBinError(9,0.001042106);
   ptPhot_mc_Z_EB__18->SetBinError(10,0.0008029104);
   ptPhot_mc_Z_EB__18->SetBinError(11,0.000490001);
   ptPhot_mc_Z_EB__18->SetBinError(12,0.000331626);
   ptPhot_mc_Z_EB__18->SetBinError(13,0.0002476634);
   ptPhot_mc_Z_EB__18->SetMinimum(4.41016e-08);
   ptPhot_mc_Z_EB__18->SetMaximum(2.806169);
   ptPhot_mc_Z_EB__18->SetEntries(787055);
   ptPhot_mc_Z_EB__18->SetDirectory(0);
   ptPhot_mc_Z_EB__18->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__18->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__18->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__18->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__18->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__18->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EB__18->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EB__18->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_EB__18->Draw("PESAME");
   
   TLegend *leg = new TLegend(4.607953e+228,1.399942e-152,6.187283e+223,4.245102e+175,NULL,"brNDC");
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
   ratio->SetBinContent(9,1.264686);
   ratio->SetBinContent(10,1.203625);
   ratio->SetBinContent(11,0.6882009);
   ratio->SetBinContent(12,0.4767447);
   ratio->SetBinContent(13,0.3794564);
   ratio->SetBinError(9,0.008022653);
   ratio->SetBinError(10,0.008936023);
   ratio->SetBinError(11,0.006155655);
   ratio->SetBinError(12,0.00504997);
   ratio->SetBinError(13,0.004827602);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(69730.57);
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
   ratio->SetBinContent(9,1.264686);
   ratio->SetBinContent(10,1.203625);
   ratio->SetBinContent(11,0.6882009);
   ratio->SetBinContent(12,0.4767447);
   ratio->SetBinContent(13,0.3794564);
   ratio->SetBinError(9,0.008022653);
   ratio->SetBinError(10,0.008936023);
   ratio->SetBinError(11,0.006155655);
   ratio->SetBinError(12,0.00504997);
   ratio->SetBinError(13,0.004827602);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(69730.57);
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
