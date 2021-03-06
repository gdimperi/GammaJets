{
//=========Macro generated from canvas: nvtx/nvtx
//=========  (Sat Nov 29 17:30:19 2014) by ROOT version5.32/00
   TCanvas *nvtx = new TCanvas("nvtx", "nvtx",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nvtx->SetHighLightColor(2);
   nvtx->Range(-7.1625,-0.009800374,44.0875,0.08820336);
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
   
   TH1F *nvtx_dataZ_EB__46 = new TH1F("nvtx_dataZ_EB__46","nvtx_dataZ_EB",41,-0.5,40.5);
   nvtx_dataZ_EB__46->SetBinContent(2,4.098035e-05);
   nvtx_dataZ_EB__46->SetBinContent(3,0.0003646902);
   nvtx_dataZ_EB__46->SetBinContent(4,0.001589523);
   nvtx_dataZ_EB__46->SetBinContent(5,0.004589515);
   nvtx_dataZ_EB__46->SetBinContent(6,0.01008674);
   nvtx_dataZ_EB__46->SetBinContent(7,0.01796033);
   nvtx_dataZ_EB__46->SetBinContent(8,0.02783152);
   nvtx_dataZ_EB__46->SetBinContent(9,0.03874178);
   nvtx_dataZ_EB__46->SetBinContent(10,0.04908662);
   nvtx_dataZ_EB__46->SetBinContent(11,0.05856707);
   nvtx_dataZ_EB__46->SetBinContent(12,0.06777892);
   nvtx_dataZ_EB__46->SetBinContent(13,0.07118981);
   nvtx_dataZ_EB__46->SetBinContent(14,0.07513064);
   nvtx_dataZ_EB__46->SetBinContent(15,0.07409733);
   nvtx_dataZ_EB__46->SetBinContent(16,0.07270332);
   nvtx_dataZ_EB__46->SetBinContent(17,0.06849831);
   nvtx_dataZ_EB__46->SetBinContent(18,0.06216546);
   nvtx_dataZ_EB__46->SetBinContent(19,0.05591539);
   nvtx_dataZ_EB__46->SetBinContent(20,0.04992871);
   nvtx_dataZ_EB__46->SetBinContent(21,0.04253453);
   nvtx_dataZ_EB__46->SetBinContent(22,0.03553229);
   nvtx_dataZ_EB__46->SetBinContent(23,0.02910319);
   nvtx_dataZ_EB__46->SetBinContent(24,0.02275528);
   nvtx_dataZ_EB__46->SetBinContent(25,0.01796723);
   nvtx_dataZ_EB__46->SetBinContent(26,0.01326428);
   nvtx_dataZ_EB__46->SetBinContent(27,0.009779839);
   nvtx_dataZ_EB__46->SetBinContent(28,0.006958706);
   nvtx_dataZ_EB__46->SetBinContent(29,0.005020823);
   nvtx_dataZ_EB__46->SetBinContent(30,0.003874351);
   nvtx_dataZ_EB__46->SetBinContent(31,0.002435319);
   nvtx_dataZ_EB__46->SetBinContent(32,0.001830647);
   nvtx_dataZ_EB__46->SetBinContent(33,0.0009336445);
   nvtx_dataZ_EB__46->SetBinContent(34,0.0006503289);
   nvtx_dataZ_EB__46->SetBinContent(35,0.0004317914);
   nvtx_dataZ_EB__46->SetBinContent(36,0.0002913186);
   nvtx_dataZ_EB__46->SetBinContent(37,0.000139586);
   nvtx_dataZ_EB__46->SetBinContent(38,0.0001144535);
   nvtx_dataZ_EB__46->SetBinContent(39,4.803456e-05);
   nvtx_dataZ_EB__46->SetBinContent(40,3.93721e-05);
   nvtx_dataZ_EB__46->SetBinContent(41,2.832666e-05);
   nvtx_dataZ_EB__46->SetBinContent(42,8.341536e-06);
   nvtx_dataZ_EB__46->SetBinError(2,8.772872e-06);
   nvtx_dataZ_EB__46->SetBinError(3,3.084072e-05);
   nvtx_dataZ_EB__46->SetBinError(4,6.384374e-05);
   nvtx_dataZ_EB__46->SetBinError(5,0.0001102263);
   nvtx_dataZ_EB__46->SetBinError(6,0.0001651131);
   nvtx_dataZ_EB__46->SetBinError(7,0.0002207045);
   nvtx_dataZ_EB__46->SetBinError(8,0.0002801657);
   nvtx_dataZ_EB__46->SetBinError(9,0.0003291911);
   nvtx_dataZ_EB__46->SetBinError(10,0.0003710929);
   nvtx_dataZ_EB__46->SetBinError(11,0.000412318);
   nvtx_dataZ_EB__46->SetBinError(12,0.0004440805);
   nvtx_dataZ_EB__46->SetBinError(13,0.0004559987);
   nvtx_dataZ_EB__46->SetBinError(14,0.000472239);
   nvtx_dataZ_EB__46->SetBinError(15,0.0004688455);
   nvtx_dataZ_EB__46->SetBinError(16,0.0004701341);
   nvtx_dataZ_EB__46->SetBinError(17,0.0004601795);
   nvtx_dataZ_EB__46->SetBinError(18,0.0004393605);
   nvtx_dataZ_EB__46->SetBinError(19,0.000417567);
   nvtx_dataZ_EB__46->SetBinError(20,0.0004007407);
   nvtx_dataZ_EB__46->SetBinError(21,0.0003698971);
   nvtx_dataZ_EB__46->SetBinError(22,0.0003420367);
   nvtx_dataZ_EB__46->SetBinError(23,0.0003118235);
   nvtx_dataZ_EB__46->SetBinError(24,0.000279508);
   nvtx_dataZ_EB__46->SetBinError(25,0.0002506204);
   nvtx_dataZ_EB__46->SetBinError(26,0.0002131447);
   nvtx_dataZ_EB__46->SetBinError(27,0.0001922421);
   nvtx_dataZ_EB__46->SetBinError(28,0.000161608);
   nvtx_dataZ_EB__46->SetBinError(29,0.0001416257);
   nvtx_dataZ_EB__46->SetBinError(30,0.0001240642);
   nvtx_dataZ_EB__46->SetBinError(31,0.0001017078);
   nvtx_dataZ_EB__46->SetBinError(32,9.811676e-05);
   nvtx_dataZ_EB__46->SetBinError(33,6.975037e-05);
   nvtx_dataZ_EB__46->SetBinError(34,5.382042e-05);
   nvtx_dataZ_EB__46->SetBinError(35,4.546472e-05);
   nvtx_dataZ_EB__46->SetBinError(36,3.887842e-05);
   nvtx_dataZ_EB__46->SetBinError(37,2.541224e-05);
   nvtx_dataZ_EB__46->SetBinError(38,2.589011e-05);
   nvtx_dataZ_EB__46->SetBinError(39,1.481821e-05);
   nvtx_dataZ_EB__46->SetBinError(40,1.370405e-05);
   nvtx_dataZ_EB__46->SetBinError(41,1.231982e-05);
   nvtx_dataZ_EB__46->SetBinError(42,4.655001e-06);
   nvtx_dataZ_EB__46->SetMinimum(8.880104e-09);
   nvtx_dataZ_EB__46->SetMaximum(0.4207316);
   nvtx_dataZ_EB__46->SetEntries(533189);
   nvtx_dataZ_EB__46->SetDirectory(0);
   nvtx_dataZ_EB__46->SetStats(0);
   nvtx_dataZ_EB__46->SetMarkerStyle(20);
   nvtx_dataZ_EB__46->SetMarkerSize(0.7);
   nvtx_dataZ_EB__46->GetXaxis()->SetTitle("nvtx");
   nvtx_dataZ_EB__46->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_dataZ_EB__46->GetYaxis()->SetTitleOffset(0.9);
   nvtx_dataZ_EB__46->Draw("PE");
   
   TH1F *nvtx_mc_Signal_EB__47 = new TH1F("nvtx_mc_Signal_EB__47","nvtx_mc_Signal_EB",41,-0.5,40.5);
   nvtx_mc_Signal_EB__47->SetBinContent(2,7.909053e-05);
   nvtx_mc_Signal_EB__47->SetBinContent(3,0.0004723228);
   nvtx_mc_Signal_EB__47->SetBinContent(4,0.001406644);
   nvtx_mc_Signal_EB__47->SetBinContent(5,0.003667428);
   nvtx_mc_Signal_EB__47->SetBinContent(6,0.008335769);
   nvtx_mc_Signal_EB__47->SetBinContent(7,0.0146083);
   nvtx_mc_Signal_EB__47->SetBinContent(8,0.02303408);
   nvtx_mc_Signal_EB__47->SetBinContent(9,0.0344149);
   nvtx_mc_Signal_EB__47->SetBinContent(10,0.04341649);
   nvtx_mc_Signal_EB__47->SetBinContent(11,0.05033071);
   nvtx_mc_Signal_EB__47->SetBinContent(12,0.05897998);
   nvtx_mc_Signal_EB__47->SetBinContent(13,0.06630763);
   nvtx_mc_Signal_EB__47->SetBinContent(14,0.06853807);
   nvtx_mc_Signal_EB__47->SetBinContent(15,0.06927673);
   nvtx_mc_Signal_EB__47->SetBinContent(16,0.0710037);
   nvtx_mc_Signal_EB__47->SetBinContent(17,0.06879995);
   nvtx_mc_Signal_EB__47->SetBinContent(18,0.063559);
   nvtx_mc_Signal_EB__47->SetBinContent(19,0.05966411);
   nvtx_mc_Signal_EB__47->SetBinContent(20,0.0541706);
   nvtx_mc_Signal_EB__47->SetBinContent(21,0.04790109);
   nvtx_mc_Signal_EB__47->SetBinContent(22,0.04055621);
   nvtx_mc_Signal_EB__47->SetBinContent(23,0.03418342);
   nvtx_mc_Signal_EB__47->SetBinContent(24,0.02837366);
   nvtx_mc_Signal_EB__47->SetBinContent(25,0.02218303);
   nvtx_mc_Signal_EB__47->SetBinContent(26,0.01866651);
   nvtx_mc_Signal_EB__47->SetBinContent(27,0.01314614);
   nvtx_mc_Signal_EB__47->SetBinContent(28,0.01034113);
   nvtx_mc_Signal_EB__47->SetBinContent(29,0.007305122);
   nvtx_mc_Signal_EB__47->SetBinContent(30,0.005416545);
   nvtx_mc_Signal_EB__47->SetBinContent(31,0.00384616);
   nvtx_mc_Signal_EB__47->SetBinContent(32,0.002688165);
   nvtx_mc_Signal_EB__47->SetBinContent(33,0.001814549);
   nvtx_mc_Signal_EB__47->SetBinContent(34,0.001273297);
   nvtx_mc_Signal_EB__47->SetBinContent(35,0.0008391287);
   nvtx_mc_Signal_EB__47->SetBinContent(36,0.0005537643);
   nvtx_mc_Signal_EB__47->SetBinContent(37,0.00030551);
   nvtx_mc_Signal_EB__47->SetBinContent(38,0.0002249883);
   nvtx_mc_Signal_EB__47->SetBinContent(39,0.0001378359);
   nvtx_mc_Signal_EB__47->SetBinContent(40,0.0001091513);
   nvtx_mc_Signal_EB__47->SetBinContent(41,6.911095e-05);
   nvtx_mc_Signal_EB__47->SetBinContent(42,0.0001100571);
   nvtx_mc_Signal_EB__47->SetBinError(2,1.193282e-05);
   nvtx_mc_Signal_EB__47->SetBinError(3,4.916066e-05);
   nvtx_mc_Signal_EB__47->SetBinError(4,7.316965e-05);
   nvtx_mc_Signal_EB__47->SetBinError(5,0.0001389667);
   nvtx_mc_Signal_EB__47->SetBinError(6,0.0002611798);
   nvtx_mc_Signal_EB__47->SetBinError(7,0.0003278406);
   nvtx_mc_Signal_EB__47->SetBinError(8,0.0004275538);
   nvtx_mc_Signal_EB__47->SetBinError(9,0.001537416);
   nvtx_mc_Signal_EB__47->SetBinError(10,0.0006336754);
   nvtx_mc_Signal_EB__47->SetBinError(11,0.0006016103);
   nvtx_mc_Signal_EB__47->SetBinError(12,0.0006573738);
   nvtx_mc_Signal_EB__47->SetBinError(13,0.0007354954);
   nvtx_mc_Signal_EB__47->SetBinError(14,0.0007041733);
   nvtx_mc_Signal_EB__47->SetBinError(15,0.0006807761);
   nvtx_mc_Signal_EB__47->SetBinError(16,0.000730231);
   nvtx_mc_Signal_EB__47->SetBinError(17,0.0007202812);
   nvtx_mc_Signal_EB__47->SetBinError(18,0.0006592008);
   nvtx_mc_Signal_EB__47->SetBinError(19,0.0006543245);
   nvtx_mc_Signal_EB__47->SetBinError(20,0.0005997629);
   nvtx_mc_Signal_EB__47->SetBinError(21,0.0005623488);
   nvtx_mc_Signal_EB__47->SetBinError(22,0.000496241);
   nvtx_mc_Signal_EB__47->SetBinError(23,0.0004360019);
   nvtx_mc_Signal_EB__47->SetBinError(24,0.0004006362);
   nvtx_mc_Signal_EB__47->SetBinError(25,0.0003377773);
   nvtx_mc_Signal_EB__47->SetBinError(26,0.0009972028);
   nvtx_mc_Signal_EB__47->SetBinError(27,0.0002257988);
   nvtx_mc_Signal_EB__47->SetBinError(28,0.000202748);
   nvtx_mc_Signal_EB__47->SetBinError(29,0.0001639354);
   nvtx_mc_Signal_EB__47->SetBinError(30,0.0001385846);
   nvtx_mc_Signal_EB__47->SetBinError(31,0.0001085982);
   nvtx_mc_Signal_EB__47->SetBinError(32,9.583591e-05);
   nvtx_mc_Signal_EB__47->SetBinError(33,6.785563e-05);
   nvtx_mc_Signal_EB__47->SetBinError(34,5.385753e-05);
   nvtx_mc_Signal_EB__47->SetBinError(35,3.733617e-05);
   nvtx_mc_Signal_EB__47->SetBinError(36,3.308231e-05);
   nvtx_mc_Signal_EB__47->SetBinError(37,1.348197e-05);
   nvtx_mc_Signal_EB__47->SetBinError(38,1.597526e-05);
   nvtx_mc_Signal_EB__47->SetBinError(39,8.172004e-06);
   nvtx_mc_Signal_EB__47->SetBinError(40,1.09756e-05);
   nvtx_mc_Signal_EB__47->SetBinError(41,8.435731e-06);
   nvtx_mc_Signal_EB__47->SetBinError(42,5.94778e-06);
   nvtx_mc_Signal_EB__47->SetEntries(1049663);
   nvtx_mc_Signal_EB__47->SetDirectory(0);
   nvtx_mc_Signal_EB__47->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EB__47->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EB__47->SetLineColor(ci);
   nvtx_mc_Signal_EB__47->SetLineWidth(2);
   nvtx_mc_Signal_EB__47->Draw("HSAME");
   
   TH1F *nvtx_dataZ_EB__48 = new TH1F("nvtx_dataZ_EB__48","nvtx_dataZ_EB",41,-0.5,40.5);
   nvtx_dataZ_EB__48->SetBinContent(2,4.098035e-05);
   nvtx_dataZ_EB__48->SetBinContent(3,0.0003646902);
   nvtx_dataZ_EB__48->SetBinContent(4,0.001589523);
   nvtx_dataZ_EB__48->SetBinContent(5,0.004589515);
   nvtx_dataZ_EB__48->SetBinContent(6,0.01008674);
   nvtx_dataZ_EB__48->SetBinContent(7,0.01796033);
   nvtx_dataZ_EB__48->SetBinContent(8,0.02783152);
   nvtx_dataZ_EB__48->SetBinContent(9,0.03874178);
   nvtx_dataZ_EB__48->SetBinContent(10,0.04908662);
   nvtx_dataZ_EB__48->SetBinContent(11,0.05856707);
   nvtx_dataZ_EB__48->SetBinContent(12,0.06777892);
   nvtx_dataZ_EB__48->SetBinContent(13,0.07118981);
   nvtx_dataZ_EB__48->SetBinContent(14,0.07513064);
   nvtx_dataZ_EB__48->SetBinContent(15,0.07409733);
   nvtx_dataZ_EB__48->SetBinContent(16,0.07270332);
   nvtx_dataZ_EB__48->SetBinContent(17,0.06849831);
   nvtx_dataZ_EB__48->SetBinContent(18,0.06216546);
   nvtx_dataZ_EB__48->SetBinContent(19,0.05591539);
   nvtx_dataZ_EB__48->SetBinContent(20,0.04992871);
   nvtx_dataZ_EB__48->SetBinContent(21,0.04253453);
   nvtx_dataZ_EB__48->SetBinContent(22,0.03553229);
   nvtx_dataZ_EB__48->SetBinContent(23,0.02910319);
   nvtx_dataZ_EB__48->SetBinContent(24,0.02275528);
   nvtx_dataZ_EB__48->SetBinContent(25,0.01796723);
   nvtx_dataZ_EB__48->SetBinContent(26,0.01326428);
   nvtx_dataZ_EB__48->SetBinContent(27,0.009779839);
   nvtx_dataZ_EB__48->SetBinContent(28,0.006958706);
   nvtx_dataZ_EB__48->SetBinContent(29,0.005020823);
   nvtx_dataZ_EB__48->SetBinContent(30,0.003874351);
   nvtx_dataZ_EB__48->SetBinContent(31,0.002435319);
   nvtx_dataZ_EB__48->SetBinContent(32,0.001830647);
   nvtx_dataZ_EB__48->SetBinContent(33,0.0009336445);
   nvtx_dataZ_EB__48->SetBinContent(34,0.0006503289);
   nvtx_dataZ_EB__48->SetBinContent(35,0.0004317914);
   nvtx_dataZ_EB__48->SetBinContent(36,0.0002913186);
   nvtx_dataZ_EB__48->SetBinContent(37,0.000139586);
   nvtx_dataZ_EB__48->SetBinContent(38,0.0001144535);
   nvtx_dataZ_EB__48->SetBinContent(39,4.803456e-05);
   nvtx_dataZ_EB__48->SetBinContent(40,3.93721e-05);
   nvtx_dataZ_EB__48->SetBinContent(41,2.832666e-05);
   nvtx_dataZ_EB__48->SetBinContent(42,8.341536e-06);
   nvtx_dataZ_EB__48->SetBinError(2,8.772872e-06);
   nvtx_dataZ_EB__48->SetBinError(3,3.084072e-05);
   nvtx_dataZ_EB__48->SetBinError(4,6.384374e-05);
   nvtx_dataZ_EB__48->SetBinError(5,0.0001102263);
   nvtx_dataZ_EB__48->SetBinError(6,0.0001651131);
   nvtx_dataZ_EB__48->SetBinError(7,0.0002207045);
   nvtx_dataZ_EB__48->SetBinError(8,0.0002801657);
   nvtx_dataZ_EB__48->SetBinError(9,0.0003291911);
   nvtx_dataZ_EB__48->SetBinError(10,0.0003710929);
   nvtx_dataZ_EB__48->SetBinError(11,0.000412318);
   nvtx_dataZ_EB__48->SetBinError(12,0.0004440805);
   nvtx_dataZ_EB__48->SetBinError(13,0.0004559987);
   nvtx_dataZ_EB__48->SetBinError(14,0.000472239);
   nvtx_dataZ_EB__48->SetBinError(15,0.0004688455);
   nvtx_dataZ_EB__48->SetBinError(16,0.0004701341);
   nvtx_dataZ_EB__48->SetBinError(17,0.0004601795);
   nvtx_dataZ_EB__48->SetBinError(18,0.0004393605);
   nvtx_dataZ_EB__48->SetBinError(19,0.000417567);
   nvtx_dataZ_EB__48->SetBinError(20,0.0004007407);
   nvtx_dataZ_EB__48->SetBinError(21,0.0003698971);
   nvtx_dataZ_EB__48->SetBinError(22,0.0003420367);
   nvtx_dataZ_EB__48->SetBinError(23,0.0003118235);
   nvtx_dataZ_EB__48->SetBinError(24,0.000279508);
   nvtx_dataZ_EB__48->SetBinError(25,0.0002506204);
   nvtx_dataZ_EB__48->SetBinError(26,0.0002131447);
   nvtx_dataZ_EB__48->SetBinError(27,0.0001922421);
   nvtx_dataZ_EB__48->SetBinError(28,0.000161608);
   nvtx_dataZ_EB__48->SetBinError(29,0.0001416257);
   nvtx_dataZ_EB__48->SetBinError(30,0.0001240642);
   nvtx_dataZ_EB__48->SetBinError(31,0.0001017078);
   nvtx_dataZ_EB__48->SetBinError(32,9.811676e-05);
   nvtx_dataZ_EB__48->SetBinError(33,6.975037e-05);
   nvtx_dataZ_EB__48->SetBinError(34,5.382042e-05);
   nvtx_dataZ_EB__48->SetBinError(35,4.546472e-05);
   nvtx_dataZ_EB__48->SetBinError(36,3.887842e-05);
   nvtx_dataZ_EB__48->SetBinError(37,2.541224e-05);
   nvtx_dataZ_EB__48->SetBinError(38,2.589011e-05);
   nvtx_dataZ_EB__48->SetBinError(39,1.481821e-05);
   nvtx_dataZ_EB__48->SetBinError(40,1.370405e-05);
   nvtx_dataZ_EB__48->SetBinError(41,1.231982e-05);
   nvtx_dataZ_EB__48->SetBinError(42,4.655001e-06);
   nvtx_dataZ_EB__48->SetMinimum(8.880104e-09);
   nvtx_dataZ_EB__48->SetMaximum(0.4207316);
   nvtx_dataZ_EB__48->SetEntries(533189);
   nvtx_dataZ_EB__48->SetDirectory(0);
   nvtx_dataZ_EB__48->SetStats(0);
   nvtx_dataZ_EB__48->SetMarkerStyle(20);
   nvtx_dataZ_EB__48->SetMarkerSize(0.7);
   nvtx_dataZ_EB__48->GetXaxis()->SetTitle("nvtx");
   nvtx_dataZ_EB__48->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_dataZ_EB__48->GetYaxis()->SetTitleOffset(0.9);
   nvtx_dataZ_EB__48->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.320689e-310,0.0002929687,2.320689e-310,2.091838e-14,NULL,"brNDC");
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
   entry=leg->AddEntry("nvtx_dataZ_EB","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("nvtx_mc_Signal_EB","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","nvtx_dataZ_EB",41,-0.5,40.5);
   ratio->SetBinContent(2,0.5181448);
   ratio->SetBinContent(3,0.7721206);
   ratio->SetBinContent(4,1.130011);
   ratio->SetBinContent(5,1.251426);
   ratio->SetBinContent(6,1.210055);
   ratio->SetBinContent(7,1.229461);
   ratio->SetBinContent(8,1.208276);
   ratio->SetBinContent(9,1.125727);
   ratio->SetBinContent(10,1.130599);
   ratio->SetBinContent(11,1.163645);
   ratio->SetBinContent(12,1.149185);
   ratio->SetBinContent(13,1.073629);
   ratio->SetBinContent(14,1.096188);
   ratio->SetBinContent(15,1.069585);
   ratio->SetBinContent(16,1.023937);
   ratio->SetBinContent(17,0.9956157);
   ratio->SetBinContent(18,0.9780748);
   ratio->SetBinContent(19,0.9371697);
   ratio->SetBinContent(20,0.9216939);
   ratio->SetBinContent(21,0.8879657);
   ratio->SetBinContent(22,0.8761246);
   ratio->SetBinContent(23,0.8513834);
   ratio->SetBinContent(24,0.8019861);
   ratio->SetBinContent(25,0.8099538);
   ratio->SetBinContent(26,0.7105923);
   ratio->SetBinContent(27,0.7439325);
   ratio->SetBinContent(28,0.6729153);
   ratio->SetBinContent(29,0.6873018);
   ratio->SetBinContent(30,0.715281);
   ratio->SetBinContent(31,0.6331819);
   ratio->SetBinContent(32,0.6810027);
   ratio->SetBinContent(33,0.5145324);
   ratio->SetBinContent(34,0.510744);
   ratio->SetBinContent(35,0.5145711);
   ratio->SetBinContent(36,0.5260697);
   ratio->SetBinContent(37,0.4568949);
   ratio->SetBinContent(38,0.5087087);
   ratio->SetBinContent(39,0.348491);
   ratio->SetBinContent(40,0.3607111);
   ratio->SetBinContent(41,0.4098722);
   ratio->SetBinContent(42,0.07579282);
   ratio->SetBinError(2,0.1357021);
   ratio->SetBinError(3,0.1035471);
   ratio->SetBinError(4,0.07426366);
   ratio->SetBinError(5,0.0561419);
   ratio->SetBinError(6,0.04277634);
   ratio->SetBinError(7,0.03145722);
   ratio->SetBinError(8,0.02551363);
   ratio->SetBinError(9,0.05119119);
   ratio->SetBinError(10,0.01858365);
   ratio->SetBinError(11,0.01614243);
   ratio->SetBinError(12,0.0148576);
   ratio->SetBinError(13,0.0137519);
   ratio->SetBinError(14,0.01320293);
   ratio->SetBinError(15,0.01250108);
   ratio->SetBinError(16,0.01243923);
   ratio->SetBinError(17,0.01238481);
   ratio->SetBinError(18,0.01227546);
   ratio->SetBinError(19,0.01243435);
   ratio->SetBinError(20,0.01260412);
   ratio->SetBinError(21,0.01297312);
   ratio->SetBinError(22,0.01363995);
   ratio->SetBinError(23,0.01418219);
   ratio->SetBinError(24,0.01500918);
   ratio->SetBinError(25,0.01672558);
   ratio->SetBinError(26,0.03964141);
   ratio->SetBinError(27,0.01941954);
   ratio->SetBinError(28,0.02045199);
   ratio->SetBinError(29,0.02477414);
   ratio->SetBinError(30,0.02931795);
   ratio->SetBinError(31,0.03192044);
   ratio->SetBinError(32,0.04383674);
   ratio->SetBinError(33,0.04298622);
   ratio->SetBinError(34,0.04746928);
   ratio->SetBinError(35,0.05881974);
   ratio->SetBinError(36,0.07692076);
   ratio->SetBinError(37,0.08558852);
   ratio->SetBinError(38,0.120609);
   ratio->SetBinError(39,0.1094736);
   ratio->SetBinError(40,0.1306851);
   ratio->SetBinError(41,0.1851489);
   ratio->SetBinError(42,0.04249412);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(7228.489);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("nvtx");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(-0.5,1,40.5,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","nvtx_dataZ_EB",41,-0.5,40.5);
   ratio->SetBinContent(2,0.5181448);
   ratio->SetBinContent(3,0.7721206);
   ratio->SetBinContent(4,1.130011);
   ratio->SetBinContent(5,1.251426);
   ratio->SetBinContent(6,1.210055);
   ratio->SetBinContent(7,1.229461);
   ratio->SetBinContent(8,1.208276);
   ratio->SetBinContent(9,1.125727);
   ratio->SetBinContent(10,1.130599);
   ratio->SetBinContent(11,1.163645);
   ratio->SetBinContent(12,1.149185);
   ratio->SetBinContent(13,1.073629);
   ratio->SetBinContent(14,1.096188);
   ratio->SetBinContent(15,1.069585);
   ratio->SetBinContent(16,1.023937);
   ratio->SetBinContent(17,0.9956157);
   ratio->SetBinContent(18,0.9780748);
   ratio->SetBinContent(19,0.9371697);
   ratio->SetBinContent(20,0.9216939);
   ratio->SetBinContent(21,0.8879657);
   ratio->SetBinContent(22,0.8761246);
   ratio->SetBinContent(23,0.8513834);
   ratio->SetBinContent(24,0.8019861);
   ratio->SetBinContent(25,0.8099538);
   ratio->SetBinContent(26,0.7105923);
   ratio->SetBinContent(27,0.7439325);
   ratio->SetBinContent(28,0.6729153);
   ratio->SetBinContent(29,0.6873018);
   ratio->SetBinContent(30,0.715281);
   ratio->SetBinContent(31,0.6331819);
   ratio->SetBinContent(32,0.6810027);
   ratio->SetBinContent(33,0.5145324);
   ratio->SetBinContent(34,0.510744);
   ratio->SetBinContent(35,0.5145711);
   ratio->SetBinContent(36,0.5260697);
   ratio->SetBinContent(37,0.4568949);
   ratio->SetBinContent(38,0.5087087);
   ratio->SetBinContent(39,0.348491);
   ratio->SetBinContent(40,0.3607111);
   ratio->SetBinContent(41,0.4098722);
   ratio->SetBinContent(42,0.07579282);
   ratio->SetBinError(2,0.1357021);
   ratio->SetBinError(3,0.1035471);
   ratio->SetBinError(4,0.07426366);
   ratio->SetBinError(5,0.0561419);
   ratio->SetBinError(6,0.04277634);
   ratio->SetBinError(7,0.03145722);
   ratio->SetBinError(8,0.02551363);
   ratio->SetBinError(9,0.05119119);
   ratio->SetBinError(10,0.01858365);
   ratio->SetBinError(11,0.01614243);
   ratio->SetBinError(12,0.0148576);
   ratio->SetBinError(13,0.0137519);
   ratio->SetBinError(14,0.01320293);
   ratio->SetBinError(15,0.01250108);
   ratio->SetBinError(16,0.01243923);
   ratio->SetBinError(17,0.01238481);
   ratio->SetBinError(18,0.01227546);
   ratio->SetBinError(19,0.01243435);
   ratio->SetBinError(20,0.01260412);
   ratio->SetBinError(21,0.01297312);
   ratio->SetBinError(22,0.01363995);
   ratio->SetBinError(23,0.01418219);
   ratio->SetBinError(24,0.01500918);
   ratio->SetBinError(25,0.01672558);
   ratio->SetBinError(26,0.03964141);
   ratio->SetBinError(27,0.01941954);
   ratio->SetBinError(28,0.02045199);
   ratio->SetBinError(29,0.02477414);
   ratio->SetBinError(30,0.02931795);
   ratio->SetBinError(31,0.03192044);
   ratio->SetBinError(32,0.04383674);
   ratio->SetBinError(33,0.04298622);
   ratio->SetBinError(34,0.04746928);
   ratio->SetBinError(35,0.05881974);
   ratio->SetBinError(36,0.07692076);
   ratio->SetBinError(37,0.08558852);
   ratio->SetBinError(38,0.120609);
   ratio->SetBinError(39,0.1094736);
   ratio->SetBinError(40,0.1306851);
   ratio->SetBinError(41,0.1851489);
   ratio->SetBinError(42,0.04249412);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(7228.489);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("nvtx");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
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
