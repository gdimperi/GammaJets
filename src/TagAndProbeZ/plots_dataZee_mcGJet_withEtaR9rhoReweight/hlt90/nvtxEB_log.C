{
//=========Macro generated from canvas: nvtx/nvtx
//=========  (Sun Nov 30 23:10:20 2014) by ROOT version5.32/00
   TCanvas *nvtx = new TCanvas("nvtx", "nvtx",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nvtx->SetHighLightColor(2);
   nvtx->Range(-7.1625,-0.009753699,44.0875,0.08778329);
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
   
   TH1F *nvtx_dataZ_EB__46 = new TH1F("nvtx_dataZ_EB__46","nvtx_dataZ_EB",41,-0.5,40.5);
   nvtx_dataZ_EB__46->SetBinContent(2,4.097571e-05);
   nvtx_dataZ_EB__46->SetBinContent(3,0.0003391152);
   nvtx_dataZ_EB__46->SetBinContent(4,0.00150284);
   nvtx_dataZ_EB__46->SetBinContent(5,0.004340482);
   nvtx_dataZ_EB__46->SetBinContent(6,0.009551892);
   nvtx_dataZ_EB__46->SetBinContent(7,0.01708147);
   nvtx_dataZ_EB__46->SetBinContent(8,0.02691286);
   nvtx_dataZ_EB__46->SetBinContent(9,0.03775081);
   nvtx_dataZ_EB__46->SetBinContent(10,0.04845053);
   nvtx_dataZ_EB__46->SetBinContent(11,0.05784775);
   nvtx_dataZ_EB__46->SetBinContent(12,0.06660778);
   nvtx_dataZ_EB__46->SetBinContent(13,0.0708496);
   nvtx_dataZ_EB__46->SetBinContent(14,0.07479192);
   nvtx_dataZ_EB__46->SetBinContent(15,0.0745381);
   nvtx_dataZ_EB__46->SetBinContent(16,0.07285119);
   nvtx_dataZ_EB__46->SetBinContent(17,0.06859262);
   nvtx_dataZ_EB__46->SetBinContent(18,0.06311931);
   nvtx_dataZ_EB__46->SetBinContent(19,0.05650607);
   nvtx_dataZ_EB__46->SetBinContent(20,0.05046127);
   nvtx_dataZ_EB__46->SetBinContent(21,0.04324233);
   nvtx_dataZ_EB__46->SetBinContent(22,0.0357883);
   nvtx_dataZ_EB__46->SetBinContent(23,0.02940981);
   nvtx_dataZ_EB__46->SetBinContent(24,0.02334885);
   nvtx_dataZ_EB__46->SetBinContent(25,0.01833363);
   nvtx_dataZ_EB__46->SetBinContent(26,0.01363619);
   nvtx_dataZ_EB__46->SetBinContent(27,0.01018053);
   nvtx_dataZ_EB__46->SetBinContent(28,0.007207543);
   nvtx_dataZ_EB__46->SetBinContent(29,0.005386672);
   nvtx_dataZ_EB__46->SetBinContent(30,0.004155344);
   nvtx_dataZ_EB__46->SetBinContent(31,0.002471012);
   nvtx_dataZ_EB__46->SetBinContent(32,0.001840053);
   nvtx_dataZ_EB__46->SetBinContent(33,0.0009507491);
   nvtx_dataZ_EB__46->SetBinContent(34,0.0007175894);
   nvtx_dataZ_EB__46->SetBinContent(35,0.0004832505);
   nvtx_dataZ_EB__46->SetBinContent(36,0.0003137176);
   nvtx_dataZ_EB__46->SetBinContent(37,0.0001376514);
   nvtx_dataZ_EB__46->SetBinContent(38,0.0001330073);
   nvtx_dataZ_EB__46->SetBinContent(39,5.139892e-05);
   nvtx_dataZ_EB__46->SetBinContent(40,5.142036e-05);
   nvtx_dataZ_EB__46->SetBinContent(41,2.434775e-05);
   nvtx_dataZ_EB__46->SetBinContent(42,1.025447e-05);
   nvtx_dataZ_EB__46->SetBinError(2,7.77431e-06);
   nvtx_dataZ_EB__46->SetBinError(3,2.712308e-05);
   nvtx_dataZ_EB__46->SetBinError(4,5.988599e-05);
   nvtx_dataZ_EB__46->SetBinError(5,0.0001040546);
   nvtx_dataZ_EB__46->SetBinError(6,0.0001528946);
   nvtx_dataZ_EB__46->SetBinError(7,0.000206263);
   nvtx_dataZ_EB__46->SetBinError(8,0.0002640532);
   nvtx_dataZ_EB__46->SetBinError(9,0.0003120239);
   nvtx_dataZ_EB__46->SetBinError(10,0.0003557904);
   nvtx_dataZ_EB__46->SetBinError(11,0.0003924608);
   nvtx_dataZ_EB__46->SetBinError(12,0.0004212418);
   nvtx_dataZ_EB__46->SetBinError(13,0.0004328431);
   nvtx_dataZ_EB__46->SetBinError(14,0.0004508951);
   nvtx_dataZ_EB__46->SetBinError(15,0.0004491603);
   nvtx_dataZ_EB__46->SetBinError(16,0.0004476659);
   nvtx_dataZ_EB__46->SetBinError(17,0.0004355037);
   nvtx_dataZ_EB__46->SetBinError(18,0.0004231166);
   nvtx_dataZ_EB__46->SetBinError(19,0.0003976354);
   nvtx_dataZ_EB__46->SetBinError(20,0.0003808881);
   nvtx_dataZ_EB__46->SetBinError(21,0.0003540813);
   nvtx_dataZ_EB__46->SetBinError(22,0.000324229);
   nvtx_dataZ_EB__46->SetBinError(23,0.0002926196);
   nvtx_dataZ_EB__46->SetBinError(24,0.0002706612);
   nvtx_dataZ_EB__46->SetBinError(25,0.0002393978);
   nvtx_dataZ_EB__46->SetBinError(26,0.0002027578);
   nvtx_dataZ_EB__46->SetBinError(27,0.0001840337);
   nvtx_dataZ_EB__46->SetBinError(28,0.0001558349);
   nvtx_dataZ_EB__46->SetBinError(29,0.000141323);
   nvtx_dataZ_EB__46->SetBinError(30,0.0001206047);
   nvtx_dataZ_EB__46->SetBinError(31,9.672903e-05);
   nvtx_dataZ_EB__46->SetBinError(32,9.02558e-05);
   nvtx_dataZ_EB__46->SetBinError(33,5.892203e-05);
   nvtx_dataZ_EB__46->SetBinError(34,5.282039e-05);
   nvtx_dataZ_EB__46->SetBinError(35,4.264402e-05);
   nvtx_dataZ_EB__46->SetBinError(36,4.105327e-05);
   nvtx_dataZ_EB__46->SetBinError(37,2.041716e-05);
   nvtx_dataZ_EB__46->SetBinError(38,3.059979e-05);
   nvtx_dataZ_EB__46->SetBinError(39,1.403386e-05);
   nvtx_dataZ_EB__46->SetBinError(40,1.398278e-05);
   nvtx_dataZ_EB__46->SetBinError(41,9.498499e-06);
   nvtx_dataZ_EB__46->SetBinError(42,4.237886e-06);
   nvtx_dataZ_EB__46->SetMinimum(1.385513e-07);
   nvtx_dataZ_EB__46->SetMaximum(0.4188348);
   nvtx_dataZ_EB__46->SetEntries(784094);
   nvtx_dataZ_EB__46->SetDirectory(0);
   nvtx_dataZ_EB__46->SetStats(0);
   nvtx_dataZ_EB__46->SetMarkerStyle(20);
   nvtx_dataZ_EB__46->SetMarkerSize(0.7);
   nvtx_dataZ_EB__46->GetXaxis()->SetTitle("nvtx");
   nvtx_dataZ_EB__46->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_dataZ_EB__46->GetYaxis()->SetTitleOffset(0.9);
   nvtx_dataZ_EB__46->Draw("PE");
   
   TH1F *nvtx_mc_Signal_EB__47 = new TH1F("nvtx_mc_Signal_EB__47","nvtx_mc_Signal_EB",41,-0.5,40.5);
   nvtx_mc_Signal_EB__47->SetBinContent(2,7.801831e-05);
   nvtx_mc_Signal_EB__47->SetBinContent(3,0.000455733);
   nvtx_mc_Signal_EB__47->SetBinContent(4,0.001457763);
   nvtx_mc_Signal_EB__47->SetBinContent(5,0.003654752);
   nvtx_mc_Signal_EB__47->SetBinContent(6,0.008230961);
   nvtx_mc_Signal_EB__47->SetBinContent(7,0.01433522);
   nvtx_mc_Signal_EB__47->SetBinContent(8,0.02248111);
   nvtx_mc_Signal_EB__47->SetBinContent(9,0.03389962);
   nvtx_mc_Signal_EB__47->SetBinContent(10,0.0434131);
   nvtx_mc_Signal_EB__47->SetBinContent(11,0.0502443);
   nvtx_mc_Signal_EB__47->SetBinContent(12,0.05868221);
   nvtx_mc_Signal_EB__47->SetBinContent(13,0.06606403);
   nvtx_mc_Signal_EB__47->SetBinContent(14,0.06835914);
   nvtx_mc_Signal_EB__47->SetBinContent(15,0.06913834);
   nvtx_mc_Signal_EB__47->SetBinContent(16,0.07111828);
   nvtx_mc_Signal_EB__47->SetBinContent(17,0.06846942);
   nvtx_mc_Signal_EB__47->SetBinContent(18,0.06411155);
   nvtx_mc_Signal_EB__47->SetBinContent(19,0.05998586);
   nvtx_mc_Signal_EB__47->SetBinContent(20,0.05434522);
   nvtx_mc_Signal_EB__47->SetBinContent(21,0.04789479);
   nvtx_mc_Signal_EB__47->SetBinContent(22,0.04094141);
   nvtx_mc_Signal_EB__47->SetBinContent(23,0.03447182);
   nvtx_mc_Signal_EB__47->SetBinContent(24,0.02861448);
   nvtx_mc_Signal_EB__47->SetBinContent(25,0.02252989);
   nvtx_mc_Signal_EB__47->SetBinContent(26,0.01874324);
   nvtx_mc_Signal_EB__47->SetBinContent(27,0.01314807);
   nvtx_mc_Signal_EB__47->SetBinContent(28,0.01037857);
   nvtx_mc_Signal_EB__47->SetBinContent(29,0.007368798);
   nvtx_mc_Signal_EB__47->SetBinContent(30,0.005406153);
   nvtx_mc_Signal_EB__47->SetBinContent(31,0.003939117);
   nvtx_mc_Signal_EB__47->SetBinContent(32,0.002675239);
   nvtx_mc_Signal_EB__47->SetBinContent(33,0.001827152);
   nvtx_mc_Signal_EB__47->SetBinContent(34,0.001264045);
   nvtx_mc_Signal_EB__47->SetBinContent(35,0.0008316122);
   nvtx_mc_Signal_EB__47->SetBinContent(36,0.0005810508);
   nvtx_mc_Signal_EB__47->SetBinContent(37,0.0003075134);
   nvtx_mc_Signal_EB__47->SetBinContent(38,0.0002304201);
   nvtx_mc_Signal_EB__47->SetBinContent(39,0.0001437898);
   nvtx_mc_Signal_EB__47->SetBinContent(40,0.0001091355);
   nvtx_mc_Signal_EB__47->SetBinContent(41,6.90638e-05);
   nvtx_mc_Signal_EB__47->SetBinContent(42,0.0001084238);
   nvtx_mc_Signal_EB__47->SetBinError(2,1.132468e-05);
   nvtx_mc_Signal_EB__47->SetBinError(3,4.591044e-05);
   nvtx_mc_Signal_EB__47->SetBinError(4,9.402524e-05);
   nvtx_mc_Signal_EB__47->SetBinError(5,0.0001410608);
   nvtx_mc_Signal_EB__47->SetBinError(6,0.0002601054);
   nvtx_mc_Signal_EB__47->SetBinError(7,0.0003212251);
   nvtx_mc_Signal_EB__47->SetBinError(8,0.0004038252);
   nvtx_mc_Signal_EB__47->SetBinError(9,0.001435706);
   nvtx_mc_Signal_EB__47->SetBinError(10,0.0006354159);
   nvtx_mc_Signal_EB__47->SetBinError(11,0.000608858);
   nvtx_mc_Signal_EB__47->SetBinError(12,0.0006561163);
   nvtx_mc_Signal_EB__47->SetBinError(13,0.0007294803);
   nvtx_mc_Signal_EB__47->SetBinError(14,0.000702017);
   nvtx_mc_Signal_EB__47->SetBinError(15,0.0006797936);
   nvtx_mc_Signal_EB__47->SetBinError(16,0.0007283032);
   nvtx_mc_Signal_EB__47->SetBinError(17,0.0007024391);
   nvtx_mc_Signal_EB__47->SetBinError(18,0.0006713452);
   nvtx_mc_Signal_EB__47->SetBinError(19,0.0006559048);
   nvtx_mc_Signal_EB__47->SetBinError(20,0.0006043118);
   nvtx_mc_Signal_EB__47->SetBinError(21,0.0005539513);
   nvtx_mc_Signal_EB__47->SetBinError(22,0.000502756);
   nvtx_mc_Signal_EB__47->SetBinError(23,0.0004385959);
   nvtx_mc_Signal_EB__47->SetBinError(24,0.0004039569);
   nvtx_mc_Signal_EB__47->SetBinError(25,0.0003430352);
   nvtx_mc_Signal_EB__47->SetBinError(26,0.0009313748);
   nvtx_mc_Signal_EB__47->SetBinError(27,0.000219206);
   nvtx_mc_Signal_EB__47->SetBinError(28,0.0002025678);
   nvtx_mc_Signal_EB__47->SetBinError(29,0.0001634432);
   nvtx_mc_Signal_EB__47->SetBinError(30,0.0001351233);
   nvtx_mc_Signal_EB__47->SetBinError(31,0.0001137617);
   nvtx_mc_Signal_EB__47->SetBinError(32,9.254173e-05);
   nvtx_mc_Signal_EB__47->SetBinError(33,6.803181e-05);
   nvtx_mc_Signal_EB__47->SetBinError(34,5.07596e-05);
   nvtx_mc_Signal_EB__47->SetBinError(35,3.533018e-05);
   nvtx_mc_Signal_EB__47->SetBinError(36,3.47502e-05);
   nvtx_mc_Signal_EB__47->SetBinError(37,1.43894e-05);
   nvtx_mc_Signal_EB__47->SetBinError(38,1.554525e-05);
   nvtx_mc_Signal_EB__47->SetBinError(39,9.562176e-06);
   nvtx_mc_Signal_EB__47->SetBinError(40,1.028416e-05);
   nvtx_mc_Signal_EB__47->SetBinError(41,7.897644e-06);
   nvtx_mc_Signal_EB__47->SetBinError(42,5.632007e-06);
   nvtx_mc_Signal_EB__47->SetEntries(1117041);
   nvtx_mc_Signal_EB__47->SetDirectory(0);
   nvtx_mc_Signal_EB__47->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EB__47->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EB__47->SetLineColor(ci);
   nvtx_mc_Signal_EB__47->SetLineWidth(2);
   nvtx_mc_Signal_EB__47->Draw("HSAME");
   
   TH1F *nvtx_dataZ_EB__48 = new TH1F("nvtx_dataZ_EB__48","nvtx_dataZ_EB",41,-0.5,40.5);
   nvtx_dataZ_EB__48->SetBinContent(2,4.097571e-05);
   nvtx_dataZ_EB__48->SetBinContent(3,0.0003391152);
   nvtx_dataZ_EB__48->SetBinContent(4,0.00150284);
   nvtx_dataZ_EB__48->SetBinContent(5,0.004340482);
   nvtx_dataZ_EB__48->SetBinContent(6,0.009551892);
   nvtx_dataZ_EB__48->SetBinContent(7,0.01708147);
   nvtx_dataZ_EB__48->SetBinContent(8,0.02691286);
   nvtx_dataZ_EB__48->SetBinContent(9,0.03775081);
   nvtx_dataZ_EB__48->SetBinContent(10,0.04845053);
   nvtx_dataZ_EB__48->SetBinContent(11,0.05784775);
   nvtx_dataZ_EB__48->SetBinContent(12,0.06660778);
   nvtx_dataZ_EB__48->SetBinContent(13,0.0708496);
   nvtx_dataZ_EB__48->SetBinContent(14,0.07479192);
   nvtx_dataZ_EB__48->SetBinContent(15,0.0745381);
   nvtx_dataZ_EB__48->SetBinContent(16,0.07285119);
   nvtx_dataZ_EB__48->SetBinContent(17,0.06859262);
   nvtx_dataZ_EB__48->SetBinContent(18,0.06311931);
   nvtx_dataZ_EB__48->SetBinContent(19,0.05650607);
   nvtx_dataZ_EB__48->SetBinContent(20,0.05046127);
   nvtx_dataZ_EB__48->SetBinContent(21,0.04324233);
   nvtx_dataZ_EB__48->SetBinContent(22,0.0357883);
   nvtx_dataZ_EB__48->SetBinContent(23,0.02940981);
   nvtx_dataZ_EB__48->SetBinContent(24,0.02334885);
   nvtx_dataZ_EB__48->SetBinContent(25,0.01833363);
   nvtx_dataZ_EB__48->SetBinContent(26,0.01363619);
   nvtx_dataZ_EB__48->SetBinContent(27,0.01018053);
   nvtx_dataZ_EB__48->SetBinContent(28,0.007207543);
   nvtx_dataZ_EB__48->SetBinContent(29,0.005386672);
   nvtx_dataZ_EB__48->SetBinContent(30,0.004155344);
   nvtx_dataZ_EB__48->SetBinContent(31,0.002471012);
   nvtx_dataZ_EB__48->SetBinContent(32,0.001840053);
   nvtx_dataZ_EB__48->SetBinContent(33,0.0009507491);
   nvtx_dataZ_EB__48->SetBinContent(34,0.0007175894);
   nvtx_dataZ_EB__48->SetBinContent(35,0.0004832505);
   nvtx_dataZ_EB__48->SetBinContent(36,0.0003137176);
   nvtx_dataZ_EB__48->SetBinContent(37,0.0001376514);
   nvtx_dataZ_EB__48->SetBinContent(38,0.0001330073);
   nvtx_dataZ_EB__48->SetBinContent(39,5.139892e-05);
   nvtx_dataZ_EB__48->SetBinContent(40,5.142036e-05);
   nvtx_dataZ_EB__48->SetBinContent(41,2.434775e-05);
   nvtx_dataZ_EB__48->SetBinContent(42,1.025447e-05);
   nvtx_dataZ_EB__48->SetBinError(2,7.77431e-06);
   nvtx_dataZ_EB__48->SetBinError(3,2.712308e-05);
   nvtx_dataZ_EB__48->SetBinError(4,5.988599e-05);
   nvtx_dataZ_EB__48->SetBinError(5,0.0001040546);
   nvtx_dataZ_EB__48->SetBinError(6,0.0001528946);
   nvtx_dataZ_EB__48->SetBinError(7,0.000206263);
   nvtx_dataZ_EB__48->SetBinError(8,0.0002640532);
   nvtx_dataZ_EB__48->SetBinError(9,0.0003120239);
   nvtx_dataZ_EB__48->SetBinError(10,0.0003557904);
   nvtx_dataZ_EB__48->SetBinError(11,0.0003924608);
   nvtx_dataZ_EB__48->SetBinError(12,0.0004212418);
   nvtx_dataZ_EB__48->SetBinError(13,0.0004328431);
   nvtx_dataZ_EB__48->SetBinError(14,0.0004508951);
   nvtx_dataZ_EB__48->SetBinError(15,0.0004491603);
   nvtx_dataZ_EB__48->SetBinError(16,0.0004476659);
   nvtx_dataZ_EB__48->SetBinError(17,0.0004355037);
   nvtx_dataZ_EB__48->SetBinError(18,0.0004231166);
   nvtx_dataZ_EB__48->SetBinError(19,0.0003976354);
   nvtx_dataZ_EB__48->SetBinError(20,0.0003808881);
   nvtx_dataZ_EB__48->SetBinError(21,0.0003540813);
   nvtx_dataZ_EB__48->SetBinError(22,0.000324229);
   nvtx_dataZ_EB__48->SetBinError(23,0.0002926196);
   nvtx_dataZ_EB__48->SetBinError(24,0.0002706612);
   nvtx_dataZ_EB__48->SetBinError(25,0.0002393978);
   nvtx_dataZ_EB__48->SetBinError(26,0.0002027578);
   nvtx_dataZ_EB__48->SetBinError(27,0.0001840337);
   nvtx_dataZ_EB__48->SetBinError(28,0.0001558349);
   nvtx_dataZ_EB__48->SetBinError(29,0.000141323);
   nvtx_dataZ_EB__48->SetBinError(30,0.0001206047);
   nvtx_dataZ_EB__48->SetBinError(31,9.672903e-05);
   nvtx_dataZ_EB__48->SetBinError(32,9.02558e-05);
   nvtx_dataZ_EB__48->SetBinError(33,5.892203e-05);
   nvtx_dataZ_EB__48->SetBinError(34,5.282039e-05);
   nvtx_dataZ_EB__48->SetBinError(35,4.264402e-05);
   nvtx_dataZ_EB__48->SetBinError(36,4.105327e-05);
   nvtx_dataZ_EB__48->SetBinError(37,2.041716e-05);
   nvtx_dataZ_EB__48->SetBinError(38,3.059979e-05);
   nvtx_dataZ_EB__48->SetBinError(39,1.403386e-05);
   nvtx_dataZ_EB__48->SetBinError(40,1.398278e-05);
   nvtx_dataZ_EB__48->SetBinError(41,9.498499e-06);
   nvtx_dataZ_EB__48->SetBinError(42,4.237886e-06);
   nvtx_dataZ_EB__48->SetMinimum(1.385513e-07);
   nvtx_dataZ_EB__48->SetMaximum(0.4188348);
   nvtx_dataZ_EB__48->SetEntries(784094);
   nvtx_dataZ_EB__48->SetDirectory(0);
   nvtx_dataZ_EB__48->SetStats(0);
   nvtx_dataZ_EB__48->SetMarkerStyle(20);
   nvtx_dataZ_EB__48->SetMarkerSize(0.7);
   nvtx_dataZ_EB__48->GetXaxis()->SetTitle("nvtx");
   nvtx_dataZ_EB__48->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_dataZ_EB__48->GetYaxis()->SetTitleOffset(0.9);
   nvtx_dataZ_EB__48->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.289797e-319,0,0,0,NULL,"brNDC");
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
   entry=leg->AddEntry("nvtx_dataZ_EB","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("nvtx_mc_Signal_EB","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","nvtx_dataZ_EB",41,-0.5,40.5);
   ratio->SetBinContent(2,0.5252063);
   ratio->SetBinContent(3,0.7441094);
   ratio->SetBinContent(4,1.030922);
   ratio->SetBinContent(5,1.187627);
   ratio->SetBinContent(6,1.160483);
   ratio->SetBinContent(7,1.191574);
   ratio->SetBinContent(8,1.197132);
   ratio->SetBinContent(9,1.113606);
   ratio->SetBinContent(10,1.116035);
   ratio->SetBinContent(11,1.15133);
   ratio->SetBinContent(12,1.135059);
   ratio->SetBinContent(13,1.072438);
   ratio->SetBinContent(14,1.094103);
   ratio->SetBinContent(15,1.078101);
   ratio->SetBinContent(16,1.024367);
   ratio->SetBinContent(17,1.001799);
   ratio->SetBinContent(18,0.9845232);
   ratio->SetBinContent(19,0.9419899);
   ratio->SetBinContent(20,0.9285319);
   ratio->SetBinContent(21,0.9028608);
   ratio->SetBinContent(22,0.8741345);
   ratio->SetBinContent(23,0.8531551);
   ratio->SetBinContent(24,0.8159803);
   ratio->SetBinContent(25,0.8137472);
   ratio->SetBinContent(26,0.7275259);
   ratio->SetBinContent(27,0.7742983);
   ratio->SetBinContent(28,0.6944641);
   ratio->SetBinContent(29,0.7310109);
   ratio->SetBinContent(30,0.7686324);
   ratio->SetBinContent(31,0.6273011);
   ratio->SetBinContent(32,0.6878089);
   ratio->SetBinContent(33,0.5203449);
   ratio->SetBinContent(34,0.5676929);
   ratio->SetBinContent(35,0.5811009);
   ratio->SetBinContent(36,0.5399141);
   ratio->SetBinContent(37,0.4476272);
   ratio->SetBinContent(38,0.5772383);
   ratio->SetBinContent(39,0.3574587);
   ratio->SetBinContent(40,0.4711606);
   ratio->SetBinContent(41,0.35254);
   ratio->SetBinContent(42,0.09457768);
   ratio->SetBinError(2,0.125465);
   ratio->SetBinError(3,0.09571459);
   ratio->SetBinError(4,0.07816071);
   ratio->SetBinError(5,0.05396064);
   ratio->SetBinError(6,0.04110847);
   ratio->SetBinError(7,0.030331);
   ratio->SetBinError(8,0.02450258);
   ratio->SetBinError(9,0.04805283);
   ratio->SetBinError(10,0.01827546);
   ratio->SetBinError(11,0.0159895);
   ratio->SetBinError(12,0.0145804);
   ratio->SetBinError(13,0.01353356);
   ratio->SetBinError(14,0.01302893);
   ratio->SetBinError(15,0.01243266);
   ratio->SetBinError(16,0.01223391);
   ratio->SetBinError(17,0.01208661);
   ratio->SetBinError(18,0.01224095);
   ratio->SetBinError(19,0.01224874);
   ratio->SetBinError(20,0.0124792);
   ratio->SetBinError(21,0.01279455);
   ratio->SetBinError(22,0.01333944);
   ratio->SetBinError(23,0.01377997);
   ratio->SetBinError(24,0.01490525);
   ratio->SetBinError(25,0.01632231);
   ratio->SetBinError(26,0.03773546);
   ratio->SetBinError(27,0.0190411);
   ratio->SetBinError(28,0.0202281);
   ratio->SetBinError(29,0.02511405);
   ratio->SetBinError(30,0.02944083);
   ratio->SetBinError(31,0.03051564);
   ratio->SetBinError(32,0.04128326);
   ratio->SetBinError(33,0.03762051);
   ratio->SetBinError(34,0.04760062);
   ratio->SetBinError(35,0.05691204);
   ratio->SetBinError(36,0.07768242);
   ratio->SetBinError(37,0.06961993);
   ratio->SetBinError(38,0.1383923);
   ratio->SetBinError(39,0.100453);
   ratio->SetBinError(40,0.1355978);
   ratio->SetBinError(41,0.143319);
   ratio->SetBinError(42,0.03939385);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(8256.783);
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
   
   TH1F *ratio = new TH1F("ratio","nvtx_dataZ_EB",41,-0.5,40.5);
   ratio->SetBinContent(2,0.5252063);
   ratio->SetBinContent(3,0.7441094);
   ratio->SetBinContent(4,1.030922);
   ratio->SetBinContent(5,1.187627);
   ratio->SetBinContent(6,1.160483);
   ratio->SetBinContent(7,1.191574);
   ratio->SetBinContent(8,1.197132);
   ratio->SetBinContent(9,1.113606);
   ratio->SetBinContent(10,1.116035);
   ratio->SetBinContent(11,1.15133);
   ratio->SetBinContent(12,1.135059);
   ratio->SetBinContent(13,1.072438);
   ratio->SetBinContent(14,1.094103);
   ratio->SetBinContent(15,1.078101);
   ratio->SetBinContent(16,1.024367);
   ratio->SetBinContent(17,1.001799);
   ratio->SetBinContent(18,0.9845232);
   ratio->SetBinContent(19,0.9419899);
   ratio->SetBinContent(20,0.9285319);
   ratio->SetBinContent(21,0.9028608);
   ratio->SetBinContent(22,0.8741345);
   ratio->SetBinContent(23,0.8531551);
   ratio->SetBinContent(24,0.8159803);
   ratio->SetBinContent(25,0.8137472);
   ratio->SetBinContent(26,0.7275259);
   ratio->SetBinContent(27,0.7742983);
   ratio->SetBinContent(28,0.6944641);
   ratio->SetBinContent(29,0.7310109);
   ratio->SetBinContent(30,0.7686324);
   ratio->SetBinContent(31,0.6273011);
   ratio->SetBinContent(32,0.6878089);
   ratio->SetBinContent(33,0.5203449);
   ratio->SetBinContent(34,0.5676929);
   ratio->SetBinContent(35,0.5811009);
   ratio->SetBinContent(36,0.5399141);
   ratio->SetBinContent(37,0.4476272);
   ratio->SetBinContent(38,0.5772383);
   ratio->SetBinContent(39,0.3574587);
   ratio->SetBinContent(40,0.4711606);
   ratio->SetBinContent(41,0.35254);
   ratio->SetBinContent(42,0.09457768);
   ratio->SetBinError(2,0.125465);
   ratio->SetBinError(3,0.09571459);
   ratio->SetBinError(4,0.07816071);
   ratio->SetBinError(5,0.05396064);
   ratio->SetBinError(6,0.04110847);
   ratio->SetBinError(7,0.030331);
   ratio->SetBinError(8,0.02450258);
   ratio->SetBinError(9,0.04805283);
   ratio->SetBinError(10,0.01827546);
   ratio->SetBinError(11,0.0159895);
   ratio->SetBinError(12,0.0145804);
   ratio->SetBinError(13,0.01353356);
   ratio->SetBinError(14,0.01302893);
   ratio->SetBinError(15,0.01243266);
   ratio->SetBinError(16,0.01223391);
   ratio->SetBinError(17,0.01208661);
   ratio->SetBinError(18,0.01224095);
   ratio->SetBinError(19,0.01224874);
   ratio->SetBinError(20,0.0124792);
   ratio->SetBinError(21,0.01279455);
   ratio->SetBinError(22,0.01333944);
   ratio->SetBinError(23,0.01377997);
   ratio->SetBinError(24,0.01490525);
   ratio->SetBinError(25,0.01632231);
   ratio->SetBinError(26,0.03773546);
   ratio->SetBinError(27,0.0190411);
   ratio->SetBinError(28,0.0202281);
   ratio->SetBinError(29,0.02511405);
   ratio->SetBinError(30,0.02944083);
   ratio->SetBinError(31,0.03051564);
   ratio->SetBinError(32,0.04128326);
   ratio->SetBinError(33,0.03762051);
   ratio->SetBinError(34,0.04760062);
   ratio->SetBinError(35,0.05691204);
   ratio->SetBinError(36,0.07768242);
   ratio->SetBinError(37,0.06961993);
   ratio->SetBinError(38,0.1383923);
   ratio->SetBinError(39,0.100453);
   ratio->SetBinError(40,0.1355978);
   ratio->SetBinError(41,0.143319);
   ratio->SetBinError(42,0.03939385);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(8256.783);
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
