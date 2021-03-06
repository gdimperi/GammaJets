{
//=========Macro generated from canvas: nvtx/nvtx
//=========  (Sun Nov 30 23:10:15 2014) by ROOT version5.32/00
   TCanvas *nvtx = new TCanvas("nvtx", "nvtx",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nvtx->SetHighLightColor(2);
   nvtx->Range(-7.1625,-0.009698845,44.0875,0.0872896);
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
   
   TH1F *nvtx_dataZ_EE__40 = new TH1F("nvtx_dataZ_EE__40","nvtx_dataZ_EE",41,-0.5,40.5);
   nvtx_dataZ_EE__40->SetBinContent(2,5.420777e-05);
   nvtx_dataZ_EE__40->SetBinContent(3,0.00041388);
   nvtx_dataZ_EE__40->SetBinContent(4,0.001480453);
   nvtx_dataZ_EE__40->SetBinContent(5,0.004568691);
   nvtx_dataZ_EE__40->SetBinContent(6,0.009514441);
   nvtx_dataZ_EE__40->SetBinContent(7,0.01772696);
   nvtx_dataZ_EE__40->SetBinContent(8,0.02717947);
   nvtx_dataZ_EE__40->SetBinContent(9,0.03727331);
   nvtx_dataZ_EE__40->SetBinContent(10,0.04915387);
   nvtx_dataZ_EE__40->SetBinContent(11,0.05758432);
   nvtx_dataZ_EE__40->SetBinContent(12,0.06516159);
   nvtx_dataZ_EE__40->SetBinContent(13,0.07251635);
   nvtx_dataZ_EE__40->SetBinContent(14,0.07315441);
   nvtx_dataZ_EE__40->SetBinContent(15,0.07377345);
   nvtx_dataZ_EE__40->SetBinContent(16,0.07161454);
   nvtx_dataZ_EE__40->SetBinContent(17,0.06926622);
   nvtx_dataZ_EE__40->SetBinContent(18,0.06169898);
   nvtx_dataZ_EE__40->SetBinContent(19,0.05683634);
   nvtx_dataZ_EE__40->SetBinContent(20,0.04940982);
   nvtx_dataZ_EE__40->SetBinContent(21,0.04198733);
   nvtx_dataZ_EE__40->SetBinContent(22,0.03645956);
   nvtx_dataZ_EE__40->SetBinContent(23,0.02956936);
   nvtx_dataZ_EE__40->SetBinContent(24,0.02430155);
   nvtx_dataZ_EE__40->SetBinContent(25,0.01897143);
   nvtx_dataZ_EE__40->SetBinContent(26,0.01475206);
   nvtx_dataZ_EE__40->SetBinContent(27,0.01084792);
   nvtx_dataZ_EE__40->SetBinContent(28,0.007334538);
   nvtx_dataZ_EE__40->SetBinContent(29,0.005550757);
   nvtx_dataZ_EE__40->SetBinContent(30,0.003876989);
   nvtx_dataZ_EE__40->SetBinContent(31,0.002513481);
   nvtx_dataZ_EE__40->SetBinContent(32,0.002091223);
   nvtx_dataZ_EE__40->SetBinContent(33,0.001440843);
   nvtx_dataZ_EE__40->SetBinContent(34,0.0007897479);
   nvtx_dataZ_EE__40->SetBinContent(35,0.0004682224);
   nvtx_dataZ_EE__40->SetBinContent(36,0.0003110791);
   nvtx_dataZ_EE__40->SetBinContent(37,0.0001272275);
   nvtx_dataZ_EE__40->SetBinContent(38,0.0001455484);
   nvtx_dataZ_EE__40->SetBinContent(39,2.506291e-05);
   nvtx_dataZ_EE__40->SetBinContent(40,4.108547e-05);
   nvtx_dataZ_EE__40->SetBinContent(41,1.368122e-05);
   nvtx_dataZ_EE__40->SetBinContent(42,2.233676e-05);
   nvtx_dataZ_EE__40->SetBinError(2,1.733198e-05);
   nvtx_dataZ_EE__40->SetBinError(3,9.206618e-05);
   nvtx_dataZ_EE__40->SetBinError(4,0.0001197126);
   nvtx_dataZ_EE__40->SetBinError(5,0.0002586138);
   nvtx_dataZ_EE__40->SetBinError(6,0.0003851307);
   nvtx_dataZ_EE__40->SetBinError(7,0.0004813265);
   nvtx_dataZ_EE__40->SetBinError(8,0.0006359053);
   nvtx_dataZ_EE__40->SetBinError(9,0.000712799);
   nvtx_dataZ_EE__40->SetBinError(10,0.0008505627);
   nvtx_dataZ_EE__40->SetBinError(11,0.0008967352);
   nvtx_dataZ_EE__40->SetBinError(12,0.000964823);
   nvtx_dataZ_EE__40->SetBinError(13,0.001046918);
   nvtx_dataZ_EE__40->SetBinError(14,0.001074574);
   nvtx_dataZ_EE__40->SetBinError(15,0.001046203);
   nvtx_dataZ_EE__40->SetBinError(16,0.001062307);
   nvtx_dataZ_EE__40->SetBinError(17,0.001038654);
   nvtx_dataZ_EE__40->SetBinError(18,0.0009855748);
   nvtx_dataZ_EE__40->SetBinError(19,0.0009537693);
   nvtx_dataZ_EE__40->SetBinError(20,0.0008727068);
   nvtx_dataZ_EE__40->SetBinError(21,0.0007953233);
   nvtx_dataZ_EE__40->SetBinError(22,0.0007920925);
   nvtx_dataZ_EE__40->SetBinError(23,0.0006782115);
   nvtx_dataZ_EE__40->SetBinError(24,0.0006620433);
   nvtx_dataZ_EE__40->SetBinError(25,0.0005233063);
   nvtx_dataZ_EE__40->SetBinError(26,0.0005346067);
   nvtx_dataZ_EE__40->SetBinError(27,0.0004274872);
   nvtx_dataZ_EE__40->SetBinError(28,0.000383167);
   nvtx_dataZ_EE__40->SetBinError(29,0.0003214926);
   nvtx_dataZ_EE__40->SetBinError(30,0.0002677089);
   nvtx_dataZ_EE__40->SetBinError(31,0.0001769706);
   nvtx_dataZ_EE__40->SetBinError(32,0.0002190522);
   nvtx_dataZ_EE__40->SetBinError(33,0.0002087627);
   nvtx_dataZ_EE__40->SetBinError(34,0.0001298313);
   nvtx_dataZ_EE__40->SetBinError(35,6.714992e-05);
   nvtx_dataZ_EE__40->SetBinError(36,6.497291e-05);
   nvtx_dataZ_EE__40->SetBinError(37,3.280631e-05);
   nvtx_dataZ_EE__40->SetBinError(38,3.369665e-05);
   nvtx_dataZ_EE__40->SetBinError(39,8.531984e-06);
   nvtx_dataZ_EE__40->SetBinError(40,1.54667e-05);
   nvtx_dataZ_EE__40->SetBinError(41,9.090558e-06);
   nvtx_dataZ_EE__40->SetBinError(42,1.660248e-05);
   nvtx_dataZ_EE__40->SetMinimum(3.150846e-07);
   nvtx_dataZ_EE__40->SetMaximum(0.4131313);
   nvtx_dataZ_EE__40->SetEntries(273215);
   nvtx_dataZ_EE__40->SetDirectory(0);
   nvtx_dataZ_EE__40->SetStats(0);
   nvtx_dataZ_EE__40->SetMarkerStyle(20);
   nvtx_dataZ_EE__40->SetMarkerSize(0.7);
   nvtx_dataZ_EE__40->GetXaxis()->SetTitle("nvtx");
   nvtx_dataZ_EE__40->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_dataZ_EE__40->GetYaxis()->SetTitleOffset(0.9);
   nvtx_dataZ_EE__40->Draw("PE");
   
   TH1F *nvtx_mc_Signal_EE__41 = new TH1F("nvtx_mc_Signal_EE__41","nvtx_mc_Signal_EE",41,-0.5,40.5);
   nvtx_mc_Signal_EE__41->SetBinContent(2,8.390287e-05);
   nvtx_mc_Signal_EE__41->SetBinContent(3,0.000566733);
   nvtx_mc_Signal_EE__41->SetBinContent(4,0.001303946);
   nvtx_mc_Signal_EE__41->SetBinContent(5,0.003659238);
   nvtx_mc_Signal_EE__41->SetBinContent(6,0.007933695);
   nvtx_mc_Signal_EE__41->SetBinContent(7,0.01336018);
   nvtx_mc_Signal_EE__41->SetBinContent(8,0.02236428);
   nvtx_mc_Signal_EE__41->SetBinContent(9,0.03492093);
   nvtx_mc_Signal_EE__41->SetBinContent(10,0.04152258);
   nvtx_mc_Signal_EE__41->SetBinContent(11,0.05071266);
   nvtx_mc_Signal_EE__41->SetBinContent(12,0.05908233);
   nvtx_mc_Signal_EE__41->SetBinContent(13,0.06560726);
   nvtx_mc_Signal_EE__41->SetBinContent(14,0.0666196);
   nvtx_mc_Signal_EE__41->SetBinContent(15,0.07074688);
   nvtx_mc_Signal_EE__41->SetBinContent(16,0.06873248);
   nvtx_mc_Signal_EE__41->SetBinContent(17,0.06841363);
   nvtx_mc_Signal_EE__41->SetBinContent(18,0.06379311);
   nvtx_mc_Signal_EE__41->SetBinContent(19,0.05865201);
   nvtx_mc_Signal_EE__41->SetBinContent(20,0.05378253);
   nvtx_mc_Signal_EE__41->SetBinContent(21,0.04808498);
   nvtx_mc_Signal_EE__41->SetBinContent(22,0.04332487);
   nvtx_mc_Signal_EE__41->SetBinContent(23,0.03550047);
   nvtx_mc_Signal_EE__41->SetBinContent(24,0.02873661);
   nvtx_mc_Signal_EE__41->SetBinContent(25,0.02445447);
   nvtx_mc_Signal_EE__41->SetBinContent(26,0.01755673);
   nvtx_mc_Signal_EE__41->SetBinContent(27,0.01357728);
   nvtx_mc_Signal_EE__41->SetBinContent(28,0.01083143);
   nvtx_mc_Signal_EE__41->SetBinContent(29,0.008020094);
   nvtx_mc_Signal_EE__41->SetBinContent(30,0.005636696);
   nvtx_mc_Signal_EE__41->SetBinContent(31,0.004195957);
   nvtx_mc_Signal_EE__41->SetBinContent(32,0.002754424);
   nvtx_mc_Signal_EE__41->SetBinContent(33,0.001931497);
   nvtx_mc_Signal_EE__41->SetBinContent(34,0.001325579);
   nvtx_mc_Signal_EE__41->SetBinContent(35,0.0007174712);
   nvtx_mc_Signal_EE__41->SetBinContent(36,0.000563722);
   nvtx_mc_Signal_EE__41->SetBinContent(37,0.0003338406);
   nvtx_mc_Signal_EE__41->SetBinContent(38,0.0002763969);
   nvtx_mc_Signal_EE__41->SetBinContent(39,0.0001381998);
   nvtx_mc_Signal_EE__41->SetBinContent(40,0.0001065074);
   nvtx_mc_Signal_EE__41->SetBinContent(41,7.481672e-05);
   nvtx_mc_Signal_EE__41->SetBinContent(42,0.0001267634);
   nvtx_mc_Signal_EE__41->SetBinError(2,1.556376e-05);
   nvtx_mc_Signal_EE__41->SetBinError(3,0.0001124497);
   nvtx_mc_Signal_EE__41->SetBinError(4,0.000116899);
   nvtx_mc_Signal_EE__41->SetBinError(5,0.00020934);
   nvtx_mc_Signal_EE__41->SetBinError(6,0.0003173347);
   nvtx_mc_Signal_EE__41->SetBinError(7,0.0004136788);
   nvtx_mc_Signal_EE__41->SetBinError(8,0.0006167381);
   nvtx_mc_Signal_EE__41->SetBinError(9,0.002458278);
   nvtx_mc_Signal_EE__41->SetBinError(10,0.000846933);
   nvtx_mc_Signal_EE__41->SetBinError(11,0.0009181673);
   nvtx_mc_Signal_EE__41->SetBinError(12,0.001013514);
   nvtx_mc_Signal_EE__41->SetBinError(13,0.001023512);
   nvtx_mc_Signal_EE__41->SetBinError(14,0.0009834199);
   nvtx_mc_Signal_EE__41->SetBinError(15,0.001041362);
   nvtx_mc_Signal_EE__41->SetBinError(16,0.0009787459);
   nvtx_mc_Signal_EE__41->SetBinError(17,0.00101469);
   nvtx_mc_Signal_EE__41->SetBinError(18,0.0009051935);
   nvtx_mc_Signal_EE__41->SetBinError(19,0.0008838925);
   nvtx_mc_Signal_EE__41->SetBinError(20,0.0008549974);
   nvtx_mc_Signal_EE__41->SetBinError(21,0.001648584);
   nvtx_mc_Signal_EE__41->SetBinError(22,0.002024784);
   nvtx_mc_Signal_EE__41->SetBinError(23,0.001824548);
   nvtx_mc_Signal_EE__41->SetBinError(24,0.0005629878);
   nvtx_mc_Signal_EE__41->SetBinError(25,0.00163929);
   nvtx_mc_Signal_EE__41->SetBinError(26,0.0003883408);
   nvtx_mc_Signal_EE__41->SetBinError(27,0.0003265891);
   nvtx_mc_Signal_EE__41->SetBinError(28,0.0003182602);
   nvtx_mc_Signal_EE__41->SetBinError(29,0.0002713341);
   nvtx_mc_Signal_EE__41->SetBinError(30,0.0001956513);
   nvtx_mc_Signal_EE__41->SetBinError(31,0.0001746982);
   nvtx_mc_Signal_EE__41->SetBinError(32,0.0001223674);
   nvtx_mc_Signal_EE__41->SetBinError(33,0.0001073733);
   nvtx_mc_Signal_EE__41->SetBinError(34,8.263362e-05);
   nvtx_mc_Signal_EE__41->SetBinError(35,3.044743e-05);
   nvtx_mc_Signal_EE__41->SetBinError(36,4.604375e-05);
   nvtx_mc_Signal_EE__41->SetBinError(37,2.733087e-05);
   nvtx_mc_Signal_EE__41->SetBinError(38,2.943179e-05);
   nvtx_mc_Signal_EE__41->SetBinError(39,1.354132e-05);
   nvtx_mc_Signal_EE__41->SetBinError(40,1.084285e-05);
   nvtx_mc_Signal_EE__41->SetBinError(41,9.583001e-06);
   nvtx_mc_Signal_EE__41->SetBinError(42,1.394163e-05);
   nvtx_mc_Signal_EE__41->SetEntries(592312);
   nvtx_mc_Signal_EE__41->SetDirectory(0);
   nvtx_mc_Signal_EE__41->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EE__41->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EE__41->SetLineColor(ci);
   nvtx_mc_Signal_EE__41->SetLineWidth(2);
   nvtx_mc_Signal_EE__41->Draw("HSAME");
   
   TH1F *nvtx_dataZ_EE__42 = new TH1F("nvtx_dataZ_EE__42","nvtx_dataZ_EE",41,-0.5,40.5);
   nvtx_dataZ_EE__42->SetBinContent(2,5.420777e-05);
   nvtx_dataZ_EE__42->SetBinContent(3,0.00041388);
   nvtx_dataZ_EE__42->SetBinContent(4,0.001480453);
   nvtx_dataZ_EE__42->SetBinContent(5,0.004568691);
   nvtx_dataZ_EE__42->SetBinContent(6,0.009514441);
   nvtx_dataZ_EE__42->SetBinContent(7,0.01772696);
   nvtx_dataZ_EE__42->SetBinContent(8,0.02717947);
   nvtx_dataZ_EE__42->SetBinContent(9,0.03727331);
   nvtx_dataZ_EE__42->SetBinContent(10,0.04915387);
   nvtx_dataZ_EE__42->SetBinContent(11,0.05758432);
   nvtx_dataZ_EE__42->SetBinContent(12,0.06516159);
   nvtx_dataZ_EE__42->SetBinContent(13,0.07251635);
   nvtx_dataZ_EE__42->SetBinContent(14,0.07315441);
   nvtx_dataZ_EE__42->SetBinContent(15,0.07377345);
   nvtx_dataZ_EE__42->SetBinContent(16,0.07161454);
   nvtx_dataZ_EE__42->SetBinContent(17,0.06926622);
   nvtx_dataZ_EE__42->SetBinContent(18,0.06169898);
   nvtx_dataZ_EE__42->SetBinContent(19,0.05683634);
   nvtx_dataZ_EE__42->SetBinContent(20,0.04940982);
   nvtx_dataZ_EE__42->SetBinContent(21,0.04198733);
   nvtx_dataZ_EE__42->SetBinContent(22,0.03645956);
   nvtx_dataZ_EE__42->SetBinContent(23,0.02956936);
   nvtx_dataZ_EE__42->SetBinContent(24,0.02430155);
   nvtx_dataZ_EE__42->SetBinContent(25,0.01897143);
   nvtx_dataZ_EE__42->SetBinContent(26,0.01475206);
   nvtx_dataZ_EE__42->SetBinContent(27,0.01084792);
   nvtx_dataZ_EE__42->SetBinContent(28,0.007334538);
   nvtx_dataZ_EE__42->SetBinContent(29,0.005550757);
   nvtx_dataZ_EE__42->SetBinContent(30,0.003876989);
   nvtx_dataZ_EE__42->SetBinContent(31,0.002513481);
   nvtx_dataZ_EE__42->SetBinContent(32,0.002091223);
   nvtx_dataZ_EE__42->SetBinContent(33,0.001440843);
   nvtx_dataZ_EE__42->SetBinContent(34,0.0007897479);
   nvtx_dataZ_EE__42->SetBinContent(35,0.0004682224);
   nvtx_dataZ_EE__42->SetBinContent(36,0.0003110791);
   nvtx_dataZ_EE__42->SetBinContent(37,0.0001272275);
   nvtx_dataZ_EE__42->SetBinContent(38,0.0001455484);
   nvtx_dataZ_EE__42->SetBinContent(39,2.506291e-05);
   nvtx_dataZ_EE__42->SetBinContent(40,4.108547e-05);
   nvtx_dataZ_EE__42->SetBinContent(41,1.368122e-05);
   nvtx_dataZ_EE__42->SetBinContent(42,2.233676e-05);
   nvtx_dataZ_EE__42->SetBinError(2,1.733198e-05);
   nvtx_dataZ_EE__42->SetBinError(3,9.206618e-05);
   nvtx_dataZ_EE__42->SetBinError(4,0.0001197126);
   nvtx_dataZ_EE__42->SetBinError(5,0.0002586138);
   nvtx_dataZ_EE__42->SetBinError(6,0.0003851307);
   nvtx_dataZ_EE__42->SetBinError(7,0.0004813265);
   nvtx_dataZ_EE__42->SetBinError(8,0.0006359053);
   nvtx_dataZ_EE__42->SetBinError(9,0.000712799);
   nvtx_dataZ_EE__42->SetBinError(10,0.0008505627);
   nvtx_dataZ_EE__42->SetBinError(11,0.0008967352);
   nvtx_dataZ_EE__42->SetBinError(12,0.000964823);
   nvtx_dataZ_EE__42->SetBinError(13,0.001046918);
   nvtx_dataZ_EE__42->SetBinError(14,0.001074574);
   nvtx_dataZ_EE__42->SetBinError(15,0.001046203);
   nvtx_dataZ_EE__42->SetBinError(16,0.001062307);
   nvtx_dataZ_EE__42->SetBinError(17,0.001038654);
   nvtx_dataZ_EE__42->SetBinError(18,0.0009855748);
   nvtx_dataZ_EE__42->SetBinError(19,0.0009537693);
   nvtx_dataZ_EE__42->SetBinError(20,0.0008727068);
   nvtx_dataZ_EE__42->SetBinError(21,0.0007953233);
   nvtx_dataZ_EE__42->SetBinError(22,0.0007920925);
   nvtx_dataZ_EE__42->SetBinError(23,0.0006782115);
   nvtx_dataZ_EE__42->SetBinError(24,0.0006620433);
   nvtx_dataZ_EE__42->SetBinError(25,0.0005233063);
   nvtx_dataZ_EE__42->SetBinError(26,0.0005346067);
   nvtx_dataZ_EE__42->SetBinError(27,0.0004274872);
   nvtx_dataZ_EE__42->SetBinError(28,0.000383167);
   nvtx_dataZ_EE__42->SetBinError(29,0.0003214926);
   nvtx_dataZ_EE__42->SetBinError(30,0.0002677089);
   nvtx_dataZ_EE__42->SetBinError(31,0.0001769706);
   nvtx_dataZ_EE__42->SetBinError(32,0.0002190522);
   nvtx_dataZ_EE__42->SetBinError(33,0.0002087627);
   nvtx_dataZ_EE__42->SetBinError(34,0.0001298313);
   nvtx_dataZ_EE__42->SetBinError(35,6.714992e-05);
   nvtx_dataZ_EE__42->SetBinError(36,6.497291e-05);
   nvtx_dataZ_EE__42->SetBinError(37,3.280631e-05);
   nvtx_dataZ_EE__42->SetBinError(38,3.369665e-05);
   nvtx_dataZ_EE__42->SetBinError(39,8.531984e-06);
   nvtx_dataZ_EE__42->SetBinError(40,1.54667e-05);
   nvtx_dataZ_EE__42->SetBinError(41,9.090558e-06);
   nvtx_dataZ_EE__42->SetBinError(42,1.660248e-05);
   nvtx_dataZ_EE__42->SetMinimum(3.150846e-07);
   nvtx_dataZ_EE__42->SetMaximum(0.4131313);
   nvtx_dataZ_EE__42->SetEntries(273215);
   nvtx_dataZ_EE__42->SetDirectory(0);
   nvtx_dataZ_EE__42->SetStats(0);
   nvtx_dataZ_EE__42->SetMarkerStyle(20);
   nvtx_dataZ_EE__42->SetMarkerSize(0.7);
   nvtx_dataZ_EE__42->GetXaxis()->SetTitle("nvtx");
   nvtx_dataZ_EE__42->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_dataZ_EE__42->GetYaxis()->SetTitleOffset(0.9);
   nvtx_dataZ_EE__42->Draw("PESAME");
   
   TLegend *leg = new TLegend(-1.168267e+34,1.434005e-314,-3.893486e-207,1.591497e-312,NULL,"brNDC");
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
   entry=leg->AddEntry("nvtx_dataZ_EE","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("nvtx_mc_Signal_EE","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","nvtx_dataZ_EE",41,-0.5,40.5);
   ratio->SetBinContent(2,0.6460777);
   ratio->SetBinContent(3,0.730291);
   ratio->SetBinContent(4,1.135363);
   ratio->SetBinContent(5,1.248536);
   ratio->SetBinContent(6,1.199245);
   ratio->SetBinContent(7,1.32685);
   ratio->SetBinContent(8,1.215307);
   ratio->SetBinContent(9,1.067363);
   ratio->SetBinContent(10,1.183787);
   ratio->SetBinContent(11,1.135502);
   ratio->SetBinContent(12,1.102895);
   ratio->SetBinContent(13,1.10531);
   ratio->SetBinContent(14,1.098091);
   ratio->SetBinContent(15,1.04278);
   ratio->SetBinContent(16,1.041932);
   ratio->SetBinContent(17,1.012462);
   ratio->SetBinContent(18,0.9671731);
   ratio->SetBinContent(19,0.9690434);
   ratio->SetBinContent(20,0.9186966);
   ratio->SetBinContent(21,0.8731901);
   ratio->SetBinContent(22,0.8415388);
   ratio->SetBinContent(23,0.8329288);
   ratio->SetBinContent(24,0.8456651);
   ratio->SetBinContent(25,0.775786);
   ratio->SetBinContent(26,0.840251);
   ratio->SetBinContent(27,0.7989761);
   ratio->SetBinContent(28,0.6771531);
   ratio->SetBinContent(29,0.6921062);
   ratio->SetBinContent(30,0.6878123);
   ratio->SetBinContent(31,0.5990244);
   ratio->SetBinContent(32,0.7592233);
   ratio->SetBinContent(33,0.745972);
   ratio->SetBinContent(34,0.5957756);
   ratio->SetBinContent(35,0.652601);
   ratio->SetBinContent(36,0.5518308);
   ratio->SetBinContent(37,0.3811025);
   ratio->SetBinContent(38,0.526592);
   ratio->SetBinContent(39,0.1813528);
   ratio->SetBinContent(40,0.3857524);
   ratio->SetBinContent(41,0.1828632);
   ratio->SetBinContent(42,0.1762082);
   ratio->SetBinError(2,0.23882);
   ratio->SetBinError(3,0.2176854);
   ratio->SetBinError(4,0.1370729);
   ratio->SetBinError(5,0.1004822);
   ratio->SetBinError(6,0.06824514);
   ratio->SetBinError(7,0.05464282);
   ratio->SetBinError(8,0.04395119);
   ratio->SetBinError(9,0.0778608);
   ratio->SetBinError(10,0.03166415);
   ratio->SetBinError(11,0.02711701);
   ratio->SetBinError(12,0.02499231);
   ratio->SetBinError(13,0.02349414);
   ratio->SetBinError(14,0.0228677);
   ratio->SetBinError(15,0.02131394);
   ratio->SetBinError(16,0.02142465);
   ratio->SetBinError(17,0.02135389);
   ratio->SetBinError(18,0.02066468);
   ratio->SetBinError(19,0.02185638);
   ratio->SetBinError(20,0.02183122);
   ratio->SetBinError(21,0.03420238);
   ratio->SetBinError(22,0.04337099);
   ratio->SetBinError(23,0.04687787);
   ratio->SetBinError(24,0.02837697);
   ratio->SetBinError(25,0.05623503);
   ratio->SetBinError(26,0.03567415);
   ratio->SetBinError(27,0.03688755);
   ratio->SetBinError(28,0.04058702);
   ratio->SetBinError(29,0.04642359);
   ratio->SetBinError(30,0.05315684);
   ratio->SetBinError(31,0.0489987);
   ratio->SetBinError(32,0.08638437);
   ratio->SetBinError(33,0.1157657);
   ratio->SetBinError(34,0.1047481);
   ratio->SetBinError(35,0.09760401);
   ratio->SetBinError(36,0.1237567);
   ratio->SetBinError(37,0.1031034);
   ratio->SetBinError(38,0.1341911);
   ratio->SetBinError(39,0.06424303);
   ratio->SetBinError(40,0.1504336);
   ratio->SetBinError(41,0.1237413);
   ratio->SetBinError(42,0.1323981);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(3715.359);
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
   
   TH1F *ratio = new TH1F("ratio","nvtx_dataZ_EE",41,-0.5,40.5);
   ratio->SetBinContent(2,0.6460777);
   ratio->SetBinContent(3,0.730291);
   ratio->SetBinContent(4,1.135363);
   ratio->SetBinContent(5,1.248536);
   ratio->SetBinContent(6,1.199245);
   ratio->SetBinContent(7,1.32685);
   ratio->SetBinContent(8,1.215307);
   ratio->SetBinContent(9,1.067363);
   ratio->SetBinContent(10,1.183787);
   ratio->SetBinContent(11,1.135502);
   ratio->SetBinContent(12,1.102895);
   ratio->SetBinContent(13,1.10531);
   ratio->SetBinContent(14,1.098091);
   ratio->SetBinContent(15,1.04278);
   ratio->SetBinContent(16,1.041932);
   ratio->SetBinContent(17,1.012462);
   ratio->SetBinContent(18,0.9671731);
   ratio->SetBinContent(19,0.9690434);
   ratio->SetBinContent(20,0.9186966);
   ratio->SetBinContent(21,0.8731901);
   ratio->SetBinContent(22,0.8415388);
   ratio->SetBinContent(23,0.8329288);
   ratio->SetBinContent(24,0.8456651);
   ratio->SetBinContent(25,0.775786);
   ratio->SetBinContent(26,0.840251);
   ratio->SetBinContent(27,0.7989761);
   ratio->SetBinContent(28,0.6771531);
   ratio->SetBinContent(29,0.6921062);
   ratio->SetBinContent(30,0.6878123);
   ratio->SetBinContent(31,0.5990244);
   ratio->SetBinContent(32,0.7592233);
   ratio->SetBinContent(33,0.745972);
   ratio->SetBinContent(34,0.5957756);
   ratio->SetBinContent(35,0.652601);
   ratio->SetBinContent(36,0.5518308);
   ratio->SetBinContent(37,0.3811025);
   ratio->SetBinContent(38,0.526592);
   ratio->SetBinContent(39,0.1813528);
   ratio->SetBinContent(40,0.3857524);
   ratio->SetBinContent(41,0.1828632);
   ratio->SetBinContent(42,0.1762082);
   ratio->SetBinError(2,0.23882);
   ratio->SetBinError(3,0.2176854);
   ratio->SetBinError(4,0.1370729);
   ratio->SetBinError(5,0.1004822);
   ratio->SetBinError(6,0.06824514);
   ratio->SetBinError(7,0.05464282);
   ratio->SetBinError(8,0.04395119);
   ratio->SetBinError(9,0.0778608);
   ratio->SetBinError(10,0.03166415);
   ratio->SetBinError(11,0.02711701);
   ratio->SetBinError(12,0.02499231);
   ratio->SetBinError(13,0.02349414);
   ratio->SetBinError(14,0.0228677);
   ratio->SetBinError(15,0.02131394);
   ratio->SetBinError(16,0.02142465);
   ratio->SetBinError(17,0.02135389);
   ratio->SetBinError(18,0.02066468);
   ratio->SetBinError(19,0.02185638);
   ratio->SetBinError(20,0.02183122);
   ratio->SetBinError(21,0.03420238);
   ratio->SetBinError(22,0.04337099);
   ratio->SetBinError(23,0.04687787);
   ratio->SetBinError(24,0.02837697);
   ratio->SetBinError(25,0.05623503);
   ratio->SetBinError(26,0.03567415);
   ratio->SetBinError(27,0.03688755);
   ratio->SetBinError(28,0.04058702);
   ratio->SetBinError(29,0.04642359);
   ratio->SetBinError(30,0.05315684);
   ratio->SetBinError(31,0.0489987);
   ratio->SetBinError(32,0.08638437);
   ratio->SetBinError(33,0.1157657);
   ratio->SetBinError(34,0.1047481);
   ratio->SetBinError(35,0.09760401);
   ratio->SetBinError(36,0.1237567);
   ratio->SetBinError(37,0.1031034);
   ratio->SetBinError(38,0.1341911);
   ratio->SetBinError(39,0.06424303);
   ratio->SetBinError(40,0.1504336);
   ratio->SetBinError(41,0.1237413);
   ratio->SetBinError(42,0.1323981);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(3715.359);
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
