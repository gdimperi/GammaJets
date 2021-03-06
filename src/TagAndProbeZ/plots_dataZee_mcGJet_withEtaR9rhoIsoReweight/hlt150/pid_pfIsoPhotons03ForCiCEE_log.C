{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Sun Nov 30 19:07:50 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.04263677,6.525,0.3837309);
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
   
   TH1F *pfIsoPhotons03_dataZ_EE__28 = new TH1F("pfIsoPhotons03_dataZ_EE__28","pfIsoPhotons03_dataZ_EE",60,0,6);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(1,0.3268166);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(2,0.04844785);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(3,0.07784162);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(4,0.05445427);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(5,0.05212054);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(6,0.04668415);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(7,0.03947798);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(8,0.03716716);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(9,0.033018);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(10,0.03061043);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(11,0.02748403);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(12,0.02428675);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(13,0.02071357);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(14,0.02017597);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(15,0.01688585);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(16,0.01497367);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(17,0.01312773);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(18,0.01270574);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(19,0.01049185);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(20,0.009674693);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(21,0.00849572);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(22,0.007234918);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(23,0.006370211);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(24,0.005792829);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(25,0.00596141);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(26,0.004555574);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(27,0.004321062);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(28,0.003696504);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(29,0.003426107);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(30,0.003284947);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(31,0.002747901);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(32,0.002619668);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(33,0.002652072);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(34,0.002102286);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(35,0.00201246);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(36,0.001762353);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(37,0.001651433);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(38,0.001296696);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(39,0.001153529);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(40,0.001354983);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(41,0.0009738977);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(42,0.00110828);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(43,0.0009289952);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(44,0.0009422053);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(45,0.000546023);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(46,0.0006894725);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(47,0.0006739165);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(48,0.0005134983);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(49,0.0003764484);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(50,0.0004900349);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(51,0.0003713437);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(52,0.000464141);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(53,0.0004231282);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(54,0.0003859272);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(55,0.0001517342);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(56,0.0002854071);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(57,0.0003055822);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(58,0.0002970325);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(59,0.0002662331);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(60,0.0001555346);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(61,0.004837652);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(1,0.002095599);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(2,0.0007998441);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(3,0.001004215);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(4,0.0008317554);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(5,0.0008660885);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(6,0.0007978518);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(7,0.0007645738);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(8,0.0007088599);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(9,0.0006746353);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(10,0.000651902);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(11,0.0006161864);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(12,0.0005597171);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(13,0.0005226551);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(14,0.0005413339);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(15,0.0004905662);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(16,0.0004383802);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(17,0.000410912);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(18,0.0004108734);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(19,0.0003534883);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(20,0.0003606166);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(21,0.0003458608);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(22,0.0002955679);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(23,0.0002937572);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(24,0.0002796057);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(25,0.0002877202);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(26,0.0002414897);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(27,0.0002678497);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(28,0.000239992);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(29,0.0002142286);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(30,0.0002199016);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(31,0.0001839061);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(32,0.000184661);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(33,0.0002094011);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(34,0.0001569158);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(35,0.0002285459);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(36,0.0001672478);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(37,0.0001476911);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(38,0.0001327839);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(39,0.0001117607);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(40,0.0001369242);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(41,9.959806e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(42,0.0001268782);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(43,0.0001024243);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(44,0.0001225408);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(45,6.933839e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(46,9.193707e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(47,8.582635e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(48,7.414607e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(49,5.504747e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(50,8.100115e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(51,5.939953e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(52,6.638731e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(53,6.037277e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(54,7.762622e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(55,2.952125e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(56,5.013513e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(57,5.922966e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(58,8.14824e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(59,5.811541e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(60,3.874978e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(61,0.0004028113);
   pfIsoPhotons03_dataZ_EE__28->SetMinimum(4.033841e-07);
   pfIsoPhotons03_dataZ_EE__28->SetMaximum(1.830173);
   pfIsoPhotons03_dataZ_EE__28->SetEntries(150258);
   pfIsoPhotons03_dataZ_EE__28->SetDirectory(0);
   pfIsoPhotons03_dataZ_EE__28->SetStats(0);
   pfIsoPhotons03_dataZ_EE__28->SetMarkerStyle(20);
   pfIsoPhotons03_dataZ_EE__28->SetMarkerSize(0.7);
   pfIsoPhotons03_dataZ_EE__28->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_dataZ_EE__28->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_dataZ_EE__28->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_dataZ_EE__28->Draw("PE");
   
   TH1F *pfIsoPhotons03_mc_Signal_EE__29 = new TH1F("pfIsoPhotons03_mc_Signal_EE__29","pfIsoPhotons03_mc_Signal_EE",60,0,6);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(1,0.4172351);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(2,0.03720294);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(3,0.05545779);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(4,0.0431713);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(5,0.03571638);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(6,0.03142201);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(7,0.02825364);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(8,0.02521308);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(9,0.02394737);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(10,0.02231482);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(11,0.01931559);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(12,0.01880362);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(13,0.01913556);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(14,0.01642798);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(15,0.01515212);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(16,0.01350582);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(17,0.01262956);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(18,0.01101947);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(19,0.01050918);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(20,0.009186152);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(21,0.008717479);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(22,0.007846711);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(23,0.009071387);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(24,0.00699122);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(25,0.006769903);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(26,0.006062482);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(27,0.005307542);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(28,0.005093137);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(29,0.004716913);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(30,0.004803988);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(31,0.004247089);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(32,0.004143986);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(33,0.0037377);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(34,0.003563003);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(35,0.003847787);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(36,0.003308245);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(37,0.003607971);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(38,0.002869919);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(39,0.00334041);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(40,0.002604054);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(41,0.00248021);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(42,0.002380795);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(43,0.002299984);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(44,0.002331018);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(45,0.002458886);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(46,0.001995441);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(47,0.001745495);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(48,0.001831473);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(49,0.001729945);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(50,0.00159318);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(51,0.001562561);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(52,0.001524218);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(53,0.001368171);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(54,0.001358559);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(55,0.001249978);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(56,0.001233488);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(57,0.001258123);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(58,0.001268602);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(59,0.001119874);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(60,0.0009396077);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(61,0.02522282);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(1,0.002663257);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(2,0.001054724);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(3,0.0009632265);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(4,0.001052637);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(5,0.0009171994);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(6,0.0004000265);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(7,0.0008427348);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(8,0.001068648);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(9,0.001020364);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(10,0.000854324);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(11,0.0003101722);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(12,0.0003021178);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(13,0.001134807);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(14,0.0003368099);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(15,0.0008379955);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(16,0.000255569);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(17,0.0002489246);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(18,0.0002273709);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(19,0.0002260431);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(20,0.000202566);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(21,0.0002163264);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(22,0.0001974496);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(23,0.001188326);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(24,0.000182489);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(25,0.0001969993);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(26,0.000182759);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(27,0.0001583158);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(28,0.000158126);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(29,0.0001458894);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(30,0.0001607834);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(31,0.0001477734);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(32,0.0001590557);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(33,0.0001288646);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(34,0.0001346457);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(35,0.000157847);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(36,0.0001409438);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(37,0.0005086941);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(38,0.0001213058);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(39,0.0005809073);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(40,0.000117539);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(41,9.746217e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(42,0.0001015596);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(43,0.0001014992);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(44,0.0001123319);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(45,0.0003178229);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(46,0.0001051561);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(47,8.458245e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(48,9.572728e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(49,9.528088e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(50,9.483531e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(51,8.700887e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(52,9.798106e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(53,7.853561e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(54,7.321234e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(55,7.509207e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(56,6.468355e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(57,9.186394e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(58,9.644955e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(59,7.890048e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(60,6.959256e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(61,0.000871401);
   pfIsoPhotons03_mc_Signal_EE__29->SetEntries(640592);
   pfIsoPhotons03_mc_Signal_EE__29->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_EE__29->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__29->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__29->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_EE__29->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_EE__29->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_dataZ_EE__30 = new TH1F("pfIsoPhotons03_dataZ_EE__30","pfIsoPhotons03_dataZ_EE",60,0,6);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(1,0.3268166);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(2,0.04844785);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(3,0.07784162);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(4,0.05445427);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(5,0.05212054);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(6,0.04668415);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(7,0.03947798);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(8,0.03716716);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(9,0.033018);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(10,0.03061043);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(11,0.02748403);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(12,0.02428675);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(13,0.02071357);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(14,0.02017597);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(15,0.01688585);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(16,0.01497367);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(17,0.01312773);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(18,0.01270574);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(19,0.01049185);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(20,0.009674693);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(21,0.00849572);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(22,0.007234918);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(23,0.006370211);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(24,0.005792829);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(25,0.00596141);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(26,0.004555574);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(27,0.004321062);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(28,0.003696504);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(29,0.003426107);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(30,0.003284947);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(31,0.002747901);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(32,0.002619668);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(33,0.002652072);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(34,0.002102286);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(35,0.00201246);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(36,0.001762353);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(37,0.001651433);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(38,0.001296696);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(39,0.001153529);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(40,0.001354983);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(41,0.0009738977);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(42,0.00110828);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(43,0.0009289952);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(44,0.0009422053);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(45,0.000546023);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(46,0.0006894725);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(47,0.0006739165);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(48,0.0005134983);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(49,0.0003764484);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(50,0.0004900349);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(51,0.0003713437);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(52,0.000464141);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(53,0.0004231282);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(54,0.0003859272);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(55,0.0001517342);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(56,0.0002854071);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(57,0.0003055822);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(58,0.0002970325);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(59,0.0002662331);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(60,0.0001555346);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(61,0.004837652);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(1,0.002095599);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(2,0.0007998441);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(3,0.001004215);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(4,0.0008317554);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(5,0.0008660885);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(6,0.0007978518);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(7,0.0007645738);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(8,0.0007088599);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(9,0.0006746353);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(10,0.000651902);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(11,0.0006161864);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(12,0.0005597171);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(13,0.0005226551);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(14,0.0005413339);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(15,0.0004905662);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(16,0.0004383802);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(17,0.000410912);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(18,0.0004108734);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(19,0.0003534883);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(20,0.0003606166);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(21,0.0003458608);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(22,0.0002955679);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(23,0.0002937572);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(24,0.0002796057);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(25,0.0002877202);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(26,0.0002414897);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(27,0.0002678497);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(28,0.000239992);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(29,0.0002142286);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(30,0.0002199016);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(31,0.0001839061);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(32,0.000184661);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(33,0.0002094011);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(34,0.0001569158);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(35,0.0002285459);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(36,0.0001672478);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(37,0.0001476911);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(38,0.0001327839);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(39,0.0001117607);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(40,0.0001369242);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(41,9.959806e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(42,0.0001268782);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(43,0.0001024243);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(44,0.0001225408);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(45,6.933839e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(46,9.193707e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(47,8.582635e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(48,7.414607e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(49,5.504747e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(50,8.100115e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(51,5.939953e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(52,6.638731e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(53,6.037277e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(54,7.762622e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(55,2.952125e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(56,5.013513e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(57,5.922966e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(58,8.14824e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(59,5.811541e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(60,3.874978e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(61,0.0004028113);
   pfIsoPhotons03_dataZ_EE__30->SetMinimum(4.033841e-07);
   pfIsoPhotons03_dataZ_EE__30->SetMaximum(1.830173);
   pfIsoPhotons03_dataZ_EE__30->SetEntries(150258);
   pfIsoPhotons03_dataZ_EE__30->SetDirectory(0);
   pfIsoPhotons03_dataZ_EE__30->SetStats(0);
   pfIsoPhotons03_dataZ_EE__30->SetMarkerStyle(20);
   pfIsoPhotons03_dataZ_EE__30->SetMarkerSize(0.7);
   pfIsoPhotons03_dataZ_EE__30->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_dataZ_EE__30->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_dataZ_EE__30->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_dataZ_EE__30->Draw("PESAME");
   
   TLegend *leg = new TLegend(3.560879e-319,0,0,0,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoPhotons03_dataZ_EE","DataZ Z #rightarrow ee","PL");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_dataZ_EE",60,0,6);
   ratio->SetBinContent(1,0.7832913);
   ratio->SetBinContent(2,1.302259);
   ratio->SetBinContent(3,1.403619);
   ratio->SetBinContent(4,1.261353);
   ratio->SetBinContent(5,1.45929);
   ratio->SetBinContent(6,1.485715);
   ratio->SetBinContent(7,1.397271);
   ratio->SetBinContent(8,1.474122);
   ratio->SetBinContent(9,1.378773);
   ratio->SetBinContent(10,1.371753);
   ratio->SetBinContent(11,1.422894);
   ratio->SetBinContent(12,1.2916);
   ratio->SetBinContent(13,1.082465);
   ratio->SetBinContent(14,1.228146);
   ratio->SetBinContent(15,1.114422);
   ratio->SetBinContent(16,1.108683);
   ratio->SetBinContent(17,1.039444);
   ratio->SetBinContent(18,1.153027);
   ratio->SetBinContent(19,0.9983515);
   ratio->SetBinContent(20,1.053182);
   ratio->SetBinContent(21,0.9745616);
   ratio->SetBinContent(22,0.9220319);
   ratio->SetBinContent(23,0.7022311);
   ratio->SetBinContent(24,0.8285862);
   ratio->SetBinContent(25,0.8805754);
   ratio->SetBinContent(26,0.751437);
   ratio->SetBinContent(27,0.8141362);
   ratio->SetBinContent(28,0.7257813);
   ratio->SetBinContent(29,0.7263452);
   ratio->SetBinContent(30,0.6837958);
   ratio->SetBinContent(31,0.647008);
   ratio->SetBinContent(32,0.6321613);
   ratio->SetBinContent(33,0.7095464);
   ratio->SetBinContent(34,0.590032);
   ratio->SetBinContent(35,0.5230177);
   ratio->SetBinContent(36,0.5327153);
   ratio->SetBinContent(37,0.4577181);
   ratio->SetBinContent(38,0.4518233);
   ratio->SetBinContent(39,0.3453256);
   ratio->SetBinContent(40,0.5203362);
   ratio->SetBinContent(41,0.3926674);
   ratio->SetBinContent(42,0.4655083);
   ratio->SetBinContent(43,0.4039139);
   ratio->SetBinContent(44,0.4042034);
   ratio->SetBinContent(45,0.2220611);
   ratio->SetBinContent(46,0.3455239);
   ratio->SetBinContent(47,0.3860891);
   ratio->SetBinContent(48,0.2803744);
   ratio->SetBinContent(49,0.2176071);
   ratio->SetBinContent(50,0.3075829);
   ratio->SetBinContent(51,0.2376507);
   ratio->SetBinContent(52,0.3045109);
   ratio->SetBinContent(53,0.3092656);
   ratio->SetBinContent(54,0.284071);
   ratio->SetBinContent(55,0.1213895);
   ratio->SetBinContent(56,0.2313821);
   ratio->SetBinContent(57,0.2428873);
   ratio->SetBinContent(58,0.2341416);
   ratio->SetBinContent(59,0.2377348);
   ratio->SetBinContent(60,0.1655314);
   ratio->SetBinContent(61,0.1917967);
   ratio->SetBinError(1,0.007086938);
   ratio->SetBinError(2,0.04272347);
   ratio->SetBinError(3,0.03036815);
   ratio->SetBinError(4,0.03629165);
   ratio->SetBinError(5,0.04463595);
   ratio->SetBinError(6,0.03166195);
   ratio->SetBinError(7,0.04969184);
   ratio->SetBinError(8,0.06851435);
   ratio->SetBinError(9,0.06515302);
   ratio->SetBinError(10,0.06009619);
   ratio->SetBinError(11,0.03923964);
   ratio->SetBinError(12,0.03628627);
   ratio->SetBinError(13,0.06976311);
   ratio->SetBinError(14,0.04147105);
   ratio->SetBinError(15,0.06961982);
   ratio->SetBinError(16,0.03864842);
   ratio->SetBinError(17,0.03844861);
   ratio->SetBinError(18,0.04422974);
   ratio->SetBinError(19,0.03990625);
   ratio->SetBinError(20,0.04561172);
   ratio->SetBinError(21,0.04646421);
   ratio->SetBinError(22,0.04423985);
   ratio->SetBinError(23,0.09752364);
   ratio->SetBinError(24,0.04546744);
   ratio->SetBinError(25,0.04962697);
   ratio->SetBinError(26,0.04582414);
   ratio->SetBinError(27,0.05600479);
   ratio->SetBinError(28,0.05223125);
   ratio->SetBinError(29,0.05066949);
   ratio->SetBinError(30,0.05117706);
   ratio->SetBinError(31,0.04880398);
   ratio->SetBinError(32,0.05073886);
   ratio->SetBinError(33,0.0611321);
   ratio->SetBinError(34,0.04936313);
   ratio->SetBinError(35,0.06315311);
   ratio->SetBinError(36,0.05541558);
   ratio->SetBinError(37,0.07642214);
   ratio->SetBinError(38,0.05005396);
   ratio->SetBinError(39,0.06874421);
   ratio->SetBinError(40,0.05758809);
   ratio->SetBinError(41,0.04301959);
   ratio->SetBinError(42,0.05687181);
   ratio->SetBinError(43,0.0479675);
   ratio->SetBinError(44,0.05606234);
   ratio->SetBinError(45,0.04023707);
   ratio->SetBinError(46,0.04954112);
   ratio->SetBinError(47,0.05260927);
   ratio->SetBinError(48,0.04305511);
   ratio->SetBinError(49,0.03400266);
   ratio->SetBinError(50,0.05403866);
   ratio->SetBinError(51,0.0402517);
   ratio->SetBinError(52,0.04775156);
   ratio->SetBinError(53,0.04756372);
   ratio->SetBinError(54,0.05915383);
   ratio->SetBinError(55,0.02471765);
   ratio->SetBinError(56,0.04241745);
   ratio->SetBinError(57,0.05030747);
   ratio->SetBinError(58,0.06665128);
   ratio->SetBinError(59,0.05453069);
   ratio->SetBinError(60,0.0430242);
   ratio->SetBinError(61,0.01729021);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(12260.01);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_dataZ_EE",60,0,6);
   ratio->SetBinContent(1,0.7832913);
   ratio->SetBinContent(2,1.302259);
   ratio->SetBinContent(3,1.403619);
   ratio->SetBinContent(4,1.261353);
   ratio->SetBinContent(5,1.45929);
   ratio->SetBinContent(6,1.485715);
   ratio->SetBinContent(7,1.397271);
   ratio->SetBinContent(8,1.474122);
   ratio->SetBinContent(9,1.378773);
   ratio->SetBinContent(10,1.371753);
   ratio->SetBinContent(11,1.422894);
   ratio->SetBinContent(12,1.2916);
   ratio->SetBinContent(13,1.082465);
   ratio->SetBinContent(14,1.228146);
   ratio->SetBinContent(15,1.114422);
   ratio->SetBinContent(16,1.108683);
   ratio->SetBinContent(17,1.039444);
   ratio->SetBinContent(18,1.153027);
   ratio->SetBinContent(19,0.9983515);
   ratio->SetBinContent(20,1.053182);
   ratio->SetBinContent(21,0.9745616);
   ratio->SetBinContent(22,0.9220319);
   ratio->SetBinContent(23,0.7022311);
   ratio->SetBinContent(24,0.8285862);
   ratio->SetBinContent(25,0.8805754);
   ratio->SetBinContent(26,0.751437);
   ratio->SetBinContent(27,0.8141362);
   ratio->SetBinContent(28,0.7257813);
   ratio->SetBinContent(29,0.7263452);
   ratio->SetBinContent(30,0.6837958);
   ratio->SetBinContent(31,0.647008);
   ratio->SetBinContent(32,0.6321613);
   ratio->SetBinContent(33,0.7095464);
   ratio->SetBinContent(34,0.590032);
   ratio->SetBinContent(35,0.5230177);
   ratio->SetBinContent(36,0.5327153);
   ratio->SetBinContent(37,0.4577181);
   ratio->SetBinContent(38,0.4518233);
   ratio->SetBinContent(39,0.3453256);
   ratio->SetBinContent(40,0.5203362);
   ratio->SetBinContent(41,0.3926674);
   ratio->SetBinContent(42,0.4655083);
   ratio->SetBinContent(43,0.4039139);
   ratio->SetBinContent(44,0.4042034);
   ratio->SetBinContent(45,0.2220611);
   ratio->SetBinContent(46,0.3455239);
   ratio->SetBinContent(47,0.3860891);
   ratio->SetBinContent(48,0.2803744);
   ratio->SetBinContent(49,0.2176071);
   ratio->SetBinContent(50,0.3075829);
   ratio->SetBinContent(51,0.2376507);
   ratio->SetBinContent(52,0.3045109);
   ratio->SetBinContent(53,0.3092656);
   ratio->SetBinContent(54,0.284071);
   ratio->SetBinContent(55,0.1213895);
   ratio->SetBinContent(56,0.2313821);
   ratio->SetBinContent(57,0.2428873);
   ratio->SetBinContent(58,0.2341416);
   ratio->SetBinContent(59,0.2377348);
   ratio->SetBinContent(60,0.1655314);
   ratio->SetBinContent(61,0.1917967);
   ratio->SetBinError(1,0.007086938);
   ratio->SetBinError(2,0.04272347);
   ratio->SetBinError(3,0.03036815);
   ratio->SetBinError(4,0.03629165);
   ratio->SetBinError(5,0.04463595);
   ratio->SetBinError(6,0.03166195);
   ratio->SetBinError(7,0.04969184);
   ratio->SetBinError(8,0.06851435);
   ratio->SetBinError(9,0.06515302);
   ratio->SetBinError(10,0.06009619);
   ratio->SetBinError(11,0.03923964);
   ratio->SetBinError(12,0.03628627);
   ratio->SetBinError(13,0.06976311);
   ratio->SetBinError(14,0.04147105);
   ratio->SetBinError(15,0.06961982);
   ratio->SetBinError(16,0.03864842);
   ratio->SetBinError(17,0.03844861);
   ratio->SetBinError(18,0.04422974);
   ratio->SetBinError(19,0.03990625);
   ratio->SetBinError(20,0.04561172);
   ratio->SetBinError(21,0.04646421);
   ratio->SetBinError(22,0.04423985);
   ratio->SetBinError(23,0.09752364);
   ratio->SetBinError(24,0.04546744);
   ratio->SetBinError(25,0.04962697);
   ratio->SetBinError(26,0.04582414);
   ratio->SetBinError(27,0.05600479);
   ratio->SetBinError(28,0.05223125);
   ratio->SetBinError(29,0.05066949);
   ratio->SetBinError(30,0.05117706);
   ratio->SetBinError(31,0.04880398);
   ratio->SetBinError(32,0.05073886);
   ratio->SetBinError(33,0.0611321);
   ratio->SetBinError(34,0.04936313);
   ratio->SetBinError(35,0.06315311);
   ratio->SetBinError(36,0.05541558);
   ratio->SetBinError(37,0.07642214);
   ratio->SetBinError(38,0.05005396);
   ratio->SetBinError(39,0.06874421);
   ratio->SetBinError(40,0.05758809);
   ratio->SetBinError(41,0.04301959);
   ratio->SetBinError(42,0.05687181);
   ratio->SetBinError(43,0.0479675);
   ratio->SetBinError(44,0.05606234);
   ratio->SetBinError(45,0.04023707);
   ratio->SetBinError(46,0.04954112);
   ratio->SetBinError(47,0.05260927);
   ratio->SetBinError(48,0.04305511);
   ratio->SetBinError(49,0.03400266);
   ratio->SetBinError(50,0.05403866);
   ratio->SetBinError(51,0.0402517);
   ratio->SetBinError(52,0.04775156);
   ratio->SetBinError(53,0.04756372);
   ratio->SetBinError(54,0.05915383);
   ratio->SetBinError(55,0.02471765);
   ratio->SetBinError(56,0.04241745);
   ratio->SetBinError(57,0.05030747);
   ratio->SetBinError(58,0.06665128);
   ratio->SetBinError(59,0.05453069);
   ratio->SetBinError(60,0.0430242);
   ratio->SetBinError(61,0.01729021);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(12260.01);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
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
