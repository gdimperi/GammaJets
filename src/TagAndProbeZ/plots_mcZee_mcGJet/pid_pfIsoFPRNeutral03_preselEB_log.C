{
//=========Macro generated from canvas: pid_pfIsoFPRNeutral03_presel/pid_pfIsoFPRNeutral03_presel
//=========  (Wed Sep 17 23:45:05 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoFPRNeutral03_presel = new TCanvas("pid_pfIsoFPRNeutral03_presel", "pid_pfIsoFPRNeutral03_presel",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoFPRNeutral03_presel->SetHighLightColor(2);
   pid_pfIsoFPRNeutral03_presel->Range(-0.9749999,-0.1123307,6.525,1.010977);
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
   
   TH1F *pfIsoFPRNeutral03_mc_Z_EB__16 = new TH1F("pfIsoFPRNeutral03_mc_Z_EB__16","pfIsoFPRNeutral03_mc_Z_EB",60,0,6);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(1,0.8655385);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(4,0.0002840317);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(5,0.004913806);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(6,0.008602169);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(7,0.01011989);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(8,0.01471727);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(9,0.02029901);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(10,0.01169805);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(11,0.009024028);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(12,0.007124588);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(13,0.00555648);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(14,0.004684481);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(15,0.003822163);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(16,0.003257723);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(17,0.003026658);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(18,0.002450538);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(19,0.002085785);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(20,0.002176234);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(21,0.002735975);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(22,0.00226747);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(23,0.001814057);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(24,0.001435383);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(25,0.001202901);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(26,0.001067714);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(27,0.0009097749);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(28,0.0008395414);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(29,0.0006903695);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(30,0.0006482821);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(31,0.000589175);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(32,0.0005823183);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(33,0.0004832832);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(34,0.0004555481);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(35,0.0003940396);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(36,0.0003880457);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(37,0.0003421479);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(38,0.0003558056);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(39,0.0003146497);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(40,0.0002694677);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(41,0.0002708648);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(42,0.0002559979);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(43,0.0002094329);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(44,0.0001844788);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(45,0.0001803196);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(46,0.000176068);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(47,0.0001613306);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(48,0.000147997);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(49,0.0001452138);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(50,0.0001144097);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(51,0.0001396162);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(52,0.0001155672);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(53,0.0001017468);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(54,0.0001064082);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(55,8.994669e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(56,0.0001109301);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(57,8.761027e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(58,8.200723e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(59,8.04826e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(60,7.221376e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinContent(61,0.001440857);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(1,0.001012858);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(4,1.458719e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(5,5.887504e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(6,8.454869e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(7,9.725956e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(8,0.0001278998);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(9,0.0001563964);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(10,0.0001160023);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(11,0.0001015328);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(12,8.887212e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(13,7.783888e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(14,7.110181e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(15,6.432146e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(16,5.877204e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(17,5.740732e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(18,5.201001e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(19,4.717207e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(20,4.901195e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(21,5.649529e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(22,5.194931e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(23,4.4709e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(24,4.0377e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(25,3.662845e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(26,3.471865e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(27,3.194746e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(28,3.053738e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(29,2.79748e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(30,2.684364e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(31,2.438701e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(32,2.521289e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(33,2.268131e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(34,2.125508e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(35,2.067711e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(36,2.089431e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(37,1.919463e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(38,1.980376e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(39,1.874861e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(40,1.678568e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(41,1.739645e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(42,1.673093e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(43,1.490211e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(44,1.310131e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(45,1.376466e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(46,1.374602e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(47,1.402967e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(48,1.265265e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(49,1.164155e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(50,1.073715e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(51,1.252799e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(52,1.150305e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(53,9.924031e-06);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(54,1.102482e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(55,1.050399e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(56,1.100819e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(57,9.178234e-06);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(58,9.563244e-06);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(59,9.40161e-06);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(60,7.934727e-06);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetBinError(61,3.987682e-05);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetMinimum(2.178436e-08);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetMaximum(4.847016);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetEntries(1538084);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetDirectory(0);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoFPRNeutral03_mc_Z_EB__16->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRNeutral03_mc_Z_EB__16->SetMarkerColor(ci);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetMarkerStyle(20);
   pfIsoFPRNeutral03_mc_Z_EB__16->SetMarkerSize(0.7);
   pfIsoFPRNeutral03_mc_Z_EB__16->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoFPRNeutral03_mc_Z_EB__16->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRNeutral03_mc_Z_EB__16->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRNeutral03_mc_Z_EB__16->Draw("PE");
   
   TH1F *pfIsoFPRNeutral03_mc_Signal_EB__17 = new TH1F("pfIsoFPRNeutral03_mc_Signal_EB__17","pfIsoFPRNeutral03_mc_Signal_EB",60,0,6);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(1,0.7611215);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(4,0.0005801759);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(5,0.01412344);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(6,0.02173106);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(7,0.02217648);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(8,0.02524223);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(9,0.02732597);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(10,0.0168424);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(11,0.01356502);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(12,0.01135546);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(13,0.009047768);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(14,0.007839);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(15,0.006523218);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(16,0.005840514);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(17,0.00518822);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(18,0.004467098);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(19,0.004198945);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(20,0.004119203);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(21,0.004255591);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(22,0.003583423);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(23,0.002999162);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(24,0.002718514);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(25,0.002121579);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(26,0.002068866);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(27,0.00180961);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(28,0.001560502);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(29,0.001610149);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(30,0.001307969);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(31,0.001219326);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(32,0.00113647);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(33,0.0009172127);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(34,0.0009020526);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(35,0.0008115484);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(36,0.0007662585);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(37,0.0007388169);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(38,0.000636895);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(39,0.0005484966);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(40,0.0005248501);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(41,0.0005318176);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(42,0.000452189);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(43,0.0004712854);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(44,0.0004240261);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(45,0.0003885099);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(46,0.0003816597);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(47,0.0003828068);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(48,0.000352531);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(49,0.0003242921);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(50,0.0002921031);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(51,0.0002816382);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(52,0.0002586392);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(53,0.0002457922);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(54,0.0002219057);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(55,0.0004476254);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(56,0.0002369986);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(57,0.0002497491);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(58,0.0001894533);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(59,0.0001683139);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(60,0.0001736539);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinContent(61,0.00342193);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(1,0.001840917);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(4,2.772871e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(5,0.0003818754);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(6,0.0001630006);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(7,0.0003076775);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(8,0.0003771885);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(9,0.0002475285);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(10,0.0001758697);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(11,0.0001458105);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(12,0.000116133);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(13,0.0001011417);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(14,0.0001782495);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(15,0.0001920062);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(16,0.0002655172);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(17,7.319159e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(18,7.009223e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(19,0.0002471629);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(20,0.0001283553);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(21,0.0001679013);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(22,6.412114e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(23,5.980183e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(24,0.0002271876);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(25,5.084909e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(26,0.0001444407);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(27,0.0001287113);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(28,4.332727e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(29,0.000223801);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(30,3.888026e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(31,3.700724e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(32,3.847145e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(33,3.027517e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(34,3.261203e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(35,3.122839e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(36,2.998224e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(37,3.114102e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(38,2.309078e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(39,2.446667e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(40,2.664808e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(41,2.520559e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(42,2.004971e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(43,2.471605e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(44,2.127788e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(45,2.002611e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(46,2.159018e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(47,4.354022e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(48,2.220414e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(49,2.325829e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(50,2.000479e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(51,1.689998e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(52,1.806105e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(53,1.5663e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(54,1.624111e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(55,0.0002039466);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(56,1.723349e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(57,1.854345e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(58,1.465135e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(59,1.342819e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(60,1.24437e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetBinError(61,5.964795e-05);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetEntries(5244647);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetDirectory(0);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetLineColor(ci);
   pfIsoFPRNeutral03_mc_Signal_EB__17->SetLineWidth(2);
   pfIsoFPRNeutral03_mc_Signal_EB__17->Draw("HSAME");
   
   TH1F *pfIsoFPRNeutral03_mc_Z_EB__18 = new TH1F("pfIsoFPRNeutral03_mc_Z_EB__18","pfIsoFPRNeutral03_mc_Z_EB",60,0,6);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(1,0.8655385);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(4,0.0002840317);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(5,0.004913806);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(6,0.008602169);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(7,0.01011989);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(8,0.01471727);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(9,0.02029901);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(10,0.01169805);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(11,0.009024028);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(12,0.007124588);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(13,0.00555648);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(14,0.004684481);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(15,0.003822163);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(16,0.003257723);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(17,0.003026658);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(18,0.002450538);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(19,0.002085785);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(20,0.002176234);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(21,0.002735975);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(22,0.00226747);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(23,0.001814057);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(24,0.001435383);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(25,0.001202901);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(26,0.001067714);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(27,0.0009097749);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(28,0.0008395414);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(29,0.0006903695);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(30,0.0006482821);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(31,0.000589175);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(32,0.0005823183);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(33,0.0004832832);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(34,0.0004555481);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(35,0.0003940396);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(36,0.0003880457);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(37,0.0003421479);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(38,0.0003558056);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(39,0.0003146497);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(40,0.0002694677);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(41,0.0002708648);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(42,0.0002559979);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(43,0.0002094329);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(44,0.0001844788);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(45,0.0001803196);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(46,0.000176068);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(47,0.0001613306);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(48,0.000147997);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(49,0.0001452138);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(50,0.0001144097);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(51,0.0001396162);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(52,0.0001155672);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(53,0.0001017468);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(54,0.0001064082);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(55,8.994669e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(56,0.0001109301);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(57,8.761027e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(58,8.200723e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(59,8.04826e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(60,7.221376e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinContent(61,0.001440857);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(1,0.001012858);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(4,1.458719e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(5,5.887504e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(6,8.454869e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(7,9.725956e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(8,0.0001278998);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(9,0.0001563964);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(10,0.0001160023);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(11,0.0001015328);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(12,8.887212e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(13,7.783888e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(14,7.110181e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(15,6.432146e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(16,5.877204e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(17,5.740732e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(18,5.201001e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(19,4.717207e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(20,4.901195e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(21,5.649529e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(22,5.194931e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(23,4.4709e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(24,4.0377e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(25,3.662845e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(26,3.471865e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(27,3.194746e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(28,3.053738e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(29,2.79748e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(30,2.684364e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(31,2.438701e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(32,2.521289e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(33,2.268131e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(34,2.125508e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(35,2.067711e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(36,2.089431e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(37,1.919463e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(38,1.980376e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(39,1.874861e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(40,1.678568e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(41,1.739645e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(42,1.673093e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(43,1.490211e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(44,1.310131e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(45,1.376466e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(46,1.374602e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(47,1.402967e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(48,1.265265e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(49,1.164155e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(50,1.073715e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(51,1.252799e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(52,1.150305e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(53,9.924031e-06);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(54,1.102482e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(55,1.050399e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(56,1.100819e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(57,9.178234e-06);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(58,9.563244e-06);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(59,9.40161e-06);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(60,7.934727e-06);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetBinError(61,3.987682e-05);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetMinimum(2.178436e-08);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetMaximum(4.847016);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetEntries(1538084);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetDirectory(0);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRNeutral03_mc_Z_EB__18->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoFPRNeutral03_mc_Z_EB__18->SetMarkerColor(ci);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetMarkerStyle(20);
   pfIsoFPRNeutral03_mc_Z_EB__18->SetMarkerSize(0.7);
   pfIsoFPRNeutral03_mc_Z_EB__18->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoFPRNeutral03_mc_Z_EB__18->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRNeutral03_mc_Z_EB__18->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRNeutral03_mc_Z_EB__18->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,3.237909e-316,1538084,1.000091,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoFPRNeutral03_mc_Z_EB","MC Z #rightarrow ee","PL");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRNeutral03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.137188);
   ratio->SetBinContent(4,0.4895614);
   ratio->SetBinContent(5,0.3479185);
   ratio->SetBinContent(6,0.3958468);
   ratio->SetBinContent(7,0.4563341);
   ratio->SetBinContent(8,0.5830414);
   ratio->SetBinContent(9,0.7428468);
   ratio->SetBinContent(10,0.6945595);
   ratio->SetBinContent(11,0.6652427);
   ratio->SetBinContent(12,0.6274149);
   ratio->SetBinContent(13,0.6141271);
   ratio->SetBinContent(14,0.5975866);
   ratio->SetBinContent(15,0.5859321);
   ratio->SetBinContent(16,0.5577801);
   ratio->SetBinContent(17,0.5833711);
   ratio->SetBinContent(18,0.5485749);
   ratio->SetBinContent(19,0.4967402);
   ratio->SetBinContent(20,0.5283143);
   ratio->SetBinContent(21,0.642913);
   ratio->SetBinContent(22,0.6327664);
   ratio->SetBinContent(23,0.6048544);
   ratio->SetBinContent(24,0.5280029);
   ratio->SetBinContent(25,0.5669842);
   ratio->SetBinContent(26,0.5160867);
   ratio->SetBinContent(27,0.5027465);
   ratio->SetBinContent(28,0.5379944);
   ratio->SetBinContent(29,0.4287613);
   ratio->SetBinContent(30,0.4956401);
   ratio->SetBinContent(31,0.4831973);
   ratio->SetBinContent(32,0.5123923);
   ratio->SetBinContent(33,0.5269042);
   ratio->SetBinContent(34,0.5050128);
   ratio->SetBinContent(35,0.4855405);
   ratio->SetBinContent(36,0.5064162);
   ratio->SetBinContent(37,0.4631025);
   ratio->SetBinContent(38,0.5586565);
   ratio->SetBinContent(39,0.5736585);
   ratio->SetBinContent(40,0.5134184);
   ratio->SetBinContent(41,0.509319);
   ratio->SetBinContent(42,0.5661303);
   ratio->SetBinContent(43,0.4443865);
   ratio->SetBinContent(44,0.4350648);
   ratio->SetBinContent(45,0.4641314);
   ratio->SetBinContent(46,0.4613219);
   ratio->SetBinContent(47,0.4214412);
   ratio->SetBinContent(48,0.4198126);
   ratio->SetBinContent(49,0.4477872);
   ratio->SetBinContent(50,0.3916757);
   ratio->SetBinContent(51,0.4957289);
   ratio->SetBinContent(52,0.4468278);
   ratio->SetBinContent(53,0.4139545);
   ratio->SetBinContent(54,0.4795197);
   ratio->SetBinContent(55,0.2009419);
   ratio->SetBinContent(56,0.4680623);
   ratio->SetBinContent(57,0.3507932);
   ratio->SetBinContent(58,0.4328625);
   ratio->SetBinContent(59,0.4781696);
   ratio->SetBinContent(60,0.4158489);
   ratio->SetBinContent(61,0.4210656);
   ratio->SetBinError(1,0.003055514);
   ratio->SetBinError(4,0.03434556);
   ratio->SetBinError(5,0.01028941);
   ratio->SetBinError(6,0.004894223);
   ratio->SetBinError(7,0.007701852);
   ratio->SetBinError(8,0.01007852);
   ratio->SetBinError(9,0.008833797);
   ratio->SetBinError(10,0.01000193);
   ratio->SetBinError(11,0.01035163);
   ratio->SetBinError(12,0.01012053);
   ratio->SetBinError(13,0.0110065);
   ratio->SetBinError(14,0.01633752);
   ratio->SetBinError(15,0.01986626);
   ratio->SetBinError(16,0.02728109);
   ratio->SetBinError(17,0.01378992);
   ratio->SetBinError(18,0.01447921);
   ratio->SetBinError(19,0.03132357);
   ratio->SetBinError(20,0.02031212);
   ratio->SetBinError(21,0.02862966);
   ratio->SetBinError(22,0.01839478);
   ratio->SetBinError(23,0.01917496);
   ratio->SetBinError(24,0.0465581);
   ratio->SetBinError(25,0.02197129);
   ratio->SetBinError(26,0.03974761);
   ratio->SetBinError(27,0.03987925);
   ratio->SetBinError(28,0.02461847);
   ratio->SetBinError(29,0.06207616);
   ratio->SetBinError(30,0.02526395);
   ratio->SetBinError(31,0.02480096);
   ratio->SetBinError(32,0.0281611);
   ratio->SetBinError(33,0.03023209);
   ratio->SetBinError(34,0.02980877);
   ratio->SetBinError(35,0.03159486);
   ratio->SetBinError(36,0.03370727);
   ratio->SetBinError(37,0.03249602);
   ratio->SetBinError(38,0.03710909);
   ratio->SetBinError(39,0.04269891);
   ratio->SetBinError(40,0.04125969);
   ratio->SetBinError(41,0.04065384);
   ratio->SetBinError(42,0.04471117);
   ratio->SetBinError(43,0.0392807);
   ratio->SetBinError(44,0.03783223);
   ratio->SetBinError(45,0.04275046);
   ratio->SetBinError(46,0.04447714);
   ratio->SetBinError(47,0.06033984);
   ratio->SetBinError(48,0.04457946);
   ratio->SetBinError(49,0.04816732);
   ratio->SetBinError(50,0.0455048);
   ratio->SetBinError(51,0.05351229);
   ratio->SetBinError(52,0.05432904);
   ratio->SetBinError(53,0.04822917);
   ratio->SetBinError(54,0.06082806);
   ratio->SetBinError(55,0.0945124);
   ratio->SetBinError(56,0.05758348);
   ratio->SetBinError(57,0.04504368);
   ratio->SetBinError(58,0.0605693);
   ratio->SetBinError(59,0.06764165);
   ratio->SetBinError(60,0.05455095);
   ratio->SetBinError(61,0.01377207);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(10364.62);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRNeutral03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.137188);
   ratio->SetBinContent(4,0.4895614);
   ratio->SetBinContent(5,0.3479185);
   ratio->SetBinContent(6,0.3958468);
   ratio->SetBinContent(7,0.4563341);
   ratio->SetBinContent(8,0.5830414);
   ratio->SetBinContent(9,0.7428468);
   ratio->SetBinContent(10,0.6945595);
   ratio->SetBinContent(11,0.6652427);
   ratio->SetBinContent(12,0.6274149);
   ratio->SetBinContent(13,0.6141271);
   ratio->SetBinContent(14,0.5975866);
   ratio->SetBinContent(15,0.5859321);
   ratio->SetBinContent(16,0.5577801);
   ratio->SetBinContent(17,0.5833711);
   ratio->SetBinContent(18,0.5485749);
   ratio->SetBinContent(19,0.4967402);
   ratio->SetBinContent(20,0.5283143);
   ratio->SetBinContent(21,0.642913);
   ratio->SetBinContent(22,0.6327664);
   ratio->SetBinContent(23,0.6048544);
   ratio->SetBinContent(24,0.5280029);
   ratio->SetBinContent(25,0.5669842);
   ratio->SetBinContent(26,0.5160867);
   ratio->SetBinContent(27,0.5027465);
   ratio->SetBinContent(28,0.5379944);
   ratio->SetBinContent(29,0.4287613);
   ratio->SetBinContent(30,0.4956401);
   ratio->SetBinContent(31,0.4831973);
   ratio->SetBinContent(32,0.5123923);
   ratio->SetBinContent(33,0.5269042);
   ratio->SetBinContent(34,0.5050128);
   ratio->SetBinContent(35,0.4855405);
   ratio->SetBinContent(36,0.5064162);
   ratio->SetBinContent(37,0.4631025);
   ratio->SetBinContent(38,0.5586565);
   ratio->SetBinContent(39,0.5736585);
   ratio->SetBinContent(40,0.5134184);
   ratio->SetBinContent(41,0.509319);
   ratio->SetBinContent(42,0.5661303);
   ratio->SetBinContent(43,0.4443865);
   ratio->SetBinContent(44,0.4350648);
   ratio->SetBinContent(45,0.4641314);
   ratio->SetBinContent(46,0.4613219);
   ratio->SetBinContent(47,0.4214412);
   ratio->SetBinContent(48,0.4198126);
   ratio->SetBinContent(49,0.4477872);
   ratio->SetBinContent(50,0.3916757);
   ratio->SetBinContent(51,0.4957289);
   ratio->SetBinContent(52,0.4468278);
   ratio->SetBinContent(53,0.4139545);
   ratio->SetBinContent(54,0.4795197);
   ratio->SetBinContent(55,0.2009419);
   ratio->SetBinContent(56,0.4680623);
   ratio->SetBinContent(57,0.3507932);
   ratio->SetBinContent(58,0.4328625);
   ratio->SetBinContent(59,0.4781696);
   ratio->SetBinContent(60,0.4158489);
   ratio->SetBinContent(61,0.4210656);
   ratio->SetBinError(1,0.003055514);
   ratio->SetBinError(4,0.03434556);
   ratio->SetBinError(5,0.01028941);
   ratio->SetBinError(6,0.004894223);
   ratio->SetBinError(7,0.007701852);
   ratio->SetBinError(8,0.01007852);
   ratio->SetBinError(9,0.008833797);
   ratio->SetBinError(10,0.01000193);
   ratio->SetBinError(11,0.01035163);
   ratio->SetBinError(12,0.01012053);
   ratio->SetBinError(13,0.0110065);
   ratio->SetBinError(14,0.01633752);
   ratio->SetBinError(15,0.01986626);
   ratio->SetBinError(16,0.02728109);
   ratio->SetBinError(17,0.01378992);
   ratio->SetBinError(18,0.01447921);
   ratio->SetBinError(19,0.03132357);
   ratio->SetBinError(20,0.02031212);
   ratio->SetBinError(21,0.02862966);
   ratio->SetBinError(22,0.01839478);
   ratio->SetBinError(23,0.01917496);
   ratio->SetBinError(24,0.0465581);
   ratio->SetBinError(25,0.02197129);
   ratio->SetBinError(26,0.03974761);
   ratio->SetBinError(27,0.03987925);
   ratio->SetBinError(28,0.02461847);
   ratio->SetBinError(29,0.06207616);
   ratio->SetBinError(30,0.02526395);
   ratio->SetBinError(31,0.02480096);
   ratio->SetBinError(32,0.0281611);
   ratio->SetBinError(33,0.03023209);
   ratio->SetBinError(34,0.02980877);
   ratio->SetBinError(35,0.03159486);
   ratio->SetBinError(36,0.03370727);
   ratio->SetBinError(37,0.03249602);
   ratio->SetBinError(38,0.03710909);
   ratio->SetBinError(39,0.04269891);
   ratio->SetBinError(40,0.04125969);
   ratio->SetBinError(41,0.04065384);
   ratio->SetBinError(42,0.04471117);
   ratio->SetBinError(43,0.0392807);
   ratio->SetBinError(44,0.03783223);
   ratio->SetBinError(45,0.04275046);
   ratio->SetBinError(46,0.04447714);
   ratio->SetBinError(47,0.06033984);
   ratio->SetBinError(48,0.04457946);
   ratio->SetBinError(49,0.04816732);
   ratio->SetBinError(50,0.0455048);
   ratio->SetBinError(51,0.05351229);
   ratio->SetBinError(52,0.05432904);
   ratio->SetBinError(53,0.04822917);
   ratio->SetBinError(54,0.06082806);
   ratio->SetBinError(55,0.0945124);
   ratio->SetBinError(56,0.05758348);
   ratio->SetBinError(57,0.04504368);
   ratio->SetBinError(58,0.0605693);
   ratio->SetBinError(59,0.06764165);
   ratio->SetBinError(60,0.05455095);
   ratio->SetBinError(61,0.01377207);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(10364.62);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
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
