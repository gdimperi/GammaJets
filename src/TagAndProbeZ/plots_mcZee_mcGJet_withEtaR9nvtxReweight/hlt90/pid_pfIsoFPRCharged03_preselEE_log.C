{
//=========Macro generated from canvas: pid_pfIsoFPRCharged03_presel/pid_pfIsoFPRCharged03_presel
//=========  (Sun Sep 28 15:21:29 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoFPRCharged03_presel = new TCanvas("pid_pfIsoFPRCharged03_presel", "pid_pfIsoFPRCharged03_presel",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoFPRCharged03_presel->SetHighLightColor(2);
   pid_pfIsoFPRCharged03_presel->Range(-0.9749999,-0.1518823,6.525,0.9588988);
   pid_pfIsoFPRCharged03_presel->SetFillColor(0);
   pid_pfIsoFPRCharged03_presel->SetBorderMode(0);
   pid_pfIsoFPRCharged03_presel->SetBorderSize(2);
   pid_pfIsoFPRCharged03_presel->SetTickx(1);
   pid_pfIsoFPRCharged03_presel->SetLeftMargin(0.13);
   pid_pfIsoFPRCharged03_presel->SetRightMargin(0.07);
   pid_pfIsoFPRCharged03_presel->SetFrameFillStyle(0);
   pid_pfIsoFPRCharged03_presel->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoFPRCharged03_mc_Z_EE__22 = new TH1F("pfIsoFPRCharged03_mc_Z_EE__22","pfIsoFPRCharged03_mc_Z_EE",60,0,6);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(1,0.7862236);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(2,0.001993008);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(3,0.01660148);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(4,0.02490332);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(5,0.0282);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(6,0.02270943);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(7,0.02407071);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(8,0.008728471);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(9,0.01073063);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(10,0.01045879);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(11,0.01280882);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(12,0.00990463);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(13,0.006670397);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(14,0.002593954);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(15,0.00398279);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(16,0.003415735);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(17,0.002778126);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(18,0.001732119);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(19,0.0009662124);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(20,0.001020321);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(21,0.003015366);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(22,0.0006147649);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(23,0.002212011);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(24,0.001290495);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(25,0.0002107546);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(26,0.003065055);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(27,0.002833353);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(28,0.0008475852);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(29,0.0002374883);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(30,0.001666479);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(31,0.001562643);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(33,0.0005544674);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(34,0.0002401775);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(38,0.0002202647);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(39,0.000381268);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(42,0.0001340194);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinContent(44,0.0004212479);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(1,0.02986047);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(2,0.0006872393);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(3,0.005910678);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(4,0.005903669);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(5,0.005600732);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(6,0.004899428);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(7,0.005514065);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(8,0.002872718);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(9,0.003130605);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(10,0.003655541);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(11,0.004244013);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(12,0.003650658);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(13,0.002673625);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(14,0.001092902);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(15,0.001752452);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(16,0.001565498);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(17,0.001839713);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(18,0.001237247);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(19,0.0006215641);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(20,0.0006607355);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(21,0.00213769);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(22,0.0004678607);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(23,0.001959203);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(24,0.001202424);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(25,0.0002107546);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(26,0.002890946);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(27,0.002833353);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(28,0.0005448187);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(29,0.0002374883);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(30,0.001532955);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(31,0.0009945721);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(33,0.0005544675);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(34,0.0001763186);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(38,0.0002202647);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(39,0.000381268);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(42,0.0001340194);
   pfIsoFPRCharged03_mc_Z_EE__22->SetBinError(44,0.0004212479);
   pfIsoFPRCharged03_mc_Z_EE__22->SetMinimum(8.976958e-06);
   pfIsoFPRCharged03_mc_Z_EE__22->SetMaximum(4.402852);
   pfIsoFPRCharged03_mc_Z_EE__22->SetEntries(2043);
   pfIsoFPRCharged03_mc_Z_EE__22->SetDirectory(0);
   pfIsoFPRCharged03_mc_Z_EE__22->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_EE__22->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_EE__22->SetMarkerColor(ci);
   pfIsoFPRCharged03_mc_Z_EE__22->SetMarkerStyle(20);
   pfIsoFPRCharged03_mc_Z_EE__22->SetMarkerSize(0.7);
   pfIsoFPRCharged03_mc_Z_EE__22->GetXaxis()->SetTitle("PfIso Charged FPR #DeltaR=0.3 (GeV)");
   pfIsoFPRCharged03_mc_Z_EE__22->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRCharged03_mc_Z_EE__22->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRCharged03_mc_Z_EE__22->Draw("PE");
   
   TH1F *pfIsoFPRCharged03_mc_Signal_EE__23 = new TH1F("pfIsoFPRCharged03_mc_Signal_EE__23","pfIsoFPRCharged03_mc_Signal_EE",60,0,6);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(1,0.7919303);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(2,0.003249587);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(3,0.0167792);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(4,0.02194808);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(5,0.02318117);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(6,0.02127766);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(7,0.01703162);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(8,0.01501743);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(9,0.01255137);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(10,0.009923051);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(11,0.008250564);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(12,0.007428179);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(13,0.00601966);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(14,0.005704188);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(15,0.004850448);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(16,0.004175182);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(17,0.003517499);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(18,0.003363264);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(19,0.002800033);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(20,0.00280134);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(21,0.002227793);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(22,0.001818783);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(23,0.001496767);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(24,0.001044571);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(25,0.0013758);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(26,0.001372886);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(27,0.0008990711);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(28,0.0007866917);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(29,0.0007249183);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(30,0.0006533168);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(31,0.0005516425);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(32,0.0005532201);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(33,0.0003002114);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(34,0.0004272206);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(35,0.0004478426);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(36,0.0004528961);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(37,0.0002099212);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(38,0.0004203707);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(39,0.000152807);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(40,0.0001582405);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(41,0.0002461946);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(42,0.0002074049);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(43,0.0001242337);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(44,0.0002146261);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(45,0.000151598);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(46,0.0001025699);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(47,9.199089e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(48,0.0001318186);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(49,0.0001195715);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(50,7.146256e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(51,4.00272e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(52,0.0001301552);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(53,5.40055e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(54,5.340108e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(55,0.0001426151);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(56,6.797787e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(57,2.105504e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(58,3.03543e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(59,2.355758e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(60,0.0001005302);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinContent(61,0.0009485961);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(1,0.004842848);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(2,0.0002587607);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(3,0.0004977335);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(4,0.0005506063);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(5,0.000555392);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(6,0.0005619906);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(7,0.0004878339);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(8,0.000497283);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(9,0.0004188812);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(10,0.0003459128);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(11,0.0002945766);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(12,0.0003194328);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(13,0.0002696764);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(14,0.0003140801);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(15,0.0002494745);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(16,0.0002664082);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(17,0.0002100111);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(18,0.0002700886);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(19,0.0002617399);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(20,0.0002711354);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(21,0.000229725);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(22,0.000176805);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(23,0.0001592963);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(24,0.0001088102);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(25,0.0001858253);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(26,0.0002052846);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(27,0.0001328789);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(28,0.0001358667);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(29,9.042497e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(30,0.0001033096);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(31,0.0001291837);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(32,9.859673e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(33,2.914529e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(34,7.296119e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(35,0.000125927);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(36,0.0001495408);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(37,2.434549e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(38,0.0001270213);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(39,2.021472e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(40,2.03545e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(41,6.795486e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(42,8.469103e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(43,1.801567e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(44,9.464033e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(45,6.967237e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(46,1.787911e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(47,1.611691e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(48,8.890403e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(49,6.917985e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(50,1.508851e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(51,9.161606e-06);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(52,7.875364e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(53,1.27861e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(54,1.246367e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(55,9.843647e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(56,4.207895e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(57,6.962436e-06);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(58,9.184895e-06);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(59,5.297988e-06);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(60,8.139759e-05);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetBinError(61,0.0001768915);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetEntries(564048);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetDirectory(0);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRCharged03_mc_Signal_EE__23->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRCharged03_mc_Signal_EE__23->SetLineColor(ci);
   pfIsoFPRCharged03_mc_Signal_EE__23->SetLineWidth(2);
   pfIsoFPRCharged03_mc_Signal_EE__23->Draw("HSAME");
   
   TH1F *pfIsoFPRCharged03_mc_Z_EE__24 = new TH1F("pfIsoFPRCharged03_mc_Z_EE__24","pfIsoFPRCharged03_mc_Z_EE",60,0,6);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(1,0.7862236);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(2,0.001993008);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(3,0.01660148);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(4,0.02490332);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(5,0.0282);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(6,0.02270943);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(7,0.02407071);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(8,0.008728471);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(9,0.01073063);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(10,0.01045879);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(11,0.01280882);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(12,0.00990463);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(13,0.006670397);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(14,0.002593954);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(15,0.00398279);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(16,0.003415735);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(17,0.002778126);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(18,0.001732119);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(19,0.0009662124);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(20,0.001020321);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(21,0.003015366);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(22,0.0006147649);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(23,0.002212011);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(24,0.001290495);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(25,0.0002107546);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(26,0.003065055);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(27,0.002833353);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(28,0.0008475852);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(29,0.0002374883);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(30,0.001666479);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(31,0.001562643);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(33,0.0005544674);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(34,0.0002401775);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(38,0.0002202647);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(39,0.000381268);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(42,0.0001340194);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinContent(44,0.0004212479);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(1,0.02986047);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(2,0.0006872393);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(3,0.005910678);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(4,0.005903669);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(5,0.005600732);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(6,0.004899428);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(7,0.005514065);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(8,0.002872718);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(9,0.003130605);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(10,0.003655541);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(11,0.004244013);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(12,0.003650658);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(13,0.002673625);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(14,0.001092902);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(15,0.001752452);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(16,0.001565498);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(17,0.001839713);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(18,0.001237247);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(19,0.0006215641);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(20,0.0006607355);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(21,0.00213769);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(22,0.0004678607);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(23,0.001959203);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(24,0.001202424);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(25,0.0002107546);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(26,0.002890946);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(27,0.002833353);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(28,0.0005448187);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(29,0.0002374883);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(30,0.001532955);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(31,0.0009945721);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(33,0.0005544675);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(34,0.0001763186);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(38,0.0002202647);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(39,0.000381268);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(42,0.0001340194);
   pfIsoFPRCharged03_mc_Z_EE__24->SetBinError(44,0.0004212479);
   pfIsoFPRCharged03_mc_Z_EE__24->SetMinimum(8.976958e-06);
   pfIsoFPRCharged03_mc_Z_EE__24->SetMaximum(4.402852);
   pfIsoFPRCharged03_mc_Z_EE__24->SetEntries(2043);
   pfIsoFPRCharged03_mc_Z_EE__24->SetDirectory(0);
   pfIsoFPRCharged03_mc_Z_EE__24->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_EE__24->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_EE__24->SetMarkerColor(ci);
   pfIsoFPRCharged03_mc_Z_EE__24->SetMarkerStyle(20);
   pfIsoFPRCharged03_mc_Z_EE__24->SetMarkerSize(0.7);
   pfIsoFPRCharged03_mc_Z_EE__24->GetXaxis()->SetTitle("PfIso Charged FPR #DeltaR=0.3 (GeV)");
   pfIsoFPRCharged03_mc_Z_EE__24->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRCharged03_mc_Z_EE__24->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRCharged03_mc_Z_EE__24->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.23348e-32,2.124746e-23,7.711268e-32,1.862364e-25,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoFPRCharged03_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoFPRCharged03_mc_Signal_EE","signal #gamma + jet","F");
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
   pid_pfIsoFPRCharged03_presel->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRCharged03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,0.9927939);
   ratio->SetBinContent(2,0.6133114);
   ratio->SetBinContent(3,0.9894082);
   ratio->SetBinContent(4,1.134647);
   ratio->SetBinContent(5,1.216504);
   ratio->SetBinContent(6,1.06729);
   ratio->SetBinContent(7,1.413296);
   ratio->SetBinContent(8,0.5812227);
   ratio->SetBinContent(9,0.854937);
   ratio->SetBinContent(10,1.05399);
   ratio->SetBinContent(11,1.552478);
   ratio->SetBinContent(12,1.333386);
   ratio->SetBinContent(13,1.108102);
   ratio->SetBinContent(14,0.4547455);
   ratio->SetBinContent(15,0.8211181);
   ratio->SetBinContent(16,0.8181043);
   ratio->SetBinContent(17,0.7898015);
   ratio->SetBinContent(18,0.5150114);
   ratio->SetBinContent(19,0.3450717);
   ratio->SetBinContent(20,0.3642259);
   ratio->SetBinContent(21,1.353521);
   ratio->SetBinContent(22,0.3380089);
   ratio->SetBinContent(23,1.47786);
   ratio->SetBinContent(24,1.235431);
   ratio->SetBinContent(25,0.1531869);
   ratio->SetBinContent(26,2.232562);
   ratio->SetBinContent(27,3.151422);
   ratio->SetBinContent(28,1.077404);
   ratio->SetBinContent(29,0.3276069);
   ratio->SetBinContent(30,2.550797);
   ratio->SetBinContent(31,2.832709);
   ratio->SetBinContent(33,1.846923);
   ratio->SetBinContent(34,0.5621861);
   ratio->SetBinContent(38,0.5239773);
   ratio->SetBinContent(39,2.495096);
   ratio->SetBinContent(42,0.6461729);
   ratio->SetBinContent(44,1.962705);
   ratio->SetBinError(1,0.03819158);
   ratio->SetBinError(2,0.2170508);
   ratio->SetBinError(3,0.3534827);
   ratio->SetBinError(4,0.2704853);
   ratio->SetBinError(5,0.2433586);
   ratio->SetBinError(6,0.2319806);
   ratio->SetBinError(7,0.3262756);
   ratio->SetBinError(8,0.192258);
   ratio->SetBinError(9,0.25105);
   ratio->SetBinError(10,0.3702165);
   ratio->SetBinError(11,0.5173684);
   ratio->SetBinError(12,0.4947943);
   ratio->SetBinError(13,0.4469145);
   ratio->SetBinError(14,0.1932256);
   ratio->SetBinError(15,0.363757);
   ratio->SetBinError(16,0.3785695);
   ratio->SetBinError(17,0.5251388);
   ratio->SetBinError(18,0.3701884);
   ratio->SetBinError(19,0.2243159);
   ratio->SetBinError(20,0.238484);
   ratio->SetBinError(21,0.9696527);
   ratio->SetBinError(22,0.2593284);
   ratio->SetBinError(23,1.318373);
   ratio->SetBinError(24,1.158289);
   ratio->SetBinError(25,0.1545779);
   ratio->SetBinError(26,2.132041);
   ratio->SetBinError(27,3.185655);
   ratio->SetBinError(28,0.7171061);
   ratio->SetBinError(29,0.3301458);
   ratio->SetBinError(30,2.380837);
   ratio->SetBinError(31,1.921094);
   ratio->SetBinError(33,1.855607);
   ratio->SetBinError(34,0.4237314);
   ratio->SetBinError(38,0.5473754);
   ratio->SetBinError(39,2.516834);
   ratio->SetBinError(42,0.697968);
   ratio->SetBinError(44,2.14505);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(39.47148);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged FPR #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRCharged03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,0.9927939);
   ratio->SetBinContent(2,0.6133114);
   ratio->SetBinContent(3,0.9894082);
   ratio->SetBinContent(4,1.134647);
   ratio->SetBinContent(5,1.216504);
   ratio->SetBinContent(6,1.06729);
   ratio->SetBinContent(7,1.413296);
   ratio->SetBinContent(8,0.5812227);
   ratio->SetBinContent(9,0.854937);
   ratio->SetBinContent(10,1.05399);
   ratio->SetBinContent(11,1.552478);
   ratio->SetBinContent(12,1.333386);
   ratio->SetBinContent(13,1.108102);
   ratio->SetBinContent(14,0.4547455);
   ratio->SetBinContent(15,0.8211181);
   ratio->SetBinContent(16,0.8181043);
   ratio->SetBinContent(17,0.7898015);
   ratio->SetBinContent(18,0.5150114);
   ratio->SetBinContent(19,0.3450717);
   ratio->SetBinContent(20,0.3642259);
   ratio->SetBinContent(21,1.353521);
   ratio->SetBinContent(22,0.3380089);
   ratio->SetBinContent(23,1.47786);
   ratio->SetBinContent(24,1.235431);
   ratio->SetBinContent(25,0.1531869);
   ratio->SetBinContent(26,2.232562);
   ratio->SetBinContent(27,3.151422);
   ratio->SetBinContent(28,1.077404);
   ratio->SetBinContent(29,0.3276069);
   ratio->SetBinContent(30,2.550797);
   ratio->SetBinContent(31,2.832709);
   ratio->SetBinContent(33,1.846923);
   ratio->SetBinContent(34,0.5621861);
   ratio->SetBinContent(38,0.5239773);
   ratio->SetBinContent(39,2.495096);
   ratio->SetBinContent(42,0.6461729);
   ratio->SetBinContent(44,1.962705);
   ratio->SetBinError(1,0.03819158);
   ratio->SetBinError(2,0.2170508);
   ratio->SetBinError(3,0.3534827);
   ratio->SetBinError(4,0.2704853);
   ratio->SetBinError(5,0.2433586);
   ratio->SetBinError(6,0.2319806);
   ratio->SetBinError(7,0.3262756);
   ratio->SetBinError(8,0.192258);
   ratio->SetBinError(9,0.25105);
   ratio->SetBinError(10,0.3702165);
   ratio->SetBinError(11,0.5173684);
   ratio->SetBinError(12,0.4947943);
   ratio->SetBinError(13,0.4469145);
   ratio->SetBinError(14,0.1932256);
   ratio->SetBinError(15,0.363757);
   ratio->SetBinError(16,0.3785695);
   ratio->SetBinError(17,0.5251388);
   ratio->SetBinError(18,0.3701884);
   ratio->SetBinError(19,0.2243159);
   ratio->SetBinError(20,0.238484);
   ratio->SetBinError(21,0.9696527);
   ratio->SetBinError(22,0.2593284);
   ratio->SetBinError(23,1.318373);
   ratio->SetBinError(24,1.158289);
   ratio->SetBinError(25,0.1545779);
   ratio->SetBinError(26,2.132041);
   ratio->SetBinError(27,3.185655);
   ratio->SetBinError(28,0.7171061);
   ratio->SetBinError(29,0.3301458);
   ratio->SetBinError(30,2.380837);
   ratio->SetBinError(31,1.921094);
   ratio->SetBinError(33,1.855607);
   ratio->SetBinError(34,0.4237314);
   ratio->SetBinError(38,0.5473754);
   ratio->SetBinError(39,2.516834);
   ratio->SetBinError(42,0.697968);
   ratio->SetBinError(44,2.14505);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(39.47148);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged FPR #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoFPRCharged03_presel->cd();
   pid_pfIsoFPRCharged03_presel->Modified();
   pid_pfIsoFPRCharged03_presel->cd();
   pid_pfIsoFPRCharged03_presel->SetSelected(pid_pfIsoFPRCharged03_presel);
}
