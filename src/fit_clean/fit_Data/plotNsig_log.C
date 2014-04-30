{
//=========Macro generated from canvas: /
//=========  (Thu Apr 24 15:04:46 2014) by ROOT version5.32/00
   TCanvas * = new TCanvas("", "",1,1,700,476);
   c1->Range(4.999998,3.423068,215,5.298987);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
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
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,26,194);
   Graph_Graph3->SetMinimum(4079.997);
   Graph_Graph3->SetMaximum(129239.5);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetTitle("N_{sig}");
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
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
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,26,194);
   Graph_Graph4->SetMinimum(3100.285);
   Graph_Graph4->SetMaximum(131688.9);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetTitle("N_{sig}");
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph4);
   
   gre->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4397126,0.9365254,0.5602874,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
   c1->Modified();
   ->cd();
   ->SetSelected();
}
