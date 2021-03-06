{
//=========Macro generated from canvas: pid_pfIsoFPRPhoton03_presel/pid_pfIsoFPRPhoton03_presel
//=========  (Sat Nov 29 17:28:17 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoFPRPhoton03_presel = new TCanvas("pid_pfIsoFPRPhoton03_presel", "pid_pfIsoFPRPhoton03_presel",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoFPRPhoton03_presel->SetHighLightColor(2);
   pid_pfIsoFPRPhoton03_presel->Range(-0.9749999,-0.02767284,6.525,0.2490556);
   pid_pfIsoFPRPhoton03_presel->SetFillColor(0);
   pid_pfIsoFPRPhoton03_presel->SetBorderMode(0);
   pid_pfIsoFPRPhoton03_presel->SetBorderSize(2);
   pid_pfIsoFPRPhoton03_presel->SetTickx(1);
   pid_pfIsoFPRPhoton03_presel->SetLeftMargin(0.13);
   pid_pfIsoFPRPhoton03_presel->SetRightMargin(0.07);
   pid_pfIsoFPRPhoton03_presel->SetFrameFillStyle(0);
   pid_pfIsoFPRPhoton03_presel->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoFPRPhoton03_dataZ_EB__46 = new TH1F("pfIsoFPRPhoton03_dataZ_EB__46","pfIsoFPRPhoton03_dataZ_EB",60,0,6);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(1,0.2126894);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(2,0.01215479);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(3,0.04430537);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(4,0.07144329);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(5,0.05270328);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(6,0.04960647);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(7,0.04861652);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(8,0.04588048);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(9,0.04241864);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(10,0.03940424);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(11,0.03642694);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(12,0.03319786);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(13,0.03029732);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(14,0.02725107);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(15,0.02497077);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(16,0.02304331);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(17,0.02028482);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(18,0.01865775);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(19,0.01670914);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(20,0.01573087);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(21,0.01341013);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(22,0.01221921);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(23,0.01126663);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(24,0.01012305);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(25,0.009292656);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(26,0.008275279);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(27,0.007405549);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(28,0.006637738);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(29,0.005683069);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(30,0.005243268);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(31,0.004743565);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(32,0.004152111);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(33,0.003830169);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(34,0.003374104);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(35,0.003062555);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(36,0.002760862);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(37,0.002520633);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(38,0.00211192);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(39,0.00198064);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(40,0.001808064);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(41,0.00164868);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(42,0.001581167);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(43,0.001317865);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(44,0.001083907);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(45,0.001025926);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(46,0.0009839941);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(47,0.0007586007);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(48,0.0007454262);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(49,0.0007134536);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(50,0.0005768723);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(51,0.0004913806);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(52,0.0005686654);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(53,0.0004825093);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(54,0.0003900852);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(55,0.000343055);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(56,0.0003742528);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(57,0.0003422774);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(58,0.0002898225);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(59,0.0003004874);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(60,0.0002880369);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinContent(61,0.004273684);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(1,0.0007867798);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(2,0.0001941867);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(3,0.0003732725);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(4,0.0004649735);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(5,0.0003989765);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(6,0.0003935522);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(7,0.0003874605);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(8,0.0003799164);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(9,0.0003628117);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(10,0.0003516176);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(11,0.00034282);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(12,0.000324889);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(13,0.0003121969);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(14,0.0002960521);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(15,0.0002815138);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(16,0.0002707765);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(17,0.0002578094);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(18,0.0002459837);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(19,0.0002310069);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(20,0.0002293033);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(21,0.0002080147);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(22,0.0001981446);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(23,0.0001930689);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(24,0.0001847786);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(25,0.0001799959);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(26,0.0001701445);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(27,0.0001603864);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(28,0.0001497165);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(29,0.0001366055);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(30,0.0001352794);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(31,0.0001259194);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(32,0.0001167523);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(33,0.000116048);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(34,0.0001096337);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(35,0.0001034051);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(36,9.456877e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(37,9.476258e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(38,8.242619e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(39,8.471857e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(40,8.111853e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(41,7.86139e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(42,7.515073e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(43,7.006747e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(44,6.039607e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(45,6.372931e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(46,5.825146e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(47,4.690703e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(48,4.900881e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(49,4.983265e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(50,4.514219e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(51,3.861203e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(52,4.482659e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(53,3.921999e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(54,3.654345e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(55,3.58632e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(56,3.800608e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(57,3.44199e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(58,3.175716e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(59,3.100667e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(60,3.165637e-05);
   pfIsoFPRPhoton03_dataZ_EB__46->SetBinError(61,0.0001178216);
   pfIsoFPRPhoton03_dataZ_EB__46->SetMinimum(8.954872e-09);
   pfIsoFPRPhoton03_dataZ_EB__46->SetMaximum(1.191061);
   pfIsoFPRPhoton03_dataZ_EB__46->SetEntries(533216);
   pfIsoFPRPhoton03_dataZ_EB__46->SetDirectory(0);
   pfIsoFPRPhoton03_dataZ_EB__46->SetStats(0);
   pfIsoFPRPhoton03_dataZ_EB__46->SetMarkerStyle(20);
   pfIsoFPRPhoton03_dataZ_EB__46->SetMarkerSize(0.7);
   pfIsoFPRPhoton03_dataZ_EB__46->GetXaxis()->SetTitle("PfIso Photon FPR #DeltaR=0.3 (GeV)");
   pfIsoFPRPhoton03_dataZ_EB__46->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRPhoton03_dataZ_EB__46->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRPhoton03_dataZ_EB__46->Draw("PE");
   
   TH1F *pfIsoFPRPhoton03_mc_Signal_EB__47 = new TH1F("pfIsoFPRPhoton03_mc_Signal_EB__47","pfIsoFPRPhoton03_mc_Signal_EB",60,0,6);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(1,0.2160635);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(2,0.01472654);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(3,0.04712043);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(4,0.07005888);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(5,0.05546034);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(6,0.04739222);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(7,0.04949362);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(8,0.04625612);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(9,0.04161731);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(10,0.03739887);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(11,0.03715161);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(12,0.03433198);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(13,0.02972794);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(14,0.02626722);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(15,0.02387027);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(16,0.02150252);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(17,0.02143579);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(18,0.0163273);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(19,0.01678341);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(20,0.0149927);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(21,0.01298952);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(22,0.01371808);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(23,0.0105009);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(24,0.01151954);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(25,0.008787571);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(26,0.007281334);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(27,0.006626393);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(28,0.006069847);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(29,0.005729793);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(30,0.005056469);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(31,0.004649815);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(32,0.004067336);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(33,0.00349765);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(34,0.003319429);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(35,0.00278302);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(36,0.002490252);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(37,0.002527728);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(38,0.002807114);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(39,0.001958876);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(40,0.001970325);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(41,0.001490813);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(42,0.001360882);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(43,0.001007357);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(44,0.0009944433);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(45,0.001213383);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(46,0.0007723613);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(47,0.001045398);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(48,0.0007427956);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(49,0.0006266378);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(50,0.0006569496);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(51,0.0005663777);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(52,0.0006110409);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(53,0.0004492024);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(54,0.0003888132);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(55,0.0003571336);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(56,0.0003214579);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(57,0.0002653);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(58,0.0002893631);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(59,0.0002827152);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(60,0.0002280283);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinContent(61,0.00405875);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(1,0.002330577);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(2,0.0006766172);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(3,0.001001915);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(4,0.001366457);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(5,0.001322107);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(6,0.0009830058);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(7,0.001304953);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(8,0.001122501);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(9,0.0009854586);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(10,0.0009947001);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(11,0.001202);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(12,0.001182957);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(13,0.0009345719);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(14,0.0007686077);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(15,0.0007884035);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(16,0.0007007741);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(17,0.0009012158);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(18,0.0003458762);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(19,0.0007226414);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(20,0.0006859329);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(21,0.0004695685);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(22,0.0008211303);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(23,0.0005783441);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(24,0.0007310177);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(25,0.0004788601);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(26,0.0001880833);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(27,0.0002863925);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(28,0.0004078939);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(29,0.0004401432);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(30,0.0002958651);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(31,0.0003819231);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(32,0.0003027739);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(33,0.00028657);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(34,0.0003277825);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(35,0.0001062863);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(36,0.00012737);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(37,0.0002541258);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(38,0.0004192294);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(39,0.0002029121);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(40,0.0002863996);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(41,0.0001615584);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(42,7.647082e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(43,5.847902e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(44,5.635767e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(45,0.0002360649);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(46,5.256061e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(47,0.0002898405);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(48,5.251965e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(49,4.64233e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(50,5.779264e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(51,4.930877e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(52,0.0001638711);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(53,4.331948e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(54,4.030938e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(55,4.014455e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(56,3.844515e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(57,2.829463e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(58,3.48518e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(59,3.108466e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(60,3.356691e-05);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetBinError(61,0.0003868259);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetEntries(605584);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetDirectory(0);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetLineColor(ci);
   pfIsoFPRPhoton03_mc_Signal_EB__47->SetLineWidth(2);
   pfIsoFPRPhoton03_mc_Signal_EB__47->Draw("HSAME");
   
   TH1F *pfIsoFPRPhoton03_dataZ_EB__48 = new TH1F("pfIsoFPRPhoton03_dataZ_EB__48","pfIsoFPRPhoton03_dataZ_EB",60,0,6);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(1,0.2126894);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(2,0.01215479);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(3,0.04430537);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(4,0.07144329);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(5,0.05270328);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(6,0.04960647);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(7,0.04861652);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(8,0.04588048);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(9,0.04241864);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(10,0.03940424);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(11,0.03642694);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(12,0.03319786);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(13,0.03029732);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(14,0.02725107);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(15,0.02497077);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(16,0.02304331);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(17,0.02028482);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(18,0.01865775);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(19,0.01670914);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(20,0.01573087);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(21,0.01341013);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(22,0.01221921);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(23,0.01126663);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(24,0.01012305);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(25,0.009292656);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(26,0.008275279);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(27,0.007405549);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(28,0.006637738);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(29,0.005683069);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(30,0.005243268);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(31,0.004743565);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(32,0.004152111);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(33,0.003830169);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(34,0.003374104);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(35,0.003062555);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(36,0.002760862);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(37,0.002520633);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(38,0.00211192);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(39,0.00198064);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(40,0.001808064);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(41,0.00164868);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(42,0.001581167);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(43,0.001317865);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(44,0.001083907);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(45,0.001025926);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(46,0.0009839941);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(47,0.0007586007);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(48,0.0007454262);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(49,0.0007134536);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(50,0.0005768723);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(51,0.0004913806);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(52,0.0005686654);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(53,0.0004825093);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(54,0.0003900852);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(55,0.000343055);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(56,0.0003742528);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(57,0.0003422774);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(58,0.0002898225);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(59,0.0003004874);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(60,0.0002880369);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinContent(61,0.004273684);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(1,0.0007867798);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(2,0.0001941867);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(3,0.0003732725);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(4,0.0004649735);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(5,0.0003989765);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(6,0.0003935522);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(7,0.0003874605);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(8,0.0003799164);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(9,0.0003628117);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(10,0.0003516176);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(11,0.00034282);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(12,0.000324889);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(13,0.0003121969);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(14,0.0002960521);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(15,0.0002815138);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(16,0.0002707765);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(17,0.0002578094);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(18,0.0002459837);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(19,0.0002310069);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(20,0.0002293033);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(21,0.0002080147);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(22,0.0001981446);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(23,0.0001930689);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(24,0.0001847786);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(25,0.0001799959);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(26,0.0001701445);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(27,0.0001603864);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(28,0.0001497165);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(29,0.0001366055);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(30,0.0001352794);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(31,0.0001259194);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(32,0.0001167523);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(33,0.000116048);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(34,0.0001096337);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(35,0.0001034051);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(36,9.456877e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(37,9.476258e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(38,8.242619e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(39,8.471857e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(40,8.111853e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(41,7.86139e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(42,7.515073e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(43,7.006747e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(44,6.039607e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(45,6.372931e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(46,5.825146e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(47,4.690703e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(48,4.900881e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(49,4.983265e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(50,4.514219e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(51,3.861203e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(52,4.482659e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(53,3.921999e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(54,3.654345e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(55,3.58632e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(56,3.800608e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(57,3.44199e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(58,3.175716e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(59,3.100667e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(60,3.165637e-05);
   pfIsoFPRPhoton03_dataZ_EB__48->SetBinError(61,0.0001178216);
   pfIsoFPRPhoton03_dataZ_EB__48->SetMinimum(8.954872e-09);
   pfIsoFPRPhoton03_dataZ_EB__48->SetMaximum(1.191061);
   pfIsoFPRPhoton03_dataZ_EB__48->SetEntries(533216);
   pfIsoFPRPhoton03_dataZ_EB__48->SetDirectory(0);
   pfIsoFPRPhoton03_dataZ_EB__48->SetStats(0);
   pfIsoFPRPhoton03_dataZ_EB__48->SetMarkerStyle(20);
   pfIsoFPRPhoton03_dataZ_EB__48->SetMarkerSize(0.7);
   pfIsoFPRPhoton03_dataZ_EB__48->GetXaxis()->SetTitle("PfIso Photon FPR #DeltaR=0.3 (GeV)");
   pfIsoFPRPhoton03_dataZ_EB__48->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoFPRPhoton03_dataZ_EB__48->GetYaxis()->SetTitleOffset(0.9);
   pfIsoFPRPhoton03_dataZ_EB__48->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,3.237909e-316,533216,0.9999997,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoFPRPhoton03_dataZ_EB","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoFPRPhoton03_mc_Signal_EB","signal #gamma + jet","F");
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
   pid_pfIsoFPRPhoton03_presel->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRPhoton03_dataZ_EB",60,0,6);
   ratio->SetBinContent(1,0.9843839);
   ratio->SetBinContent(2,0.825366);
   ratio->SetBinContent(3,0.940258);
   ratio->SetBinContent(4,1.019761);
   ratio->SetBinContent(5,0.9502877);
   ratio->SetBinContent(6,1.046722);
   ratio->SetBinContent(7,0.9822785);
   ratio->SetBinContent(8,0.9918792);
   ratio->SetBinContent(9,1.019255);
   ratio->SetBinContent(10,1.053621);
   ratio->SetBinContent(11,0.9804943);
   ratio->SetBinContent(12,0.966966);
   ratio->SetBinContent(13,1.019153);
   ratio->SetBinContent(14,1.037455);
   ratio->SetBinContent(15,1.046103);
   ratio->SetBinContent(16,1.071656);
   ratio->SetBinContent(17,0.9463063);
   ratio->SetBinContent(18,1.142733);
   ratio->SetBinContent(19,0.995575);
   ratio->SetBinContent(20,1.049235);
   ratio->SetBinContent(21,1.032381);
   ratio->SetBinContent(22,0.8907377);
   ratio->SetBinContent(23,1.072921);
   ratio->SetBinContent(24,0.8787725);
   ratio->SetBinContent(25,1.057477);
   ratio->SetBinContent(26,1.136506);
   ratio->SetBinContent(27,1.117584);
   ratio->SetBinContent(28,1.093559);
   ratio->SetBinContent(29,0.9918455);
   ratio->SetBinContent(30,1.036942);
   ratio->SetBinContent(31,1.020162);
   ratio->SetBinContent(32,1.020843);
   ratio->SetBinContent(33,1.095069);
   ratio->SetBinContent(34,1.016471);
   ratio->SetBinContent(35,1.100443);
   ratio->SetBinContent(36,1.108668);
   ratio->SetBinContent(37,0.997193);
   ratio->SetBinContent(38,0.7523457);
   ratio->SetBinContent(39,1.011111);
   ratio->SetBinContent(40,0.9176477);
   ratio->SetBinContent(41,1.105894);
   ratio->SetBinContent(42,1.16187);
   ratio->SetBinContent(43,1.308239);
   ratio->SetBinContent(44,1.089963);
   ratio->SetBinContent(45,0.8455085);
   ratio->SetBinContent(46,1.274008);
   ratio->SetBinContent(47,0.725657);
   ratio->SetBinContent(48,1.003541);
   ratio->SetBinContent(49,1.138542);
   ratio->SetBinContent(50,0.8781074);
   ratio->SetBinContent(51,0.8675847);
   ratio->SetBinContent(52,0.9306504);
   ratio->SetBinContent(53,1.074147);
   ratio->SetBinContent(54,1.003271);
   ratio->SetBinContent(55,0.960579);
   ratio->SetBinContent(56,1.164236);
   ratio->SetBinContent(57,1.290152);
   ratio->SetBinContent(58,1.001588);
   ratio->SetBinContent(59,1.062863);
   ratio->SetBinContent(60,1.263163);
   ratio->SetBinContent(61,1.052956);
   ratio->SetBinError(1,0.01122515);
   ratio->SetBinError(2,0.04014894);
   ratio->SetBinError(3,0.02150478);
   ratio->SetBinError(4,0.02096792);
   ratio->SetBinError(5,0.02376852);
   ratio->SetBinError(6,0.02324495);
   ratio->SetBinError(7,0.02705614);
   ratio->SetBinError(8,0.02543273);
   ratio->SetBinError(9,0.02566121);
   ratio->SetBinError(10,0.02955833);
   ratio->SetBinError(11,0.03303765);
   ratio->SetBinError(12,0.034636);
   ratio->SetBinError(13,0.03371684);
   ratio->SetBinError(14,0.03238183);
   ratio->SetBinError(15,0.0365087);
   ratio->SetBinError(16,0.03712652);
   ratio->SetBinError(17,0.0415633);
   ratio->SetBinError(18,0.02851288);
   ratio->SetBinError(19,0.04502191);
   ratio->SetBinError(20,0.05038122);
   ratio->SetBinError(21,0.04061107);
   ratio->SetBinError(22,0.05523921);
   ratio->SetBinError(23,0.06188608);
   ratio->SetBinError(24,0.05802707);
   ratio->SetBinError(25,0.06115711);
   ratio->SetBinError(26,0.03752143);
   ratio->SetBinError(27,0.05402703);
   ratio->SetBinError(28,0.07751622);
   ratio->SetBinError(29,0.07983328);
   ratio->SetBinError(30,0.06631041);
   ratio->SetBinError(31,0.08806064);
   ratio->SetBinError(32,0.08123262);
   ratio->SetBinError(33,0.09565964);
   ratio->SetBinError(34,0.1056674);
   ratio->SetBinError(35,0.05609654);
   ratio->SetBinError(36,0.06824702);
   ratio->SetBinError(37,0.1070333);
   ratio->SetBinError(38,0.1161328);
   ratio->SetBinError(39,0.1133149);
   ratio->SetBinError(40,0.1395953);
   ratio->SetBinError(41,0.1309332);
   ratio->SetBinError(42,0.08551018);
   ratio->SetBinError(43,0.1029843);
   ratio->SetBinError(44,0.08662692);
   ratio->SetBinError(45,0.1726761);
   ratio->SetBinError(46,0.1149122);
   ratio->SetBinError(47,0.2061338);
   ratio->SetBinError(48,0.09689135);
   ratio->SetBinError(49,0.1159242);
   ratio->SetBinError(50,0.1033877);
   ratio->SetBinError(51,0.1017482);
   ratio->SetBinError(52,0.2601434);
   ratio->SetBinError(53,0.1354745);
   ratio->SetBinError(54,0.1401859);
   ratio->SetBinError(55,0.1474551);
   ratio->SetBinError(56,0.1826628);
   ratio->SetBinError(57,0.1891169);
   ratio->SetBinError(58,0.163087);
   ratio->SetBinError(59,0.1602663);
   ratio->SetBinError(60,0.2320516);
   ratio->SetBinError(61,0.1044679);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(5997.107);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon FPR #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoFPRPhoton03_dataZ_EB",60,0,6);
   ratio->SetBinContent(1,0.9843839);
   ratio->SetBinContent(2,0.825366);
   ratio->SetBinContent(3,0.940258);
   ratio->SetBinContent(4,1.019761);
   ratio->SetBinContent(5,0.9502877);
   ratio->SetBinContent(6,1.046722);
   ratio->SetBinContent(7,0.9822785);
   ratio->SetBinContent(8,0.9918792);
   ratio->SetBinContent(9,1.019255);
   ratio->SetBinContent(10,1.053621);
   ratio->SetBinContent(11,0.9804943);
   ratio->SetBinContent(12,0.966966);
   ratio->SetBinContent(13,1.019153);
   ratio->SetBinContent(14,1.037455);
   ratio->SetBinContent(15,1.046103);
   ratio->SetBinContent(16,1.071656);
   ratio->SetBinContent(17,0.9463063);
   ratio->SetBinContent(18,1.142733);
   ratio->SetBinContent(19,0.995575);
   ratio->SetBinContent(20,1.049235);
   ratio->SetBinContent(21,1.032381);
   ratio->SetBinContent(22,0.8907377);
   ratio->SetBinContent(23,1.072921);
   ratio->SetBinContent(24,0.8787725);
   ratio->SetBinContent(25,1.057477);
   ratio->SetBinContent(26,1.136506);
   ratio->SetBinContent(27,1.117584);
   ratio->SetBinContent(28,1.093559);
   ratio->SetBinContent(29,0.9918455);
   ratio->SetBinContent(30,1.036942);
   ratio->SetBinContent(31,1.020162);
   ratio->SetBinContent(32,1.020843);
   ratio->SetBinContent(33,1.095069);
   ratio->SetBinContent(34,1.016471);
   ratio->SetBinContent(35,1.100443);
   ratio->SetBinContent(36,1.108668);
   ratio->SetBinContent(37,0.997193);
   ratio->SetBinContent(38,0.7523457);
   ratio->SetBinContent(39,1.011111);
   ratio->SetBinContent(40,0.9176477);
   ratio->SetBinContent(41,1.105894);
   ratio->SetBinContent(42,1.16187);
   ratio->SetBinContent(43,1.308239);
   ratio->SetBinContent(44,1.089963);
   ratio->SetBinContent(45,0.8455085);
   ratio->SetBinContent(46,1.274008);
   ratio->SetBinContent(47,0.725657);
   ratio->SetBinContent(48,1.003541);
   ratio->SetBinContent(49,1.138542);
   ratio->SetBinContent(50,0.8781074);
   ratio->SetBinContent(51,0.8675847);
   ratio->SetBinContent(52,0.9306504);
   ratio->SetBinContent(53,1.074147);
   ratio->SetBinContent(54,1.003271);
   ratio->SetBinContent(55,0.960579);
   ratio->SetBinContent(56,1.164236);
   ratio->SetBinContent(57,1.290152);
   ratio->SetBinContent(58,1.001588);
   ratio->SetBinContent(59,1.062863);
   ratio->SetBinContent(60,1.263163);
   ratio->SetBinContent(61,1.052956);
   ratio->SetBinError(1,0.01122515);
   ratio->SetBinError(2,0.04014894);
   ratio->SetBinError(3,0.02150478);
   ratio->SetBinError(4,0.02096792);
   ratio->SetBinError(5,0.02376852);
   ratio->SetBinError(6,0.02324495);
   ratio->SetBinError(7,0.02705614);
   ratio->SetBinError(8,0.02543273);
   ratio->SetBinError(9,0.02566121);
   ratio->SetBinError(10,0.02955833);
   ratio->SetBinError(11,0.03303765);
   ratio->SetBinError(12,0.034636);
   ratio->SetBinError(13,0.03371684);
   ratio->SetBinError(14,0.03238183);
   ratio->SetBinError(15,0.0365087);
   ratio->SetBinError(16,0.03712652);
   ratio->SetBinError(17,0.0415633);
   ratio->SetBinError(18,0.02851288);
   ratio->SetBinError(19,0.04502191);
   ratio->SetBinError(20,0.05038122);
   ratio->SetBinError(21,0.04061107);
   ratio->SetBinError(22,0.05523921);
   ratio->SetBinError(23,0.06188608);
   ratio->SetBinError(24,0.05802707);
   ratio->SetBinError(25,0.06115711);
   ratio->SetBinError(26,0.03752143);
   ratio->SetBinError(27,0.05402703);
   ratio->SetBinError(28,0.07751622);
   ratio->SetBinError(29,0.07983328);
   ratio->SetBinError(30,0.06631041);
   ratio->SetBinError(31,0.08806064);
   ratio->SetBinError(32,0.08123262);
   ratio->SetBinError(33,0.09565964);
   ratio->SetBinError(34,0.1056674);
   ratio->SetBinError(35,0.05609654);
   ratio->SetBinError(36,0.06824702);
   ratio->SetBinError(37,0.1070333);
   ratio->SetBinError(38,0.1161328);
   ratio->SetBinError(39,0.1133149);
   ratio->SetBinError(40,0.1395953);
   ratio->SetBinError(41,0.1309332);
   ratio->SetBinError(42,0.08551018);
   ratio->SetBinError(43,0.1029843);
   ratio->SetBinError(44,0.08662692);
   ratio->SetBinError(45,0.1726761);
   ratio->SetBinError(46,0.1149122);
   ratio->SetBinError(47,0.2061338);
   ratio->SetBinError(48,0.09689135);
   ratio->SetBinError(49,0.1159242);
   ratio->SetBinError(50,0.1033877);
   ratio->SetBinError(51,0.1017482);
   ratio->SetBinError(52,0.2601434);
   ratio->SetBinError(53,0.1354745);
   ratio->SetBinError(54,0.1401859);
   ratio->SetBinError(55,0.1474551);
   ratio->SetBinError(56,0.1826628);
   ratio->SetBinError(57,0.1891169);
   ratio->SetBinError(58,0.163087);
   ratio->SetBinError(59,0.1602663);
   ratio->SetBinError(60,0.2320516);
   ratio->SetBinError(61,0.1044679);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(5997.107);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon FPR #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoFPRPhoton03_presel->cd();
   pid_pfIsoFPRPhoton03_presel->Modified();
   pid_pfIsoFPRPhoton03_presel->cd();
   pid_pfIsoFPRPhoton03_presel->SetSelected(pid_pfIsoFPRPhoton03_presel);
}
