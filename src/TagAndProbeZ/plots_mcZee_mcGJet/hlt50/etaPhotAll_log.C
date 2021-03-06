{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Thu Sep 18 00:09:10 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,-0.003913957,3.525,0.03522561);
   etaPhot->SetFillColor(0);
   etaPhot->SetBorderMode(0);
   etaPhot->SetBorderSize(2);
   etaPhot->SetTickx(1);
   etaPhot->SetLeftMargin(0.13);
   etaPhot->SetRightMargin(0.07);
   etaPhot->SetFrameFillStyle(0);
   etaPhot->SetFrameBorderMode(0);
  
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
   
   TH1F *etaPhot_mc_Z_All__28 = new TH1F("etaPhot_mc_Z_All__28","etaPhot_mc_Z_All",60,-3,3);
   etaPhot_mc_Z_All__28->SetBinContent(6,0.009091073);
   etaPhot_mc_Z_All__28->SetBinContent(7,0.01047846);
   etaPhot_mc_Z_All__28->SetBinContent(8,0.01230732);
   etaPhot_mc_Z_All__28->SetBinContent(9,0.01238147);
   etaPhot_mc_Z_All__28->SetBinContent(10,0.01502843);
   etaPhot_mc_Z_All__28->SetBinContent(11,0.01579133);
   etaPhot_mc_Z_All__28->SetBinContent(12,0.01644444);
   etaPhot_mc_Z_All__28->SetBinContent(13,0.01819135);
   etaPhot_mc_Z_All__28->SetBinContent(14,0.01918247);
   etaPhot_mc_Z_All__28->SetBinContent(15,0.006623125);
   etaPhot_mc_Z_All__28->SetBinContent(16,0.009524464);
   etaPhot_mc_Z_All__28->SetBinContent(17,0.02092028);
   etaPhot_mc_Z_All__28->SetBinContent(18,0.02174109);
   etaPhot_mc_Z_All__28->SetBinContent(19,0.02151987);
   etaPhot_mc_Z_All__28->SetBinContent(20,0.02416952);
   etaPhot_mc_Z_All__28->SetBinContent(21,0.02449812);
   etaPhot_mc_Z_All__28->SetBinContent(22,0.02508325);
   etaPhot_mc_Z_All__28->SetBinContent(23,0.02393258);
   etaPhot_mc_Z_All__28->SetBinContent(24,0.02632045);
   etaPhot_mc_Z_All__28->SetBinContent(25,0.02629432);
   etaPhot_mc_Z_All__28->SetBinContent(26,0.02713561);
   etaPhot_mc_Z_All__28->SetBinContent(27,0.02736552);
   etaPhot_mc_Z_All__28->SetBinContent(28,0.02633716);
   etaPhot_mc_Z_All__28->SetBinContent(29,0.02776846);
   etaPhot_mc_Z_All__28->SetBinContent(30,0.02567645);
   etaPhot_mc_Z_All__28->SetBinContent(31,0.02786207);
   etaPhot_mc_Z_All__28->SetBinContent(32,0.02882723);
   etaPhot_mc_Z_All__28->SetBinContent(33,0.02949983);
   etaPhot_mc_Z_All__28->SetBinContent(34,0.02742932);
   etaPhot_mc_Z_All__28->SetBinContent(35,0.02589168);
   etaPhot_mc_Z_All__28->SetBinContent(36,0.02771434);
   etaPhot_mc_Z_All__28->SetBinContent(37,0.02715533);
   etaPhot_mc_Z_All__28->SetBinContent(38,0.02574988);
   etaPhot_mc_Z_All__28->SetBinContent(39,0.0266524);
   etaPhot_mc_Z_All__28->SetBinContent(40,0.02337781);
   etaPhot_mc_Z_All__28->SetBinContent(41,0.0239417);
   etaPhot_mc_Z_All__28->SetBinContent(42,0.02066112);
   etaPhot_mc_Z_All__28->SetBinContent(43,0.0222641);
   etaPhot_mc_Z_All__28->SetBinContent(44,0.02109818);
   etaPhot_mc_Z_All__28->SetBinContent(45,0.008657243);
   etaPhot_mc_Z_All__28->SetBinContent(46,0.006394057);
   etaPhot_mc_Z_All__28->SetBinContent(47,0.0177628);
   etaPhot_mc_Z_All__28->SetBinContent(48,0.01765002);
   etaPhot_mc_Z_All__28->SetBinContent(49,0.01686976);
   etaPhot_mc_Z_All__28->SetBinContent(50,0.01699534);
   etaPhot_mc_Z_All__28->SetBinContent(51,0.01563001);
   etaPhot_mc_Z_All__28->SetBinContent(52,0.01407372);
   etaPhot_mc_Z_All__28->SetBinContent(53,0.01340152);
   etaPhot_mc_Z_All__28->SetBinContent(54,0.01137748);
   etaPhot_mc_Z_All__28->SetBinContent(55,0.009256426);
   etaPhot_mc_Z_All__28->SetBinError(6,0.0003797844);
   etaPhot_mc_Z_All__28->SetBinError(7,0.000411333);
   etaPhot_mc_Z_All__28->SetBinError(8,0.000444976);
   etaPhot_mc_Z_All__28->SetBinError(9,0.0004461435);
   etaPhot_mc_Z_All__28->SetBinError(10,0.0004902167);
   etaPhot_mc_Z_All__28->SetBinError(11,0.000504123);
   etaPhot_mc_Z_All__28->SetBinError(12,0.0005143381);
   etaPhot_mc_Z_All__28->SetBinError(13,0.0005435314);
   etaPhot_mc_Z_All__28->SetBinError(14,0.0005560966);
   etaPhot_mc_Z_All__28->SetBinError(15,0.0003259216);
   etaPhot_mc_Z_All__28->SetBinError(16,0.0003930899);
   etaPhot_mc_Z_All__28->SetBinError(17,0.0005810683);
   etaPhot_mc_Z_All__28->SetBinError(18,0.0005928783);
   etaPhot_mc_Z_All__28->SetBinError(19,0.0005917329);
   etaPhot_mc_Z_All__28->SetBinError(20,0.0006256104);
   etaPhot_mc_Z_All__28->SetBinError(21,0.0006306349);
   etaPhot_mc_Z_All__28->SetBinError(22,0.000636931);
   etaPhot_mc_Z_All__28->SetBinError(23,0.000623218);
   etaPhot_mc_Z_All__28->SetBinError(24,0.0006537573);
   etaPhot_mc_Z_All__28->SetBinError(25,0.0006522915);
   etaPhot_mc_Z_All__28->SetBinError(26,0.0006633017);
   etaPhot_mc_Z_All__28->SetBinError(27,0.0006659489);
   etaPhot_mc_Z_All__28->SetBinError(28,0.0006541971);
   etaPhot_mc_Z_All__28->SetBinError(29,0.0006696472);
   etaPhot_mc_Z_All__28->SetBinError(30,0.0006453956);
   etaPhot_mc_Z_All__28->SetBinError(31,0.0006726888);
   etaPhot_mc_Z_All__28->SetBinError(32,0.0006826341);
   etaPhot_mc_Z_All__28->SetBinError(33,0.0006935475);
   etaPhot_mc_Z_All__28->SetBinError(34,0.0006661956);
   etaPhot_mc_Z_All__28->SetBinError(35,0.0006468488);
   etaPhot_mc_Z_All__28->SetBinError(36,0.0006720925);
   etaPhot_mc_Z_All__28->SetBinError(37,0.0006623225);
   etaPhot_mc_Z_All__28->SetBinError(38,0.0006450935);
   etaPhot_mc_Z_All__28->SetBinError(39,0.0006560923);
   etaPhot_mc_Z_All__28->SetBinError(40,0.0006150729);
   etaPhot_mc_Z_All__28->SetBinError(41,0.0006203107);
   etaPhot_mc_Z_All__28->SetBinError(42,0.0005782204);
   etaPhot_mc_Z_All__28->SetBinError(43,0.000597683);
   etaPhot_mc_Z_All__28->SetBinError(44,0.0005836739);
   etaPhot_mc_Z_All__28->SetBinError(45,0.0003725444);
   etaPhot_mc_Z_All__28->SetBinError(46,0.0003226686);
   etaPhot_mc_Z_All__28->SetBinError(47,0.0005347143);
   etaPhot_mc_Z_All__28->SetBinError(48,0.0005313627);
   etaPhot_mc_Z_All__28->SetBinError(49,0.0005211595);
   etaPhot_mc_Z_All__28->SetBinError(50,0.0005234657);
   etaPhot_mc_Z_All__28->SetBinError(51,0.0005022391);
   etaPhot_mc_Z_All__28->SetBinError(52,0.0004750973);
   etaPhot_mc_Z_All__28->SetBinError(53,0.0004634382);
   etaPhot_mc_Z_All__28->SetBinError(54,0.0004259188);
   etaPhot_mc_Z_All__28->SetBinError(55,0.0003841144);
   etaPhot_mc_Z_All__28->SetMinimum(1.44752e-06);
   etaPhot_mc_Z_All__28->SetMaximum(0.1651991);
   etaPhot_mc_Z_All__28->SetEntries(64314);
   etaPhot_mc_Z_All__28->SetDirectory(0);
   etaPhot_mc_Z_All__28->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_All__28->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_All__28->SetMarkerColor(ci);
   etaPhot_mc_Z_All__28->SetMarkerStyle(20);
   etaPhot_mc_Z_All__28->SetMarkerSize(0.7);
   etaPhot_mc_Z_All__28->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_mc_Z_All__28->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_mc_Z_All__28->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_mc_Z_All__28->Draw("PE");
   
   TH1F *etaPhot_mc_Signal_All__29 = new TH1F("etaPhot_mc_Signal_All__29","etaPhot_mc_Signal_All",60,-3,3);
   etaPhot_mc_Signal_All__29->SetBinContent(6,0.01657092);
   etaPhot_mc_Signal_All__29->SetBinContent(7,0.02069305);
   etaPhot_mc_Signal_All__29->SetBinContent(8,0.02234926);
   etaPhot_mc_Signal_All__29->SetBinContent(9,0.02113119);
   etaPhot_mc_Signal_All__29->SetBinContent(10,0.02313605);
   etaPhot_mc_Signal_All__29->SetBinContent(11,0.02256249);
   etaPhot_mc_Signal_All__29->SetBinContent(12,0.02233056);
   etaPhot_mc_Signal_All__29->SetBinContent(13,0.02237714);
   etaPhot_mc_Signal_All__29->SetBinContent(14,0.02099894);
   etaPhot_mc_Signal_All__29->SetBinContent(15,0.00696915);
   etaPhot_mc_Signal_All__29->SetBinContent(16,0.009553213);
   etaPhot_mc_Signal_All__29->SetBinContent(17,0.02094356);
   etaPhot_mc_Signal_All__29->SetBinContent(18,0.02048036);
   etaPhot_mc_Signal_All__29->SetBinContent(19,0.02049517);
   etaPhot_mc_Signal_All__29->SetBinContent(20,0.02180047);
   etaPhot_mc_Signal_All__29->SetBinContent(21,0.02086446);
   etaPhot_mc_Signal_All__29->SetBinContent(22,0.02279975);
   etaPhot_mc_Signal_All__29->SetBinContent(23,0.01947331);
   etaPhot_mc_Signal_All__29->SetBinContent(24,0.02125572);
   etaPhot_mc_Signal_All__29->SetBinContent(25,0.0217326);
   etaPhot_mc_Signal_All__29->SetBinContent(26,0.02050081);
   etaPhot_mc_Signal_All__29->SetBinContent(27,0.0209087);
   etaPhot_mc_Signal_All__29->SetBinContent(28,0.02085258);
   etaPhot_mc_Signal_All__29->SetBinContent(29,0.0207707);
   etaPhot_mc_Signal_All__29->SetBinContent(30,0.01937713);
   etaPhot_mc_Signal_All__29->SetBinContent(31,0.01932644);
   etaPhot_mc_Signal_All__29->SetBinContent(32,0.02121979);
   etaPhot_mc_Signal_All__29->SetBinContent(33,0.02182952);
   etaPhot_mc_Signal_All__29->SetBinContent(34,0.02074877);
   etaPhot_mc_Signal_All__29->SetBinContent(35,0.02070788);
   etaPhot_mc_Signal_All__29->SetBinContent(36,0.02169316);
   etaPhot_mc_Signal_All__29->SetBinContent(37,0.02124545);
   etaPhot_mc_Signal_All__29->SetBinContent(38,0.01984216);
   etaPhot_mc_Signal_All__29->SetBinContent(39,0.02131649);
   etaPhot_mc_Signal_All__29->SetBinContent(40,0.02107277);
   etaPhot_mc_Signal_All__29->SetBinContent(41,0.02135697);
   etaPhot_mc_Signal_All__29->SetBinContent(42,0.01975224);
   etaPhot_mc_Signal_All__29->SetBinContent(43,0.02028544);
   etaPhot_mc_Signal_All__29->SetBinContent(44,0.02166231);
   etaPhot_mc_Signal_All__29->SetBinContent(45,0.008588227);
   etaPhot_mc_Signal_All__29->SetBinContent(46,0.006997412);
   etaPhot_mc_Signal_All__29->SetBinContent(47,0.02034213);
   etaPhot_mc_Signal_All__29->SetBinContent(48,0.02048781);
   etaPhot_mc_Signal_All__29->SetBinContent(49,0.02187429);
   etaPhot_mc_Signal_All__29->SetBinContent(50,0.02109457);
   etaPhot_mc_Signal_All__29->SetBinContent(51,0.02353733);
   etaPhot_mc_Signal_All__29->SetBinContent(52,0.02319925);
   etaPhot_mc_Signal_All__29->SetBinContent(53,0.02293504);
   etaPhot_mc_Signal_All__29->SetBinContent(54,0.02120225);
   etaPhot_mc_Signal_All__29->SetBinContent(55,0.01675502);
   etaPhot_mc_Signal_All__29->SetBinError(6,0.0002867752);
   etaPhot_mc_Signal_All__29->SetBinError(7,0.000610488);
   etaPhot_mc_Signal_All__29->SetBinError(8,0.0007038163);
   etaPhot_mc_Signal_All__29->SetBinError(9,0.000577174);
   etaPhot_mc_Signal_All__29->SetBinError(10,0.0007450155);
   etaPhot_mc_Signal_All__29->SetBinError(11,0.0006731848);
   etaPhot_mc_Signal_All__29->SetBinError(12,0.0006208497);
   etaPhot_mc_Signal_All__29->SetBinError(13,0.000650128);
   etaPhot_mc_Signal_All__29->SetBinError(14,0.0005851585);
   etaPhot_mc_Signal_All__29->SetBinError(15,0.0003255143);
   etaPhot_mc_Signal_All__29->SetBinError(16,0.0004652846);
   etaPhot_mc_Signal_All__29->SetBinError(17,0.0005748594);
   etaPhot_mc_Signal_All__29->SetBinError(18,0.0005344236);
   etaPhot_mc_Signal_All__29->SetBinError(19,0.0006550602);
   etaPhot_mc_Signal_All__29->SetBinError(20,0.0005774651);
   etaPhot_mc_Signal_All__29->SetBinError(21,0.0005618119);
   etaPhot_mc_Signal_All__29->SetBinError(22,0.000715535);
   etaPhot_mc_Signal_All__29->SetBinError(23,0.0005189663);
   etaPhot_mc_Signal_All__29->SetBinError(24,0.0005595353);
   etaPhot_mc_Signal_All__29->SetBinError(25,0.0006058029);
   etaPhot_mc_Signal_All__29->SetBinError(26,0.000562339);
   etaPhot_mc_Signal_All__29->SetBinError(27,0.0005492473);
   etaPhot_mc_Signal_All__29->SetBinError(28,0.000542777);
   etaPhot_mc_Signal_All__29->SetBinError(29,0.0005013477);
   etaPhot_mc_Signal_All__29->SetBinError(30,0.0004140429);
   etaPhot_mc_Signal_All__29->SetBinError(31,0.000405009);
   etaPhot_mc_Signal_All__29->SetBinError(32,0.0005802289);
   etaPhot_mc_Signal_All__29->SetBinError(33,0.0005945315);
   etaPhot_mc_Signal_All__29->SetBinError(34,0.0005149442);
   etaPhot_mc_Signal_All__29->SetBinError(35,0.000542624);
   etaPhot_mc_Signal_All__29->SetBinError(36,0.0005557746);
   etaPhot_mc_Signal_All__29->SetBinError(37,0.0005722864);
   etaPhot_mc_Signal_All__29->SetBinError(38,0.0005200374);
   etaPhot_mc_Signal_All__29->SetBinError(39,0.0005198758);
   etaPhot_mc_Signal_All__29->SetBinError(40,0.0005911068);
   etaPhot_mc_Signal_All__29->SetBinError(41,0.0005463776);
   etaPhot_mc_Signal_All__29->SetBinError(42,0.0005505434);
   etaPhot_mc_Signal_All__29->SetBinError(43,0.0004276522);
   etaPhot_mc_Signal_All__29->SetBinError(44,0.0006328422);
   etaPhot_mc_Signal_All__29->SetBinError(45,0.0003118792);
   etaPhot_mc_Signal_All__29->SetBinError(46,0.0003346731);
   etaPhot_mc_Signal_All__29->SetBinError(47,0.0004669632);
   etaPhot_mc_Signal_All__29->SetBinError(48,0.0005241538);
   etaPhot_mc_Signal_All__29->SetBinError(49,0.0006477302);
   etaPhot_mc_Signal_All__29->SetBinError(50,0.0004791574);
   etaPhot_mc_Signal_All__29->SetBinError(51,0.0007657225);
   etaPhot_mc_Signal_All__29->SetBinError(52,0.0007082491);
   etaPhot_mc_Signal_All__29->SetBinError(53,0.0007522903);
   etaPhot_mc_Signal_All__29->SetBinError(54,0.0006088888);
   etaPhot_mc_Signal_All__29->SetBinError(55,0.0002563256);
   etaPhot_mc_Signal_All__29->SetEntries(1081887);
   etaPhot_mc_Signal_All__29->SetDirectory(0);
   etaPhot_mc_Signal_All__29->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_All__29->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_All__29->SetLineColor(ci);
   etaPhot_mc_Signal_All__29->SetLineWidth(2);
   etaPhot_mc_Signal_All__29->Draw("HSAME");
   
   TH1F *etaPhot_mc_Z_All__30 = new TH1F("etaPhot_mc_Z_All__30","etaPhot_mc_Z_All",60,-3,3);
   etaPhot_mc_Z_All__30->SetBinContent(6,0.009091073);
   etaPhot_mc_Z_All__30->SetBinContent(7,0.01047846);
   etaPhot_mc_Z_All__30->SetBinContent(8,0.01230732);
   etaPhot_mc_Z_All__30->SetBinContent(9,0.01238147);
   etaPhot_mc_Z_All__30->SetBinContent(10,0.01502843);
   etaPhot_mc_Z_All__30->SetBinContent(11,0.01579133);
   etaPhot_mc_Z_All__30->SetBinContent(12,0.01644444);
   etaPhot_mc_Z_All__30->SetBinContent(13,0.01819135);
   etaPhot_mc_Z_All__30->SetBinContent(14,0.01918247);
   etaPhot_mc_Z_All__30->SetBinContent(15,0.006623125);
   etaPhot_mc_Z_All__30->SetBinContent(16,0.009524464);
   etaPhot_mc_Z_All__30->SetBinContent(17,0.02092028);
   etaPhot_mc_Z_All__30->SetBinContent(18,0.02174109);
   etaPhot_mc_Z_All__30->SetBinContent(19,0.02151987);
   etaPhot_mc_Z_All__30->SetBinContent(20,0.02416952);
   etaPhot_mc_Z_All__30->SetBinContent(21,0.02449812);
   etaPhot_mc_Z_All__30->SetBinContent(22,0.02508325);
   etaPhot_mc_Z_All__30->SetBinContent(23,0.02393258);
   etaPhot_mc_Z_All__30->SetBinContent(24,0.02632045);
   etaPhot_mc_Z_All__30->SetBinContent(25,0.02629432);
   etaPhot_mc_Z_All__30->SetBinContent(26,0.02713561);
   etaPhot_mc_Z_All__30->SetBinContent(27,0.02736552);
   etaPhot_mc_Z_All__30->SetBinContent(28,0.02633716);
   etaPhot_mc_Z_All__30->SetBinContent(29,0.02776846);
   etaPhot_mc_Z_All__30->SetBinContent(30,0.02567645);
   etaPhot_mc_Z_All__30->SetBinContent(31,0.02786207);
   etaPhot_mc_Z_All__30->SetBinContent(32,0.02882723);
   etaPhot_mc_Z_All__30->SetBinContent(33,0.02949983);
   etaPhot_mc_Z_All__30->SetBinContent(34,0.02742932);
   etaPhot_mc_Z_All__30->SetBinContent(35,0.02589168);
   etaPhot_mc_Z_All__30->SetBinContent(36,0.02771434);
   etaPhot_mc_Z_All__30->SetBinContent(37,0.02715533);
   etaPhot_mc_Z_All__30->SetBinContent(38,0.02574988);
   etaPhot_mc_Z_All__30->SetBinContent(39,0.0266524);
   etaPhot_mc_Z_All__30->SetBinContent(40,0.02337781);
   etaPhot_mc_Z_All__30->SetBinContent(41,0.0239417);
   etaPhot_mc_Z_All__30->SetBinContent(42,0.02066112);
   etaPhot_mc_Z_All__30->SetBinContent(43,0.0222641);
   etaPhot_mc_Z_All__30->SetBinContent(44,0.02109818);
   etaPhot_mc_Z_All__30->SetBinContent(45,0.008657243);
   etaPhot_mc_Z_All__30->SetBinContent(46,0.006394057);
   etaPhot_mc_Z_All__30->SetBinContent(47,0.0177628);
   etaPhot_mc_Z_All__30->SetBinContent(48,0.01765002);
   etaPhot_mc_Z_All__30->SetBinContent(49,0.01686976);
   etaPhot_mc_Z_All__30->SetBinContent(50,0.01699534);
   etaPhot_mc_Z_All__30->SetBinContent(51,0.01563001);
   etaPhot_mc_Z_All__30->SetBinContent(52,0.01407372);
   etaPhot_mc_Z_All__30->SetBinContent(53,0.01340152);
   etaPhot_mc_Z_All__30->SetBinContent(54,0.01137748);
   etaPhot_mc_Z_All__30->SetBinContent(55,0.009256426);
   etaPhot_mc_Z_All__30->SetBinError(6,0.0003797844);
   etaPhot_mc_Z_All__30->SetBinError(7,0.000411333);
   etaPhot_mc_Z_All__30->SetBinError(8,0.000444976);
   etaPhot_mc_Z_All__30->SetBinError(9,0.0004461435);
   etaPhot_mc_Z_All__30->SetBinError(10,0.0004902167);
   etaPhot_mc_Z_All__30->SetBinError(11,0.000504123);
   etaPhot_mc_Z_All__30->SetBinError(12,0.0005143381);
   etaPhot_mc_Z_All__30->SetBinError(13,0.0005435314);
   etaPhot_mc_Z_All__30->SetBinError(14,0.0005560966);
   etaPhot_mc_Z_All__30->SetBinError(15,0.0003259216);
   etaPhot_mc_Z_All__30->SetBinError(16,0.0003930899);
   etaPhot_mc_Z_All__30->SetBinError(17,0.0005810683);
   etaPhot_mc_Z_All__30->SetBinError(18,0.0005928783);
   etaPhot_mc_Z_All__30->SetBinError(19,0.0005917329);
   etaPhot_mc_Z_All__30->SetBinError(20,0.0006256104);
   etaPhot_mc_Z_All__30->SetBinError(21,0.0006306349);
   etaPhot_mc_Z_All__30->SetBinError(22,0.000636931);
   etaPhot_mc_Z_All__30->SetBinError(23,0.000623218);
   etaPhot_mc_Z_All__30->SetBinError(24,0.0006537573);
   etaPhot_mc_Z_All__30->SetBinError(25,0.0006522915);
   etaPhot_mc_Z_All__30->SetBinError(26,0.0006633017);
   etaPhot_mc_Z_All__30->SetBinError(27,0.0006659489);
   etaPhot_mc_Z_All__30->SetBinError(28,0.0006541971);
   etaPhot_mc_Z_All__30->SetBinError(29,0.0006696472);
   etaPhot_mc_Z_All__30->SetBinError(30,0.0006453956);
   etaPhot_mc_Z_All__30->SetBinError(31,0.0006726888);
   etaPhot_mc_Z_All__30->SetBinError(32,0.0006826341);
   etaPhot_mc_Z_All__30->SetBinError(33,0.0006935475);
   etaPhot_mc_Z_All__30->SetBinError(34,0.0006661956);
   etaPhot_mc_Z_All__30->SetBinError(35,0.0006468488);
   etaPhot_mc_Z_All__30->SetBinError(36,0.0006720925);
   etaPhot_mc_Z_All__30->SetBinError(37,0.0006623225);
   etaPhot_mc_Z_All__30->SetBinError(38,0.0006450935);
   etaPhot_mc_Z_All__30->SetBinError(39,0.0006560923);
   etaPhot_mc_Z_All__30->SetBinError(40,0.0006150729);
   etaPhot_mc_Z_All__30->SetBinError(41,0.0006203107);
   etaPhot_mc_Z_All__30->SetBinError(42,0.0005782204);
   etaPhot_mc_Z_All__30->SetBinError(43,0.000597683);
   etaPhot_mc_Z_All__30->SetBinError(44,0.0005836739);
   etaPhot_mc_Z_All__30->SetBinError(45,0.0003725444);
   etaPhot_mc_Z_All__30->SetBinError(46,0.0003226686);
   etaPhot_mc_Z_All__30->SetBinError(47,0.0005347143);
   etaPhot_mc_Z_All__30->SetBinError(48,0.0005313627);
   etaPhot_mc_Z_All__30->SetBinError(49,0.0005211595);
   etaPhot_mc_Z_All__30->SetBinError(50,0.0005234657);
   etaPhot_mc_Z_All__30->SetBinError(51,0.0005022391);
   etaPhot_mc_Z_All__30->SetBinError(52,0.0004750973);
   etaPhot_mc_Z_All__30->SetBinError(53,0.0004634382);
   etaPhot_mc_Z_All__30->SetBinError(54,0.0004259188);
   etaPhot_mc_Z_All__30->SetBinError(55,0.0003841144);
   etaPhot_mc_Z_All__30->SetMinimum(1.44752e-06);
   etaPhot_mc_Z_All__30->SetMaximum(0.1651991);
   etaPhot_mc_Z_All__30->SetEntries(64314);
   etaPhot_mc_Z_All__30->SetDirectory(0);
   etaPhot_mc_Z_All__30->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_All__30->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_All__30->SetMarkerColor(ci);
   etaPhot_mc_Z_All__30->SetMarkerStyle(20);
   etaPhot_mc_Z_All__30->SetMarkerSize(0.7);
   etaPhot_mc_Z_All__30->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_mc_Z_All__30->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_mc_Z_All__30->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_mc_Z_All__30->Draw("PESAME");
   
   TLegend *leg = new TLegend(3.560879e-319,0,0,0,NULL,"brNDC");
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
   entry=leg->AddEntry("etaPhot_mc_Z_All","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("etaPhot_mc_Signal_All","signal #gamma + jet","F");
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
   etaPhot->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","etaPhot_mc_Z_All",60,-3,3);
   ratio->SetBinContent(6,0.548616);
   ratio->SetBinContent(7,0.506376);
   ratio->SetBinContent(8,0.5506813);
   ratio->SetBinContent(9,0.5859336);
   ratio->SetBinContent(10,0.6495677);
   ratio->SetBinContent(11,0.6998931);
   ratio->SetBinContent(12,0.7364095);
   ratio->SetBinContent(13,0.8129436);
   ratio->SetBinContent(14,0.9134973);
   ratio->SetBinContent(15,0.950349);
   ratio->SetBinContent(16,0.9969906);
   ratio->SetBinContent(17,0.9988887);
   ratio->SetBinContent(18,1.061558);
   ratio->SetBinContent(19,1.049997);
   ratio->SetBinContent(20,1.10867);
   ratio->SetBinContent(21,1.174155);
   ratio->SetBinContent(22,1.100154);
   ratio->SetBinContent(23,1.228994);
   ratio->SetBinContent(24,1.238276);
   ratio->SetBinContent(25,1.209902);
   ratio->SetBinContent(26,1.323636);
   ratio->SetBinContent(27,1.30881);
   ratio->SetBinContent(28,1.263017);
   ratio->SetBinContent(29,1.336905);
   ratio->SetBinContent(30,1.32509);
   ratio->SetBinContent(31,1.441656);
   ratio->SetBinContent(32,1.358506);
   ratio->SetBinContent(33,1.351373);
   ratio->SetBinContent(34,1.321973);
   ratio->SetBinContent(35,1.25033);
   ratio->SetBinContent(36,1.277561);
   ratio->SetBinContent(37,1.278172);
   ratio->SetBinContent(38,1.297736);
   ratio->SetBinContent(39,1.250318);
   ratio->SetBinContent(40,1.109385);
   ratio->SetBinContent(41,1.121025);
   ratio->SetBinContent(42,1.046014);
   ratio->SetBinContent(43,1.097541);
   ratio->SetBinContent(44,0.9739578);
   ratio->SetBinContent(45,1.008036);
   ratio->SetBinContent(46,0.9137746);
   ratio->SetBinContent(47,0.8732023);
   ratio->SetBinContent(48,0.8614891);
   ratio->SetBinContent(49,0.7712144);
   ratio->SetBinContent(50,0.805674);
   ratio->SetBinContent(51,0.6640521);
   ratio->SetBinContent(52,0.6066456);
   ratio->SetBinContent(53,0.5843252);
   ratio->SetBinContent(54,0.5366166);
   ratio->SetBinContent(55,0.5524568);
   ratio->SetBinError(6,0.02480746);
   ratio->SetBinError(7,0.02486576);
   ratio->SetBinError(8,0.02640366);
   ratio->SetBinError(9,0.02649323);
   ratio->SetBinError(10,0.0297737);
   ratio->SetBinError(11,0.03058267);
   ratio->SetBinError(12,0.03081732);
   ratio->SetBinError(13,0.03387955);
   ratio->SetBinError(14,0.0367327);
   ratio->SetBinError(15,0.06447834);
   ratio->SetBinError(16,0.06364733);
   ratio->SetBinError(17,0.03900612);
   ratio->SetBinError(18,0.04006689);
   ratio->SetBinError(19,0.04427002);
   ratio->SetBinError(20,0.04106038);
   ratio->SetBinError(21,0.04373959);
   ratio->SetBinError(22,0.04441286);
   ratio->SetBinError(23,0.04579286);
   ratio->SetBinError(24,0.0448163);
   ratio->SetBinError(25,0.04514793);
   ratio->SetBinError(26,0.04863201);
   ratio->SetBinError(27,0.04686675);
   ratio->SetBinError(28,0.04544251);
   ratio->SetBinError(29,0.04561491);
   ratio->SetBinError(30,0.04371548);
   ratio->SetBinError(31,0.04608957);
   ratio->SetBinError(32,0.04914025);
   ratio->SetBinError(33,0.04862104);
   ratio->SetBinError(34,0.04590558);
   ratio->SetBinError(35,0.04526782);
   ratio->SetBinError(36,0.04506863);
   ratio->SetBinError(37,0.04644664);
   ratio->SetBinError(38,0.047051);
   ratio->SetBinError(39,0.04332627);
   ratio->SetBinError(40,0.04266542);
   ratio->SetBinError(41,0.04081798);
   ratio->SetBinError(42,0.04131538);
   ratio->SetBinError(43,0.03746299);
   ratio->SetBinError(44,0.0391864);
   ratio->SetBinError(45,0.05676033);
   ratio->SetBinError(46,0.06353282);
   ratio->SetBinError(47,0.03305676);
   ratio->SetBinError(48,0.03403553);
   ratio->SetBinError(49,0.03300243);
   ratio->SetBinError(50,0.03083356);
   ratio->SetBinError(51,0.03036452);
   ratio->SetBinError(52,0.02761139);
   ratio->SetBinError(53,0.0278506);
   ratio->SetBinError(54,0.02531858);
   ratio->SetBinError(55,0.02443363);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(29023.39);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma #eta");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(-3,1,3,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","etaPhot_mc_Z_All",60,-3,3);
   ratio->SetBinContent(6,0.548616);
   ratio->SetBinContent(7,0.506376);
   ratio->SetBinContent(8,0.5506813);
   ratio->SetBinContent(9,0.5859336);
   ratio->SetBinContent(10,0.6495677);
   ratio->SetBinContent(11,0.6998931);
   ratio->SetBinContent(12,0.7364095);
   ratio->SetBinContent(13,0.8129436);
   ratio->SetBinContent(14,0.9134973);
   ratio->SetBinContent(15,0.950349);
   ratio->SetBinContent(16,0.9969906);
   ratio->SetBinContent(17,0.9988887);
   ratio->SetBinContent(18,1.061558);
   ratio->SetBinContent(19,1.049997);
   ratio->SetBinContent(20,1.10867);
   ratio->SetBinContent(21,1.174155);
   ratio->SetBinContent(22,1.100154);
   ratio->SetBinContent(23,1.228994);
   ratio->SetBinContent(24,1.238276);
   ratio->SetBinContent(25,1.209902);
   ratio->SetBinContent(26,1.323636);
   ratio->SetBinContent(27,1.30881);
   ratio->SetBinContent(28,1.263017);
   ratio->SetBinContent(29,1.336905);
   ratio->SetBinContent(30,1.32509);
   ratio->SetBinContent(31,1.441656);
   ratio->SetBinContent(32,1.358506);
   ratio->SetBinContent(33,1.351373);
   ratio->SetBinContent(34,1.321973);
   ratio->SetBinContent(35,1.25033);
   ratio->SetBinContent(36,1.277561);
   ratio->SetBinContent(37,1.278172);
   ratio->SetBinContent(38,1.297736);
   ratio->SetBinContent(39,1.250318);
   ratio->SetBinContent(40,1.109385);
   ratio->SetBinContent(41,1.121025);
   ratio->SetBinContent(42,1.046014);
   ratio->SetBinContent(43,1.097541);
   ratio->SetBinContent(44,0.9739578);
   ratio->SetBinContent(45,1.008036);
   ratio->SetBinContent(46,0.9137746);
   ratio->SetBinContent(47,0.8732023);
   ratio->SetBinContent(48,0.8614891);
   ratio->SetBinContent(49,0.7712144);
   ratio->SetBinContent(50,0.805674);
   ratio->SetBinContent(51,0.6640521);
   ratio->SetBinContent(52,0.6066456);
   ratio->SetBinContent(53,0.5843252);
   ratio->SetBinContent(54,0.5366166);
   ratio->SetBinContent(55,0.5524568);
   ratio->SetBinError(6,0.02480746);
   ratio->SetBinError(7,0.02486576);
   ratio->SetBinError(8,0.02640366);
   ratio->SetBinError(9,0.02649323);
   ratio->SetBinError(10,0.0297737);
   ratio->SetBinError(11,0.03058267);
   ratio->SetBinError(12,0.03081732);
   ratio->SetBinError(13,0.03387955);
   ratio->SetBinError(14,0.0367327);
   ratio->SetBinError(15,0.06447834);
   ratio->SetBinError(16,0.06364733);
   ratio->SetBinError(17,0.03900612);
   ratio->SetBinError(18,0.04006689);
   ratio->SetBinError(19,0.04427002);
   ratio->SetBinError(20,0.04106038);
   ratio->SetBinError(21,0.04373959);
   ratio->SetBinError(22,0.04441286);
   ratio->SetBinError(23,0.04579286);
   ratio->SetBinError(24,0.0448163);
   ratio->SetBinError(25,0.04514793);
   ratio->SetBinError(26,0.04863201);
   ratio->SetBinError(27,0.04686675);
   ratio->SetBinError(28,0.04544251);
   ratio->SetBinError(29,0.04561491);
   ratio->SetBinError(30,0.04371548);
   ratio->SetBinError(31,0.04608957);
   ratio->SetBinError(32,0.04914025);
   ratio->SetBinError(33,0.04862104);
   ratio->SetBinError(34,0.04590558);
   ratio->SetBinError(35,0.04526782);
   ratio->SetBinError(36,0.04506863);
   ratio->SetBinError(37,0.04644664);
   ratio->SetBinError(38,0.047051);
   ratio->SetBinError(39,0.04332627);
   ratio->SetBinError(40,0.04266542);
   ratio->SetBinError(41,0.04081798);
   ratio->SetBinError(42,0.04131538);
   ratio->SetBinError(43,0.03746299);
   ratio->SetBinError(44,0.0391864);
   ratio->SetBinError(45,0.05676033);
   ratio->SetBinError(46,0.06353282);
   ratio->SetBinError(47,0.03305676);
   ratio->SetBinError(48,0.03403553);
   ratio->SetBinError(49,0.03300243);
   ratio->SetBinError(50,0.03083356);
   ratio->SetBinError(51,0.03036452);
   ratio->SetBinError(52,0.02761139);
   ratio->SetBinError(53,0.0278506);
   ratio->SetBinError(54,0.02531858);
   ratio->SetBinError(55,0.02443363);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(29023.39);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma #eta");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   etaPhot->cd();
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
