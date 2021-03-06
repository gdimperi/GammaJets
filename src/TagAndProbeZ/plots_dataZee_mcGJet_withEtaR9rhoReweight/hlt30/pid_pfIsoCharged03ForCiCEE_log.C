{
//=========Macro generated from canvas: pid_pfIsoCharged03ForCiC/pid_pfIsoCharged03ForCiC
//=========  (Tue Dec  2 08:44:57 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoCharged03ForCiC = new TCanvas("pid_pfIsoCharged03ForCiC", "pid_pfIsoCharged03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoCharged03ForCiC->SetHighLightColor(2);
   pid_pfIsoCharged03ForCiC->Range(-0.9749999,-0.0942306,6.525,0.8480753);
   pid_pfIsoCharged03ForCiC->SetFillColor(0);
   pid_pfIsoCharged03ForCiC->SetBorderMode(0);
   pid_pfIsoCharged03ForCiC->SetBorderSize(2);
   pid_pfIsoCharged03ForCiC->SetTickx(1);
   pid_pfIsoCharged03ForCiC->SetLeftMargin(0.13);
   pid_pfIsoCharged03ForCiC->SetRightMargin(0.07);
   pid_pfIsoCharged03ForCiC->SetFrameFillStyle(0);
   pid_pfIsoCharged03ForCiC->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoCharged03_mc_Z_EE__4 = new TH1F("pfIsoCharged03_mc_Z_EE__4","pfIsoCharged03_mc_Z_EE",60,0,6);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(1,0.7239373);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(2,0.004267798);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(3,0.02282575);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(4,0.0287728);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(5,0.02828226);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(6,0.02600148);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(7,0.0216746);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(8,0.01883144);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(9,0.01568955);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(10,0.01369405);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(11,0.01226003);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(12,0.009484775);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(13,0.00868575);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(14,0.007793337);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(15,0.006979733);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(16,0.006028688);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(17,0.004988794);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(18,0.004769078);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(19,0.003450815);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(20,0.003745623);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(21,0.003286395);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(22,0.002537505);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(23,0.002232989);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(24,0.001893924);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(25,0.001867753);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(26,0.001728042);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(27,0.001334501);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(28,0.001222736);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(29,0.001232349);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(30,0.00114477);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(31,0.0009329547);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(32,0.0009507067);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(33,0.0008244225);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(34,0.0009017694);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(35,0.0007168213);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(36,0.000673825);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(37,0.0004483593);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(38,0.0004633236);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(39,0.0005092999);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(40,0.0004113773);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(41,0.0004296478);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(42,0.0003176947);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(43,0.0002920536);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(44,0.0002211419);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(45,0.0002411814);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(46,0.0002276092);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(47,0.0001787379);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(48,0.0002521027);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(49,0.0002249611);
   pfIsoCharged03_mc_Z_EE__4->SetBinContent(50,0.0001373524);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(1,0.002984366);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(2,0.0002884511);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(3,0.000521319);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(4,0.0006232123);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(5,0.0005604247);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(6,0.0005495583);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(7,0.0005232948);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(8,0.0004900895);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(9,0.0004150491);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(10,0.0004151701);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(11,0.0004072496);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(12,0.0003438722);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(13,0.0003208894);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(14,0.0002879017);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(15,0.0002953024);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(16,0.0003105126);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(17,0.0002520495);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(18,0.0002614423);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(19,0.0001770291);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(20,0.0002308777);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(21,0.0002450904);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(22,0.0001949428);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(23,0.000158738);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(24,0.0001267002);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(25,0.0001532639);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(26,0.0001242299);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(27,0.0001220942);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(28,0.0001049645);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(29,0.0001253013);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(30,0.0001419274);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(31,9.91169e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(32,0.0001021401);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(33,9.960381e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(34,0.0001235535);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(35,0.0001172653);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(36,7.939879e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(37,5.223866e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(38,5.864338e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(39,7.945708e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(40,5.433193e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(41,7.413294e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(42,4.191865e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(43,4.588822e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(44,3.42885e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(45,5.759242e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(46,3.069884e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(47,6.132761e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(48,5.027497e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(49,6.916079e-05);
   pfIsoCharged03_mc_Z_EE__4->SetBinError(50,2.279392e-05);
   pfIsoCharged03_mc_Z_EE__4->SetMinimum(3.420241e-07);
   pfIsoCharged03_mc_Z_EE__4->SetMaximum(4.054049);
   pfIsoCharged03_mc_Z_EE__4->SetEntries(460481);
   pfIsoCharged03_mc_Z_EE__4->SetDirectory(0);
   pfIsoCharged03_mc_Z_EE__4->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EE__4->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EE__4->SetMarkerColor(ci);
   pfIsoCharged03_mc_Z_EE__4->SetMarkerStyle(20);
   pfIsoCharged03_mc_Z_EE__4->SetMarkerSize(0.7);
   pfIsoCharged03_mc_Z_EE__4->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_mc_Z_EE__4->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_mc_Z_EE__4->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_mc_Z_EE__4->Draw("PE");
   
   TH1F *pfIsoCharged03_mc_Signal_EE__5 = new TH1F("pfIsoCharged03_mc_Signal_EE__5","pfIsoCharged03_mc_Signal_EE",60,0,6);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(1,0.7171018);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(2,0.003124936);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(3,0.01737699);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(4,0.02477591);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(5,0.02516781);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(6,0.02305924);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(7,0.02105285);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(8,0.0189889);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(9,0.01540751);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(10,0.0143788);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(11,0.01238275);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(12,0.01018153);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(13,0.009467266);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(14,0.007986416);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(15,0.008356526);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(16,0.006327998);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(17,0.006432828);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(18,0.005430646);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(19,0.004548068);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(20,0.004644805);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(21,0.00436698);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(22,0.003333505);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(23,0.003038187);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(24,0.002691038);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(25,0.002632299);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(26,0.002046845);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(27,0.002269284);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(28,0.002272298);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(29,0.001799517);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(30,0.001862665);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(31,0.001527697);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(32,0.001500356);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(33,0.001243549);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(34,0.001444042);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(35,0.001153499);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(36,0.0008669086);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(37,0.0008072405);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(38,0.0007792376);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(39,0.0008911805);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(40,0.001068304);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(41,0.0008077894);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(42,0.0008007555);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(43,0.000915835);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(44,0.0006383843);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(45,0.0007117248);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(46,0.0004984462);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(47,0.0004164868);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(48,0.0002702507);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(49,0.0006316457);
   pfIsoCharged03_mc_Signal_EE__5->SetBinContent(50,0.0005205176);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(1,0.00334043);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(2,0.0002269878);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(3,0.0004943788);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(4,0.0006245948);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(5,0.0005865274);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(6,0.0005772704);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(7,0.0005594071);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(8,0.0005892582);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(9,0.0004812467);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(10,0.0005080128);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(11,0.0004745317);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(12,0.0004010522);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(13,0.0004088545);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(14,0.0003605095);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(15,0.0004300476);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(16,0.000332246);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(17,0.0003823242);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(18,0.0003389403);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(19,0.0003040664);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(20,0.0003250334);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(21,0.0003384789);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(22,0.0002685622);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(23,0.0002607652);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(24,0.0002427392);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(25,0.0002544972);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(26,0.000204584);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(27,0.0002350288);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(28,0.0002617619);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(29,0.0002233563);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(30,0.0002326411);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(31,0.0002009799);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(32,0.0002150951);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(33,0.0001925675);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(34,0.0002228713);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(35,0.0001844031);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(36,0.0001435703);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(37,0.0001590834);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(38,0.0001507797);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(39,0.0001840311);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(40,0.0002034353);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(41,0.0001822135);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(42,0.0001792452);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(43,0.0001994938);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(44,0.000161137);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(45,0.0001686006);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(46,0.000144125);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(47,0.0001196518);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(48,7.845358e-05);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(49,0.0001658081);
   pfIsoCharged03_mc_Signal_EE__5->SetBinError(50,0.0001426661);
   pfIsoCharged03_mc_Signal_EE__5->SetEntries(612544);
   pfIsoCharged03_mc_Signal_EE__5->SetDirectory(0);
   pfIsoCharged03_mc_Signal_EE__5->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EE__5->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EE__5->SetLineColor(ci);
   pfIsoCharged03_mc_Signal_EE__5->SetLineWidth(2);
   pfIsoCharged03_mc_Signal_EE__5->Draw("HSAME");
   
   TH1F *pfIsoCharged03_mc_Z_EE__6 = new TH1F("pfIsoCharged03_mc_Z_EE__6","pfIsoCharged03_mc_Z_EE",60,0,6);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(1,0.7239373);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(2,0.004267798);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(3,0.02282575);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(4,0.0287728);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(5,0.02828226);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(6,0.02600148);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(7,0.0216746);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(8,0.01883144);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(9,0.01568955);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(10,0.01369405);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(11,0.01226003);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(12,0.009484775);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(13,0.00868575);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(14,0.007793337);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(15,0.006979733);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(16,0.006028688);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(17,0.004988794);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(18,0.004769078);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(19,0.003450815);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(20,0.003745623);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(21,0.003286395);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(22,0.002537505);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(23,0.002232989);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(24,0.001893924);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(25,0.001867753);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(26,0.001728042);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(27,0.001334501);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(28,0.001222736);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(29,0.001232349);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(30,0.00114477);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(31,0.0009329547);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(32,0.0009507067);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(33,0.0008244225);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(34,0.0009017694);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(35,0.0007168213);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(36,0.000673825);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(37,0.0004483593);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(38,0.0004633236);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(39,0.0005092999);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(40,0.0004113773);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(41,0.0004296478);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(42,0.0003176947);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(43,0.0002920536);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(44,0.0002211419);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(45,0.0002411814);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(46,0.0002276092);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(47,0.0001787379);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(48,0.0002521027);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(49,0.0002249611);
   pfIsoCharged03_mc_Z_EE__6->SetBinContent(50,0.0001373524);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(1,0.002984366);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(2,0.0002884511);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(3,0.000521319);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(4,0.0006232123);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(5,0.0005604247);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(6,0.0005495583);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(7,0.0005232948);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(8,0.0004900895);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(9,0.0004150491);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(10,0.0004151701);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(11,0.0004072496);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(12,0.0003438722);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(13,0.0003208894);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(14,0.0002879017);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(15,0.0002953024);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(16,0.0003105126);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(17,0.0002520495);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(18,0.0002614423);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(19,0.0001770291);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(20,0.0002308777);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(21,0.0002450904);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(22,0.0001949428);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(23,0.000158738);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(24,0.0001267002);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(25,0.0001532639);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(26,0.0001242299);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(27,0.0001220942);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(28,0.0001049645);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(29,0.0001253013);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(30,0.0001419274);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(31,9.91169e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(32,0.0001021401);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(33,9.960381e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(34,0.0001235535);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(35,0.0001172653);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(36,7.939879e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(37,5.223866e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(38,5.864338e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(39,7.945708e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(40,5.433193e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(41,7.413294e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(42,4.191865e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(43,4.588822e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(44,3.42885e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(45,5.759242e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(46,3.069884e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(47,6.132761e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(48,5.027497e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(49,6.916079e-05);
   pfIsoCharged03_mc_Z_EE__6->SetBinError(50,2.279392e-05);
   pfIsoCharged03_mc_Z_EE__6->SetMinimum(3.420241e-07);
   pfIsoCharged03_mc_Z_EE__6->SetMaximum(4.054049);
   pfIsoCharged03_mc_Z_EE__6->SetEntries(460481);
   pfIsoCharged03_mc_Z_EE__6->SetDirectory(0);
   pfIsoCharged03_mc_Z_EE__6->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EE__6->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EE__6->SetMarkerColor(ci);
   pfIsoCharged03_mc_Z_EE__6->SetMarkerStyle(20);
   pfIsoCharged03_mc_Z_EE__6->SetMarkerSize(0.7);
   pfIsoCharged03_mc_Z_EE__6->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_mc_Z_EE__6->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_mc_Z_EE__6->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_mc_Z_EE__6->Draw("PESAME");
   
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
   entry=leg->AddEntry("pfIsoCharged03_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoCharged03_mc_Signal_EE","signal #gamma + jet","F");
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
   pid_pfIsoCharged03ForCiC->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.009532);
   ratio->SetBinContent(2,1.365723);
   ratio->SetBinContent(3,1.313562);
   ratio->SetBinContent(4,1.161322);
   ratio->SetBinContent(5,1.123747);
   ratio->SetBinContent(6,1.127595);
   ratio->SetBinContent(7,1.029533);
   ratio->SetBinContent(8,0.991708);
   ratio->SetBinContent(9,1.018305);
   ratio->SetBinContent(10,0.9523772);
   ratio->SetBinContent(11,0.99009);
   ratio->SetBinContent(12,0.9315672);
   ratio->SetBinContent(13,0.9174508);
   ratio->SetBinContent(14,0.9758241);
   ratio->SetBinContent(15,0.8352435);
   ratio->SetBinContent(16,0.9527006);
   ratio->SetBinContent(17,0.7755212);
   ratio->SetBinContent(18,0.8781788);
   ratio->SetBinContent(19,0.758743);
   ratio->SetBinContent(20,0.8064113);
   ratio->SetBinContent(21,0.7525555);
   ratio->SetBinContent(22,0.7612122);
   ratio->SetBinContent(23,0.734974);
   ratio->SetBinContent(24,0.7037895);
   ratio->SetBinContent(25,0.7095521);
   ratio->SetBinContent(26,0.8442463);
   ratio->SetBinContent(27,0.5880712);
   ratio->SetBinContent(28,0.5381054);
   ratio->SetBinContent(29,0.684822);
   ratio->SetBinContent(30,0.6145871);
   ratio->SetBinContent(31,0.6106935);
   ratio->SetBinContent(32,0.6336539);
   ratio->SetBinContent(33,0.6629592);
   ratio->SetBinContent(34,0.624476);
   ratio->SetBinContent(35,0.6214322);
   ratio->SetBinContent(36,0.7772734);
   ratio->SetBinContent(37,0.5554222);
   ratio->SetBinContent(38,0.5945858);
   ratio->SetBinContent(39,0.571489);
   ratio->SetBinContent(40,0.3850752);
   ratio->SetBinContent(41,0.5318809);
   ratio->SetBinContent(42,0.3967437);
   ratio->SetBinContent(43,0.3188933);
   ratio->SetBinContent(44,0.3464087);
   ratio->SetBinContent(45,0.3388689);
   ratio->SetBinContent(46,0.4566374);
   ratio->SetBinContent(47,0.4291562);
   ratio->SetBinContent(48,0.9328473);
   ratio->SetBinContent(49,0.3561508);
   ratio->SetBinContent(50,0.2638766);
   ratio->SetBinError(1,0.006279698);
   ratio->SetBinError(2,0.1355051);
   ratio->SetBinError(3,0.04792316);
   ratio->SetBinError(4,0.03859848);
   ratio->SetBinError(5,0.03437561);
   ratio->SetBinError(6,0.03694364);
   ratio->SetBinError(7,0.03696215);
   ratio->SetBinError(8,0.04016444);
   ratio->SetBinError(9,0.04168096);
   ratio->SetBinError(10,0.04433836);
   ratio->SetBinError(11,0.0502122);
   ratio->SetBinError(12,0.0498717);
   ratio->SetBinError(13,0.05214097);
   ratio->SetBinError(14,0.05691961);
   ratio->SetBinError(15,0.05564503);
   ratio->SetBinError(16,0.07007068);
   ratio->SetBinError(17,0.06049515);
   ratio->SetBinError(18,0.07295012);
   ratio->SetBinError(19,0.06393961);
   ratio->SetBinError(20,0.07520106);
   ratio->SetBinError(21,0.08094562);
   ratio->SetBinError(22,0.08473992);
   ratio->SetBinError(23,0.0819096);
   ratio->SetBinError(24,0.07903753);
   ratio->SetBinError(25,0.08997894);
   ratio->SetBinError(26,0.1039433);
   ratio->SetBinError(27,0.08126706);
   ratio->SetBinError(28,0.07730671);
   ratio->SetBinError(29,0.1098792);
   ratio->SetBinError(30,0.1081569);
   ratio->SetBinError(31,0.1032672);
   ratio->SetBinError(32,0.1135202);
   ratio->SetBinError(33,0.1302105);
   ratio->SetBinError(34,0.1288794);
   ratio->SetBinError(35,0.1421416);
   ratio->SetBinError(36,0.1579833);
   ratio->SetBinError(37,0.127156);
   ratio->SetBinError(38,0.1374781);
   ratio->SetBinError(39,0.1479077);
   ratio->SetBinError(40,0.08923971);
   ratio->SetBinError(41,0.1510517);
   ratio->SetBinError(42,0.1030896);
   ratio->SetBinError(43,0.08564897);
   ratio->SetBinError(44,0.1026176);
   ratio->SetBinError(45,0.1139824);
   ratio->SetBinError(46,0.1456939);
   ratio->SetBinError(47,0.1920503);
   ratio->SetBinError(48,0.3285464);
   ratio->SetBinError(49,0.1439762);
   ratio->SetBinError(50,0.08454878);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2407.691);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.009532);
   ratio->SetBinContent(2,1.365723);
   ratio->SetBinContent(3,1.313562);
   ratio->SetBinContent(4,1.161322);
   ratio->SetBinContent(5,1.123747);
   ratio->SetBinContent(6,1.127595);
   ratio->SetBinContent(7,1.029533);
   ratio->SetBinContent(8,0.991708);
   ratio->SetBinContent(9,1.018305);
   ratio->SetBinContent(10,0.9523772);
   ratio->SetBinContent(11,0.99009);
   ratio->SetBinContent(12,0.9315672);
   ratio->SetBinContent(13,0.9174508);
   ratio->SetBinContent(14,0.9758241);
   ratio->SetBinContent(15,0.8352435);
   ratio->SetBinContent(16,0.9527006);
   ratio->SetBinContent(17,0.7755212);
   ratio->SetBinContent(18,0.8781788);
   ratio->SetBinContent(19,0.758743);
   ratio->SetBinContent(20,0.8064113);
   ratio->SetBinContent(21,0.7525555);
   ratio->SetBinContent(22,0.7612122);
   ratio->SetBinContent(23,0.734974);
   ratio->SetBinContent(24,0.7037895);
   ratio->SetBinContent(25,0.7095521);
   ratio->SetBinContent(26,0.8442463);
   ratio->SetBinContent(27,0.5880712);
   ratio->SetBinContent(28,0.5381054);
   ratio->SetBinContent(29,0.684822);
   ratio->SetBinContent(30,0.6145871);
   ratio->SetBinContent(31,0.6106935);
   ratio->SetBinContent(32,0.6336539);
   ratio->SetBinContent(33,0.6629592);
   ratio->SetBinContent(34,0.624476);
   ratio->SetBinContent(35,0.6214322);
   ratio->SetBinContent(36,0.7772734);
   ratio->SetBinContent(37,0.5554222);
   ratio->SetBinContent(38,0.5945858);
   ratio->SetBinContent(39,0.571489);
   ratio->SetBinContent(40,0.3850752);
   ratio->SetBinContent(41,0.5318809);
   ratio->SetBinContent(42,0.3967437);
   ratio->SetBinContent(43,0.3188933);
   ratio->SetBinContent(44,0.3464087);
   ratio->SetBinContent(45,0.3388689);
   ratio->SetBinContent(46,0.4566374);
   ratio->SetBinContent(47,0.4291562);
   ratio->SetBinContent(48,0.9328473);
   ratio->SetBinContent(49,0.3561508);
   ratio->SetBinContent(50,0.2638766);
   ratio->SetBinError(1,0.006279698);
   ratio->SetBinError(2,0.1355051);
   ratio->SetBinError(3,0.04792316);
   ratio->SetBinError(4,0.03859848);
   ratio->SetBinError(5,0.03437561);
   ratio->SetBinError(6,0.03694364);
   ratio->SetBinError(7,0.03696215);
   ratio->SetBinError(8,0.04016444);
   ratio->SetBinError(9,0.04168096);
   ratio->SetBinError(10,0.04433836);
   ratio->SetBinError(11,0.0502122);
   ratio->SetBinError(12,0.0498717);
   ratio->SetBinError(13,0.05214097);
   ratio->SetBinError(14,0.05691961);
   ratio->SetBinError(15,0.05564503);
   ratio->SetBinError(16,0.07007068);
   ratio->SetBinError(17,0.06049515);
   ratio->SetBinError(18,0.07295012);
   ratio->SetBinError(19,0.06393961);
   ratio->SetBinError(20,0.07520106);
   ratio->SetBinError(21,0.08094562);
   ratio->SetBinError(22,0.08473992);
   ratio->SetBinError(23,0.0819096);
   ratio->SetBinError(24,0.07903753);
   ratio->SetBinError(25,0.08997894);
   ratio->SetBinError(26,0.1039433);
   ratio->SetBinError(27,0.08126706);
   ratio->SetBinError(28,0.07730671);
   ratio->SetBinError(29,0.1098792);
   ratio->SetBinError(30,0.1081569);
   ratio->SetBinError(31,0.1032672);
   ratio->SetBinError(32,0.1135202);
   ratio->SetBinError(33,0.1302105);
   ratio->SetBinError(34,0.1288794);
   ratio->SetBinError(35,0.1421416);
   ratio->SetBinError(36,0.1579833);
   ratio->SetBinError(37,0.127156);
   ratio->SetBinError(38,0.1374781);
   ratio->SetBinError(39,0.1479077);
   ratio->SetBinError(40,0.08923971);
   ratio->SetBinError(41,0.1510517);
   ratio->SetBinError(42,0.1030896);
   ratio->SetBinError(43,0.08564897);
   ratio->SetBinError(44,0.1026176);
   ratio->SetBinError(45,0.1139824);
   ratio->SetBinError(46,0.1456939);
   ratio->SetBinError(47,0.1920503);
   ratio->SetBinError(48,0.3285464);
   ratio->SetBinError(49,0.1439762);
   ratio->SetBinError(50,0.08454878);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2407.691);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoCharged03ForCiC->cd();
   pid_pfIsoCharged03ForCiC->Modified();
   pid_pfIsoCharged03ForCiC->cd();
   pid_pfIsoCharged03ForCiC->SetSelected(pid_pfIsoCharged03ForCiC);
}
