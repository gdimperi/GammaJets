{
//=========Macro generated from canvas: /
//=========  (Thu Apr 24 15:04:46 2014) by ROOT version5.32/00
   TCanvas * = new TCanvas("", "",0,0,700,500);
   c1->Range(4.999998,-16154.94,215,145394.4);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(13);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00ff00");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetPoint(0,43.5,4667.803);
   gre->SetPointError(0,3.5,134.4724);
   gre->SetPoint(1,56,4706.254);
   gre->SetPointError(1,8,124.2259);
   gre->SetPoint(2,69,6773.109);
   gre->SetPointError(2,4,129.8348);
   gre->SetPoint(3,81.5,7378.04);
   gre->SetPointError(3,8.5,132.3823);
   gre->SetPoint(4,92,5885.27);
   gre->SetPointError(4,2,109.8808);
   gre->SetPoint(5,96.5,5760.969);
   gre->SetPointError(5,2.5,121.2955);
   gre->SetPoint(6,102,5349.892);
   gre->SetPointError(6,3,114.1467);
   gre->SetPoint(7,107.5,7468.81);
   gre->SetPointError(7,2.5,129.1354);
   gre->SetPoint(8,113.5,8466.647);
   gre->SetPointError(8,3.5,128.7615);
   gre->SetPoint(9,121.5,8082.447);
   gre->SetPointError(9,4.5,116.9606);
   gre->SetPoint(10,132.5,7635.378);
   gre->SetPointError(10,6.5,120.8897);
   gre->SetPoint(11,152,8206.655);
   gre->SetPointError(11,13,122.308);
   gre->SetPoint(12,172.5,117446.7);
   gre->SetPointError(12,7.5,455.8344);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,26,194);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(129239.5);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("N_{sig}");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(13);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,43.5,3626.908);
   gre->SetPointError(0,3.5,182.1473);
   gre->SetPoint(1,56,4281.829);
   gre->SetPointError(1,8,162.5938);
   gre->SetPoint(2,69,5957.984);
   gre->SetPointError(2,4,171.115);
   gre->SetPoint(3,81.5,6932.148);
   gre->SetPointError(3,8.5,181.6016);
   gre->SetPoint(4,92,5690.314);
   gre->SetPointError(4,2,144.6565);
   gre->SetPoint(5,96.5,5732.802);
   gre->SetPointError(5,2.5,152.5498);
   gre->SetPoint(6,102,4936.493);
   gre->SetPointError(6,3,158.2061);
   gre->SetPoint(7,107.5,7045.801);
   gre->SetPointError(7,2.5,161.9881);
   gre->SetPoint(8,113.5,7852.822);
   gre->SetPointError(8,3.5,173.3495);
   gre->SetPoint(9,121.5,8282.983);
   gre->SetPointError(9,4.5,138.1011);
   gre->SetPoint(10,132.5,7449.508);
   gre->SetPointError(10,6.5,150.928);
   gre->SetPoint(11,152,8110.768);
   gre->SetPointError(11,13,155.0761);
   gre->SetPoint(12,172.5,119492.4);
   gre->SetPointError(12,7.5,537.9756);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,26,194);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(131688.9);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("N_{sig}");
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.6,0.7,0.85,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","with isoPF03","l");

   ci = TColor::GetColor("#00ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","with isoPF03 FPR","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.94,"CMS Preliminary 8 TeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.037);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.4397126,0.9365254,0.5602874,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Graph");
   pt->Draw();
   c1->Modified();
   ->cd();
   ->SetSelected();
}
