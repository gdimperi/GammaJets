{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Thu Aug 21 19:39:34 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.03279445,326.25,0.29515);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
  
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
   
   TH1F *ptPhot_data_EB__16 = new TH1F("ptPhot_data_EB__16","ptPhot_data_EB",60,0,300);
   ptPhot_data_EB__16->SetBinContent(5,0.03865997);
   ptPhot_data_EB__16->SetBinContent(6,0.07661077);
   ptPhot_data_EB__16->SetBinContent(7,0.1313527);
   ptPhot_data_EB__16->SetBinContent(8,0.1997299);
   ptPhot_data_EB__16->SetBinContent(9,0.2524908);
   ptPhot_data_EB__16->SetBinContent(10,0.1587892);
   ptPhot_data_EB__16->SetBinContent(11,0.06124282);
   ptPhot_data_EB__16->SetBinContent(12,0.02897024);
   ptPhot_data_EB__16->SetBinContent(13,0.01607323);
   ptPhot_data_EB__16->SetBinContent(14,0.009783834);
   ptPhot_data_EB__16->SetBinContent(15,0.006443651);
   ptPhot_data_EB__16->SetBinContent(16,0.004456811);
   ptPhot_data_EB__16->SetBinContent(17,0.003157797);
   ptPhot_data_EB__16->SetBinContent(18,0.002433104);
   ptPhot_data_EB__16->SetBinContent(19,0.001860723);
   ptPhot_data_EB__16->SetBinContent(20,0.001405729);
   ptPhot_data_EB__16->SetBinContent(21,0.001082673);
   ptPhot_data_EB__16->SetBinContent(22,0.0008284972);
   ptPhot_data_EB__16->SetBinContent(23,0.0006946183);
   ptPhot_data_EB__16->SetBinContent(24,0.0005471574);
   ptPhot_data_EB__16->SetBinContent(25,0.000466636);
   ptPhot_data_EB__16->SetBinContent(26,0.0003802938);
   ptPhot_data_EB__16->SetBinContent(27,0.0003589508);
   ptPhot_data_EB__16->SetBinContent(28,0.0002532058);
   ptPhot_data_EB__16->SetBinContent(29,0.0002299225);
   ptPhot_data_EB__16->SetBinContent(30,0.000219251);
   ptPhot_data_EB__16->SetBinContent(31,0.0001920872);
   ptPhot_data_EB__16->SetBinContent(32,0.0001591025);
   ptPhot_data_EB__16->SetBinContent(33,0.0001377595);
   ptPhot_data_EB__16->SetBinContent(34,0.0001144762);
   ptPhot_data_EB__16->SetBinContent(35,8.537208e-05);
   ptPhot_data_EB__16->SetBinContent(36,8.440194e-05);
   ptPhot_data_EB__16->SetBinContent(37,8.537208e-05);
   ptPhot_data_EB__16->SetBinContent(38,6.596933e-05);
   ptPhot_data_EB__16->SetBinContent(39,6.208878e-05);
   ptPhot_data_EB__16->SetBinContent(40,5.626796e-05);
   ptPhot_data_EB__16->SetBinContent(41,5.141728e-05);
   ptPhot_data_EB__16->SetBinContent(42,4.17159e-05);
   ptPhot_data_EB__16->SetBinContent(43,3.39548e-05);
   ptPhot_data_EB__16->SetBinContent(44,4.074576e-05);
   ptPhot_data_EB__16->SetBinContent(45,3.104439e-05);
   ptPhot_data_EB__16->SetBinContent(46,2.910412e-05);
   ptPhot_data_EB__16->SetBinContent(47,2.522357e-05);
   ptPhot_data_EB__16->SetBinContent(48,2.619371e-05);
   ptPhot_data_EB__16->SetBinContent(49,2.425343e-05);
   ptPhot_data_EB__16->SetBinContent(50,2.231316e-05);
   ptPhot_data_EB__16->SetBinContent(51,1.358192e-05);
   ptPhot_data_EB__16->SetBinContent(52,1.843261e-05);
   ptPhot_data_EB__16->SetBinContent(53,1.358192e-05);
   ptPhot_data_EB__16->SetBinContent(54,1.067151e-05);
   ptPhot_data_EB__16->SetBinContent(55,1.067151e-05);
   ptPhot_data_EB__16->SetBinContent(56,1.164165e-05);
   ptPhot_data_EB__16->SetBinContent(57,9.701373e-06);
   ptPhot_data_EB__16->SetBinContent(58,7.761098e-06);
   ptPhot_data_EB__16->SetBinContent(59,5.820823e-06);
   ptPhot_data_EB__16->SetBinContent(60,6.79096e-06);
   ptPhot_data_EB__16->SetBinContent(61,9.604359e-05);
   ptPhot_data_EB__16->SetBinError(5,0.0001936633);
   ptPhot_data_EB__16->SetBinError(6,0.0002726224);
   ptPhot_data_EB__16->SetBinError(7,0.0003569736);
   ptPhot_data_EB__16->SetBinError(8,0.0004401879);
   ptPhot_data_EB__16->SetBinError(9,0.000494925);
   ptPhot_data_EB__16->SetBinError(10,0.0003924886);
   ptPhot_data_EB__16->SetBinError(11,0.0002437498);
   ptPhot_data_EB__16->SetBinError(12,0.0001676458);
   ptPhot_data_EB__16->SetBinError(13,0.0001248729);
   ptPhot_data_EB__16->SetBinError(14,9.742516e-05);
   ptPhot_data_EB__16->SetBinError(15,7.90647e-05);
   ptPhot_data_EB__16->SetBinError(16,6.575498e-05);
   ptPhot_data_EB__16->SetBinError(17,5.534886e-05);
   ptPhot_data_EB__16->SetBinError(18,4.858441e-05);
   ptPhot_data_EB__16->SetBinError(19,4.248714e-05);
   ptPhot_data_EB__16->SetBinError(20,3.692898e-05);
   ptPhot_data_EB__16->SetBinError(21,3.240897e-05);
   ptPhot_data_EB__16->SetBinError(22,2.835059e-05);
   ptPhot_data_EB__16->SetBinError(23,2.59591e-05);
   ptPhot_data_EB__16->SetBinError(24,2.303948e-05);
   ptPhot_data_EB__16->SetBinError(25,2.127677e-05);
   ptPhot_data_EB__16->SetBinError(26,1.920774e-05);
   ptPhot_data_EB__16->SetBinError(27,1.866096e-05);
   ptPhot_data_EB__16->SetBinError(28,1.567305e-05);
   ptPhot_data_EB__16->SetBinError(29,1.493507e-05);
   ptPhot_data_EB__16->SetBinError(30,1.458436e-05);
   ptPhot_data_EB__16->SetBinError(31,1.365104e-05);
   ptPhot_data_EB__16->SetBinError(32,1.242382e-05);
   ptPhot_data_EB__16->SetBinError(33,1.156052e-05);
   ptPhot_data_EB__16->SetBinError(34,1.053839e-05);
   ptPhot_data_EB__16->SetBinError(35,9.100694e-06);
   ptPhot_data_EB__16->SetBinError(36,9.048838e-06);
   ptPhot_data_EB__16->SetBinError(37,9.100694e-06);
   ptPhot_data_EB__16->SetBinError(38,7.999957e-06);
   ptPhot_data_EB__16->SetBinError(39,7.761098e-06);
   ptPhot_data_EB__16->SetBinError(40,7.388345e-06);
   ptPhot_data_EB__16->SetBinError(41,7.062706e-06);
   ptPhot_data_EB__16->SetBinError(42,6.361615e-06);
   ptPhot_data_EB__16->SetBinError(43,5.739409e-06);
   ptPhot_data_EB__16->SetBinError(44,6.287208e-06);
   ptPhot_data_EB__16->SetBinError(45,5.487925e-06);
   ptPhot_data_EB__16->SetBinError(46,5.31366e-06);
   ptPhot_data_EB__16->SetBinError(47,4.946749e-06);
   ptPhot_data_EB__16->SetBinError(48,5.040981e-06);
   ptPhot_data_EB__16->SetBinError(49,4.850686e-06);
   ptPhot_data_EB__16->SetBinError(50,4.652615e-06);
   ptPhot_data_EB__16->SetBinError(51,3.629921e-06);
   ptPhot_data_EB__16->SetBinError(52,4.22873e-06);
   ptPhot_data_EB__16->SetBinError(53,3.629921e-06);
   ptPhot_data_EB__16->SetBinError(54,3.217581e-06);
   ptPhot_data_EB__16->SetBinError(55,3.217581e-06);
   ptPhot_data_EB__16->SetBinError(56,3.360654e-06);
   ptPhot_data_EB__16->SetBinError(57,3.067843e-06);
   ptPhot_data_EB__16->SetBinError(58,2.743962e-06);
   ptPhot_data_EB__16->SetBinError(59,2.376341e-06);
   ptPhot_data_EB__16->SetBinError(60,2.566742e-06);
   ptPhot_data_EB__16->SetBinError(61,9.652744e-06);
   ptPhot_data_EB__16->SetMinimum(9.701372e-08);
   ptPhot_data_EB__16->SetMaximum(1.413949);
   ptPhot_data_EB__16->SetEntries(1030881);
   ptPhot_data_EB__16->SetDirectory(0);
   ptPhot_data_EB__16->SetStats(0);
   ptPhot_data_EB__16->SetMarkerStyle(20);
   ptPhot_data_EB__16->SetMarkerSize(0.7);
   ptPhot_data_EB__16->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB__16->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_EB__16->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_data_EB__16->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EB__17 = new TH1F("ptPhot_mc_Signal_EB__17","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB__17->SetBinContent(9,0.008153107);
   ptPhot_mc_Signal_EB__17->SetBinContent(10,0.005198114);
   ptPhot_mc_Signal_EB__17->SetBinContent(11,0.003393199);
   ptPhot_mc_Signal_EB__17->SetBinContent(12,0.002258657);
   ptPhot_mc_Signal_EB__17->SetBinContent(13,0.001573834);
   ptPhot_mc_Signal_EB__17->SetBinContent(14,0.008947069);
   ptPhot_mc_Signal_EB__17->SetBinContent(15,0.006343795);
   ptPhot_mc_Signal_EB__17->SetBinContent(16,0.004788375);
   ptPhot_mc_Signal_EB__17->SetBinContent(17,0.003561258);
   ptPhot_mc_Signal_EB__17->SetBinContent(18,0.002765979);
   ptPhot_mc_Signal_EB__17->SetBinContent(19,0.0131188);
   ptPhot_mc_Signal_EB__17->SetBinContent(20,0.009912751);
   ptPhot_mc_Signal_EB__17->SetBinContent(21,0.007939775);
   ptPhot_mc_Signal_EB__17->SetBinContent(22,0.01316147);
   ptPhot_mc_Signal_EB__17->SetBinContent(23,0.01082698);
   ptPhot_mc_Signal_EB__17->SetBinContent(24,0.008780538);
   ptPhot_mc_Signal_EB__17->SetBinContent(25,0.007168618);
   ptPhot_mc_Signal_EB__17->SetBinContent(26,0.006000175);
   ptPhot_mc_Signal_EB__17->SetBinContent(27,0.004976611);
   ptPhot_mc_Signal_EB__17->SetBinContent(28,0.004222993);
   ptPhot_mc_Signal_EB__17->SetBinContent(29,0.003525515);
   ptPhot_mc_Signal_EB__17->SetBinContent(30,0.00296092);
   ptPhot_mc_Signal_EB__17->SetBinContent(31,0.002516554);
   ptPhot_mc_Signal_EB__17->SetBinContent(32,0.002175745);
   ptPhot_mc_Signal_EB__17->SetBinContent(33,0.001900178);
   ptPhot_mc_Signal_EB__17->SetBinContent(34,0.08173472);
   ptPhot_mc_Signal_EB__17->SetBinContent(35,0.0711383);
   ptPhot_mc_Signal_EB__17->SetBinContent(36,0.06089278);
   ptPhot_mc_Signal_EB__17->SetBinContent(37,0.0765854);
   ptPhot_mc_Signal_EB__17->SetBinContent(38,0.06741457);
   ptPhot_mc_Signal_EB__17->SetBinContent(39,0.05863998);
   ptPhot_mc_Signal_EB__17->SetBinContent(40,0.05229454);
   ptPhot_mc_Signal_EB__17->SetBinContent(41,0.04500457);
   ptPhot_mc_Signal_EB__17->SetBinContent(42,0.04132568);
   ptPhot_mc_Signal_EB__17->SetBinContent(43,0.03542042);
   ptPhot_mc_Signal_EB__17->SetBinContent(44,0.03173576);
   ptPhot_mc_Signal_EB__17->SetBinContent(45,0.02914858);
   ptPhot_mc_Signal_EB__17->SetBinContent(46,0.0255316);
   ptPhot_mc_Signal_EB__17->SetBinContent(47,0.02239772);
   ptPhot_mc_Signal_EB__17->SetBinContent(48,0.02037545);
   ptPhot_mc_Signal_EB__17->SetBinContent(49,0.01820222);
   ptPhot_mc_Signal_EB__17->SetBinContent(50,0.01678551);
   ptPhot_mc_Signal_EB__17->SetBinContent(51,0.01490873);
   ptPhot_mc_Signal_EB__17->SetBinContent(52,0.01363097);
   ptPhot_mc_Signal_EB__17->SetBinContent(53,0.01221009);
   ptPhot_mc_Signal_EB__17->SetBinContent(54,0.01080613);
   ptPhot_mc_Signal_EB__17->SetBinContent(55,0.01003786);
   ptPhot_mc_Signal_EB__17->SetBinContent(56,0.009078136);
   ptPhot_mc_Signal_EB__17->SetBinContent(57,0.00828801);
   ptPhot_mc_Signal_EB__17->SetBinContent(58,0.007454148);
   ptPhot_mc_Signal_EB__17->SetBinContent(59,0.006661026);
   ptPhot_mc_Signal_EB__17->SetBinContent(60,0.00612611);
   ptPhot_mc_Signal_EB__17->SetBinContent(61,0.06334461);
   ptPhot_mc_Signal_EB__17->SetBinError(9,4.886173e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(10,3.606854e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(11,2.658039e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(12,1.917121e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(13,1.485096e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(14,9.44368e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(15,6.657826e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(16,5.518675e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(17,3.957069e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(18,3.254405e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(19,0.0001805621);
   ptPhot_mc_Signal_EB__17->SetBinError(20,9.373047e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(21,9.417886e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(22,0.0001336362);
   ptPhot_mc_Signal_EB__17->SetBinError(23,0.0001028445);
   ptPhot_mc_Signal_EB__17->SetBinError(24,7.042899e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(25,5.76979e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(26,5.111588e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(27,4.265061e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(28,4.042836e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(29,3.270273e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(30,2.793266e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(31,2.307664e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(32,2.175603e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(33,2.150248e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(34,0.0009277161);
   ptPhot_mc_Signal_EB__17->SetBinError(35,0.0007947973);
   ptPhot_mc_Signal_EB__17->SetBinError(36,0.0006117532);
   ptPhot_mc_Signal_EB__17->SetBinError(37,0.0007724607);
   ptPhot_mc_Signal_EB__17->SetBinError(38,0.0007093066);
   ptPhot_mc_Signal_EB__17->SetBinError(39,0.0006374879);
   ptPhot_mc_Signal_EB__17->SetBinError(40,0.0005714883);
   ptPhot_mc_Signal_EB__17->SetBinError(41,0.0003520027);
   ptPhot_mc_Signal_EB__17->SetBinError(42,0.0005963659);
   ptPhot_mc_Signal_EB__17->SetBinError(43,0.0003167014);
   ptPhot_mc_Signal_EB__17->SetBinError(44,0.0002578753);
   ptPhot_mc_Signal_EB__17->SetBinError(45,0.0004860946);
   ptPhot_mc_Signal_EB__17->SetBinError(46,0.0002363849);
   ptPhot_mc_Signal_EB__17->SetBinError(47,0.000155236);
   ptPhot_mc_Signal_EB__17->SetBinError(48,0.0001467639);
   ptPhot_mc_Signal_EB__17->SetBinError(49,0.0001352917);
   ptPhot_mc_Signal_EB__17->SetBinError(50,0.0003687754);
   ptPhot_mc_Signal_EB__17->SetBinError(51,0.0001198087);
   ptPhot_mc_Signal_EB__17->SetBinError(52,0.0001147081);
   ptPhot_mc_Signal_EB__17->SetBinError(53,0.0001067161);
   ptPhot_mc_Signal_EB__17->SetBinError(54,9.70427e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(55,9.336589e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(56,8.928739e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(57,8.272426e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(58,7.690997e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(59,6.7671e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(60,6.340301e-05);
   ptPhot_mc_Signal_EB__17->SetBinError(61,0.000133033);
   ptPhot_mc_Signal_EB__17->SetEntries(5244647);
   ptPhot_mc_Signal_EB__17->SetDirectory(0);
   ptPhot_mc_Signal_EB__17->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__17->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__17->SetLineColor(ci);
   ptPhot_mc_Signal_EB__17->SetLineWidth(2);
   ptPhot_mc_Signal_EB__17->Draw("HSAME");
   
   TH1F *ptPhot_data_EB__18 = new TH1F("ptPhot_data_EB__18","ptPhot_data_EB",60,0,300);
   ptPhot_data_EB__18->SetBinContent(5,0.03865997);
   ptPhot_data_EB__18->SetBinContent(6,0.07661077);
   ptPhot_data_EB__18->SetBinContent(7,0.1313527);
   ptPhot_data_EB__18->SetBinContent(8,0.1997299);
   ptPhot_data_EB__18->SetBinContent(9,0.2524908);
   ptPhot_data_EB__18->SetBinContent(10,0.1587892);
   ptPhot_data_EB__18->SetBinContent(11,0.06124282);
   ptPhot_data_EB__18->SetBinContent(12,0.02897024);
   ptPhot_data_EB__18->SetBinContent(13,0.01607323);
   ptPhot_data_EB__18->SetBinContent(14,0.009783834);
   ptPhot_data_EB__18->SetBinContent(15,0.006443651);
   ptPhot_data_EB__18->SetBinContent(16,0.004456811);
   ptPhot_data_EB__18->SetBinContent(17,0.003157797);
   ptPhot_data_EB__18->SetBinContent(18,0.002433104);
   ptPhot_data_EB__18->SetBinContent(19,0.001860723);
   ptPhot_data_EB__18->SetBinContent(20,0.001405729);
   ptPhot_data_EB__18->SetBinContent(21,0.001082673);
   ptPhot_data_EB__18->SetBinContent(22,0.0008284972);
   ptPhot_data_EB__18->SetBinContent(23,0.0006946183);
   ptPhot_data_EB__18->SetBinContent(24,0.0005471574);
   ptPhot_data_EB__18->SetBinContent(25,0.000466636);
   ptPhot_data_EB__18->SetBinContent(26,0.0003802938);
   ptPhot_data_EB__18->SetBinContent(27,0.0003589508);
   ptPhot_data_EB__18->SetBinContent(28,0.0002532058);
   ptPhot_data_EB__18->SetBinContent(29,0.0002299225);
   ptPhot_data_EB__18->SetBinContent(30,0.000219251);
   ptPhot_data_EB__18->SetBinContent(31,0.0001920872);
   ptPhot_data_EB__18->SetBinContent(32,0.0001591025);
   ptPhot_data_EB__18->SetBinContent(33,0.0001377595);
   ptPhot_data_EB__18->SetBinContent(34,0.0001144762);
   ptPhot_data_EB__18->SetBinContent(35,8.537208e-05);
   ptPhot_data_EB__18->SetBinContent(36,8.440194e-05);
   ptPhot_data_EB__18->SetBinContent(37,8.537208e-05);
   ptPhot_data_EB__18->SetBinContent(38,6.596933e-05);
   ptPhot_data_EB__18->SetBinContent(39,6.208878e-05);
   ptPhot_data_EB__18->SetBinContent(40,5.626796e-05);
   ptPhot_data_EB__18->SetBinContent(41,5.141728e-05);
   ptPhot_data_EB__18->SetBinContent(42,4.17159e-05);
   ptPhot_data_EB__18->SetBinContent(43,3.39548e-05);
   ptPhot_data_EB__18->SetBinContent(44,4.074576e-05);
   ptPhot_data_EB__18->SetBinContent(45,3.104439e-05);
   ptPhot_data_EB__18->SetBinContent(46,2.910412e-05);
   ptPhot_data_EB__18->SetBinContent(47,2.522357e-05);
   ptPhot_data_EB__18->SetBinContent(48,2.619371e-05);
   ptPhot_data_EB__18->SetBinContent(49,2.425343e-05);
   ptPhot_data_EB__18->SetBinContent(50,2.231316e-05);
   ptPhot_data_EB__18->SetBinContent(51,1.358192e-05);
   ptPhot_data_EB__18->SetBinContent(52,1.843261e-05);
   ptPhot_data_EB__18->SetBinContent(53,1.358192e-05);
   ptPhot_data_EB__18->SetBinContent(54,1.067151e-05);
   ptPhot_data_EB__18->SetBinContent(55,1.067151e-05);
   ptPhot_data_EB__18->SetBinContent(56,1.164165e-05);
   ptPhot_data_EB__18->SetBinContent(57,9.701373e-06);
   ptPhot_data_EB__18->SetBinContent(58,7.761098e-06);
   ptPhot_data_EB__18->SetBinContent(59,5.820823e-06);
   ptPhot_data_EB__18->SetBinContent(60,6.79096e-06);
   ptPhot_data_EB__18->SetBinContent(61,9.604359e-05);
   ptPhot_data_EB__18->SetBinError(5,0.0001936633);
   ptPhot_data_EB__18->SetBinError(6,0.0002726224);
   ptPhot_data_EB__18->SetBinError(7,0.0003569736);
   ptPhot_data_EB__18->SetBinError(8,0.0004401879);
   ptPhot_data_EB__18->SetBinError(9,0.000494925);
   ptPhot_data_EB__18->SetBinError(10,0.0003924886);
   ptPhot_data_EB__18->SetBinError(11,0.0002437498);
   ptPhot_data_EB__18->SetBinError(12,0.0001676458);
   ptPhot_data_EB__18->SetBinError(13,0.0001248729);
   ptPhot_data_EB__18->SetBinError(14,9.742516e-05);
   ptPhot_data_EB__18->SetBinError(15,7.90647e-05);
   ptPhot_data_EB__18->SetBinError(16,6.575498e-05);
   ptPhot_data_EB__18->SetBinError(17,5.534886e-05);
   ptPhot_data_EB__18->SetBinError(18,4.858441e-05);
   ptPhot_data_EB__18->SetBinError(19,4.248714e-05);
   ptPhot_data_EB__18->SetBinError(20,3.692898e-05);
   ptPhot_data_EB__18->SetBinError(21,3.240897e-05);
   ptPhot_data_EB__18->SetBinError(22,2.835059e-05);
   ptPhot_data_EB__18->SetBinError(23,2.59591e-05);
   ptPhot_data_EB__18->SetBinError(24,2.303948e-05);
   ptPhot_data_EB__18->SetBinError(25,2.127677e-05);
   ptPhot_data_EB__18->SetBinError(26,1.920774e-05);
   ptPhot_data_EB__18->SetBinError(27,1.866096e-05);
   ptPhot_data_EB__18->SetBinError(28,1.567305e-05);
   ptPhot_data_EB__18->SetBinError(29,1.493507e-05);
   ptPhot_data_EB__18->SetBinError(30,1.458436e-05);
   ptPhot_data_EB__18->SetBinError(31,1.365104e-05);
   ptPhot_data_EB__18->SetBinError(32,1.242382e-05);
   ptPhot_data_EB__18->SetBinError(33,1.156052e-05);
   ptPhot_data_EB__18->SetBinError(34,1.053839e-05);
   ptPhot_data_EB__18->SetBinError(35,9.100694e-06);
   ptPhot_data_EB__18->SetBinError(36,9.048838e-06);
   ptPhot_data_EB__18->SetBinError(37,9.100694e-06);
   ptPhot_data_EB__18->SetBinError(38,7.999957e-06);
   ptPhot_data_EB__18->SetBinError(39,7.761098e-06);
   ptPhot_data_EB__18->SetBinError(40,7.388345e-06);
   ptPhot_data_EB__18->SetBinError(41,7.062706e-06);
   ptPhot_data_EB__18->SetBinError(42,6.361615e-06);
   ptPhot_data_EB__18->SetBinError(43,5.739409e-06);
   ptPhot_data_EB__18->SetBinError(44,6.287208e-06);
   ptPhot_data_EB__18->SetBinError(45,5.487925e-06);
   ptPhot_data_EB__18->SetBinError(46,5.31366e-06);
   ptPhot_data_EB__18->SetBinError(47,4.946749e-06);
   ptPhot_data_EB__18->SetBinError(48,5.040981e-06);
   ptPhot_data_EB__18->SetBinError(49,4.850686e-06);
   ptPhot_data_EB__18->SetBinError(50,4.652615e-06);
   ptPhot_data_EB__18->SetBinError(51,3.629921e-06);
   ptPhot_data_EB__18->SetBinError(52,4.22873e-06);
   ptPhot_data_EB__18->SetBinError(53,3.629921e-06);
   ptPhot_data_EB__18->SetBinError(54,3.217581e-06);
   ptPhot_data_EB__18->SetBinError(55,3.217581e-06);
   ptPhot_data_EB__18->SetBinError(56,3.360654e-06);
   ptPhot_data_EB__18->SetBinError(57,3.067843e-06);
   ptPhot_data_EB__18->SetBinError(58,2.743962e-06);
   ptPhot_data_EB__18->SetBinError(59,2.376341e-06);
   ptPhot_data_EB__18->SetBinError(60,2.566742e-06);
   ptPhot_data_EB__18->SetBinError(61,9.652744e-06);
   ptPhot_data_EB__18->SetMinimum(9.701372e-08);
   ptPhot_data_EB__18->SetMaximum(1.413949);
   ptPhot_data_EB__18->SetEntries(1030881);
   ptPhot_data_EB__18->SetDirectory(0);
   ptPhot_data_EB__18->SetStats(0);
   ptPhot_data_EB__18->SetMarkerStyle(20);
   ptPhot_data_EB__18->SetMarkerSize(0.7);
   ptPhot_data_EB__18->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_data_EB__18->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_data_EB__18->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_data_EB__18->Draw("PESAME");
   
   TLegend *leg = new TLegend(3.985682e+252,1.269798e-319,0,0,NULL,"brNDC");
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
   entry=leg->AddEntry("ptPhot_data_EB","Data Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_EB","signal #gamma + jet","F");
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
   ptPhot->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_data_EB",60,0,300);
   ratio->SetBinContent(9,30.96866);
   ratio->SetBinContent(10,30.54745);
   ratio->SetBinContent(11,18.0487);
   ratio->SetBinContent(12,12.82631);
   ratio->SetBinContent(13,10.21279);
   ratio->SetBinContent(14,1.093524);
   ratio->SetBinContent(15,1.015741);
   ratio->SetBinContent(16,0.9307563);
   ratio->SetBinContent(17,0.8867082);
   ratio->SetBinContent(18,0.8796539);
   ratio->SetBinContent(19,0.1418364);
   ratio->SetBinContent(20,0.1418102);
   ratio->SetBinContent(21,0.1363607);
   ratio->SetBinContent(22,0.06294866);
   ratio->SetBinContent(23,0.06415621);
   ratio->SetBinContent(24,0.06231479);
   ratio->SetBinContent(25,0.06509427);
   ratio->SetBinContent(26,0.06338045);
   ratio->SetBinContent(27,0.07212755);
   ratio->SetBinContent(28,0.05995885);
   ratio->SetBinContent(29,0.06521673);
   ratio->SetBinContent(30,0.07404827);
   ratio->SetBinContent(31,0.07632946);
   ratio->SetBinContent(32,0.07312554);
   ratio->SetBinContent(33,0.07249819);
   ratio->SetBinContent(34,0.001400582);
   ratio->SetBinContent(35,0.001200086);
   ratio->SetBinContent(36,0.001386075);
   ratio->SetBinContent(37,0.00111473);
   ratio->SetBinContent(38,0.0009785619);
   ratio->SetBinContent(39,0.001058813);
   ratio->SetBinContent(40,0.001075982);
   ratio->SetBinContent(41,0.00114249);
   ratio->SetBinContent(42,0.001009443);
   ratio->SetBinContent(43,0.0009586223);
   ratio->SetBinContent(44,0.001283907);
   ratio->SetBinContent(45,0.00106504);
   ratio->SetBinContent(46,0.001139925);
   ratio->SetBinContent(47,0.001126167);
   ratio->SetBinContent(48,0.001285552);
   ratio->SetBinContent(49,0.001332443);
   ratio->SetBinContent(50,0.001329311);
   ratio->SetBinContent(51,0.0009110045);
   ratio->SetBinContent(52,0.001352259);
   ratio->SetBinContent(53,0.001112352);
   ratio->SetBinContent(54,0.0009875424);
   ratio->SetBinContent(55,0.001063126);
   ratio->SetBinContent(56,0.001282383);
   ratio->SetBinContent(57,0.001170531);
   ratio->SetBinContent(58,0.001041178);
   ratio->SetBinContent(59,0.0008738629);
   ratio->SetBinContent(60,0.001108527);
   ratio->SetBinContent(61,0.001516208);
   ratio->SetBinError(9,0.195271);
   ratio->SetBinError(10,0.2250089);
   ratio->SetBinError(11,0.1585858);
   ratio->SetBinError(12,0.1317628);
   ratio->SetBinError(13,0.1248296);
   ratio->SetBinError(14,0.01586802);
   ratio->SetBinError(15,0.01640044);
   ratio->SetBinError(16,0.0174254);
   ratio->SetBinError(17,0.01840178);
   ratio->SetBinError(18,0.02038746);
   ratio->SetBinError(19,0.003781512);
   ratio->SetBinError(20,0.003959371);
   ratio->SetBinError(21,0.004390637);
   ratio->SetBinError(22,0.002246884);
   ratio->SetBinError(23,0.002473867);
   ratio->SetBinError(24,0.002671108);
   ratio->SetBinError(25,0.00301393);
   ratio->SetBinError(26,0.003246413);
   ratio->SetBinError(27,0.003800343);
   ratio->SetBinError(28,0.003755486);
   ratio->SetBinError(29,0.004279258);
   ratio->SetBinError(30,0.004974906);
   ratio->SetBinError(31,0.005469469);
   ratio->SetBinError(32,0.005756772);
   ratio->SetBinError(33,0.006138977);
   ratio->SetBinError(34,0.0001299104);
   ratio->SetBinError(35,0.0001286303);
   ratio->SetBinError(36,0.0001492538);
   ratio->SetBinError(37,0.0001193614);
   ratio->SetBinError(38,0.0001191139);
   ratio->SetBinError(39,0.0001328512);
   ratio->SetBinError(40,0.0001417718);
   ratio->SetBinError(41,0.0001571873);
   ratio->SetBinError(42,0.0001546263);
   ratio->SetBinError(43,0.0001622633);
   ratio->SetBinError(44,0.0001983857);
   ratio->SetBinError(45,0.0001891101);
   ratio->SetBinError(46,0.0002083884);
   ratio->SetBinError(47,0.0002209974);
   ratio->SetBinError(48,0.0002475778);
   ratio->SetBinError(49,0.0002666726);
   ratio->SetBinError(50,0.0002787148);
   ratio->SetBinError(51,0.0002435862);
   ratio->SetBinError(52,0.0003104382);
   ratio->SetBinError(53,0.0002974475);
   ratio->SetBinError(54,0.0002978873);
   ratio->SetBinError(55,0.0003206972);
   ratio->SetBinError(56,0.0003704069);
   ratio->SetBinError(57,0.0003703387);
   ratio->SetBinError(58,0.0003682689);
   ratio->SetBinError(59,0.0003568635);
   ratio->SetBinError(60,0.000419141);
   ratio->SetBinError(61,0.0001524179);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(79423.15);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("Data/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","ptPhot_data_EB",60,0,300);
   ratio->SetBinContent(9,30.96866);
   ratio->SetBinContent(10,30.54745);
   ratio->SetBinContent(11,18.0487);
   ratio->SetBinContent(12,12.82631);
   ratio->SetBinContent(13,10.21279);
   ratio->SetBinContent(14,1.093524);
   ratio->SetBinContent(15,1.015741);
   ratio->SetBinContent(16,0.9307563);
   ratio->SetBinContent(17,0.8867082);
   ratio->SetBinContent(18,0.8796539);
   ratio->SetBinContent(19,0.1418364);
   ratio->SetBinContent(20,0.1418102);
   ratio->SetBinContent(21,0.1363607);
   ratio->SetBinContent(22,0.06294866);
   ratio->SetBinContent(23,0.06415621);
   ratio->SetBinContent(24,0.06231479);
   ratio->SetBinContent(25,0.06509427);
   ratio->SetBinContent(26,0.06338045);
   ratio->SetBinContent(27,0.07212755);
   ratio->SetBinContent(28,0.05995885);
   ratio->SetBinContent(29,0.06521673);
   ratio->SetBinContent(30,0.07404827);
   ratio->SetBinContent(31,0.07632946);
   ratio->SetBinContent(32,0.07312554);
   ratio->SetBinContent(33,0.07249819);
   ratio->SetBinContent(34,0.001400582);
   ratio->SetBinContent(35,0.001200086);
   ratio->SetBinContent(36,0.001386075);
   ratio->SetBinContent(37,0.00111473);
   ratio->SetBinContent(38,0.0009785619);
   ratio->SetBinContent(39,0.001058813);
   ratio->SetBinContent(40,0.001075982);
   ratio->SetBinContent(41,0.00114249);
   ratio->SetBinContent(42,0.001009443);
   ratio->SetBinContent(43,0.0009586223);
   ratio->SetBinContent(44,0.001283907);
   ratio->SetBinContent(45,0.00106504);
   ratio->SetBinContent(46,0.001139925);
   ratio->SetBinContent(47,0.001126167);
   ratio->SetBinContent(48,0.001285552);
   ratio->SetBinContent(49,0.001332443);
   ratio->SetBinContent(50,0.001329311);
   ratio->SetBinContent(51,0.0009110045);
   ratio->SetBinContent(52,0.001352259);
   ratio->SetBinContent(53,0.001112352);
   ratio->SetBinContent(54,0.0009875424);
   ratio->SetBinContent(55,0.001063126);
   ratio->SetBinContent(56,0.001282383);
   ratio->SetBinContent(57,0.001170531);
   ratio->SetBinContent(58,0.001041178);
   ratio->SetBinContent(59,0.0008738629);
   ratio->SetBinContent(60,0.001108527);
   ratio->SetBinContent(61,0.001516208);
   ratio->SetBinError(9,0.195271);
   ratio->SetBinError(10,0.2250089);
   ratio->SetBinError(11,0.1585858);
   ratio->SetBinError(12,0.1317628);
   ratio->SetBinError(13,0.1248296);
   ratio->SetBinError(14,0.01586802);
   ratio->SetBinError(15,0.01640044);
   ratio->SetBinError(16,0.0174254);
   ratio->SetBinError(17,0.01840178);
   ratio->SetBinError(18,0.02038746);
   ratio->SetBinError(19,0.003781512);
   ratio->SetBinError(20,0.003959371);
   ratio->SetBinError(21,0.004390637);
   ratio->SetBinError(22,0.002246884);
   ratio->SetBinError(23,0.002473867);
   ratio->SetBinError(24,0.002671108);
   ratio->SetBinError(25,0.00301393);
   ratio->SetBinError(26,0.003246413);
   ratio->SetBinError(27,0.003800343);
   ratio->SetBinError(28,0.003755486);
   ratio->SetBinError(29,0.004279258);
   ratio->SetBinError(30,0.004974906);
   ratio->SetBinError(31,0.005469469);
   ratio->SetBinError(32,0.005756772);
   ratio->SetBinError(33,0.006138977);
   ratio->SetBinError(34,0.0001299104);
   ratio->SetBinError(35,0.0001286303);
   ratio->SetBinError(36,0.0001492538);
   ratio->SetBinError(37,0.0001193614);
   ratio->SetBinError(38,0.0001191139);
   ratio->SetBinError(39,0.0001328512);
   ratio->SetBinError(40,0.0001417718);
   ratio->SetBinError(41,0.0001571873);
   ratio->SetBinError(42,0.0001546263);
   ratio->SetBinError(43,0.0001622633);
   ratio->SetBinError(44,0.0001983857);
   ratio->SetBinError(45,0.0001891101);
   ratio->SetBinError(46,0.0002083884);
   ratio->SetBinError(47,0.0002209974);
   ratio->SetBinError(48,0.0002475778);
   ratio->SetBinError(49,0.0002666726);
   ratio->SetBinError(50,0.0002787148);
   ratio->SetBinError(51,0.0002435862);
   ratio->SetBinError(52,0.0003104382);
   ratio->SetBinError(53,0.0002974475);
   ratio->SetBinError(54,0.0002978873);
   ratio->SetBinError(55,0.0003206972);
   ratio->SetBinError(56,0.0003704069);
   ratio->SetBinError(57,0.0003703387);
   ratio->SetBinError(58,0.0003682689);
   ratio->SetBinError(59,0.0003568635);
   ratio->SetBinError(60,0.000419141);
   ratio->SetBinError(61,0.0001524179);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(79423.15);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("Data/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   ptPhot->cd();
   ptPhot->Modified();
   ptPhot->cd();
   ptPhot->SetSelected(ptPhot);
}
