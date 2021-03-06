{
//=========Macro generated from canvas: pid_pfIsoFPRCharged03_presel/pid_pfIsoFPRCharged03_presel
//=========  (Thu Sep 18 00:10:49 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoFPRCharged03_presel = new TCanvas("pid_pfIsoFPRCharged03_presel", "pid_pfIsoFPRCharged03_presel",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoFPRCharged03_presel->SetHighLightColor(2);
   pid_pfIsoFPRCharged03_presel->Range(-0.9749999,-0.1364499,6.525,0.8614674);
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
   
   TH1F *pfIsoFPRCharged03_mc_Z_All__10 = new TH1F("pfIsoFPRCharged03_mc_Z_All__10","pfIsoFPRCharged03_mc_Z_All",60,0,6);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(1,0.7245147);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(2,0.001437298);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(3,0.01950327);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(4,0.02745265);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(5,0.03035852);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(6,0.02493669);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(7,0.02245131);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(8,0.01937148);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(9,0.0172234);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(10,0.01365101);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(11,0.01313189);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(12,0.01108702);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(13,0.009478929);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(14,0.007127612);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(15,0.00546763);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(16,0.005967225);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(17,0.00503523);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(18,0.00426452);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(19,0.004122234);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(20,0.002462409);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(21,0.004277833);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(22,0.002345265);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(23,0.002190045);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(24,0.001881755);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(25,0.002024396);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(26,0.002532443);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(27,0.001510164);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(28,0.001598296);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(29,0.001293966);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(30,0.001043278);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(31,0.001754503);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(32,0.0007545064);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(33,0.0003414354);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(34,0.0009341002);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(35,0.0006788434);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(36,0.001230102);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(37,0.000325004);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(38,0.0004022068);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(39,0.0003091926);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(40,0.0004523018);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(41,0.0003314655);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(42,0.0002059082);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(43,0.0001029541);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(44,0.0004865591);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(45,0.0003312389);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(46,0.000205881);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(47,0.0001012871);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(48,8.789745e-05);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(49,6.150363e-05);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(50,9.369392e-05);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(51,0.0002297303);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(52,6.578241e-05);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(54,0.0004182839);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(55,0.0001285596);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(57,0.0001099326);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(58,0.0001147315);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinContent(61,0.001939968);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(1,0.008649042);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(2,0.0003795497);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(3,0.001421877);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(4,0.001671376);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(5,0.001769695);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(6,0.001602181);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(7,0.001516636);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(8,0.001408942);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(9,0.00132364);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(10,0.001185144);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(11,0.001166439);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(12,0.001074502);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(13,0.0009933137);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(14,0.0008595167);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(15,0.0007536807);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(16,0.0007768488);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(17,0.0007181862);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(18,0.0006622104);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(19,0.0006550847);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(20,0.0005033679);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(21,0.0006673542);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(22,0.0004919285);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(23,0.0004746685);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(24,0.00043848);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(25,0.0004567482);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(26,0.0005217183);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(27,0.0004082908);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(28,0.000396052);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(29,0.0003536561);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(30,0.0003249311);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(31,0.0004335469);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(32,0.0002861846);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(33,0.000176436);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(34,0.000311026);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(35,0.0002614995);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(36,0.0003487114);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(37,0.0001770341);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(38,0.0002021589);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(39,0.0001608012);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(40,0.0002117045);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(41,0.00019157);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(42,0.0001455991);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(43,0.0001029541);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(44,0.0002195764);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(45,0.0001918523);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(46,0.0001456214);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(47,0.0001012871);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(48,8.789745e-05);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(49,6.150363e-05);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(50,9.369392e-05);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(51,0.0001457655);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(52,6.57824e-05);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(54,0.0002091515);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(55,0.0001072559);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(57,0.0001099326);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(58,0.0001147315);
   pfIsoFPRCharged03_mc_Z_All__10->SetBinError(61,0.0004532856);
   pfIsoFPRCharged03_mc_Z_All__10->SetMinimum(9.326613e-06);
   pfIsoFPRCharged03_mc_Z_All__10->SetMaximum(4.057282);
   pfIsoFPRCharged03_mc_Z_All__10->SetEntries(10171);
   pfIsoFPRCharged03_mc_Z_All__10->SetDirectory(0);
   pfIsoFPRCharged03_mc_Z_All__10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_All__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_All__10->SetMarkerColor(ci);
   pfIsoFPRCharged03_mc_Z_All__10->SetMarkerStyle(20);
   pfIsoFPRCharged03_mc_Z_All__10->SetMarkerSize(0.7);
   pfIsoFPRCharged03_mc_Z_All__10->GetXaxis()->SetTitle("PfIso Charged FPR #DeltaR=0.3 (GeV)");
   pfIsoFPRCharged03_mc_Z_All__10->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRCharged03_mc_Z_All__10->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRCharged03_mc_Z_All__10->Draw("PE");
   
   TH1F *pfIsoFPRCharged03_mc_Signal_All__11 = new TH1F("pfIsoFPRCharged03_mc_Signal_All__11","pfIsoFPRCharged03_mc_Signal_All",60,0,6);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(1,0.7231057);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(2,0.002014518);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(3,0.01984916);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(4,0.02747518);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(5,0.02782792);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(6,0.02563033);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(7,0.02155312);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(8,0.01942866);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(9,0.01691011);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(10,0.01327493);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(11,0.01197847);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(12,0.01037113);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(13,0.008656758);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(14,0.008015126);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(15,0.007020735);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(16,0.005913361);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(17,0.005619952);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(18,0.004534854);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(19,0.004307468);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(20,0.003760476);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(21,0.003388268);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(22,0.002787807);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(23,0.002568378);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(24,0.002235878);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(25,0.002393926);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(26,0.002011781);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(27,0.001548323);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(28,0.001558541);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(29,0.00139197);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(30,0.001142428);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(31,0.001046513);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(32,0.001260473);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(33,0.0008652803);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(34,0.0008152176);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(35,0.0007769329);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(36,0.0007359389);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(37,0.0005846604);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(38,0.0007002681);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(39,0.0005496174);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(40,0.0004246634);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(41,0.0004142359);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(42,0.0003952123);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(43,0.0002742352);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(44,0.0003725295);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(45,0.0003140665);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(46,0.0002440912);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(47,0.0002008484);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(48,0.0002670946);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(49,0.0001648619);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(50,0.0001864745);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(51,0.0001433661);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(52,0.0001847735);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(53,9.484324e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(54,9.127452e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(55,0.0001179586);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(56,0.0001111476);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(57,0.000141019);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(58,9.190996e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(59,5.129546e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(60,0.0001038835);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinContent(61,0.002138797);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(1,0.002414654);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(2,0.0001065167);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(3,0.0003062752);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(4,0.0003471595);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(5,0.0003380813);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(6,0.0003366287);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(7,0.0002903714);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(8,0.0003032028);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(9,0.0009141097);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(10,0.0002286233);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(11,0.0002329075);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(12,0.000222844);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(13,0.0001912613);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(14,0.0002085018);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(15,0.0002006118);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(16,0.0001626515);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(17,0.000181478);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(18,0.0001498577);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(19,0.0001726692);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(20,0.0001553855);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(21,0.0001548394);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(22,0.0001208637);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(23,0.0001345393);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(24,0.0001292735);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(25,0.0001542434);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(26,0.0001340043);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(27,9.433069e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(28,0.0001140814);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(29,9.683141e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(30,7.875502e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(31,8.720807e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(32,0.0001236203);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(33,8.74785e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(34,8.784613e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(35,8.023713e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(36,9.516039e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(37,6.666689e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(38,9.614463e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(39,7.666347e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(40,6.280023e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(41,6.103777e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(42,6.841816e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(43,3.475681e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(44,6.590894e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(45,5.829514e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(46,4.584312e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(47,3.117184e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(48,6.416836e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(49,2.916458e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(50,4.235078e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(51,2.52806e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(52,5.143082e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(53,9.247698e-06);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(54,9.411983e-06);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(55,3.508495e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(56,3.605387e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(57,4.395833e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(58,2.758667e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(59,6.284668e-06);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(60,3.820455e-05);
   pfIsoFPRCharged03_mc_Signal_All__11->SetBinError(61,0.0001717743);
   pfIsoFPRCharged03_mc_Signal_All__11->SetEntries(1709353);
   pfIsoFPRCharged03_mc_Signal_All__11->SetDirectory(0);
   pfIsoFPRCharged03_mc_Signal_All__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRCharged03_mc_Signal_All__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRCharged03_mc_Signal_All__11->SetLineColor(ci);
   pfIsoFPRCharged03_mc_Signal_All__11->SetLineWidth(2);
   pfIsoFPRCharged03_mc_Signal_All__11->Draw("HSAME");
   
   TH1F *pfIsoFPRCharged03_mc_Z_All__12 = new TH1F("pfIsoFPRCharged03_mc_Z_All__12","pfIsoFPRCharged03_mc_Z_All",60,0,6);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(1,0.7245147);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(2,0.001437298);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(3,0.01950327);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(4,0.02745265);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(5,0.03035852);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(6,0.02493669);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(7,0.02245131);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(8,0.01937148);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(9,0.0172234);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(10,0.01365101);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(11,0.01313189);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(12,0.01108702);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(13,0.009478929);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(14,0.007127612);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(15,0.00546763);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(16,0.005967225);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(17,0.00503523);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(18,0.00426452);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(19,0.004122234);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(20,0.002462409);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(21,0.004277833);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(22,0.002345265);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(23,0.002190045);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(24,0.001881755);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(25,0.002024396);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(26,0.002532443);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(27,0.001510164);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(28,0.001598296);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(29,0.001293966);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(30,0.001043278);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(31,0.001754503);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(32,0.0007545064);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(33,0.0003414354);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(34,0.0009341002);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(35,0.0006788434);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(36,0.001230102);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(37,0.000325004);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(38,0.0004022068);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(39,0.0003091926);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(40,0.0004523018);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(41,0.0003314655);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(42,0.0002059082);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(43,0.0001029541);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(44,0.0004865591);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(45,0.0003312389);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(46,0.000205881);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(47,0.0001012871);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(48,8.789745e-05);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(49,6.150363e-05);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(50,9.369392e-05);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(51,0.0002297303);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(52,6.578241e-05);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(54,0.0004182839);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(55,0.0001285596);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(57,0.0001099326);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(58,0.0001147315);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinContent(61,0.001939968);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(1,0.008649042);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(2,0.0003795497);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(3,0.001421877);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(4,0.001671376);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(5,0.001769695);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(6,0.001602181);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(7,0.001516636);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(8,0.001408942);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(9,0.00132364);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(10,0.001185144);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(11,0.001166439);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(12,0.001074502);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(13,0.0009933137);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(14,0.0008595167);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(15,0.0007536807);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(16,0.0007768488);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(17,0.0007181862);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(18,0.0006622104);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(19,0.0006550847);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(20,0.0005033679);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(21,0.0006673542);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(22,0.0004919285);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(23,0.0004746685);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(24,0.00043848);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(25,0.0004567482);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(26,0.0005217183);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(27,0.0004082908);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(28,0.000396052);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(29,0.0003536561);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(30,0.0003249311);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(31,0.0004335469);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(32,0.0002861846);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(33,0.000176436);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(34,0.000311026);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(35,0.0002614995);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(36,0.0003487114);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(37,0.0001770341);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(38,0.0002021589);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(39,0.0001608012);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(40,0.0002117045);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(41,0.00019157);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(42,0.0001455991);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(43,0.0001029541);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(44,0.0002195764);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(45,0.0001918523);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(46,0.0001456214);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(47,0.0001012871);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(48,8.789745e-05);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(49,6.150363e-05);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(50,9.369392e-05);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(51,0.0001457655);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(52,6.57824e-05);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(54,0.0002091515);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(55,0.0001072559);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(57,0.0001099326);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(58,0.0001147315);
   pfIsoFPRCharged03_mc_Z_All__12->SetBinError(61,0.0004532856);
   pfIsoFPRCharged03_mc_Z_All__12->SetMinimum(9.326613e-06);
   pfIsoFPRCharged03_mc_Z_All__12->SetMaximum(4.057282);
   pfIsoFPRCharged03_mc_Z_All__12->SetEntries(10171);
   pfIsoFPRCharged03_mc_Z_All__12->SetDirectory(0);
   pfIsoFPRCharged03_mc_Z_All__12->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_All__12->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_All__12->SetMarkerColor(ci);
   pfIsoFPRCharged03_mc_Z_All__12->SetMarkerStyle(20);
   pfIsoFPRCharged03_mc_Z_All__12->SetMarkerSize(0.7);
   pfIsoFPRCharged03_mc_Z_All__12->GetXaxis()->SetTitle("PfIso Charged FPR #DeltaR=0.3 (GeV)");
   pfIsoFPRCharged03_mc_Z_All__12->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRCharged03_mc_Z_All__12->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRCharged03_mc_Z_All__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(5.973972e-24,1.741071e-25,7.253414e-26,1.01655e-26,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoFPRCharged03_mc_Z_All","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoFPRCharged03_mc_Signal_All","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRCharged03_mc_Z_All",60,0,6);
   ratio->SetBinContent(1,1.001948);
   ratio->SetBinContent(2,0.7134703);
   ratio->SetBinContent(3,0.9825738);
   ratio->SetBinContent(4,0.9991798);
   ratio->SetBinContent(5,1.090938);
   ratio->SetBinContent(6,0.9729366);
   ratio->SetBinContent(7,1.041673);
   ratio->SetBinContent(8,0.9970565);
   ratio->SetBinContent(9,1.018527);
   ratio->SetBinContent(10,1.02833);
   ratio->SetBinContent(11,1.096291);
   ratio->SetBinContent(12,1.069027);
   ratio->SetBinContent(13,1.094975);
   ratio->SetBinContent(14,0.8892702);
   ratio->SetBinContent(15,0.7787831);
   ratio->SetBinContent(16,1.009109);
   ratio->SetBinContent(17,0.895956);
   ratio->SetBinContent(18,0.9403875);
   ratio->SetBinContent(19,0.956997);
   ratio->SetBinContent(20,0.6548129);
   ratio->SetBinContent(21,1.262543);
   ratio->SetBinContent(22,0.841258);
   ratio->SetBinContent(23,0.8526958);
   ratio->SetBinContent(24,0.8416181);
   ratio->SetBinContent(25,0.8456385);
   ratio->SetBinContent(26,1.258807);
   ratio->SetBinContent(27,0.9753544);
   ratio->SetBinContent(28,1.025508);
   ratio->SetBinContent(29,0.9295934);
   ratio->SetBinContent(30,0.9132108);
   ratio->SetBinContent(31,1.676523);
   ratio->SetBinContent(32,0.5985901);
   ratio->SetBinContent(33,0.3945952);
   ratio->SetBinContent(34,1.145829);
   ratio->SetBinContent(35,0.8737478);
   ratio->SetBinContent(36,1.671473);
   ratio->SetBinContent(37,0.5558851);
   ratio->SetBinContent(38,0.5743611);
   ratio->SetBinContent(39,0.5625597);
   ratio->SetBinContent(40,1.065083);
   ratio->SetBinContent(41,0.8001855);
   ratio->SetBinContent(42,0.5210065);
   ratio->SetBinContent(43,0.3754226);
   ratio->SetBinContent(44,1.306095);
   ratio->SetBinContent(45,1.054677);
   ratio->SetBinContent(46,0.8434594);
   ratio->SetBinContent(47,0.5042965);
   ratio->SetBinContent(48,0.3290874);
   ratio->SetBinContent(49,0.3730616);
   ratio->SetBinContent(50,0.502449);
   ratio->SetBinContent(51,1.602404);
   ratio->SetBinContent(52,0.3560164);
   ratio->SetBinContent(54,4.582701);
   ratio->SetBinContent(55,1.08987);
   ratio->SetBinContent(57,0.7795588);
   ratio->SetBinContent(58,1.248304);
   ratio->SetBinContent(61,0.9070366);
   ratio->SetBinError(1,0.0124201);
   ratio->SetBinError(2,0.1921469);
   ratio->SetBinError(3,0.07322094);
   ratio->SetBinError(4,0.06212849);
   ratio->SetBinError(5,0.06496067);
   ratio->SetBinError(6,0.06380386);
   ratio->SetBinError(7,0.07175315);
   ratio->SetBinError(8,0.07416926);
   ratio->SetBinError(9,0.09569966);
   ratio->SetBinError(10,0.09101647);
   ratio->SetBinError(11,0.09968367);
   ratio->SetBinError(12,0.1061208);
   ratio->SetBinError(13,0.1172669);
   ratio->SetBinError(14,0.1097036);
   ratio->SetBinError(15,0.1096329);
   ratio->SetBinError(16,0.134272);
   ratio->SetBinError(17,0.1310264);
   ratio->SetBinError(18,0.1492968);
   ratio->SetBinError(19,0.1568449);
   ratio->SetBinError(20,0.1365647);
   ratio->SetBinError(21,0.205237);
   ratio->SetBinError(22,0.180187);
   ratio->SetBinError(23,0.1901336);
   ratio->SetBinError(24,0.2020577);
   ratio->SetBinError(25,0.1984219);
   ratio->SetBinError(26,0.27255);
   ratio->SetBinError(27,0.2703111);
   ratio->SetBinError(28,0.2649721);
   ratio->SetBinError(29,0.2621693);
   ratio->SetBinError(30,0.2913051);
   ratio->SetBinError(31,0.4372004);
   ratio->SetBinError(32,0.2345125);
   ratio->SetBinError(33,0.2077719);
   ratio->SetBinError(34,0.4010073);
   ratio->SetBinError(35,0.3484653);
   ratio->SetBinError(36,0.5207962);
   ratio->SetBinError(37,0.3093615);
   ratio->SetBinError(38,0.2992645);
   ratio->SetBinError(39,0.3029094);
   ratio->SetBinError(40,0.5228133);
   ratio->SetBinError(41,0.4772599);
   ratio->SetBinError(42,0.3792876);
   ratio->SetBinError(43,0.3784258);
   ratio->SetBinError(44,0.633098);
   ratio->SetBinError(45,0.6414667);
   ratio->SetBinError(46,0.6172593);
   ratio->SetBinError(47,0.510334);
   ratio->SetBinError(48,0.3384513);
   ratio->SetBinError(49,0.378854);
   ratio->SetBinError(50,0.5152443);
   ratio->SetBinError(51,1.055269);
   ratio->SetBinError(52,0.3695505);
   ratio->SetBinError(54,2.339674);
   ratio->SetBinError(55,0.9653233);
   ratio->SetBinError(57,0.8165553);
   ratio->SetBinError(58,1.303321);
   ratio->SetBinError(61,0.2241051);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(200.9092);
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRCharged03_mc_Z_All",60,0,6);
   ratio->SetBinContent(1,1.001948);
   ratio->SetBinContent(2,0.7134703);
   ratio->SetBinContent(3,0.9825738);
   ratio->SetBinContent(4,0.9991798);
   ratio->SetBinContent(5,1.090938);
   ratio->SetBinContent(6,0.9729366);
   ratio->SetBinContent(7,1.041673);
   ratio->SetBinContent(8,0.9970565);
   ratio->SetBinContent(9,1.018527);
   ratio->SetBinContent(10,1.02833);
   ratio->SetBinContent(11,1.096291);
   ratio->SetBinContent(12,1.069027);
   ratio->SetBinContent(13,1.094975);
   ratio->SetBinContent(14,0.8892702);
   ratio->SetBinContent(15,0.7787831);
   ratio->SetBinContent(16,1.009109);
   ratio->SetBinContent(17,0.895956);
   ratio->SetBinContent(18,0.9403875);
   ratio->SetBinContent(19,0.956997);
   ratio->SetBinContent(20,0.6548129);
   ratio->SetBinContent(21,1.262543);
   ratio->SetBinContent(22,0.841258);
   ratio->SetBinContent(23,0.8526958);
   ratio->SetBinContent(24,0.8416181);
   ratio->SetBinContent(25,0.8456385);
   ratio->SetBinContent(26,1.258807);
   ratio->SetBinContent(27,0.9753544);
   ratio->SetBinContent(28,1.025508);
   ratio->SetBinContent(29,0.9295934);
   ratio->SetBinContent(30,0.9132108);
   ratio->SetBinContent(31,1.676523);
   ratio->SetBinContent(32,0.5985901);
   ratio->SetBinContent(33,0.3945952);
   ratio->SetBinContent(34,1.145829);
   ratio->SetBinContent(35,0.8737478);
   ratio->SetBinContent(36,1.671473);
   ratio->SetBinContent(37,0.5558851);
   ratio->SetBinContent(38,0.5743611);
   ratio->SetBinContent(39,0.5625597);
   ratio->SetBinContent(40,1.065083);
   ratio->SetBinContent(41,0.8001855);
   ratio->SetBinContent(42,0.5210065);
   ratio->SetBinContent(43,0.3754226);
   ratio->SetBinContent(44,1.306095);
   ratio->SetBinContent(45,1.054677);
   ratio->SetBinContent(46,0.8434594);
   ratio->SetBinContent(47,0.5042965);
   ratio->SetBinContent(48,0.3290874);
   ratio->SetBinContent(49,0.3730616);
   ratio->SetBinContent(50,0.502449);
   ratio->SetBinContent(51,1.602404);
   ratio->SetBinContent(52,0.3560164);
   ratio->SetBinContent(54,4.582701);
   ratio->SetBinContent(55,1.08987);
   ratio->SetBinContent(57,0.7795588);
   ratio->SetBinContent(58,1.248304);
   ratio->SetBinContent(61,0.9070366);
   ratio->SetBinError(1,0.0124201);
   ratio->SetBinError(2,0.1921469);
   ratio->SetBinError(3,0.07322094);
   ratio->SetBinError(4,0.06212849);
   ratio->SetBinError(5,0.06496067);
   ratio->SetBinError(6,0.06380386);
   ratio->SetBinError(7,0.07175315);
   ratio->SetBinError(8,0.07416926);
   ratio->SetBinError(9,0.09569966);
   ratio->SetBinError(10,0.09101647);
   ratio->SetBinError(11,0.09968367);
   ratio->SetBinError(12,0.1061208);
   ratio->SetBinError(13,0.1172669);
   ratio->SetBinError(14,0.1097036);
   ratio->SetBinError(15,0.1096329);
   ratio->SetBinError(16,0.134272);
   ratio->SetBinError(17,0.1310264);
   ratio->SetBinError(18,0.1492968);
   ratio->SetBinError(19,0.1568449);
   ratio->SetBinError(20,0.1365647);
   ratio->SetBinError(21,0.205237);
   ratio->SetBinError(22,0.180187);
   ratio->SetBinError(23,0.1901336);
   ratio->SetBinError(24,0.2020577);
   ratio->SetBinError(25,0.1984219);
   ratio->SetBinError(26,0.27255);
   ratio->SetBinError(27,0.2703111);
   ratio->SetBinError(28,0.2649721);
   ratio->SetBinError(29,0.2621693);
   ratio->SetBinError(30,0.2913051);
   ratio->SetBinError(31,0.4372004);
   ratio->SetBinError(32,0.2345125);
   ratio->SetBinError(33,0.2077719);
   ratio->SetBinError(34,0.4010073);
   ratio->SetBinError(35,0.3484653);
   ratio->SetBinError(36,0.5207962);
   ratio->SetBinError(37,0.3093615);
   ratio->SetBinError(38,0.2992645);
   ratio->SetBinError(39,0.3029094);
   ratio->SetBinError(40,0.5228133);
   ratio->SetBinError(41,0.4772599);
   ratio->SetBinError(42,0.3792876);
   ratio->SetBinError(43,0.3784258);
   ratio->SetBinError(44,0.633098);
   ratio->SetBinError(45,0.6414667);
   ratio->SetBinError(46,0.6172593);
   ratio->SetBinError(47,0.510334);
   ratio->SetBinError(48,0.3384513);
   ratio->SetBinError(49,0.378854);
   ratio->SetBinError(50,0.5152443);
   ratio->SetBinError(51,1.055269);
   ratio->SetBinError(52,0.3695505);
   ratio->SetBinError(54,2.339674);
   ratio->SetBinError(55,0.9653233);
   ratio->SetBinError(57,0.8165553);
   ratio->SetBinError(58,1.303321);
   ratio->SetBinError(61,0.2241051);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(200.9092);
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
