{
//=========Macro generated from canvas: pid_pfIsoFPRNeutral03_presel/pid_pfIsoFPRNeutral03_presel
//=========  (Sat Nov 29 17:30:53 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoFPRNeutral03_presel = new TCanvas("pid_pfIsoFPRNeutral03_presel", "pid_pfIsoFPRNeutral03_presel",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoFPRNeutral03_presel->SetHighLightColor(2);
   pid_pfIsoFPRNeutral03_presel->Range(-0.9749999,-0.1062512,6.525,0.956261);
   pid_pfIsoFPRNeutral03_presel->SetFillColor(0);
   pid_pfIsoFPRNeutral03_presel->SetBorderMode(0);
   pid_pfIsoFPRNeutral03_presel->SetBorderSize(2);
   pid_pfIsoFPRNeutral03_presel->SetTickx(1);
   pid_pfIsoFPRNeutral03_presel->SetLeftMargin(0.13);
   pid_pfIsoFPRNeutral03_presel->SetRightMargin(0.07);
   pid_pfIsoFPRNeutral03_presel->SetFrameFillStyle(0);
   pid_pfIsoFPRNeutral03_presel->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoFPRNeutral03_dataZ_EB__22 = new TH1F("pfIsoFPRNeutral03_dataZ_EB__22","pfIsoFPRNeutral03_dataZ_EB",60,0,6);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(1,0.8180553);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(4,0.0005187877);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(5,0.0089275);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(6,0.01507789);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(7,0.01489529);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(8,0.01866698);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(9,0.02509736);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(10,0.01500555);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(11,0.01139604);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(12,0.008549755);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(13,0.00676543);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(14,0.005450905);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(15,0.004577739);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(16,0.004155565);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(17,0.0039747);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(18,0.00345385);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(19,0.003082691);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(20,0.00305187);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(21,0.003329592);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(22,0.002881086);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(23,0.002274927);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(24,0.001890744);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(25,0.001689847);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(26,0.001556763);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(27,0.001303162);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(28,0.001193532);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(29,0.001160801);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(30,0.001067739);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(31,0.0008605552);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(32,0.0007983674);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(33,0.0008605989);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(34,0.0007134547);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(35,0.0006415661);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(36,0.0005509525);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(37,0.0005421074);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(38,0.0004735902);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(39,0.0005294457);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(40,0.0004206914);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(41,0.0003822791);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(42,0.0003888505);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(43,0.0003211688);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(44,0.000306886);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(45,0.0003226104);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(46,0.0002528121);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(47,0.0002442962);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(48,0.0002949754);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(49,0.0002152509);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(50,0.0002340998);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(51,0.0002188482);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(52,0.0001836753);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(53,0.0002033926);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(54,0.0001851048);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(55,0.0001637126);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(56,0.000157233);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(57,0.0001419413);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(58,0.0001295025);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(59,0.0001098782);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(60,0.0001007899);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinContent(61,0.002134218);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(1,0.001596971);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(4,3.919655e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(5,0.0001729031);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(6,0.0002245058);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(7,0.0002207775);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(8,0.0002485031);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(9,0.0002816703);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(10,0.000216659);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(11,0.0001945024);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(12,0.0001669711);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(13,0.0001494547);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(14,0.0001340527);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(15,0.0001216431);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(16,0.0001156678);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(17,0.000112149);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(18,0.0001085535);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(19,0.0001043968);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(20,0.0001008003);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(21,0.000104252);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(22,9.757887e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(23,8.654274e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(24,8.042274e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(25,7.500012e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(26,7.038487e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(27,6.608987e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(28,6.342167e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(29,6.418665e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(30,5.890887e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(31,5.227496e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(32,5.004112e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(33,5.592464e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(34,4.657677e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(35,4.898411e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(36,4.227296e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(37,4.149211e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(38,4.11246e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(39,4.141277e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(40,3.632255e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(41,3.668419e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(42,4.217536e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(43,3.160144e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(44,3.409009e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(45,3.344608e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(46,3.067907e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(47,2.982165e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(48,3.435119e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(49,2.651162e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(50,2.882775e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(51,2.724441e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(52,2.4911e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(53,2.629668e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(54,2.282995e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(55,2.60494e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(56,2.225329e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(57,2.256778e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(58,2.108945e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(59,2.174072e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(60,2.331136e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetBinError(61,8.324609e-05);
   pfIsoFPRNeutral03_dataZ_EB__22->SetMinimum(8.956281e-09);
   pfIsoFPRNeutral03_dataZ_EB__22->SetMaximum(4.58111);
   pfIsoFPRNeutral03_dataZ_EB__22->SetEntries(533216);
   pfIsoFPRNeutral03_dataZ_EB__22->SetDirectory(0);
   pfIsoFPRNeutral03_dataZ_EB__22->SetStats(0);
   pfIsoFPRNeutral03_dataZ_EB__22->SetMarkerStyle(20);
   pfIsoFPRNeutral03_dataZ_EB__22->SetMarkerSize(0.7);
   pfIsoFPRNeutral03_dataZ_EB__22->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoFPRNeutral03_dataZ_EB__22->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRNeutral03_dataZ_EB__22->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRNeutral03_dataZ_EB__22->Draw("PE");
   
   TH1F *pfIsoFPRNeutral03_mc_Signal_EB__23 = new TH1F("pfIsoFPRNeutral03_mc_Signal_EB__23","pfIsoFPRNeutral03_mc_Signal_EB",60,0,6);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(1,0.774057);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(4,0.0006421663);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(5,0.01398985);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(6,0.02031104);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(7,0.02069545);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(8,0.02565476);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(9,0.02677097);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(10,0.01615136);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(11,0.01319598);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(12,0.01039272);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(13,0.008343027);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(14,0.007833247);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(15,0.006561476);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(16,0.005006443);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(17,0.004983918);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(18,0.004278349);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(19,0.003409591);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(20,0.004134637);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(21,0.003490404);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(22,0.003109558);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(23,0.002549419);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(24,0.002260303);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(25,0.001811695);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(26,0.001627092);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(27,0.002052657);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(28,0.001395529);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(29,0.001195902);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(30,0.001194184);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(31,0.001103764);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(32,0.0009897198);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(33,0.0007713191);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(34,0.0008663657);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(35,0.0007161013);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(36,0.0007334182);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(37,0.0007300699);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(38,0.0005215539);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(39,0.0005000449);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(40,0.0004313496);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(41,0.0005684825);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(42,0.0004412342);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(43,0.0003814768);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(44,0.0003739132);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(45,0.0002558438);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(46,0.0003216181);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(47,0.000263481);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(48,0.0002917357);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(49,0.0003338011);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(50,0.0003320028);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(51,0.0002333798);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(52,0.0002069598);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(53,0.0002085499);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(54,0.0001655022);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(55,0.0002281926);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(56,0.0002542254);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(57,0.0001764286);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(58,0.0001799089);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(59,0.0001403736);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(60,0.0001804774);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinContent(61,0.002955946);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(1,0.005761335);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(4,8.311779e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(5,0.0008438557);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(6,0.0004227762);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(7,0.0008408933);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(8,0.001383118);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(9,0.001004291);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(10,0.0006511745);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(11,0.000494971);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(12,0.0002935164);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(13,0.0002594005);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(14,0.0007898758);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(15,0.0008837296);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(16,0.0001952223);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(17,0.0002074625);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(18,0.0002064825);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(19,0.0001574019);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(20,0.0005659204);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(21,0.0001533916);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(22,0.0001628268);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(23,0.0001336133);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(24,0.0001431789);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(25,0.000125931);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(26,0.0001139687);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(27,0.0006197247);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(28,0.0001117253);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(29,0.0001054391);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(30,0.0001110258);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(31,8.631689e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(32,8.40421e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(33,7.016043e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(34,9.042499e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(35,9.073469e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(36,9.25553e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(37,9.511593e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(38,5.579694e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(39,5.383305e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(40,5.281958e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(41,7.87764e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(42,5.944463e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(43,4.937806e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(44,4.719889e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(45,3.810569e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(46,3.891139e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(47,4.681862e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(48,4.076243e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(49,5.928862e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(50,7.244658e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(51,4.014318e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(52,3.827359e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(53,3.554116e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(54,3.400549e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(55,3.809779e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(56,4.267429e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(57,3.660476e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(58,3.64034e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(59,3.332594e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(60,3.470268e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetBinError(61,0.0001501244);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetEntries(237110);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetDirectory(0);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetLineColor(ci);
   pfIsoFPRNeutral03_mc_Signal_EB__23->SetLineWidth(2);
   pfIsoFPRNeutral03_mc_Signal_EB__23->Draw("HSAME");
   
   TH1F *pfIsoFPRNeutral03_dataZ_EB__24 = new TH1F("pfIsoFPRNeutral03_dataZ_EB__24","pfIsoFPRNeutral03_dataZ_EB",60,0,6);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(1,0.8180553);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(4,0.0005187877);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(5,0.0089275);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(6,0.01507789);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(7,0.01489529);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(8,0.01866698);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(9,0.02509736);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(10,0.01500555);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(11,0.01139604);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(12,0.008549755);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(13,0.00676543);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(14,0.005450905);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(15,0.004577739);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(16,0.004155565);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(17,0.0039747);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(18,0.00345385);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(19,0.003082691);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(20,0.00305187);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(21,0.003329592);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(22,0.002881086);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(23,0.002274927);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(24,0.001890744);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(25,0.001689847);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(26,0.001556763);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(27,0.001303162);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(28,0.001193532);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(29,0.001160801);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(30,0.001067739);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(31,0.0008605552);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(32,0.0007983674);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(33,0.0008605989);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(34,0.0007134547);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(35,0.0006415661);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(36,0.0005509525);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(37,0.0005421074);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(38,0.0004735902);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(39,0.0005294457);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(40,0.0004206914);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(41,0.0003822791);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(42,0.0003888505);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(43,0.0003211688);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(44,0.000306886);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(45,0.0003226104);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(46,0.0002528121);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(47,0.0002442962);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(48,0.0002949754);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(49,0.0002152509);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(50,0.0002340998);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(51,0.0002188482);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(52,0.0001836753);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(53,0.0002033926);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(54,0.0001851048);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(55,0.0001637126);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(56,0.000157233);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(57,0.0001419413);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(58,0.0001295025);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(59,0.0001098782);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(60,0.0001007899);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinContent(61,0.002134218);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(1,0.001596971);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(4,3.919655e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(5,0.0001729031);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(6,0.0002245058);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(7,0.0002207775);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(8,0.0002485031);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(9,0.0002816703);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(10,0.000216659);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(11,0.0001945024);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(12,0.0001669711);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(13,0.0001494547);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(14,0.0001340527);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(15,0.0001216431);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(16,0.0001156678);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(17,0.000112149);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(18,0.0001085535);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(19,0.0001043968);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(20,0.0001008003);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(21,0.000104252);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(22,9.757887e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(23,8.654274e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(24,8.042274e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(25,7.500012e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(26,7.038487e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(27,6.608987e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(28,6.342167e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(29,6.418665e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(30,5.890887e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(31,5.227496e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(32,5.004112e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(33,5.592464e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(34,4.657677e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(35,4.898411e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(36,4.227296e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(37,4.149211e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(38,4.11246e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(39,4.141277e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(40,3.632255e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(41,3.668419e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(42,4.217536e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(43,3.160144e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(44,3.409009e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(45,3.344608e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(46,3.067907e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(47,2.982165e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(48,3.435119e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(49,2.651162e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(50,2.882775e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(51,2.724441e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(52,2.4911e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(53,2.629668e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(54,2.282995e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(55,2.60494e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(56,2.225329e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(57,2.256778e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(58,2.108945e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(59,2.174072e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(60,2.331136e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetBinError(61,8.324609e-05);
   pfIsoFPRNeutral03_dataZ_EB__24->SetMinimum(8.956281e-09);
   pfIsoFPRNeutral03_dataZ_EB__24->SetMaximum(4.58111);
   pfIsoFPRNeutral03_dataZ_EB__24->SetEntries(533216);
   pfIsoFPRNeutral03_dataZ_EB__24->SetDirectory(0);
   pfIsoFPRNeutral03_dataZ_EB__24->SetStats(0);
   pfIsoFPRNeutral03_dataZ_EB__24->SetMarkerStyle(20);
   pfIsoFPRNeutral03_dataZ_EB__24->SetMarkerSize(0.7);
   pfIsoFPRNeutral03_dataZ_EB__24->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoFPRNeutral03_dataZ_EB__24->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRNeutral03_dataZ_EB__24->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRNeutral03_dataZ_EB__24->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.067364e-311,2.274747e-24,6.11412e-316,6.288331e-316,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoFPRNeutral03_dataZ_EB","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoFPRNeutral03_mc_Signal_EB","signal #gamma + jet","F");
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
   pid_pfIsoFPRNeutral03_presel->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRNeutral03_dataZ_EB",60,0,6);
   ratio->SetBinContent(1,1.056841);
   ratio->SetBinContent(4,0.8078713);
   ratio->SetBinContent(5,0.6381412);
   ratio->SetBinContent(6,0.7423496);
   ratio->SetBinContent(7,0.7197375);
   ratio->SetBinContent(8,0.7276224);
   ratio->SetBinContent(9,0.937484);
   ratio->SetBinContent(10,0.9290576);
   ratio->SetBinContent(11,0.8636);
   ratio->SetBinContent(12,0.8226679);
   ratio->SetBinContent(13,0.8109083);
   ratio->SetBinContent(14,0.6958678);
   ratio->SetBinContent(15,0.697669);
   ratio->SetBinContent(16,0.8300433);
   ratio->SetBinContent(17,0.7975052);
   ratio->SetBinContent(18,0.8072857);
   ratio->SetBinContent(19,0.9041232);
   ratio->SetBinContent(20,0.7381227);
   ratio->SetBinContent(21,0.9539276);
   ratio->SetBinContent(22,0.9265259);
   ratio->SetBinContent(23,0.8923316);
   ratio->SetBinContent(24,0.8364999);
   ratio->SetBinContent(25,0.9327435);
   ratio->SetBinContent(26,0.9567763);
   ratio->SetBinContent(27,0.6348657);
   ratio->SetBinContent(28,0.8552542);
   ratio->SetBinContent(29,0.9706482);
   ratio->SetBinContent(30,0.8941163);
   ratio->SetBinContent(31,0.7796554);
   ratio->SetBinContent(32,0.8066601);
   ratio->SetBinContent(33,1.11575);
   ratio->SetBinContent(34,0.8235029);
   ratio->SetBinContent(35,0.8959153);
   ratio->SetBinContent(36,0.7512119);
   ratio->SetBinContent(37,0.7425418);
   ratio->SetBinContent(38,0.9080371);
   ratio->SetBinContent(39,1.058796);
   ratio->SetBinContent(40,0.9752908);
   ratio->SetBinContent(41,0.6724554);
   ratio->SetBinContent(42,0.881279);
   ratio->SetBinContent(43,0.8419092);
   ratio->SetBinContent(44,0.8207414);
   ratio->SetBinContent(45,1.260966);
   ratio->SetBinContent(46,0.7860628);
   ratio->SetBinContent(47,0.9271873);
   ratio->SetBinContent(48,1.011105);
   ratio->SetBinContent(49,0.6448478);
   ratio->SetBinContent(50,0.7051139);
   ratio->SetBinContent(51,0.9377343);
   ratio->SetBinContent(52,0.8874925);
   ratio->SetBinContent(53,0.9752711);
   ratio->SetBinContent(54,1.118443);
   ratio->SetBinContent(55,0.7174317);
   ratio->SetBinContent(56,0.6184787);
   ratio->SetBinContent(57,0.8045255);
   ratio->SetBinContent(58,0.7198227);
   ratio->SetBinContent(59,0.7827553);
   ratio->SetBinContent(60,0.5584629);
   ratio->SetBinContent(61,0.7220083);
   ratio->SetBinError(1,0.008132166);
   ratio->SetBinError(4,0.1210768);
   ratio->SetBinError(5,0.04042763);
   ratio->SetBinError(6,0.01899853);
   ratio->SetBinError(7,0.03112924);
   ratio->SetBinError(8,0.04040633);
   ratio->SetBinError(9,0.03670906);
   ratio->SetBinError(10,0.03978638);
   ratio->SetBinError(11,0.03558874);
   ratio->SetBinError(12,0.028248);
   ratio->SetBinError(13,0.03092863);
   ratio->SetBinError(14,0.07222547);
   ratio->SetBinError(15,0.09577663);
   ratio->SetBinError(16,0.03976682);
   ratio->SetBinError(17,0.04010494);
   ratio->SetBinError(18,0.04649478);
   ratio->SetBinError(19,0.05176473);
   ratio->SetBinError(20,0.103929);
   ratio->SetBinError(21,0.05147383);
   ratio->SetBinError(22,0.05777996);
   ratio->SetBinError(23,0.05778788);
   ratio->SetBinError(24,0.0638256);
   ratio->SetBinError(25,0.07692436);
   ratio->SetBinError(26,0.07976536);
   ratio->SetBinError(27,0.1943599);
   ratio->SetBinError(28,0.08218075);
   ratio->SetBinError(29,0.1010173);
   ratio->SetBinError(30,0.09666268);
   ratio->SetBinError(31,0.07720413);
   ratio->SetBinError(32,0.08513708);
   ratio->SetBinError(33,0.1247289);
   ratio->SetBinError(34,0.1013799);
   ratio->SetBinError(35,0.1325349);
   ratio->SetBinError(36,0.1109476);
   ratio->SetBinError(37,0.1121997);
   ratio->SetBinError(38,0.1251169);
   ratio->SetBinError(39,0.1408961);
   ratio->SetBinError(40,0.146128);
   ratio->SetBinError(41,0.1133465);
   ratio->SetBinError(42,0.152424);
   ratio->SetBinError(43,0.1368876);
   ratio->SetBinError(44,0.1380055);
   ratio->SetBinError(45,0.2288286);
   ratio->SetBinError(46,0.1346988);
   ratio->SetBinError(47,0.1998861);
   ratio->SetBinError(48,0.183911);
   ratio->SetBinError(49,0.139379);
   ratio->SetBinError(50,0.1766731);
   ratio->SetBinError(51,0.1991101);
   ratio->SetBinError(52,0.2035325);
   ratio->SetBinError(53,0.2086239);
   ratio->SetBinError(54,0.2680275);
   ratio->SetBinError(55,0.165464);
   ratio->SetBinError(56,0.1357951);
   ratio->SetBinError(57,0.210296);
   ratio->SetBinError(58,0.1869641);
   ratio->SetBinError(59,0.241911);
   ratio->SetBinError(60,0.1679722);
   ratio->SetBinError(61,0.04623543);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2482.615);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRNeutral03_dataZ_EB",60,0,6);
   ratio->SetBinContent(1,1.056841);
   ratio->SetBinContent(4,0.8078713);
   ratio->SetBinContent(5,0.6381412);
   ratio->SetBinContent(6,0.7423496);
   ratio->SetBinContent(7,0.7197375);
   ratio->SetBinContent(8,0.7276224);
   ratio->SetBinContent(9,0.937484);
   ratio->SetBinContent(10,0.9290576);
   ratio->SetBinContent(11,0.8636);
   ratio->SetBinContent(12,0.8226679);
   ratio->SetBinContent(13,0.8109083);
   ratio->SetBinContent(14,0.6958678);
   ratio->SetBinContent(15,0.697669);
   ratio->SetBinContent(16,0.8300433);
   ratio->SetBinContent(17,0.7975052);
   ratio->SetBinContent(18,0.8072857);
   ratio->SetBinContent(19,0.9041232);
   ratio->SetBinContent(20,0.7381227);
   ratio->SetBinContent(21,0.9539276);
   ratio->SetBinContent(22,0.9265259);
   ratio->SetBinContent(23,0.8923316);
   ratio->SetBinContent(24,0.8364999);
   ratio->SetBinContent(25,0.9327435);
   ratio->SetBinContent(26,0.9567763);
   ratio->SetBinContent(27,0.6348657);
   ratio->SetBinContent(28,0.8552542);
   ratio->SetBinContent(29,0.9706482);
   ratio->SetBinContent(30,0.8941163);
   ratio->SetBinContent(31,0.7796554);
   ratio->SetBinContent(32,0.8066601);
   ratio->SetBinContent(33,1.11575);
   ratio->SetBinContent(34,0.8235029);
   ratio->SetBinContent(35,0.8959153);
   ratio->SetBinContent(36,0.7512119);
   ratio->SetBinContent(37,0.7425418);
   ratio->SetBinContent(38,0.9080371);
   ratio->SetBinContent(39,1.058796);
   ratio->SetBinContent(40,0.9752908);
   ratio->SetBinContent(41,0.6724554);
   ratio->SetBinContent(42,0.881279);
   ratio->SetBinContent(43,0.8419092);
   ratio->SetBinContent(44,0.8207414);
   ratio->SetBinContent(45,1.260966);
   ratio->SetBinContent(46,0.7860628);
   ratio->SetBinContent(47,0.9271873);
   ratio->SetBinContent(48,1.011105);
   ratio->SetBinContent(49,0.6448478);
   ratio->SetBinContent(50,0.7051139);
   ratio->SetBinContent(51,0.9377343);
   ratio->SetBinContent(52,0.8874925);
   ratio->SetBinContent(53,0.9752711);
   ratio->SetBinContent(54,1.118443);
   ratio->SetBinContent(55,0.7174317);
   ratio->SetBinContent(56,0.6184787);
   ratio->SetBinContent(57,0.8045255);
   ratio->SetBinContent(58,0.7198227);
   ratio->SetBinContent(59,0.7827553);
   ratio->SetBinContent(60,0.5584629);
   ratio->SetBinContent(61,0.7220083);
   ratio->SetBinError(1,0.008132166);
   ratio->SetBinError(4,0.1210768);
   ratio->SetBinError(5,0.04042763);
   ratio->SetBinError(6,0.01899853);
   ratio->SetBinError(7,0.03112924);
   ratio->SetBinError(8,0.04040633);
   ratio->SetBinError(9,0.03670906);
   ratio->SetBinError(10,0.03978638);
   ratio->SetBinError(11,0.03558874);
   ratio->SetBinError(12,0.028248);
   ratio->SetBinError(13,0.03092863);
   ratio->SetBinError(14,0.07222547);
   ratio->SetBinError(15,0.09577663);
   ratio->SetBinError(16,0.03976682);
   ratio->SetBinError(17,0.04010494);
   ratio->SetBinError(18,0.04649478);
   ratio->SetBinError(19,0.05176473);
   ratio->SetBinError(20,0.103929);
   ratio->SetBinError(21,0.05147383);
   ratio->SetBinError(22,0.05777996);
   ratio->SetBinError(23,0.05778788);
   ratio->SetBinError(24,0.0638256);
   ratio->SetBinError(25,0.07692436);
   ratio->SetBinError(26,0.07976536);
   ratio->SetBinError(27,0.1943599);
   ratio->SetBinError(28,0.08218075);
   ratio->SetBinError(29,0.1010173);
   ratio->SetBinError(30,0.09666268);
   ratio->SetBinError(31,0.07720413);
   ratio->SetBinError(32,0.08513708);
   ratio->SetBinError(33,0.1247289);
   ratio->SetBinError(34,0.1013799);
   ratio->SetBinError(35,0.1325349);
   ratio->SetBinError(36,0.1109476);
   ratio->SetBinError(37,0.1121997);
   ratio->SetBinError(38,0.1251169);
   ratio->SetBinError(39,0.1408961);
   ratio->SetBinError(40,0.146128);
   ratio->SetBinError(41,0.1133465);
   ratio->SetBinError(42,0.152424);
   ratio->SetBinError(43,0.1368876);
   ratio->SetBinError(44,0.1380055);
   ratio->SetBinError(45,0.2288286);
   ratio->SetBinError(46,0.1346988);
   ratio->SetBinError(47,0.1998861);
   ratio->SetBinError(48,0.183911);
   ratio->SetBinError(49,0.139379);
   ratio->SetBinError(50,0.1766731);
   ratio->SetBinError(51,0.1991101);
   ratio->SetBinError(52,0.2035325);
   ratio->SetBinError(53,0.2086239);
   ratio->SetBinError(54,0.2680275);
   ratio->SetBinError(55,0.165464);
   ratio->SetBinError(56,0.1357951);
   ratio->SetBinError(57,0.210296);
   ratio->SetBinError(58,0.1869641);
   ratio->SetBinError(59,0.241911);
   ratio->SetBinError(60,0.1679722);
   ratio->SetBinError(61,0.04623543);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2482.615);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoFPRNeutral03_presel->cd();
   pid_pfIsoFPRNeutral03_presel->Modified();
   pid_pfIsoFPRNeutral03_presel->cd();
   pid_pfIsoFPRNeutral03_presel->SetSelected(pid_pfIsoFPRNeutral03_presel);
}
