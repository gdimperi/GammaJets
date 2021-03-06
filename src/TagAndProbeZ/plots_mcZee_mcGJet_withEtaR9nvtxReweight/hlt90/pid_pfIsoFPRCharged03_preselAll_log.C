{
//=========Macro generated from canvas: pid_pfIsoFPRCharged03_presel/pid_pfIsoFPRCharged03_presel
//=========  (Sun Sep 28 15:21:30 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoFPRCharged03_presel = new TCanvas("pid_pfIsoFPRCharged03_presel", "pid_pfIsoFPRCharged03_presel",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoFPRCharged03_presel->SetHighLightColor(2);
   pid_pfIsoFPRCharged03_presel->Range(-0.9749999,-0.1371984,6.525,0.8661925);
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
   
   TH1F *pfIsoFPRCharged03_mc_Z_All__28 = new TH1F("pfIsoFPRCharged03_mc_Z_All__28","pfIsoFPRCharged03_mc_Z_All",60,0,6);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(1,0.7280845);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(2,0.001992231);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(3,0.01942832);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(4,0.02857931);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(5,0.03047675);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(6,0.02618691);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(7,0.02188307);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(8,0.01915068);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(9,0.01646487);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(10,0.01298409);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(11,0.01219158);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(12,0.01062957);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(13,0.009100954);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(14,0.006647118);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(15,0.005199708);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(16,0.005991775);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(17,0.005048868);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(18,0.004279717);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(19,0.003611707);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(20,0.002390616);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(21,0.003664192);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(22,0.001932211);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(23,0.00217194);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(24,0.001877012);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(25,0.002117451);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(26,0.002092661);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(27,0.001377682);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(28,0.001779846);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(29,0.001507748);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(30,0.001086988);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(31,0.001532153);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(32,0.00063551);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(33,0.0005093182);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(34,0.0009129093);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(35,0.0005812576);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(36,0.001188406);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(37,0.0004824756);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(38,0.0004104334);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(39,0.0003808623);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(40,0.0004168943);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(41,0.0001832985);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(42,0.0002419675);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(43,0.0001491244);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(44,0.0004305885);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(45,0.000304738);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(46,0.0001500666);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(47,8.915077e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(48,0.0001141342);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(49,6.846592e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(50,7.735707e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(51,0.0003189163);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(52,0.0001130243);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(54,0.0004674204);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(55,0.0001229948);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(57,7.018266e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(58,0.0001182756);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinContent(61,0.001548141);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(1,0.009100615);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(2,0.000534693);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(3,0.001471846);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(4,0.001800426);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(5,0.001835742);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(6,0.001741394);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(7,0.001548753);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(8,0.001449254);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(9,0.001324541);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(10,0.001176344);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(11,0.001121716);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(12,0.00107057);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(13,0.001007843);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(14,0.0008316428);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(15,0.0007548933);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(16,0.0008137131);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(17,0.0007497012);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(18,0.0006945904);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(19,0.0005940277);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(20,0.000514136);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(21,0.0006057179);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(22,0.0004301704);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(23,0.0004994411);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(24,0.0004590018);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(25,0.0005070576);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(26,0.0004534694);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(27,0.0003908364);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(28,0.0004633688);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(29,0.0004318869);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(30,0.0003675778);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(31,0.0003934315);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(32,0.0002525815);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(33,0.0002655188);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(34,0.0003015135);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(35,0.0002300449);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(36,0.0003404413);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(37,0.0002573559);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(38,0.0002187192);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(39,0.0001963197);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(40,0.0001986588);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(41,0.0001074085);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(42,0.000171301);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(43,0.0001491244);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(44,0.0001953757);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(45,0.0001761144);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(46,0.0001064014);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(47,8.915077e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(48,0.0001141342);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(49,6.846593e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(50,7.735707e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(51,0.0002027235);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(52,0.0001130243);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(54,0.0002520922);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(55,9.392829e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(57,7.018266e-05);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(58,0.0001182757);
   pfIsoFPRCharged03_mc_Z_All__28->SetBinError(61,0.0003664368);
   pfIsoFPRCharged03_mc_Z_All__28->SetMinimum(8.825585e-06);
   pfIsoFPRCharged03_mc_Z_All__28->SetMaximum(4.077273);
   pfIsoFPRCharged03_mc_Z_All__28->SetEntries(10171);
   pfIsoFPRCharged03_mc_Z_All__28->SetDirectory(0);
   pfIsoFPRCharged03_mc_Z_All__28->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_All__28->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_All__28->SetMarkerColor(ci);
   pfIsoFPRCharged03_mc_Z_All__28->SetMarkerStyle(20);
   pfIsoFPRCharged03_mc_Z_All__28->SetMarkerSize(0.7);
   pfIsoFPRCharged03_mc_Z_All__28->GetXaxis()->SetTitle("PfIso Charged FPR #DeltaR=0.3 (GeV)");
   pfIsoFPRCharged03_mc_Z_All__28->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRCharged03_mc_Z_All__28->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRCharged03_mc_Z_All__28->Draw("PE");
   
   TH1F *pfIsoFPRCharged03_mc_Signal_All__29 = new TH1F("pfIsoFPRCharged03_mc_Signal_All__29","pfIsoFPRCharged03_mc_Signal_All",60,0,6);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(1,0.7231057);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(2,0.002014518);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(3,0.01984916);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(4,0.02747518);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(5,0.02782792);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(6,0.02563033);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(7,0.02155312);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(8,0.01942866);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(9,0.01691011);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(10,0.01327493);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(11,0.01197847);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(12,0.01037113);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(13,0.008656758);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(14,0.008015126);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(15,0.007020735);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(16,0.005913361);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(17,0.005619952);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(18,0.004534854);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(19,0.004307468);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(20,0.003760476);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(21,0.003388268);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(22,0.002787807);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(23,0.002568378);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(24,0.002235878);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(25,0.002393926);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(26,0.002011781);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(27,0.001548323);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(28,0.001558541);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(29,0.00139197);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(30,0.001142428);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(31,0.001046513);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(32,0.001260473);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(33,0.0008652803);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(34,0.0008152176);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(35,0.0007769329);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(36,0.0007359389);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(37,0.0005846604);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(38,0.0007002681);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(39,0.0005496174);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(40,0.0004246634);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(41,0.0004142359);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(42,0.0003952123);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(43,0.0002742352);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(44,0.0003725295);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(45,0.0003140665);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(46,0.0002440912);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(47,0.0002008484);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(48,0.0002670946);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(49,0.0001648619);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(50,0.0001864745);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(51,0.0001433661);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(52,0.0001847735);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(53,9.484324e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(54,9.127452e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(55,0.0001179586);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(56,0.0001111476);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(57,0.000141019);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(58,9.190996e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(59,5.129546e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(60,0.0001038835);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinContent(61,0.002138797);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(1,0.002414654);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(2,0.0001065167);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(3,0.0003062752);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(4,0.0003471595);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(5,0.0003380813);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(6,0.0003366287);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(7,0.0002903714);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(8,0.0003032028);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(9,0.0009141097);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(10,0.0002286233);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(11,0.0002329075);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(12,0.000222844);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(13,0.0001912613);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(14,0.0002085018);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(15,0.0002006118);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(16,0.0001626515);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(17,0.000181478);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(18,0.0001498577);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(19,0.0001726692);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(20,0.0001553855);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(21,0.0001548394);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(22,0.0001208637);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(23,0.0001345393);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(24,0.0001292735);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(25,0.0001542434);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(26,0.0001340043);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(27,9.433069e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(28,0.0001140814);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(29,9.683141e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(30,7.875502e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(31,8.720807e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(32,0.0001236203);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(33,8.74785e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(34,8.784613e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(35,8.023713e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(36,9.516039e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(37,6.666689e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(38,9.614463e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(39,7.666347e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(40,6.280023e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(41,6.103777e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(42,6.841816e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(43,3.475681e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(44,6.590894e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(45,5.829514e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(46,4.584312e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(47,3.117184e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(48,6.416836e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(49,2.916458e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(50,4.235078e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(51,2.52806e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(52,5.143082e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(53,9.247698e-06);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(54,9.411983e-06);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(55,3.508495e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(56,3.605387e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(57,4.395833e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(58,2.758667e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(59,6.284668e-06);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(60,3.820455e-05);
   pfIsoFPRCharged03_mc_Signal_All__29->SetBinError(61,0.0001717743);
   pfIsoFPRCharged03_mc_Signal_All__29->SetEntries(1709353);
   pfIsoFPRCharged03_mc_Signal_All__29->SetDirectory(0);
   pfIsoFPRCharged03_mc_Signal_All__29->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRCharged03_mc_Signal_All__29->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRCharged03_mc_Signal_All__29->SetLineColor(ci);
   pfIsoFPRCharged03_mc_Signal_All__29->SetLineWidth(2);
   pfIsoFPRCharged03_mc_Signal_All__29->Draw("HSAME");
   
   TH1F *pfIsoFPRCharged03_mc_Z_All__30 = new TH1F("pfIsoFPRCharged03_mc_Z_All__30","pfIsoFPRCharged03_mc_Z_All",60,0,6);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(1,0.7280845);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(2,0.001992231);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(3,0.01942832);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(4,0.02857931);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(5,0.03047675);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(6,0.02618691);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(7,0.02188307);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(8,0.01915068);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(9,0.01646487);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(10,0.01298409);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(11,0.01219158);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(12,0.01062957);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(13,0.009100954);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(14,0.006647118);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(15,0.005199708);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(16,0.005991775);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(17,0.005048868);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(18,0.004279717);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(19,0.003611707);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(20,0.002390616);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(21,0.003664192);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(22,0.001932211);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(23,0.00217194);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(24,0.001877012);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(25,0.002117451);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(26,0.002092661);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(27,0.001377682);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(28,0.001779846);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(29,0.001507748);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(30,0.001086988);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(31,0.001532153);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(32,0.00063551);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(33,0.0005093182);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(34,0.0009129093);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(35,0.0005812576);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(36,0.001188406);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(37,0.0004824756);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(38,0.0004104334);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(39,0.0003808623);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(40,0.0004168943);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(41,0.0001832985);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(42,0.0002419675);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(43,0.0001491244);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(44,0.0004305885);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(45,0.000304738);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(46,0.0001500666);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(47,8.915077e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(48,0.0001141342);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(49,6.846592e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(50,7.735707e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(51,0.0003189163);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(52,0.0001130243);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(54,0.0004674204);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(55,0.0001229948);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(57,7.018266e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(58,0.0001182756);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinContent(61,0.001548141);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(1,0.009100615);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(2,0.000534693);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(3,0.001471846);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(4,0.001800426);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(5,0.001835742);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(6,0.001741394);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(7,0.001548753);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(8,0.001449254);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(9,0.001324541);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(10,0.001176344);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(11,0.001121716);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(12,0.00107057);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(13,0.001007843);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(14,0.0008316428);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(15,0.0007548933);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(16,0.0008137131);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(17,0.0007497012);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(18,0.0006945904);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(19,0.0005940277);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(20,0.000514136);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(21,0.0006057179);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(22,0.0004301704);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(23,0.0004994411);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(24,0.0004590018);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(25,0.0005070576);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(26,0.0004534694);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(27,0.0003908364);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(28,0.0004633688);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(29,0.0004318869);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(30,0.0003675778);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(31,0.0003934315);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(32,0.0002525815);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(33,0.0002655188);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(34,0.0003015135);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(35,0.0002300449);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(36,0.0003404413);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(37,0.0002573559);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(38,0.0002187192);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(39,0.0001963197);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(40,0.0001986588);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(41,0.0001074085);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(42,0.000171301);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(43,0.0001491244);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(44,0.0001953757);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(45,0.0001761144);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(46,0.0001064014);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(47,8.915077e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(48,0.0001141342);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(49,6.846593e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(50,7.735707e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(51,0.0002027235);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(52,0.0001130243);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(54,0.0002520922);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(55,9.392829e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(57,7.018266e-05);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(58,0.0001182757);
   pfIsoFPRCharged03_mc_Z_All__30->SetBinError(61,0.0003664368);
   pfIsoFPRCharged03_mc_Z_All__30->SetMinimum(8.825585e-06);
   pfIsoFPRCharged03_mc_Z_All__30->SetMaximum(4.077273);
   pfIsoFPRCharged03_mc_Z_All__30->SetEntries(10171);
   pfIsoFPRCharged03_mc_Z_All__30->SetDirectory(0);
   pfIsoFPRCharged03_mc_Z_All__30->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_All__30->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRCharged03_mc_Z_All__30->SetMarkerColor(ci);
   pfIsoFPRCharged03_mc_Z_All__30->SetMarkerStyle(20);
   pfIsoFPRCharged03_mc_Z_All__30->SetMarkerSize(0.7);
   pfIsoFPRCharged03_mc_Z_All__30->GetXaxis()->SetTitle("PfIso Charged FPR #DeltaR=0.3 (GeV)");
   pfIsoFPRCharged03_mc_Z_All__30->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRCharged03_mc_Z_All__30->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRCharged03_mc_Z_All__30->Draw("PESAME");
   
   TLegend *leg = new TLegend(5.620414e-310,5.147744e-313,6.32404e-322,1.027657e-321,NULL,"brNDC");
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
   ratio->SetBinContent(1,1.006885);
   ratio->SetBinContent(2,0.9889368);
   ratio->SetBinContent(3,0.978798);
   ratio->SetBinContent(4,1.040186);
   ratio->SetBinContent(5,1.095186);
   ratio->SetBinContent(6,1.021716);
   ratio->SetBinContent(7,1.015309);
   ratio->SetBinContent(8,0.9856923);
   ratio->SetBinContent(9,0.9736701);
   ratio->SetBinContent(10,0.9780909);
   ratio->SetBinContent(11,1.017791);
   ratio->SetBinContent(12,1.024919);
   ratio->SetBinContent(13,1.051312);
   ratio->SetBinContent(14,0.8293217);
   ratio->SetBinContent(15,0.7406216);
   ratio->SetBinContent(16,1.01326);
   ratio->SetBinContent(17,0.8983827);
   ratio->SetBinContent(18,0.9437388);
   ratio->SetBinContent(19,0.8384758);
   ratio->SetBinContent(20,0.6357215);
   ratio->SetBinContent(21,1.081435);
   ratio->SetBinContent(22,0.6930937);
   ratio->SetBinContent(23,0.8456466);
   ratio->SetBinContent(24,0.8394967);
   ratio->SetBinContent(25,0.8845097);
   ratio->SetBinContent(26,1.040203);
   ratio->SetBinContent(27,0.8897896);
   ratio->SetBinContent(28,1.141995);
   ratio->SetBinContent(29,1.083176);
   ratio->SetBinContent(30,0.9514716);
   ratio->SetBinContent(31,1.464056);
   ratio->SetBinContent(32,0.5041839);
   ratio->SetBinContent(33,0.5886164);
   ratio->SetBinContent(34,1.119835);
   ratio->SetBinContent(35,0.748144);
   ratio->SetBinContent(36,1.614816);
   ratio->SetBinContent(37,0.8252236);
   ratio->SetBinContent(38,0.5861089);
   ratio->SetBinContent(39,0.6929589);
   ratio->SetBinContent(40,0.9817052);
   ratio->SetBinContent(41,0.4424978);
   ratio->SetBinContent(42,0.612247);
   ratio->SetBinContent(43,0.543783);
   ratio->SetBinContent(44,1.155851);
   ratio->SetBinContent(45,0.9702977);
   ratio->SetBinContent(46,0.6147972);
   ratio->SetBinContent(47,0.443871);
   ratio->SetBinContent(48,0.4273177);
   ratio->SetBinContent(49,0.4152927);
   ratio->SetBinContent(50,0.41484);
   ratio->SetBinContent(51,2.224489);
   ratio->SetBinContent(52,0.6116912);
   ratio->SetBinContent(54,5.121039);
   ratio->SetBinContent(55,1.042694);
   ratio->SetBinContent(57,0.4976822);
   ratio->SetBinContent(58,1.286864);
   ratio->SetBinContent(61,0.7238371);
   ratio->SetBinError(1,0.01302684);
   ratio->SetBinError(2,0.2705215);
   ratio->SetBinError(3,0.07567399);
   ratio->SetBinError(4,0.06683422);
   ratio->SetBinError(5,0.06729609);
   ratio->SetBinError(6,0.06925522);
   ratio->SetBinError(7,0.07314782);
   ratio->SetBinError(8,0.0761632);
   ratio->SetBinError(9,0.09436968);
   ratio->SetBinError(10,0.09020082);
   ratio->SetBinError(11,0.09571255);
   ratio->SetBinError(12,0.1055489);
   ratio->SetBinError(13,0.1187171);
   ratio->SetBinError(14,0.1059782);
   ratio->SetBinError(15,0.1095862);
   ratio->SetBinError(16,0.1403999);
   ratio->SetBinError(17,0.1365179);
   ratio->SetBinError(18,0.1563098);
   ratio->SetBinError(19,0.1419433);
   ratio->SetBinError(20,0.1392216);
   ratio->SetBinError(21,0.1854744);
   ratio->SetBinError(22,0.1572028);
   ratio->SetBinError(23,0.1994395);
   ratio->SetBinError(24,0.2109493);
   ratio->SetBinError(25,0.219343);
   ratio->SetBinError(26,0.2358157);
   ratio->SetBinError(27,0.258181);
   ratio->SetBinError(28,0.3088371);
   ratio->SetBinError(29,0.3192889);
   ratio->SetBinError(30,0.3283688);
   ratio->SetBinError(31,0.395246);
   ratio->SetBinError(32,0.206397);
   ratio->SetBinError(33,0.3125756);
   ratio->SetBinError(34,0.3890442);
   ratio->SetBinError(35,0.3060085);
   ratio->SetBinError(36,0.5075358);
   ratio->SetBinError(37,0.4501255);
   ratio->SetBinError(38,0.3225362);
   ratio->SetBinError(39,0.3700402);
   ratio->SetBinError(40,0.4898121);
   ratio->SetBinError(41,0.2673654);
   ratio->SetBinError(42,0.4462116);
   ratio->SetBinError(43,0.5481331);
   ratio->SetBinError(44,0.5629156);
   ratio->SetBinError(45,0.5889674);
   ratio->SetBinError(46,0.4509419);
   ratio->SetBinError(47,0.449185);
   ratio->SetBinError(48,0.4394767);
   ratio->SetBinError(49,0.4217409);
   ratio->SetBinError(50,0.4254042);
   ratio->SetBinError(51,1.467425);
   ratio->SetBinError(52,0.6349449);
   ratio->SetBinError(54,2.811941);
   ratio->SetBinError(55,0.8545448);
   ratio->SetBinError(57,0.5213013);
   ratio->SetBinError(58,1.343581);
   ratio->SetBinError(61,0.1809226);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(166.3222);
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
   ratio->SetBinContent(1,1.006885);
   ratio->SetBinContent(2,0.9889368);
   ratio->SetBinContent(3,0.978798);
   ratio->SetBinContent(4,1.040186);
   ratio->SetBinContent(5,1.095186);
   ratio->SetBinContent(6,1.021716);
   ratio->SetBinContent(7,1.015309);
   ratio->SetBinContent(8,0.9856923);
   ratio->SetBinContent(9,0.9736701);
   ratio->SetBinContent(10,0.9780909);
   ratio->SetBinContent(11,1.017791);
   ratio->SetBinContent(12,1.024919);
   ratio->SetBinContent(13,1.051312);
   ratio->SetBinContent(14,0.8293217);
   ratio->SetBinContent(15,0.7406216);
   ratio->SetBinContent(16,1.01326);
   ratio->SetBinContent(17,0.8983827);
   ratio->SetBinContent(18,0.9437388);
   ratio->SetBinContent(19,0.8384758);
   ratio->SetBinContent(20,0.6357215);
   ratio->SetBinContent(21,1.081435);
   ratio->SetBinContent(22,0.6930937);
   ratio->SetBinContent(23,0.8456466);
   ratio->SetBinContent(24,0.8394967);
   ratio->SetBinContent(25,0.8845097);
   ratio->SetBinContent(26,1.040203);
   ratio->SetBinContent(27,0.8897896);
   ratio->SetBinContent(28,1.141995);
   ratio->SetBinContent(29,1.083176);
   ratio->SetBinContent(30,0.9514716);
   ratio->SetBinContent(31,1.464056);
   ratio->SetBinContent(32,0.5041839);
   ratio->SetBinContent(33,0.5886164);
   ratio->SetBinContent(34,1.119835);
   ratio->SetBinContent(35,0.748144);
   ratio->SetBinContent(36,1.614816);
   ratio->SetBinContent(37,0.8252236);
   ratio->SetBinContent(38,0.5861089);
   ratio->SetBinContent(39,0.6929589);
   ratio->SetBinContent(40,0.9817052);
   ratio->SetBinContent(41,0.4424978);
   ratio->SetBinContent(42,0.612247);
   ratio->SetBinContent(43,0.543783);
   ratio->SetBinContent(44,1.155851);
   ratio->SetBinContent(45,0.9702977);
   ratio->SetBinContent(46,0.6147972);
   ratio->SetBinContent(47,0.443871);
   ratio->SetBinContent(48,0.4273177);
   ratio->SetBinContent(49,0.4152927);
   ratio->SetBinContent(50,0.41484);
   ratio->SetBinContent(51,2.224489);
   ratio->SetBinContent(52,0.6116912);
   ratio->SetBinContent(54,5.121039);
   ratio->SetBinContent(55,1.042694);
   ratio->SetBinContent(57,0.4976822);
   ratio->SetBinContent(58,1.286864);
   ratio->SetBinContent(61,0.7238371);
   ratio->SetBinError(1,0.01302684);
   ratio->SetBinError(2,0.2705215);
   ratio->SetBinError(3,0.07567399);
   ratio->SetBinError(4,0.06683422);
   ratio->SetBinError(5,0.06729609);
   ratio->SetBinError(6,0.06925522);
   ratio->SetBinError(7,0.07314782);
   ratio->SetBinError(8,0.0761632);
   ratio->SetBinError(9,0.09436968);
   ratio->SetBinError(10,0.09020082);
   ratio->SetBinError(11,0.09571255);
   ratio->SetBinError(12,0.1055489);
   ratio->SetBinError(13,0.1187171);
   ratio->SetBinError(14,0.1059782);
   ratio->SetBinError(15,0.1095862);
   ratio->SetBinError(16,0.1403999);
   ratio->SetBinError(17,0.1365179);
   ratio->SetBinError(18,0.1563098);
   ratio->SetBinError(19,0.1419433);
   ratio->SetBinError(20,0.1392216);
   ratio->SetBinError(21,0.1854744);
   ratio->SetBinError(22,0.1572028);
   ratio->SetBinError(23,0.1994395);
   ratio->SetBinError(24,0.2109493);
   ratio->SetBinError(25,0.219343);
   ratio->SetBinError(26,0.2358157);
   ratio->SetBinError(27,0.258181);
   ratio->SetBinError(28,0.3088371);
   ratio->SetBinError(29,0.3192889);
   ratio->SetBinError(30,0.3283688);
   ratio->SetBinError(31,0.395246);
   ratio->SetBinError(32,0.206397);
   ratio->SetBinError(33,0.3125756);
   ratio->SetBinError(34,0.3890442);
   ratio->SetBinError(35,0.3060085);
   ratio->SetBinError(36,0.5075358);
   ratio->SetBinError(37,0.4501255);
   ratio->SetBinError(38,0.3225362);
   ratio->SetBinError(39,0.3700402);
   ratio->SetBinError(40,0.4898121);
   ratio->SetBinError(41,0.2673654);
   ratio->SetBinError(42,0.4462116);
   ratio->SetBinError(43,0.5481331);
   ratio->SetBinError(44,0.5629156);
   ratio->SetBinError(45,0.5889674);
   ratio->SetBinError(46,0.4509419);
   ratio->SetBinError(47,0.449185);
   ratio->SetBinError(48,0.4394767);
   ratio->SetBinError(49,0.4217409);
   ratio->SetBinError(50,0.4254042);
   ratio->SetBinError(51,1.467425);
   ratio->SetBinError(52,0.6349449);
   ratio->SetBinError(54,2.811941);
   ratio->SetBinError(55,0.8545448);
   ratio->SetBinError(57,0.5213013);
   ratio->SetBinError(58,1.343581);
   ratio->SetBinError(61,0.1809226);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(166.3222);
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
