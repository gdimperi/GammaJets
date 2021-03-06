{
//=========Macro generated from canvas: r9Phot/r9Phot
//=========  (Sat Nov 29 18:09:27 2014) by ROOT version5.32/00
   TCanvas *r9Phot = new TCanvas("r9Phot", "r9Phot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   r9Phot->SetHighLightColor(2);
   r9Phot->Range(-0.1625,-0.07105012,1.0875,0.4485701);
   r9Phot->SetFillColor(0);
   r9Phot->SetBorderMode(0);
   r9Phot->SetBorderSize(2);
   r9Phot->SetTickx(1);
   r9Phot->SetLeftMargin(0.13);
   r9Phot->SetRightMargin(0.07);
   r9Phot->SetFrameFillStyle(0);
   r9Phot->SetFrameBorderMode(0);
  
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
   
   TH1F *r9Phot_dataZ_EE__4 = new TH1F("r9Phot_dataZ_EE__4","r9Phot_dataZ_EE",60,0,1);
   r9Phot_dataZ_EE__4->SetBinContent(26,8.346669e-12);
   r9Phot_dataZ_EE__4->SetBinContent(27,1.265472e-08);
   r9Phot_dataZ_EE__4->SetBinContent(28,4.511615e-05);
   r9Phot_dataZ_EE__4->SetBinContent(29,9.662523e-08);
   r9Phot_dataZ_EE__4->SetBinContent(30,7.213011e-12);
   r9Phot_dataZ_EE__4->SetBinContent(31,5.163399e-10);
   r9Phot_dataZ_EE__4->SetBinContent(32,2.66911e-05);
   r9Phot_dataZ_EE__4->SetBinContent(33,0.0002547175);
   r9Phot_dataZ_EE__4->SetBinContent(34,0.0002541759);
   r9Phot_dataZ_EE__4->SetBinContent(35,0.0002048033);
   r9Phot_dataZ_EE__4->SetBinContent(36,0.00216201);
   r9Phot_dataZ_EE__4->SetBinContent(37,0.0005921526);
   r9Phot_dataZ_EE__4->SetBinContent(38,0.002128104);
   r9Phot_dataZ_EE__4->SetBinContent(39,0.001360254);
   r9Phot_dataZ_EE__4->SetBinContent(40,0.002357299);
   r9Phot_dataZ_EE__4->SetBinContent(41,0.001982229);
   r9Phot_dataZ_EE__4->SetBinContent(42,0.003947774);
   r9Phot_dataZ_EE__4->SetBinContent(43,0.002550112);
   r9Phot_dataZ_EE__4->SetBinContent(44,0.003835523);
   r9Phot_dataZ_EE__4->SetBinContent(45,0.006281767);
   r9Phot_dataZ_EE__4->SetBinContent(46,0.005379974);
   r9Phot_dataZ_EE__4->SetBinContent(47,0.006149371);
   r9Phot_dataZ_EE__4->SetBinContent(48,0.007630561);
   r9Phot_dataZ_EE__4->SetBinContent(49,0.007105165);
   r9Phot_dataZ_EE__4->SetBinContent(50,0.01034867);
   r9Phot_dataZ_EE__4->SetBinContent(51,0.0114681);
   r9Phot_dataZ_EE__4->SetBinContent(52,0.01335532);
   r9Phot_dataZ_EE__4->SetBinContent(53,0.01545911);
   r9Phot_dataZ_EE__4->SetBinContent(54,0.02298848);
   r9Phot_dataZ_EE__4->SetBinContent(55,0.03057956);
   r9Phot_dataZ_EE__4->SetBinContent(56,0.05535163);
   r9Phot_dataZ_EE__4->SetBinContent(57,0.117224);
   r9Phot_dataZ_EE__4->SetBinContent(58,0.298714);
   r9Phot_dataZ_EE__4->SetBinContent(59,0.370105);
   r9Phot_dataZ_EE__4->SetBinContent(60,0.0001581537);
   r9Phot_dataZ_EE__4->SetBinContent(61,1.158365e-11);
   r9Phot_dataZ_EE__4->SetBinError(26,8.346669e-12);
   r9Phot_dataZ_EE__4->SetBinError(27,9.761145e-09);
   r9Phot_dataZ_EE__4->SetBinError(28,2.838327e-05);
   r9Phot_dataZ_EE__4->SetBinError(29,5.606469e-08);
   r9Phot_dataZ_EE__4->SetBinError(30,7.213011e-12);
   r9Phot_dataZ_EE__4->SetBinError(31,3.483043e-10);
   r9Phot_dataZ_EE__4->SetBinError(32,1.317621e-05);
   r9Phot_dataZ_EE__4->SetBinError(33,6.775889e-05);
   r9Phot_dataZ_EE__4->SetBinError(34,8.75247e-05);
   r9Phot_dataZ_EE__4->SetBinError(35,6.686035e-05);
   r9Phot_dataZ_EE__4->SetBinError(36,0.0005527178);
   r9Phot_dataZ_EE__4->SetBinError(37,0.0001327782);
   r9Phot_dataZ_EE__4->SetBinError(38,0.0003736854);
   r9Phot_dataZ_EE__4->SetBinError(39,0.0003238393);
   r9Phot_dataZ_EE__4->SetBinError(40,0.0003448355);
   r9Phot_dataZ_EE__4->SetBinError(41,0.0003504755);
   r9Phot_dataZ_EE__4->SetBinError(42,0.0005995236);
   r9Phot_dataZ_EE__4->SetBinError(43,0.0004101952);
   r9Phot_dataZ_EE__4->SetBinError(44,0.0004814986);
   r9Phot_dataZ_EE__4->SetBinError(45,0.0007090237);
   r9Phot_dataZ_EE__4->SetBinError(46,0.000676247);
   r9Phot_dataZ_EE__4->SetBinError(47,0.0005757682);
   r9Phot_dataZ_EE__4->SetBinError(48,0.0006605689);
   r9Phot_dataZ_EE__4->SetBinError(49,0.0006278953);
   r9Phot_dataZ_EE__4->SetBinError(50,0.0007853055);
   r9Phot_dataZ_EE__4->SetBinError(51,0.0007639201);
   r9Phot_dataZ_EE__4->SetBinError(52,0.0007911858);
   r9Phot_dataZ_EE__4->SetBinError(53,0.0008304216);
   r9Phot_dataZ_EE__4->SetBinError(54,0.001018862);
   r9Phot_dataZ_EE__4->SetBinError(55,0.001141615);
   r9Phot_dataZ_EE__4->SetBinError(56,0.001594525);
   r9Phot_dataZ_EE__4->SetBinError(57,0.002672984);
   r9Phot_dataZ_EE__4->SetBinError(58,0.006255279);
   r9Phot_dataZ_EE__4->SetBinError(59,0.01165679);
   r9Phot_dataZ_EE__4->SetBinError(60,2.834681e-05);
   r9Phot_dataZ_EE__4->SetBinError(61,6.370107e-12);
   r9Phot_dataZ_EE__4->SetMinimum(1.654858e-06);
   r9Phot_dataZ_EE__4->SetMaximum(2.072588);
   r9Phot_dataZ_EE__4->SetEntries(14844);
   r9Phot_dataZ_EE__4->SetDirectory(0);
   r9Phot_dataZ_EE__4->SetStats(0);
   r9Phot_dataZ_EE__4->SetMarkerStyle(20);
   r9Phot_dataZ_EE__4->SetMarkerSize(0.7);
   r9Phot_dataZ_EE__4->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   r9Phot_dataZ_EE__4->GetYaxis()->SetTitle("Entries/0.0166666666667");
   r9Phot_dataZ_EE__4->GetYaxis()->SetTitleOffset(0.9);
   r9Phot_dataZ_EE__4->Draw("PE");
   
   TH1F *r9Phot_mc_Signal_EE__5 = new TH1F("r9Phot_mc_Signal_EE__5","r9Phot_mc_Signal_EE",60,0,1);
   r9Phot_mc_Signal_EE__5->SetBinContent(0,1.499957e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(1,2.262003e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(2,9.804917e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(3,1.137987e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(4,1.012097e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(5,3.316622e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(6,2.470036e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(7,3.266541e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(8,1.852569e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(9,6.312573e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(10,2.76055e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(11,1.743994e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(12,1.093022e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(13,8.180787e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(14,4.333584e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(15,1.055987e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(16,1.91356e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(17,1.365241e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(18,8.876862e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(19,0.0001121157);
   r9Phot_mc_Signal_EE__5->SetBinContent(20,4.863701e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(21,9.537163e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(22,0.0001787833);
   r9Phot_mc_Signal_EE__5->SetBinContent(23,0.0001395607);
   r9Phot_mc_Signal_EE__5->SetBinContent(24,0.0001304655);
   r9Phot_mc_Signal_EE__5->SetBinContent(25,7.400243e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(26,0.0002091665);
   r9Phot_mc_Signal_EE__5->SetBinContent(27,0.0001435454);
   r9Phot_mc_Signal_EE__5->SetBinContent(28,0.0001515369);
   r9Phot_mc_Signal_EE__5->SetBinContent(29,0.0003201934);
   r9Phot_mc_Signal_EE__5->SetBinContent(30,0.0004716479);
   r9Phot_mc_Signal_EE__5->SetBinContent(31,0.0004433472);
   r9Phot_mc_Signal_EE__5->SetBinContent(32,0.000800449);
   r9Phot_mc_Signal_EE__5->SetBinContent(33,0.0008282476);
   r9Phot_mc_Signal_EE__5->SetBinContent(34,0.001154395);
   r9Phot_mc_Signal_EE__5->SetBinContent(35,0.001041887);
   r9Phot_mc_Signal_EE__5->SetBinContent(36,0.001413521);
   r9Phot_mc_Signal_EE__5->SetBinContent(37,0.001351065);
   r9Phot_mc_Signal_EE__5->SetBinContent(38,0.001584874);
   r9Phot_mc_Signal_EE__5->SetBinContent(39,0.002043582);
   r9Phot_mc_Signal_EE__5->SetBinContent(40,0.001978517);
   r9Phot_mc_Signal_EE__5->SetBinContent(41,0.002142129);
   r9Phot_mc_Signal_EE__5->SetBinContent(42,0.002764429);
   r9Phot_mc_Signal_EE__5->SetBinContent(43,0.002964946);
   r9Phot_mc_Signal_EE__5->SetBinContent(44,0.003220872);
   r9Phot_mc_Signal_EE__5->SetBinContent(45,0.003178835);
   r9Phot_mc_Signal_EE__5->SetBinContent(46,0.004017396);
   r9Phot_mc_Signal_EE__5->SetBinContent(47,0.004544934);
   r9Phot_mc_Signal_EE__5->SetBinContent(48,0.005354626);
   r9Phot_mc_Signal_EE__5->SetBinContent(49,0.0058617);
   r9Phot_mc_Signal_EE__5->SetBinContent(50,0.007214556);
   r9Phot_mc_Signal_EE__5->SetBinContent(51,0.008985998);
   r9Phot_mc_Signal_EE__5->SetBinContent(52,0.01045764);
   r9Phot_mc_Signal_EE__5->SetBinContent(53,0.01393993);
   r9Phot_mc_Signal_EE__5->SetBinContent(54,0.01897227);
   r9Phot_mc_Signal_EE__5->SetBinContent(55,0.02946437);
   r9Phot_mc_Signal_EE__5->SetBinContent(56,0.06153194);
   r9Phot_mc_Signal_EE__5->SetBinContent(57,0.1399741);
   r9Phot_mc_Signal_EE__5->SetBinContent(58,0.306858);
   r9Phot_mc_Signal_EE__5->SetBinContent(59,0.3372626);
   r9Phot_mc_Signal_EE__5->SetBinContent(60,0.01633599);
   r9Phot_mc_Signal_EE__5->SetBinContent(61,0.0005496418);
   r9Phot_mc_Signal_EE__5->SetBinError(0,3.827557e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(1,7.04305e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(2,2.263942e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(3,4.478889e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(4,4.663856e-07);
   r9Phot_mc_Signal_EE__5->SetBinError(5,1.312224e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(6,1.313568e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(7,1.474415e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(8,1.198885e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(9,4.533336e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(10,1.289429e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(11,7.668086e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(12,5.396678e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(13,3.435866e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(14,1.755387e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(15,5.952859e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(16,8.908856e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(17,5.523059e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(18,7.516852e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(19,7.587805e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(20,1.259093e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(21,4.30641e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(22,7.793533e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(23,6.61697e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(24,3.948416e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(25,1.638775e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(26,8.729713e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(27,2.340295e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(28,2.383098e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(29,7.157191e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(30,0.0001240094);
   r9Phot_mc_Signal_EE__5->SetBinError(31,8.928714e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(32,0.0001541719);
   r9Phot_mc_Signal_EE__5->SetBinError(33,0.0001428785);
   r9Phot_mc_Signal_EE__5->SetBinError(34,0.0001932125);
   r9Phot_mc_Signal_EE__5->SetBinError(35,0.0001656808);
   r9Phot_mc_Signal_EE__5->SetBinError(36,0.0001911691);
   r9Phot_mc_Signal_EE__5->SetBinError(37,0.0001828067);
   r9Phot_mc_Signal_EE__5->SetBinError(38,0.0001775962);
   r9Phot_mc_Signal_EE__5->SetBinError(39,0.0002379266);
   r9Phot_mc_Signal_EE__5->SetBinError(40,0.0001953519);
   r9Phot_mc_Signal_EE__5->SetBinError(41,0.0002287452);
   r9Phot_mc_Signal_EE__5->SetBinError(42,0.0002666737);
   r9Phot_mc_Signal_EE__5->SetBinError(43,0.0002707279);
   r9Phot_mc_Signal_EE__5->SetBinError(44,0.000225414);
   r9Phot_mc_Signal_EE__5->SetBinError(45,0.0002310189);
   r9Phot_mc_Signal_EE__5->SetBinError(46,0.0003057031);
   r9Phot_mc_Signal_EE__5->SetBinError(47,0.0003085024);
   r9Phot_mc_Signal_EE__5->SetBinError(48,0.0003304245);
   r9Phot_mc_Signal_EE__5->SetBinError(49,0.0003457274);
   r9Phot_mc_Signal_EE__5->SetBinError(50,0.0003747871);
   r9Phot_mc_Signal_EE__5->SetBinError(51,0.0004347501);
   r9Phot_mc_Signal_EE__5->SetBinError(52,0.0004264746);
   r9Phot_mc_Signal_EE__5->SetBinError(53,0.0005433343);
   r9Phot_mc_Signal_EE__5->SetBinError(54,0.00061331);
   r9Phot_mc_Signal_EE__5->SetBinError(55,0.0007549382);
   r9Phot_mc_Signal_EE__5->SetBinError(56,0.001137229);
   r9Phot_mc_Signal_EE__5->SetBinError(57,0.001726563);
   r9Phot_mc_Signal_EE__5->SetBinError(58,0.002526117);
   r9Phot_mc_Signal_EE__5->SetBinError(59,0.002597788);
   r9Phot_mc_Signal_EE__5->SetBinError(60,0.0005991891);
   r9Phot_mc_Signal_EE__5->SetBinError(61,0.0001107018);
   r9Phot_mc_Signal_EE__5->SetEntries(477019);
   r9Phot_mc_Signal_EE__5->SetDirectory(0);
   r9Phot_mc_Signal_EE__5->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   r9Phot_mc_Signal_EE__5->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   r9Phot_mc_Signal_EE__5->SetLineColor(ci);
   r9Phot_mc_Signal_EE__5->SetLineWidth(2);
   r9Phot_mc_Signal_EE__5->Draw("HSAME");
   
   TH1F *r9Phot_dataZ_EE__6 = new TH1F("r9Phot_dataZ_EE__6","r9Phot_dataZ_EE",60,0,1);
   r9Phot_dataZ_EE__6->SetBinContent(26,8.346669e-12);
   r9Phot_dataZ_EE__6->SetBinContent(27,1.265472e-08);
   r9Phot_dataZ_EE__6->SetBinContent(28,4.511615e-05);
   r9Phot_dataZ_EE__6->SetBinContent(29,9.662523e-08);
   r9Phot_dataZ_EE__6->SetBinContent(30,7.213011e-12);
   r9Phot_dataZ_EE__6->SetBinContent(31,5.163399e-10);
   r9Phot_dataZ_EE__6->SetBinContent(32,2.66911e-05);
   r9Phot_dataZ_EE__6->SetBinContent(33,0.0002547175);
   r9Phot_dataZ_EE__6->SetBinContent(34,0.0002541759);
   r9Phot_dataZ_EE__6->SetBinContent(35,0.0002048033);
   r9Phot_dataZ_EE__6->SetBinContent(36,0.00216201);
   r9Phot_dataZ_EE__6->SetBinContent(37,0.0005921526);
   r9Phot_dataZ_EE__6->SetBinContent(38,0.002128104);
   r9Phot_dataZ_EE__6->SetBinContent(39,0.001360254);
   r9Phot_dataZ_EE__6->SetBinContent(40,0.002357299);
   r9Phot_dataZ_EE__6->SetBinContent(41,0.001982229);
   r9Phot_dataZ_EE__6->SetBinContent(42,0.003947774);
   r9Phot_dataZ_EE__6->SetBinContent(43,0.002550112);
   r9Phot_dataZ_EE__6->SetBinContent(44,0.003835523);
   r9Phot_dataZ_EE__6->SetBinContent(45,0.006281767);
   r9Phot_dataZ_EE__6->SetBinContent(46,0.005379974);
   r9Phot_dataZ_EE__6->SetBinContent(47,0.006149371);
   r9Phot_dataZ_EE__6->SetBinContent(48,0.007630561);
   r9Phot_dataZ_EE__6->SetBinContent(49,0.007105165);
   r9Phot_dataZ_EE__6->SetBinContent(50,0.01034867);
   r9Phot_dataZ_EE__6->SetBinContent(51,0.0114681);
   r9Phot_dataZ_EE__6->SetBinContent(52,0.01335532);
   r9Phot_dataZ_EE__6->SetBinContent(53,0.01545911);
   r9Phot_dataZ_EE__6->SetBinContent(54,0.02298848);
   r9Phot_dataZ_EE__6->SetBinContent(55,0.03057956);
   r9Phot_dataZ_EE__6->SetBinContent(56,0.05535163);
   r9Phot_dataZ_EE__6->SetBinContent(57,0.117224);
   r9Phot_dataZ_EE__6->SetBinContent(58,0.298714);
   r9Phot_dataZ_EE__6->SetBinContent(59,0.370105);
   r9Phot_dataZ_EE__6->SetBinContent(60,0.0001581537);
   r9Phot_dataZ_EE__6->SetBinContent(61,1.158365e-11);
   r9Phot_dataZ_EE__6->SetBinError(26,8.346669e-12);
   r9Phot_dataZ_EE__6->SetBinError(27,9.761145e-09);
   r9Phot_dataZ_EE__6->SetBinError(28,2.838327e-05);
   r9Phot_dataZ_EE__6->SetBinError(29,5.606469e-08);
   r9Phot_dataZ_EE__6->SetBinError(30,7.213011e-12);
   r9Phot_dataZ_EE__6->SetBinError(31,3.483043e-10);
   r9Phot_dataZ_EE__6->SetBinError(32,1.317621e-05);
   r9Phot_dataZ_EE__6->SetBinError(33,6.775889e-05);
   r9Phot_dataZ_EE__6->SetBinError(34,8.75247e-05);
   r9Phot_dataZ_EE__6->SetBinError(35,6.686035e-05);
   r9Phot_dataZ_EE__6->SetBinError(36,0.0005527178);
   r9Phot_dataZ_EE__6->SetBinError(37,0.0001327782);
   r9Phot_dataZ_EE__6->SetBinError(38,0.0003736854);
   r9Phot_dataZ_EE__6->SetBinError(39,0.0003238393);
   r9Phot_dataZ_EE__6->SetBinError(40,0.0003448355);
   r9Phot_dataZ_EE__6->SetBinError(41,0.0003504755);
   r9Phot_dataZ_EE__6->SetBinError(42,0.0005995236);
   r9Phot_dataZ_EE__6->SetBinError(43,0.0004101952);
   r9Phot_dataZ_EE__6->SetBinError(44,0.0004814986);
   r9Phot_dataZ_EE__6->SetBinError(45,0.0007090237);
   r9Phot_dataZ_EE__6->SetBinError(46,0.000676247);
   r9Phot_dataZ_EE__6->SetBinError(47,0.0005757682);
   r9Phot_dataZ_EE__6->SetBinError(48,0.0006605689);
   r9Phot_dataZ_EE__6->SetBinError(49,0.0006278953);
   r9Phot_dataZ_EE__6->SetBinError(50,0.0007853055);
   r9Phot_dataZ_EE__6->SetBinError(51,0.0007639201);
   r9Phot_dataZ_EE__6->SetBinError(52,0.0007911858);
   r9Phot_dataZ_EE__6->SetBinError(53,0.0008304216);
   r9Phot_dataZ_EE__6->SetBinError(54,0.001018862);
   r9Phot_dataZ_EE__6->SetBinError(55,0.001141615);
   r9Phot_dataZ_EE__6->SetBinError(56,0.001594525);
   r9Phot_dataZ_EE__6->SetBinError(57,0.002672984);
   r9Phot_dataZ_EE__6->SetBinError(58,0.006255279);
   r9Phot_dataZ_EE__6->SetBinError(59,0.01165679);
   r9Phot_dataZ_EE__6->SetBinError(60,2.834681e-05);
   r9Phot_dataZ_EE__6->SetBinError(61,6.370107e-12);
   r9Phot_dataZ_EE__6->SetMinimum(1.654858e-06);
   r9Phot_dataZ_EE__6->SetMaximum(2.072588);
   r9Phot_dataZ_EE__6->SetEntries(14844);
   r9Phot_dataZ_EE__6->SetDirectory(0);
   r9Phot_dataZ_EE__6->SetStats(0);
   r9Phot_dataZ_EE__6->SetMarkerStyle(20);
   r9Phot_dataZ_EE__6->SetMarkerSize(0.7);
   r9Phot_dataZ_EE__6->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   r9Phot_dataZ_EE__6->GetYaxis()->SetTitle("Entries/0.0166666666667");
   r9Phot_dataZ_EE__6->GetYaxis()->SetTitleOffset(0.9);
   r9Phot_dataZ_EE__6->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.167098e-312,1.184667e-312,1.897212e-321,9.48606e-322,NULL,"brNDC");
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
   entry=leg->AddEntry("r9Phot_dataZ_EE","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("r9Phot_mc_Signal_EE","signal #gamma + jet","F");
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
   r9Phot->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","r9Phot_dataZ_EE",60,0,1);
   ratio->SetBinContent(26,3.990442e-08);
   ratio->SetBinContent(27,8.815833e-05);
   ratio->SetBinContent(28,0.2977239);
   ratio->SetBinContent(29,0.0003017715);
   ratio->SetBinContent(30,1.529321e-08);
   ratio->SetBinContent(31,1.16464e-06);
   ratio->SetBinContent(32,0.03334516);
   ratio->SetBinContent(33,0.3075379);
   ratio->SetBinContent(34,0.220181);
   ratio->SetBinContent(35,0.1965696);
   ratio->SetBinContent(36,1.529521);
   ratio->SetBinContent(37,0.4382859);
   ratio->SetBinContent(38,1.342759);
   ratio->SetBinContent(39,0.6656225);
   ratio->SetBinContent(40,1.191448);
   ratio->SetBinContent(41,0.9253544);
   ratio->SetBinContent(42,1.428061);
   ratio->SetBinContent(43,0.8600872);
   ratio->SetBinContent(44,1.190833);
   ratio->SetBinContent(45,1.976122);
   ratio->SetBinContent(46,1.33917);
   ratio->SetBinContent(47,1.353016);
   ratio->SetBinContent(48,1.425041);
   ratio->SetBinContent(49,1.212134);
   ratio->SetBinContent(50,1.434415);
   ratio->SetBinContent(51,1.276218);
   ratio->SetBinContent(52,1.277087);
   ratio->SetBinContent(53,1.108981);
   ratio->SetBinContent(54,1.211689);
   ratio->SetBinContent(55,1.037849);
   ratio->SetBinContent(56,0.8995592);
   ratio->SetBinContent(57,0.8374693);
   ratio->SetBinContent(58,0.9734601);
   ratio->SetBinContent(59,1.097379);
   ratio->SetBinContent(60,0.009681307);
   ratio->SetBinContent(61,2.107491e-08);
   ratio->SetBinError(26,4.32404e-08);
   ratio->SetBinError(27,6.950279e-05);
   ratio->SetBinError(28,0.1930661);
   ratio->SetBinError(29,0.0001876401);
   ratio->SetBinError(30,1.5813e-08);
   ratio->SetBinError(31,8.198899e-07);
   ratio->SetBinError(32,0.01766958);
   ratio->SetBinError(33,0.09750604);
   ratio->SetBinError(34,0.08430026);
   ratio->SetBinError(35,0.07138055);
   ratio->SetBinError(36,0.4423667);
   ratio->SetBinError(37,0.1147828);
   ratio->SetBinError(38,0.279702);
   ratio->SetBinError(39,0.1764008);
   ratio->SetBinError(40,0.210276);
   ratio->SetBinError(41,0.1911348);
   ratio->SetBinError(42,0.2569252);
   ratio->SetBinError(43,0.1590845);
   ratio->SetBinError(44,0.1711547);
   ratio->SetBinError(45,0.2652806);
   ratio->SetBinError(46,0.1967722);
   ratio->SetBinError(47,0.1564717);
   ratio->SetBinError(48,0.1514978);
   ratio->SetBinError(49,0.1287848);
   ratio->SetBinError(50,0.1319128);
   ratio->SetBinError(51,0.1050689);
   ratio->SetBinError(52,0.09184933);
   ratio->SetBinError(53,0.0736011);
   ratio->SetBinError(54,0.06646996);
   ratio->SetBinError(55,0.04699306);
   ratio->SetBinError(56,0.03078854);
   ratio->SetBinError(57,0.02171124);
   ratio->SetBinError(58,0.02190354);
   ratio->SetBinError(59,0.03558153);
   ratio->SetBinError(60,0.001771198);
   ratio->SetBinError(61,1.23424e-08);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1052.933);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","r9Phot_dataZ_EE",60,0,1);
   ratio->SetBinContent(26,3.990442e-08);
   ratio->SetBinContent(27,8.815833e-05);
   ratio->SetBinContent(28,0.2977239);
   ratio->SetBinContent(29,0.0003017715);
   ratio->SetBinContent(30,1.529321e-08);
   ratio->SetBinContent(31,1.16464e-06);
   ratio->SetBinContent(32,0.03334516);
   ratio->SetBinContent(33,0.3075379);
   ratio->SetBinContent(34,0.220181);
   ratio->SetBinContent(35,0.1965696);
   ratio->SetBinContent(36,1.529521);
   ratio->SetBinContent(37,0.4382859);
   ratio->SetBinContent(38,1.342759);
   ratio->SetBinContent(39,0.6656225);
   ratio->SetBinContent(40,1.191448);
   ratio->SetBinContent(41,0.9253544);
   ratio->SetBinContent(42,1.428061);
   ratio->SetBinContent(43,0.8600872);
   ratio->SetBinContent(44,1.190833);
   ratio->SetBinContent(45,1.976122);
   ratio->SetBinContent(46,1.33917);
   ratio->SetBinContent(47,1.353016);
   ratio->SetBinContent(48,1.425041);
   ratio->SetBinContent(49,1.212134);
   ratio->SetBinContent(50,1.434415);
   ratio->SetBinContent(51,1.276218);
   ratio->SetBinContent(52,1.277087);
   ratio->SetBinContent(53,1.108981);
   ratio->SetBinContent(54,1.211689);
   ratio->SetBinContent(55,1.037849);
   ratio->SetBinContent(56,0.8995592);
   ratio->SetBinContent(57,0.8374693);
   ratio->SetBinContent(58,0.9734601);
   ratio->SetBinContent(59,1.097379);
   ratio->SetBinContent(60,0.009681307);
   ratio->SetBinContent(61,2.107491e-08);
   ratio->SetBinError(26,4.32404e-08);
   ratio->SetBinError(27,6.950279e-05);
   ratio->SetBinError(28,0.1930661);
   ratio->SetBinError(29,0.0001876401);
   ratio->SetBinError(30,1.5813e-08);
   ratio->SetBinError(31,8.198899e-07);
   ratio->SetBinError(32,0.01766958);
   ratio->SetBinError(33,0.09750604);
   ratio->SetBinError(34,0.08430026);
   ratio->SetBinError(35,0.07138055);
   ratio->SetBinError(36,0.4423667);
   ratio->SetBinError(37,0.1147828);
   ratio->SetBinError(38,0.279702);
   ratio->SetBinError(39,0.1764008);
   ratio->SetBinError(40,0.210276);
   ratio->SetBinError(41,0.1911348);
   ratio->SetBinError(42,0.2569252);
   ratio->SetBinError(43,0.1590845);
   ratio->SetBinError(44,0.1711547);
   ratio->SetBinError(45,0.2652806);
   ratio->SetBinError(46,0.1967722);
   ratio->SetBinError(47,0.1564717);
   ratio->SetBinError(48,0.1514978);
   ratio->SetBinError(49,0.1287848);
   ratio->SetBinError(50,0.1319128);
   ratio->SetBinError(51,0.1050689);
   ratio->SetBinError(52,0.09184933);
   ratio->SetBinError(53,0.0736011);
   ratio->SetBinError(54,0.06646996);
   ratio->SetBinError(55,0.04699306);
   ratio->SetBinError(56,0.03078854);
   ratio->SetBinError(57,0.02171124);
   ratio->SetBinError(58,0.02190354);
   ratio->SetBinError(59,0.03558153);
   ratio->SetBinError(60,0.001771198);
   ratio->SetBinError(61,1.23424e-08);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1052.933);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   r9Phot->cd();
   r9Phot->Modified();
   r9Phot->cd();
   r9Phot->SetSelected(r9Phot);
}
