{
//=========Macro generated from canvas: nvtx/nvtx
//=========  (Sat Nov 29 18:21:22 2014) by ROOT version5.32/00
   TCanvas *nvtx = new TCanvas("nvtx", "nvtx",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nvtx->SetHighLightColor(2);
   nvtx->Range(-7.1625,-0.01018926,44.0875,0.09170337);
   nvtx->SetFillColor(0);
   nvtx->SetBorderMode(0);
   nvtx->SetBorderSize(2);
   nvtx->SetTickx(1);
   nvtx->SetLeftMargin(0.13);
   nvtx->SetRightMargin(0.07);
   nvtx->SetFrameFillStyle(0);
   nvtx->SetFrameBorderMode(0);
  
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
   
   TH1F *nvtx_mc_Z_EE__40 = new TH1F("nvtx_mc_Z_EE__40","nvtx_mc_Z_EE",41,-0.5,40.5);
   nvtx_mc_Z_EE__40->SetBinContent(2,0.0001392027);
   nvtx_mc_Z_EE__40->SetBinContent(3,0.0004989489);
   nvtx_mc_Z_EE__40->SetBinContent(4,0.001369162);
   nvtx_mc_Z_EE__40->SetBinContent(5,0.003531592);
   nvtx_mc_Z_EE__40->SetBinContent(6,0.009428686);
   nvtx_mc_Z_EE__40->SetBinContent(7,0.01468127);
   nvtx_mc_Z_EE__40->SetBinContent(8,0.0231964);
   nvtx_mc_Z_EE__40->SetBinContent(9,0.03544916);
   nvtx_mc_Z_EE__40->SetBinContent(10,0.04858975);
   nvtx_mc_Z_EE__40->SetBinContent(11,0.05353995);
   nvtx_mc_Z_EE__40->SetBinContent(12,0.05997057);
   nvtx_mc_Z_EE__40->SetBinContent(13,0.07532492);
   nvtx_mc_Z_EE__40->SetBinContent(14,0.07144733);
   nvtx_mc_Z_EE__40->SetBinContent(15,0.06870546);
   nvtx_mc_Z_EE__40->SetBinContent(16,0.06844863);
   nvtx_mc_Z_EE__40->SetBinContent(17,0.06941821);
   nvtx_mc_Z_EE__40->SetBinContent(18,0.06225706);
   nvtx_mc_Z_EE__40->SetBinContent(19,0.05727055);
   nvtx_mc_Z_EE__40->SetBinContent(20,0.05160332);
   nvtx_mc_Z_EE__40->SetBinContent(21,0.04593652);
   nvtx_mc_Z_EE__40->SetBinContent(22,0.04040837);
   nvtx_mc_Z_EE__40->SetBinContent(23,0.03210672);
   nvtx_mc_Z_EE__40->SetBinContent(24,0.02430015);
   nvtx_mc_Z_EE__40->SetBinContent(25,0.02312431);
   nvtx_mc_Z_EE__40->SetBinContent(26,0.01722763);
   nvtx_mc_Z_EE__40->SetBinContent(27,0.01139683);
   nvtx_mc_Z_EE__40->SetBinContent(28,0.009432386);
   nvtx_mc_Z_EE__40->SetBinContent(29,0.005974215);
   nvtx_mc_Z_EE__40->SetBinContent(30,0.006271376);
   nvtx_mc_Z_EE__40->SetBinContent(31,0.002500229);
   nvtx_mc_Z_EE__40->SetBinContent(32,0.002308493);
   nvtx_mc_Z_EE__40->SetBinContent(33,0.001112378);
   nvtx_mc_Z_EE__40->SetBinContent(34,0.001266585);
   nvtx_mc_Z_EE__40->SetBinContent(35,0.0005249967);
   nvtx_mc_Z_EE__40->SetBinContent(36,0.0002947999);
   nvtx_mc_Z_EE__40->SetBinContent(37,0.0001917312);
   nvtx_mc_Z_EE__40->SetBinContent(38,0.0002720049);
   nvtx_mc_Z_EE__40->SetBinContent(39,0.0001046314);
   nvtx_mc_Z_EE__40->SetBinContent(40,0.0003319315);
   nvtx_mc_Z_EE__40->SetBinContent(41,4.355265e-05);
   nvtx_mc_Z_EE__40->SetBinContent(42,0.0001134138);
   nvtx_mc_Z_EE__40->SetBinError(2,8.291247e-05);
   nvtx_mc_Z_EE__40->SetBinError(3,0.0001442885);
   nvtx_mc_Z_EE__40->SetBinError(4,0.0003356023);
   nvtx_mc_Z_EE__40->SetBinError(5,0.0004639911);
   nvtx_mc_Z_EE__40->SetBinError(6,0.001102536);
   nvtx_mc_Z_EE__40->SetBinError(7,0.001141681);
   nvtx_mc_Z_EE__40->SetBinError(8,0.001446787);
   nvtx_mc_Z_EE__40->SetBinError(9,0.002124771);
   nvtx_mc_Z_EE__40->SetBinError(10,0.002578916);
   nvtx_mc_Z_EE__40->SetBinError(11,0.002414281);
   nvtx_mc_Z_EE__40->SetBinError(12,0.002915163);
   nvtx_mc_Z_EE__40->SetBinError(13,0.003277967);
   nvtx_mc_Z_EE__40->SetBinError(14,0.003215361);
   nvtx_mc_Z_EE__40->SetBinError(15,0.002870544);
   nvtx_mc_Z_EE__40->SetBinError(16,0.003101134);
   nvtx_mc_Z_EE__40->SetBinError(17,0.003022998);
   nvtx_mc_Z_EE__40->SetBinError(18,0.00267017);
   nvtx_mc_Z_EE__40->SetBinError(19,0.002538137);
   nvtx_mc_Z_EE__40->SetBinError(20,0.002485487);
   nvtx_mc_Z_EE__40->SetBinError(21,0.002622074);
   nvtx_mc_Z_EE__40->SetBinError(22,0.002332993);
   nvtx_mc_Z_EE__40->SetBinError(23,0.001886937);
   nvtx_mc_Z_EE__40->SetBinError(24,0.00175571);
   nvtx_mc_Z_EE__40->SetBinError(25,0.001533475);
   nvtx_mc_Z_EE__40->SetBinError(26,0.001490245);
   nvtx_mc_Z_EE__40->SetBinError(27,0.001069212);
   nvtx_mc_Z_EE__40->SetBinError(28,0.00192505);
   nvtx_mc_Z_EE__40->SetBinError(29,0.0006197756);
   nvtx_mc_Z_EE__40->SetBinError(30,0.000931099);
   nvtx_mc_Z_EE__40->SetBinError(31,0.0003259755);
   nvtx_mc_Z_EE__40->SetBinError(32,0.0005953495);
   nvtx_mc_Z_EE__40->SetBinError(33,0.000215912);
   nvtx_mc_Z_EE__40->SetBinError(34,0.0002598702);
   nvtx_mc_Z_EE__40->SetBinError(35,0.0001964477);
   nvtx_mc_Z_EE__40->SetBinError(36,9.527816e-05);
   nvtx_mc_Z_EE__40->SetBinError(37,7.422579e-05);
   nvtx_mc_Z_EE__40->SetBinError(38,0.0001470261);
   nvtx_mc_Z_EE__40->SetBinError(39,4.912128e-05);
   nvtx_mc_Z_EE__40->SetBinError(40,0.000305884);
   nvtx_mc_Z_EE__40->SetBinError(41,2.306686e-05);
   nvtx_mc_Z_EE__40->SetBinError(42,7.445648e-05);
   nvtx_mc_Z_EE__40->SetMinimum(8.258587e-07);
   nvtx_mc_Z_EE__40->SetMaximum(0.4218196);
   nvtx_mc_Z_EE__40->SetEntries(25857);
   nvtx_mc_Z_EE__40->SetDirectory(0);
   nvtx_mc_Z_EE__40->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   nvtx_mc_Z_EE__40->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   nvtx_mc_Z_EE__40->SetMarkerColor(ci);
   nvtx_mc_Z_EE__40->SetMarkerStyle(20);
   nvtx_mc_Z_EE__40->SetMarkerSize(0.7);
   nvtx_mc_Z_EE__40->GetXaxis()->SetTitle("nvtx");
   nvtx_mc_Z_EE__40->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_mc_Z_EE__40->GetYaxis()->SetTitleOffset(0.9);
   nvtx_mc_Z_EE__40->Draw("PE");
   
   TH1F *nvtx_mc_Signal_EE__41 = new TH1F("nvtx_mc_Signal_EE__41","nvtx_mc_Signal_EE",41,-0.5,40.5);
   nvtx_mc_Signal_EE__41->SetBinContent(2,3.406424e-05);
   nvtx_mc_Signal_EE__41->SetBinContent(3,0.0003252409);
   nvtx_mc_Signal_EE__41->SetBinContent(4,0.001404545);
   nvtx_mc_Signal_EE__41->SetBinContent(5,0.003614445);
   nvtx_mc_Signal_EE__41->SetBinContent(6,0.008149916);
   nvtx_mc_Signal_EE__41->SetBinContent(7,0.01511948);
   nvtx_mc_Signal_EE__41->SetBinContent(8,0.02243139);
   nvtx_mc_Signal_EE__41->SetBinContent(9,0.03400424);
   nvtx_mc_Signal_EE__41->SetBinContent(10,0.0442716);
   nvtx_mc_Signal_EE__41->SetBinContent(11,0.05254716);
   nvtx_mc_Signal_EE__41->SetBinContent(12,0.05985773);
   nvtx_mc_Signal_EE__41->SetBinContent(13,0.063825);
   nvtx_mc_Signal_EE__41->SetBinContent(14,0.06908706);
   nvtx_mc_Signal_EE__41->SetBinContent(15,0.07179696);
   nvtx_mc_Signal_EE__41->SetBinContent(16,0.07147436);
   nvtx_mc_Signal_EE__41->SetBinContent(17,0.06694309);
   nvtx_mc_Signal_EE__41->SetBinContent(18,0.06524103);
   nvtx_mc_Signal_EE__41->SetBinContent(19,0.05901604);
   nvtx_mc_Signal_EE__41->SetBinContent(20,0.05366473);
   nvtx_mc_Signal_EE__41->SetBinContent(21,0.04806547);
   nvtx_mc_Signal_EE__41->SetBinContent(22,0.04170194);
   nvtx_mc_Signal_EE__41->SetBinContent(23,0.03399872);
   nvtx_mc_Signal_EE__41->SetBinContent(24,0.02679428);
   nvtx_mc_Signal_EE__41->SetBinContent(25,0.02250615);
   nvtx_mc_Signal_EE__41->SetBinContent(26,0.01767259);
   nvtx_mc_Signal_EE__41->SetBinContent(27,0.01373465);
   nvtx_mc_Signal_EE__41->SetBinContent(28,0.009470897);
   nvtx_mc_Signal_EE__41->SetBinContent(29,0.007067232);
   nvtx_mc_Signal_EE__41->SetBinContent(30,0.004865745);
   nvtx_mc_Signal_EE__41->SetBinContent(31,0.003876131);
   nvtx_mc_Signal_EE__41->SetBinContent(32,0.002574348);
   nvtx_mc_Signal_EE__41->SetBinContent(33,0.001737856);
   nvtx_mc_Signal_EE__41->SetBinContent(34,0.001143162);
   nvtx_mc_Signal_EE__41->SetBinContent(35,0.0008331885);
   nvtx_mc_Signal_EE__41->SetBinContent(36,0.0004361874);
   nvtx_mc_Signal_EE__41->SetBinContent(37,0.0002702046);
   nvtx_mc_Signal_EE__41->SetBinContent(38,0.0001961533);
   nvtx_mc_Signal_EE__41->SetBinContent(39,0.0001223099);
   nvtx_mc_Signal_EE__41->SetBinContent(40,6.12529e-05);
   nvtx_mc_Signal_EE__41->SetBinContent(41,6.345553e-05);
   nvtx_mc_Signal_EE__41->SetBinContent(42,0.0001206481);
   nvtx_mc_Signal_EE__41->SetBinError(2,9.723598e-06);
   nvtx_mc_Signal_EE__41->SetBinError(3,3.129834e-05);
   nvtx_mc_Signal_EE__41->SetBinError(4,0.0001423314);
   nvtx_mc_Signal_EE__41->SetBinError(5,0.0002402657);
   nvtx_mc_Signal_EE__41->SetBinError(6,0.0004137749);
   nvtx_mc_Signal_EE__41->SetBinError(7,0.0005663462);
   nvtx_mc_Signal_EE__41->SetBinError(8,0.000695767);
   nvtx_mc_Signal_EE__41->SetBinError(9,0.0009024529);
   nvtx_mc_Signal_EE__41->SetBinError(10,0.001048701);
   nvtx_mc_Signal_EE__41->SetBinError(11,0.001131308);
   nvtx_mc_Signal_EE__41->SetBinError(12,0.001187675);
   nvtx_mc_Signal_EE__41->SetBinError(13,0.00117761);
   nvtx_mc_Signal_EE__41->SetBinError(14,0.001249973);
   nvtx_mc_Signal_EE__41->SetBinError(15,0.001251565);
   nvtx_mc_Signal_EE__41->SetBinError(16,0.001268038);
   nvtx_mc_Signal_EE__41->SetBinError(17,0.00116552);
   nvtx_mc_Signal_EE__41->SetBinError(18,0.001185915);
   nvtx_mc_Signal_EE__41->SetBinError(19,0.001096805);
   nvtx_mc_Signal_EE__41->SetBinError(20,0.001023917);
   nvtx_mc_Signal_EE__41->SetBinError(21,0.0009661017);
   nvtx_mc_Signal_EE__41->SetBinError(22,0.0008945465);
   nvtx_mc_Signal_EE__41->SetBinError(23,0.0007653208);
   nvtx_mc_Signal_EE__41->SetBinError(24,0.0006300668);
   nvtx_mc_Signal_EE__41->SetBinError(25,0.0005855297);
   nvtx_mc_Signal_EE__41->SetBinError(26,0.0005006037);
   nvtx_mc_Signal_EE__41->SetBinError(27,0.0004314106);
   nvtx_mc_Signal_EE__41->SetBinError(28,0.0003218019);
   nvtx_mc_Signal_EE__41->SetBinError(29,0.0002684973);
   nvtx_mc_Signal_EE__41->SetBinError(30,0.0002033682);
   nvtx_mc_Signal_EE__41->SetBinError(31,0.000192049);
   nvtx_mc_Signal_EE__41->SetBinError(32,0.0001401469);
   nvtx_mc_Signal_EE__41->SetBinError(33,0.0001115345);
   nvtx_mc_Signal_EE__41->SetBinError(34,8.386084e-05);
   nvtx_mc_Signal_EE__41->SetBinError(35,7.118017e-05);
   nvtx_mc_Signal_EE__41->SetBinError(36,3.528513e-05);
   nvtx_mc_Signal_EE__41->SetBinError(37,2.132455e-05);
   nvtx_mc_Signal_EE__41->SetBinError(38,1.937765e-05);
   nvtx_mc_Signal_EE__41->SetBinError(39,1.501676e-05);
   nvtx_mc_Signal_EE__41->SetBinError(40,5.492066e-06);
   nvtx_mc_Signal_EE__41->SetBinError(41,1.152773e-05);
   nvtx_mc_Signal_EE__41->SetBinError(42,1.79761e-05);
   nvtx_mc_Signal_EE__41->SetEntries(477019);
   nvtx_mc_Signal_EE__41->SetDirectory(0);
   nvtx_mc_Signal_EE__41->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EE__41->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EE__41->SetLineColor(ci);
   nvtx_mc_Signal_EE__41->SetLineWidth(2);
   nvtx_mc_Signal_EE__41->Draw("HSAME");
   
   TH1F *nvtx_mc_Z_EE__42 = new TH1F("nvtx_mc_Z_EE__42","nvtx_mc_Z_EE",41,-0.5,40.5);
   nvtx_mc_Z_EE__42->SetBinContent(2,0.0001392027);
   nvtx_mc_Z_EE__42->SetBinContent(3,0.0004989489);
   nvtx_mc_Z_EE__42->SetBinContent(4,0.001369162);
   nvtx_mc_Z_EE__42->SetBinContent(5,0.003531592);
   nvtx_mc_Z_EE__42->SetBinContent(6,0.009428686);
   nvtx_mc_Z_EE__42->SetBinContent(7,0.01468127);
   nvtx_mc_Z_EE__42->SetBinContent(8,0.0231964);
   nvtx_mc_Z_EE__42->SetBinContent(9,0.03544916);
   nvtx_mc_Z_EE__42->SetBinContent(10,0.04858975);
   nvtx_mc_Z_EE__42->SetBinContent(11,0.05353995);
   nvtx_mc_Z_EE__42->SetBinContent(12,0.05997057);
   nvtx_mc_Z_EE__42->SetBinContent(13,0.07532492);
   nvtx_mc_Z_EE__42->SetBinContent(14,0.07144733);
   nvtx_mc_Z_EE__42->SetBinContent(15,0.06870546);
   nvtx_mc_Z_EE__42->SetBinContent(16,0.06844863);
   nvtx_mc_Z_EE__42->SetBinContent(17,0.06941821);
   nvtx_mc_Z_EE__42->SetBinContent(18,0.06225706);
   nvtx_mc_Z_EE__42->SetBinContent(19,0.05727055);
   nvtx_mc_Z_EE__42->SetBinContent(20,0.05160332);
   nvtx_mc_Z_EE__42->SetBinContent(21,0.04593652);
   nvtx_mc_Z_EE__42->SetBinContent(22,0.04040837);
   nvtx_mc_Z_EE__42->SetBinContent(23,0.03210672);
   nvtx_mc_Z_EE__42->SetBinContent(24,0.02430015);
   nvtx_mc_Z_EE__42->SetBinContent(25,0.02312431);
   nvtx_mc_Z_EE__42->SetBinContent(26,0.01722763);
   nvtx_mc_Z_EE__42->SetBinContent(27,0.01139683);
   nvtx_mc_Z_EE__42->SetBinContent(28,0.009432386);
   nvtx_mc_Z_EE__42->SetBinContent(29,0.005974215);
   nvtx_mc_Z_EE__42->SetBinContent(30,0.006271376);
   nvtx_mc_Z_EE__42->SetBinContent(31,0.002500229);
   nvtx_mc_Z_EE__42->SetBinContent(32,0.002308493);
   nvtx_mc_Z_EE__42->SetBinContent(33,0.001112378);
   nvtx_mc_Z_EE__42->SetBinContent(34,0.001266585);
   nvtx_mc_Z_EE__42->SetBinContent(35,0.0005249967);
   nvtx_mc_Z_EE__42->SetBinContent(36,0.0002947999);
   nvtx_mc_Z_EE__42->SetBinContent(37,0.0001917312);
   nvtx_mc_Z_EE__42->SetBinContent(38,0.0002720049);
   nvtx_mc_Z_EE__42->SetBinContent(39,0.0001046314);
   nvtx_mc_Z_EE__42->SetBinContent(40,0.0003319315);
   nvtx_mc_Z_EE__42->SetBinContent(41,4.355265e-05);
   nvtx_mc_Z_EE__42->SetBinContent(42,0.0001134138);
   nvtx_mc_Z_EE__42->SetBinError(2,8.291247e-05);
   nvtx_mc_Z_EE__42->SetBinError(3,0.0001442885);
   nvtx_mc_Z_EE__42->SetBinError(4,0.0003356023);
   nvtx_mc_Z_EE__42->SetBinError(5,0.0004639911);
   nvtx_mc_Z_EE__42->SetBinError(6,0.001102536);
   nvtx_mc_Z_EE__42->SetBinError(7,0.001141681);
   nvtx_mc_Z_EE__42->SetBinError(8,0.001446787);
   nvtx_mc_Z_EE__42->SetBinError(9,0.002124771);
   nvtx_mc_Z_EE__42->SetBinError(10,0.002578916);
   nvtx_mc_Z_EE__42->SetBinError(11,0.002414281);
   nvtx_mc_Z_EE__42->SetBinError(12,0.002915163);
   nvtx_mc_Z_EE__42->SetBinError(13,0.003277967);
   nvtx_mc_Z_EE__42->SetBinError(14,0.003215361);
   nvtx_mc_Z_EE__42->SetBinError(15,0.002870544);
   nvtx_mc_Z_EE__42->SetBinError(16,0.003101134);
   nvtx_mc_Z_EE__42->SetBinError(17,0.003022998);
   nvtx_mc_Z_EE__42->SetBinError(18,0.00267017);
   nvtx_mc_Z_EE__42->SetBinError(19,0.002538137);
   nvtx_mc_Z_EE__42->SetBinError(20,0.002485487);
   nvtx_mc_Z_EE__42->SetBinError(21,0.002622074);
   nvtx_mc_Z_EE__42->SetBinError(22,0.002332993);
   nvtx_mc_Z_EE__42->SetBinError(23,0.001886937);
   nvtx_mc_Z_EE__42->SetBinError(24,0.00175571);
   nvtx_mc_Z_EE__42->SetBinError(25,0.001533475);
   nvtx_mc_Z_EE__42->SetBinError(26,0.001490245);
   nvtx_mc_Z_EE__42->SetBinError(27,0.001069212);
   nvtx_mc_Z_EE__42->SetBinError(28,0.00192505);
   nvtx_mc_Z_EE__42->SetBinError(29,0.0006197756);
   nvtx_mc_Z_EE__42->SetBinError(30,0.000931099);
   nvtx_mc_Z_EE__42->SetBinError(31,0.0003259755);
   nvtx_mc_Z_EE__42->SetBinError(32,0.0005953495);
   nvtx_mc_Z_EE__42->SetBinError(33,0.000215912);
   nvtx_mc_Z_EE__42->SetBinError(34,0.0002598702);
   nvtx_mc_Z_EE__42->SetBinError(35,0.0001964477);
   nvtx_mc_Z_EE__42->SetBinError(36,9.527816e-05);
   nvtx_mc_Z_EE__42->SetBinError(37,7.422579e-05);
   nvtx_mc_Z_EE__42->SetBinError(38,0.0001470261);
   nvtx_mc_Z_EE__42->SetBinError(39,4.912128e-05);
   nvtx_mc_Z_EE__42->SetBinError(40,0.000305884);
   nvtx_mc_Z_EE__42->SetBinError(41,2.306686e-05);
   nvtx_mc_Z_EE__42->SetBinError(42,7.445648e-05);
   nvtx_mc_Z_EE__42->SetMinimum(8.258587e-07);
   nvtx_mc_Z_EE__42->SetMaximum(0.4218196);
   nvtx_mc_Z_EE__42->SetEntries(25857);
   nvtx_mc_Z_EE__42->SetDirectory(0);
   nvtx_mc_Z_EE__42->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   nvtx_mc_Z_EE__42->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   nvtx_mc_Z_EE__42->SetMarkerColor(ci);
   nvtx_mc_Z_EE__42->SetMarkerStyle(20);
   nvtx_mc_Z_EE__42->SetMarkerSize(0.7);
   nvtx_mc_Z_EE__42->GetXaxis()->SetTitle("nvtx");
   nvtx_mc_Z_EE__42->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_mc_Z_EE__42->GetYaxis()->SetTitleOffset(0.9);
   nvtx_mc_Z_EE__42->Draw("PESAME");
   
   TLegend *leg = new TLegend(nan,5.486124e+303,-1.202454e+111,nan,NULL,"brNDC");
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
   entry=leg->AddEntry("nvtx_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("nvtx_mc_Signal_EE","signal #gamma + jet","F");
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
   nvtx->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","nvtx_mc_Z_EE",41,-0.5,40.5);
   ratio->SetBinContent(2,4.086476);
   ratio->SetBinContent(3,1.53409);
   ratio->SetBinContent(4,0.9748079);
   ratio->SetBinContent(5,0.9770772);
   ratio->SetBinContent(6,1.156906);
   ratio->SetBinContent(7,0.9710171);
   ratio->SetBinContent(8,1.034105);
   ratio->SetBinContent(9,1.042493);
   ratio->SetBinContent(10,1.097538);
   ratio->SetBinContent(11,1.018893);
   ratio->SetBinContent(12,1.001885);
   ratio->SetBinContent(13,1.180179);
   ratio->SetBinContent(14,1.034164);
   ratio->SetBinContent(15,0.9569411);
   ratio->SetBinContent(16,0.9576669);
   ratio->SetBinContent(17,1.036973);
   ratio->SetBinContent(18,0.9542623);
   ratio->SetBinContent(19,0.9704234);
   ratio->SetBinContent(20,0.9615872);
   ratio->SetBinContent(21,0.9557073);
   ratio->SetBinContent(22,0.9689806);
   ratio->SetBinContent(23,0.9443507);
   ratio->SetBinContent(24,0.9069158);
   ratio->SetBinContent(25,1.027466);
   ratio->SetBinContent(26,0.974822);
   ratio->SetBinContent(27,0.8297865);
   ratio->SetBinContent(28,0.9959337);
   ratio->SetBinContent(29,0.8453401);
   ratio->SetBinContent(30,1.288883);
   ratio->SetBinContent(31,0.6450322);
   ratio->SetBinContent(32,0.8967292);
   ratio->SetBinContent(33,0.6400865);
   ratio->SetBinContent(34,1.107965);
   ratio->SetBinContent(35,0.6301056);
   ratio->SetBinContent(36,0.675856);
   ratio->SetBinContent(37,0.7095778);
   ratio->SetBinContent(38,1.386695);
   ratio->SetBinContent(39,0.8554617);
   ratio->SetBinContent(40,5.419034);
   ratio->SetBinContent(41,0.6863492);
   ratio->SetBinContent(42,0.9400386);
   ratio->SetBinError(2,2.699082);
   ratio->SetBinError(3,0.4675539);
   ratio->SetBinError(4,0.2585548);
   ratio->SetBinError(5,0.143867);
   ratio->SetBinError(6,0.1474828);
   ratio->SetBinError(7,0.0838141);
   ratio->SetBinError(8,0.07203377);
   ratio->SetBinError(9,0.06833672);
   ratio->SetBinError(10,0.06379049);
   ratio->SetBinError(11,0.05091307);
   ratio->SetBinError(12,0.05260243);
   ratio->SetBinError(13,0.05578409);
   ratio->SetBinError(14,0.05016108);
   ratio->SetBinError(15,0.04332184);
   ratio->SetBinError(16,0.046596);
   ratio->SetBinError(17,0.04863311);
   ratio->SetBinError(18,0.04445186);
   ratio->SetBinError(19,0.04663604);
   ratio->SetBinError(20,0.04981666);
   ratio->SetBinError(21,0.05783544);
   ratio->SetBinError(22,0.05968102);
   ratio->SetBinError(23,0.059432);
   ratio->SetBinError(24,0.06890863);
   ratio->SetBinError(25,0.07319179);
   ratio->SetBinError(26,0.08873126);
   ratio->SetBinError(27,0.08209511);
   ratio->SetBinError(28,0.2060572);
   ratio->SetBinError(29,0.09339282);
   ratio->SetBinError(30,0.198796);
   ratio->SetBinError(31,0.08996602);
   ratio->SetBinError(32,0.2363586);
   ratio->SetBinError(33,0.130856);
   ratio->SetBinError(34,0.2414192);
   ratio->SetBinError(35,0.2418453);
   ratio->SetBinError(36,0.2251723);
   ratio->SetBinError(37,0.280352);
   ratio->SetBinError(38,0.7619625);
   ratio->SetBinError(39,0.41512);
   ratio->SetBinError(40,5.01737);
   ratio->SetBinError(41,0.3843017);
   ratio->SetBinError(42,0.6328321);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(62.81199);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("nvtx");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(-0.5,1,40.5,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","nvtx_mc_Z_EE",41,-0.5,40.5);
   ratio->SetBinContent(2,4.086476);
   ratio->SetBinContent(3,1.53409);
   ratio->SetBinContent(4,0.9748079);
   ratio->SetBinContent(5,0.9770772);
   ratio->SetBinContent(6,1.156906);
   ratio->SetBinContent(7,0.9710171);
   ratio->SetBinContent(8,1.034105);
   ratio->SetBinContent(9,1.042493);
   ratio->SetBinContent(10,1.097538);
   ratio->SetBinContent(11,1.018893);
   ratio->SetBinContent(12,1.001885);
   ratio->SetBinContent(13,1.180179);
   ratio->SetBinContent(14,1.034164);
   ratio->SetBinContent(15,0.9569411);
   ratio->SetBinContent(16,0.9576669);
   ratio->SetBinContent(17,1.036973);
   ratio->SetBinContent(18,0.9542623);
   ratio->SetBinContent(19,0.9704234);
   ratio->SetBinContent(20,0.9615872);
   ratio->SetBinContent(21,0.9557073);
   ratio->SetBinContent(22,0.9689806);
   ratio->SetBinContent(23,0.9443507);
   ratio->SetBinContent(24,0.9069158);
   ratio->SetBinContent(25,1.027466);
   ratio->SetBinContent(26,0.974822);
   ratio->SetBinContent(27,0.8297865);
   ratio->SetBinContent(28,0.9959337);
   ratio->SetBinContent(29,0.8453401);
   ratio->SetBinContent(30,1.288883);
   ratio->SetBinContent(31,0.6450322);
   ratio->SetBinContent(32,0.8967292);
   ratio->SetBinContent(33,0.6400865);
   ratio->SetBinContent(34,1.107965);
   ratio->SetBinContent(35,0.6301056);
   ratio->SetBinContent(36,0.675856);
   ratio->SetBinContent(37,0.7095778);
   ratio->SetBinContent(38,1.386695);
   ratio->SetBinContent(39,0.8554617);
   ratio->SetBinContent(40,5.419034);
   ratio->SetBinContent(41,0.6863492);
   ratio->SetBinContent(42,0.9400386);
   ratio->SetBinError(2,2.699082);
   ratio->SetBinError(3,0.4675539);
   ratio->SetBinError(4,0.2585548);
   ratio->SetBinError(5,0.143867);
   ratio->SetBinError(6,0.1474828);
   ratio->SetBinError(7,0.0838141);
   ratio->SetBinError(8,0.07203377);
   ratio->SetBinError(9,0.06833672);
   ratio->SetBinError(10,0.06379049);
   ratio->SetBinError(11,0.05091307);
   ratio->SetBinError(12,0.05260243);
   ratio->SetBinError(13,0.05578409);
   ratio->SetBinError(14,0.05016108);
   ratio->SetBinError(15,0.04332184);
   ratio->SetBinError(16,0.046596);
   ratio->SetBinError(17,0.04863311);
   ratio->SetBinError(18,0.04445186);
   ratio->SetBinError(19,0.04663604);
   ratio->SetBinError(20,0.04981666);
   ratio->SetBinError(21,0.05783544);
   ratio->SetBinError(22,0.05968102);
   ratio->SetBinError(23,0.059432);
   ratio->SetBinError(24,0.06890863);
   ratio->SetBinError(25,0.07319179);
   ratio->SetBinError(26,0.08873126);
   ratio->SetBinError(27,0.08209511);
   ratio->SetBinError(28,0.2060572);
   ratio->SetBinError(29,0.09339282);
   ratio->SetBinError(30,0.198796);
   ratio->SetBinError(31,0.08996602);
   ratio->SetBinError(32,0.2363586);
   ratio->SetBinError(33,0.130856);
   ratio->SetBinError(34,0.2414192);
   ratio->SetBinError(35,0.2418453);
   ratio->SetBinError(36,0.2251723);
   ratio->SetBinError(37,0.280352);
   ratio->SetBinError(38,0.7619625);
   ratio->SetBinError(39,0.41512);
   ratio->SetBinError(40,5.01737);
   ratio->SetBinError(41,0.3843017);
   ratio->SetBinError(42,0.6328321);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(62.81199);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("nvtx");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   nvtx->cd();
   nvtx->Modified();
   nvtx->cd();
   nvtx->SetSelected(nvtx);
}
