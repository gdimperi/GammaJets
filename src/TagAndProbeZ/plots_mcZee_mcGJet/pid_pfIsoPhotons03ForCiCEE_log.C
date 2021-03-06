{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Wed Sep 17 23:45:16 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.06219425,6.525,0.5597482);
   pid_pfIsoPhotons03ForCiC->SetFillColor(0);
   pid_pfIsoPhotons03ForCiC->SetBorderMode(0);
   pid_pfIsoPhotons03ForCiC->SetBorderSize(2);
   pid_pfIsoPhotons03ForCiC->SetTickx(1);
   pid_pfIsoPhotons03ForCiC->SetLeftMargin(0.13);
   pid_pfIsoPhotons03ForCiC->SetRightMargin(0.07);
   pid_pfIsoPhotons03ForCiC->SetFrameFillStyle(0);
   pid_pfIsoPhotons03ForCiC->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoPhotons03_mc_Z_EE__22 = new TH1F("pfIsoPhotons03_mc_Z_EE__22","pfIsoPhotons03_mc_Z_EE",60,0,6);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(1,0.4780604);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(2,0.04303147);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(3,0.05766669);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(4,0.04362261);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(5,0.03670662);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(6,0.03328627);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(7,0.03053065);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(8,0.02773403);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(9,0.02633177);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(10,0.02423005);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(11,0.02156425);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(12,0.01948835);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(13,0.01666766);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(14,0.0154239);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(15,0.01296532);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(16,0.01156548);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(17,0.01018978);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(18,0.008862983);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(19,0.007898026);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(20,0.007200566);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(21,0.006680849);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(22,0.005792637);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(23,0.004663775);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(24,0.004739514);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(25,0.004300684);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(26,0.003826773);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(27,0.003373479);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(28,0.002932489);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(29,0.002746599);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(30,0.00253519);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(31,0.002220082);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(32,0.002074861);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(33,0.001934425);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(34,0.001670384);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(35,0.001624891);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(36,0.001392031);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(37,0.001298444);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(38,0.001060208);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(39,0.001044038);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(40,0.0008995499);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(41,0.001059691);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(42,0.0009987268);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(43,0.000824493);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(44,0.0007592571);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(45,0.0007059444);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(46,0.0006223974);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(47,0.0005917076);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(48,0.0005045648);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(49,0.0003868975);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(50,0.0005061103);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(51,0.000443065);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(52,0.0004272262);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(53,0.0003431443);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(54,0.0002274929);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(55,0.0003263237);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(56,0.0003014188);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(57,0.0003662535);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(58,0.0002595007);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(59,0.0003051912);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(60,0.0002028228);
   pfIsoPhotons03_mc_Z_EE__22->SetBinContent(61,0.004504681);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(1,0.001723743);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(2,0.0005075082);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(3,0.000574829);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(4,0.0005014971);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(5,0.00045465);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(6,0.0004390933);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(7,0.0004196383);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(8,0.000399909);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(9,0.0003933474);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(10,0.0003748848);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(11,0.0003552932);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(12,0.0003426093);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(13,0.0003050428);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(14,0.000304091);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(15,0.0002731818);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(16,0.0002549643);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(17,0.0002401639);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(18,0.0002245295);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(19,0.0002127238);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(20,0.000200738);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(21,0.0001960589);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(22,0.0001774443);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(23,0.0001539139);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(24,0.0001575331);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(25,0.000150702);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(26,0.0001422764);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(27,0.0001313061);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(28,0.0001171652);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(29,0.0001165942);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(30,0.0001111416);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(31,0.0001037993);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(32,9.919079e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(33,0.0001011375);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(34,8.669743e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(35,8.840371e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(36,7.519424e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(37,7.320898e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(38,6.572769e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(39,6.77662e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(40,5.576673e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(41,7.21822e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(42,7.023647e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(43,6.365696e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(44,5.720238e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(45,5.022323e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(46,5.168468e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(47,4.573189e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(48,4.3913e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(49,3.321004e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(50,4.590997e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(51,4.162482e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(52,4.262653e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(53,3.503268e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(54,1.960611e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(55,3.830147e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(56,2.974247e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(57,4.380363e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(58,2.956113e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(59,3.680493e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(60,2.436992e-05);
   pfIsoPhotons03_mc_Z_EE__22->SetBinError(61,0.0001297831);
   pfIsoPhotons03_mc_Z_EE__22->SetMinimum(5.096732e-08);
   pfIsoPhotons03_mc_Z_EE__22->SetMaximum(2.677138);
   pfIsoPhotons03_mc_Z_EE__22->SetEntries(469052);
   pfIsoPhotons03_mc_Z_EE__22->SetDirectory(0);
   pfIsoPhotons03_mc_Z_EE__22->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__22->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__22->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_EE__22->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_EE__22->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_EE__22->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_EE__22->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_EE__22->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_EE__22->Draw("PE");
   
   TH1F *pfIsoPhotons03_mc_Signal_EE__23 = new TH1F("pfIsoPhotons03_mc_Signal_EE__23","pfIsoPhotons03_mc_Signal_EE",60,0,6);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(1,0.4185959);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(2,0.0375956);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(3,0.05499953);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(4,0.04203336);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(5,0.03531177);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(6,0.03190998);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(7,0.0278293);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(8,0.02502427);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(9,0.02386045);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(10,0.02256089);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(11,0.01981857);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(12,0.01898088);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(13,0.01970011);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(14,0.01637318);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(15,0.01505576);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(16,0.01332629);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(17,0.0127622);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(18,0.01134065);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(19,0.0107205);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(20,0.009153932);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(21,0.008779272);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(22,0.007879387);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(23,0.008454648);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(24,0.006900565);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(25,0.006699792);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(26,0.006162074);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(27,0.005466265);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(28,0.005232598);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(29,0.004746505);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(30,0.004675104);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(31,0.004228705);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(32,0.004041134);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(33,0.004020852);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(34,0.003491729);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(35,0.003672274);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(36,0.00330755);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(37,0.003302145);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(38,0.002933195);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(39,0.00310963);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(40,0.002589258);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(41,0.002444842);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(42,0.002357376);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(43,0.002227068);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(44,0.002387821);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(45,0.002294611);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(46,0.001996726);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(47,0.00177687);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(48,0.001890037);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(49,0.00165113);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(50,0.001576903);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(51,0.001552573);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(52,0.001464323);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(53,0.00132947);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(54,0.001291953);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(55,0.00126689);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(56,0.001471848);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(57,0.001209893);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(58,0.001150773);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(59,0.001095955);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(60,0.0009171392);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinContent(61,0.02307988);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(1,0.00217959);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(2,0.0008323834);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(3,0.0006489541);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(4,0.0006619278);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(5,0.0006822059);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(6,0.0005835241);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(7,0.0005279348);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(8,0.0006573563);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(9,0.0006471773);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(10,0.0006323478);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(11,0.0002319265);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(12,0.0002284303);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(13,0.0009181458);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(14,0.0002405764);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(15,0.0005246696);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(16,0.0001866106);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(17,0.0002331551);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(18,0.0002277086);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(19,0.0004266248);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(20,0.0001574113);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(21,0.0001626013);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(22,0.0001615611);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(23,0.0007166337);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(24,0.0001344644);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(25,0.0001459859);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(26,0.0001399673);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(27,0.0001229342);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(28,0.0001243464);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(29,0.0001093803);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(30,0.0001134741);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(31,0.0001077728);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(32,0.0001115158);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(33,0.0001497744);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(34,9.653674e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(35,0.0001093666);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(36,0.0001041278);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(37,0.0003080937);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(38,9.401215e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(39,0.000351341);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(40,8.629843e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(41,7.593027e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(42,7.785658e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(43,7.417789e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(44,0.0001889023);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(45,0.000196423);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(46,0.0001033222);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(47,6.673469e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(48,9.167545e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(49,6.708314e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(50,6.868302e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(51,6.663741e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(52,7.14323e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(53,5.959283e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(54,5.540452e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(55,5.961195e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(56,0.0003393307);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(57,6.402234e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(58,6.353768e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(59,5.619401e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(60,4.977524e-05);
   pfIsoPhotons03_mc_Signal_EE__23->SetBinError(61,0.0006487825);
   pfIsoPhotons03_mc_Signal_EE__23->SetEntries(2325749);
   pfIsoPhotons03_mc_Signal_EE__23->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_EE__23->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__23->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__23->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_EE__23->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_EE__23->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_mc_Z_EE__24 = new TH1F("pfIsoPhotons03_mc_Z_EE__24","pfIsoPhotons03_mc_Z_EE",60,0,6);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(1,0.4780604);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(2,0.04303147);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(3,0.05766669);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(4,0.04362261);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(5,0.03670662);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(6,0.03328627);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(7,0.03053065);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(8,0.02773403);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(9,0.02633177);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(10,0.02423005);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(11,0.02156425);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(12,0.01948835);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(13,0.01666766);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(14,0.0154239);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(15,0.01296532);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(16,0.01156548);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(17,0.01018978);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(18,0.008862983);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(19,0.007898026);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(20,0.007200566);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(21,0.006680849);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(22,0.005792637);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(23,0.004663775);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(24,0.004739514);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(25,0.004300684);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(26,0.003826773);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(27,0.003373479);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(28,0.002932489);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(29,0.002746599);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(30,0.00253519);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(31,0.002220082);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(32,0.002074861);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(33,0.001934425);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(34,0.001670384);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(35,0.001624891);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(36,0.001392031);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(37,0.001298444);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(38,0.001060208);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(39,0.001044038);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(40,0.0008995499);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(41,0.001059691);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(42,0.0009987268);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(43,0.000824493);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(44,0.0007592571);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(45,0.0007059444);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(46,0.0006223974);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(47,0.0005917076);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(48,0.0005045648);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(49,0.0003868975);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(50,0.0005061103);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(51,0.000443065);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(52,0.0004272262);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(53,0.0003431443);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(54,0.0002274929);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(55,0.0003263237);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(56,0.0003014188);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(57,0.0003662535);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(58,0.0002595007);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(59,0.0003051912);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(60,0.0002028228);
   pfIsoPhotons03_mc_Z_EE__24->SetBinContent(61,0.004504681);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(1,0.001723743);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(2,0.0005075082);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(3,0.000574829);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(4,0.0005014971);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(5,0.00045465);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(6,0.0004390933);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(7,0.0004196383);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(8,0.000399909);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(9,0.0003933474);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(10,0.0003748848);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(11,0.0003552932);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(12,0.0003426093);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(13,0.0003050428);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(14,0.000304091);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(15,0.0002731818);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(16,0.0002549643);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(17,0.0002401639);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(18,0.0002245295);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(19,0.0002127238);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(20,0.000200738);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(21,0.0001960589);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(22,0.0001774443);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(23,0.0001539139);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(24,0.0001575331);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(25,0.000150702);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(26,0.0001422764);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(27,0.0001313061);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(28,0.0001171652);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(29,0.0001165942);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(30,0.0001111416);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(31,0.0001037993);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(32,9.919079e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(33,0.0001011375);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(34,8.669743e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(35,8.840371e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(36,7.519424e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(37,7.320898e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(38,6.572769e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(39,6.77662e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(40,5.576673e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(41,7.21822e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(42,7.023647e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(43,6.365696e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(44,5.720238e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(45,5.022323e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(46,5.168468e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(47,4.573189e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(48,4.3913e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(49,3.321004e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(50,4.590997e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(51,4.162482e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(52,4.262653e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(53,3.503268e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(54,1.960611e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(55,3.830147e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(56,2.974247e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(57,4.380363e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(58,2.956113e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(59,3.680493e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(60,2.436992e-05);
   pfIsoPhotons03_mc_Z_EE__24->SetBinError(61,0.0001297831);
   pfIsoPhotons03_mc_Z_EE__24->SetMinimum(5.096732e-08);
   pfIsoPhotons03_mc_Z_EE__24->SetMaximum(2.677138);
   pfIsoPhotons03_mc_Z_EE__24->SetEntries(469052);
   pfIsoPhotons03_mc_Z_EE__24->SetDirectory(0);
   pfIsoPhotons03_mc_Z_EE__24->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__24->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__24->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_EE__24->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_EE__24->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_EE__24->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_EE__24->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_EE__24->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_EE__24->Draw("PESAME");
   
   TLegend *leg = new TLegend(7.656337e-22,9.623195e-23,1.654456e-23,3.617941e-24,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoPhotons03_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoPhotons03_mc_Signal_EE","signal #gamma + jet","F");
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
   pid_pfIsoPhotons03ForCiC->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.142057);
   ratio->SetBinContent(2,1.144588);
   ratio->SetBinContent(3,1.048494);
   ratio->SetBinContent(4,1.037809);
   ratio->SetBinContent(5,1.039501);
   ratio->SetBinContent(6,1.04313);
   ratio->SetBinContent(7,1.097069);
   ratio->SetBinContent(8,1.108286);
   ratio->SetBinContent(9,1.103574);
   ratio->SetBinContent(10,1.073985);
   ratio->SetBinContent(11,1.088083);
   ratio->SetBinContent(12,1.026736);
   ratio->SetBinContent(13,0.8460692);
   ratio->SetBinContent(14,0.9420225);
   ratio->SetBinContent(15,0.8611535);
   ratio->SetBinContent(16,0.8678692);
   ratio->SetBinContent(17,0.7984344);
   ratio->SetBinContent(18,0.7815231);
   ratio->SetBinContent(19,0.7367219);
   ratio->SetBinContent(20,0.786609);
   ratio->SetBinContent(21,0.7609798);
   ratio->SetBinContent(22,0.7351635);
   ratio->SetBinContent(23,0.5516226);
   ratio->SetBinContent(24,0.6868298);
   ratio->SetBinContent(25,0.6419131);
   ratio->SetBinContent(26,0.6210203);
   ratio->SetBinContent(27,0.6171452);
   ratio->SetBinContent(28,0.560427);
   ratio->SetBinContent(29,0.5786572);
   ratio->SetBinContent(30,0.5422747);
   ratio->SetBinContent(31,0.5250028);
   ratio->SetBinContent(32,0.5134353);
   ratio->SetBinContent(33,0.4810982);
   ratio->SetBinContent(34,0.4783829);
   ratio->SetBinContent(35,0.4424754);
   ratio->SetBinContent(36,0.4208647);
   ratio->SetBinContent(37,0.3932121);
   ratio->SetBinContent(38,0.3614515);
   ratio->SetBinContent(39,0.3357436);
   ratio->SetBinContent(40,0.3474161);
   ratio->SetBinContent(41,0.4334396);
   ratio->SetBinContent(42,0.4236605);
   ratio->SetBinContent(43,0.3702146);
   ratio->SetBinContent(44,0.3179708);
   ratio->SetBinContent(45,0.3076532);
   ratio->SetBinContent(46,0.3117089);
   ratio->SetBinContent(47,0.3330057);
   ratio->SetBinContent(48,0.2669603);
   ratio->SetBinContent(49,0.2343229);
   ratio->SetBinContent(50,0.3209521);
   ratio->SetBinContent(51,0.2853747);
   ratio->SetBinContent(52,0.2917567);
   ratio->SetBinContent(53,0.2581061);
   ratio->SetBinContent(54,0.1760846);
   ratio->SetBinContent(55,0.2575786);
   ratio->SetBinContent(56,0.2047894);
   ratio->SetBinContent(57,0.3027156);
   ratio->SetBinContent(58,0.2255012);
   ratio->SetBinContent(59,0.2784706);
   ratio->SetBinContent(60,0.2211472);
   ratio->SetBinContent(61,0.1951778);
   ratio->SetBinError(1,0.007233195);
   ratio->SetBinError(2,0.02871285);
   ratio->SetBinError(3,0.01619529);
   ratio->SetBinError(4,0.02023471);
   ratio->SetBinError(5,0.02385553);
   ratio->SetBinError(6,0.0235205);
   ratio->SetBinError(7,0.02570043);
   ratio->SetBinError(8,0.033211);
   ratio->SetBinError(9,0.03417212);
   ratio->SetBinError(10,0.0343839);
   ratio->SetBinError(11,0.02198918);
   ratio->SetBinError(12,0.02187451);
   ratio->SetBinError(13,0.04236328);
   ratio->SetBinError(14,0.02316298);
   ratio->SetBinError(15,0.03506879);
   ratio->SetBinError(16,0.02266591);
   ratio->SetBinError(17,0.02380976);
   ratio->SetBinError(18,0.02526322);
   ratio->SetBinError(19,0.03540169);
   ratio->SetBinError(20,0.02576539);
   ratio->SetBinError(21,0.02640764);
   ratio->SetBinError(22,0.02709941);
   ratio->SetBinError(23,0.05017567);
   ratio->SetBinError(24,0.02646287);
   ratio->SetBinError(25,0.02648766);
   ratio->SetBinError(26,0.02705707);
   ratio->SetBinError(27,0.02774262);
   ratio->SetBinError(28,0.02605265);
   ratio->SetBinError(29,0.02795027);
   ratio->SetBinError(30,0.02717351);
   ratio->SetBinError(31,0.02795629);
   ratio->SetBinError(32,0.02834101);
   ratio->SetBinError(33,0.03088422);
   ratio->SetBinError(34,0.02813226);
   ratio->SetBinError(35,0.02744402);
   ratio->SetBinError(36,0.02631335);
   ratio->SetBinError(37,0.04286559);
   ratio->SetBinError(38,0.02522576);
   ratio->SetBinError(39,0.04374803);
   ratio->SetBinError(40,0.02445303);
   ratio->SetBinError(41,0.03244834);
   ratio->SetBinError(42,0.03291631);
   ratio->SetBinError(43,0.03112967);
   ratio->SetBinError(44,0.03473693);
   ratio->SetBinError(45,0.03424368);
   ratio->SetBinError(46,0.03049891);
   ratio->SetBinError(47,0.02861523);
   ratio->SetBinError(48,0.02659864);
   ratio->SetBinError(49,0.02225283);
   ratio->SetBinError(50,0.03229622);
   ratio->SetBinError(51,0.02947562);
   ratio->SetBinError(52,0.03240303);
   ratio->SetBinError(53,0.02877882);
   ratio->SetBinError(54,0.0169505);
   ratio->SetBinError(55,0.03257162);
   ratio->SetBinError(56,0.05135638);
   ratio->SetBinError(57,0.03958988);
   ratio->SetBinError(58,0.02854636);
   ratio->SetBinError(59,0.03649187);
   ratio->SetBinError(60,0.02915657);
   ratio->SetBinError(61,0.007856354);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(23752.99);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.142057);
   ratio->SetBinContent(2,1.144588);
   ratio->SetBinContent(3,1.048494);
   ratio->SetBinContent(4,1.037809);
   ratio->SetBinContent(5,1.039501);
   ratio->SetBinContent(6,1.04313);
   ratio->SetBinContent(7,1.097069);
   ratio->SetBinContent(8,1.108286);
   ratio->SetBinContent(9,1.103574);
   ratio->SetBinContent(10,1.073985);
   ratio->SetBinContent(11,1.088083);
   ratio->SetBinContent(12,1.026736);
   ratio->SetBinContent(13,0.8460692);
   ratio->SetBinContent(14,0.9420225);
   ratio->SetBinContent(15,0.8611535);
   ratio->SetBinContent(16,0.8678692);
   ratio->SetBinContent(17,0.7984344);
   ratio->SetBinContent(18,0.7815231);
   ratio->SetBinContent(19,0.7367219);
   ratio->SetBinContent(20,0.786609);
   ratio->SetBinContent(21,0.7609798);
   ratio->SetBinContent(22,0.7351635);
   ratio->SetBinContent(23,0.5516226);
   ratio->SetBinContent(24,0.6868298);
   ratio->SetBinContent(25,0.6419131);
   ratio->SetBinContent(26,0.6210203);
   ratio->SetBinContent(27,0.6171452);
   ratio->SetBinContent(28,0.560427);
   ratio->SetBinContent(29,0.5786572);
   ratio->SetBinContent(30,0.5422747);
   ratio->SetBinContent(31,0.5250028);
   ratio->SetBinContent(32,0.5134353);
   ratio->SetBinContent(33,0.4810982);
   ratio->SetBinContent(34,0.4783829);
   ratio->SetBinContent(35,0.4424754);
   ratio->SetBinContent(36,0.4208647);
   ratio->SetBinContent(37,0.3932121);
   ratio->SetBinContent(38,0.3614515);
   ratio->SetBinContent(39,0.3357436);
   ratio->SetBinContent(40,0.3474161);
   ratio->SetBinContent(41,0.4334396);
   ratio->SetBinContent(42,0.4236605);
   ratio->SetBinContent(43,0.3702146);
   ratio->SetBinContent(44,0.3179708);
   ratio->SetBinContent(45,0.3076532);
   ratio->SetBinContent(46,0.3117089);
   ratio->SetBinContent(47,0.3330057);
   ratio->SetBinContent(48,0.2669603);
   ratio->SetBinContent(49,0.2343229);
   ratio->SetBinContent(50,0.3209521);
   ratio->SetBinContent(51,0.2853747);
   ratio->SetBinContent(52,0.2917567);
   ratio->SetBinContent(53,0.2581061);
   ratio->SetBinContent(54,0.1760846);
   ratio->SetBinContent(55,0.2575786);
   ratio->SetBinContent(56,0.2047894);
   ratio->SetBinContent(57,0.3027156);
   ratio->SetBinContent(58,0.2255012);
   ratio->SetBinContent(59,0.2784706);
   ratio->SetBinContent(60,0.2211472);
   ratio->SetBinContent(61,0.1951778);
   ratio->SetBinError(1,0.007233195);
   ratio->SetBinError(2,0.02871285);
   ratio->SetBinError(3,0.01619529);
   ratio->SetBinError(4,0.02023471);
   ratio->SetBinError(5,0.02385553);
   ratio->SetBinError(6,0.0235205);
   ratio->SetBinError(7,0.02570043);
   ratio->SetBinError(8,0.033211);
   ratio->SetBinError(9,0.03417212);
   ratio->SetBinError(10,0.0343839);
   ratio->SetBinError(11,0.02198918);
   ratio->SetBinError(12,0.02187451);
   ratio->SetBinError(13,0.04236328);
   ratio->SetBinError(14,0.02316298);
   ratio->SetBinError(15,0.03506879);
   ratio->SetBinError(16,0.02266591);
   ratio->SetBinError(17,0.02380976);
   ratio->SetBinError(18,0.02526322);
   ratio->SetBinError(19,0.03540169);
   ratio->SetBinError(20,0.02576539);
   ratio->SetBinError(21,0.02640764);
   ratio->SetBinError(22,0.02709941);
   ratio->SetBinError(23,0.05017567);
   ratio->SetBinError(24,0.02646287);
   ratio->SetBinError(25,0.02648766);
   ratio->SetBinError(26,0.02705707);
   ratio->SetBinError(27,0.02774262);
   ratio->SetBinError(28,0.02605265);
   ratio->SetBinError(29,0.02795027);
   ratio->SetBinError(30,0.02717351);
   ratio->SetBinError(31,0.02795629);
   ratio->SetBinError(32,0.02834101);
   ratio->SetBinError(33,0.03088422);
   ratio->SetBinError(34,0.02813226);
   ratio->SetBinError(35,0.02744402);
   ratio->SetBinError(36,0.02631335);
   ratio->SetBinError(37,0.04286559);
   ratio->SetBinError(38,0.02522576);
   ratio->SetBinError(39,0.04374803);
   ratio->SetBinError(40,0.02445303);
   ratio->SetBinError(41,0.03244834);
   ratio->SetBinError(42,0.03291631);
   ratio->SetBinError(43,0.03112967);
   ratio->SetBinError(44,0.03473693);
   ratio->SetBinError(45,0.03424368);
   ratio->SetBinError(46,0.03049891);
   ratio->SetBinError(47,0.02861523);
   ratio->SetBinError(48,0.02659864);
   ratio->SetBinError(49,0.02225283);
   ratio->SetBinError(50,0.03229622);
   ratio->SetBinError(51,0.02947562);
   ratio->SetBinError(52,0.03240303);
   ratio->SetBinError(53,0.02877882);
   ratio->SetBinError(54,0.0169505);
   ratio->SetBinError(55,0.03257162);
   ratio->SetBinError(56,0.05135638);
   ratio->SetBinError(57,0.03958988);
   ratio->SetBinError(58,0.02854636);
   ratio->SetBinError(59,0.03649187);
   ratio->SetBinError(60,0.02915657);
   ratio->SetBinError(61,0.007856354);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(23752.99);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoPhotons03ForCiC->cd();
   pid_pfIsoPhotons03ForCiC->Modified();
   pid_pfIsoPhotons03ForCiC->cd();
   pid_pfIsoPhotons03ForCiC->SetSelected(pid_pfIsoPhotons03ForCiC);
}
