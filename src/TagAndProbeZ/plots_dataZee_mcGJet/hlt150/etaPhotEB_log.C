{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Sat Nov 29 17:31:36 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,-0.005484095,3.525,0.04935686);
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
   
   TH1F *etaPhot_dataZ_EB__10 = new TH1F("etaPhot_dataZ_EB__10","etaPhot_dataZ_EB",60,-3,3);
   etaPhot_dataZ_EB__10->SetBinContent(16,0.01022396);
   etaPhot_dataZ_EB__10->SetBinContent(17,0.02440068);
   etaPhot_dataZ_EB__10->SetBinContent(18,0.02545093);
   etaPhot_dataZ_EB__10->SetBinContent(19,0.02585122);
   etaPhot_dataZ_EB__10->SetBinContent(20,0.02956708);
   etaPhot_dataZ_EB__10->SetBinContent(21,0.03360081);
   etaPhot_dataZ_EB__10->SetBinContent(22,0.03837538);
   etaPhot_dataZ_EB__10->SetBinContent(23,0.03502422);
   etaPhot_dataZ_EB__10->SetBinContent(24,0.03912419);
   etaPhot_dataZ_EB__10->SetBinContent(25,0.03920325);
   etaPhot_dataZ_EB__10->SetBinContent(26,0.03806393);
   etaPhot_dataZ_EB__10->SetBinContent(27,0.03866603);
   etaPhot_dataZ_EB__10->SetBinContent(28,0.04164773);
   etaPhot_dataZ_EB__10->SetBinContent(29,0.04196329);
   etaPhot_dataZ_EB__10->SetBinContent(30,0.04030131);
   etaPhot_dataZ_EB__10->SetBinContent(31,0.03945502);
   etaPhot_dataZ_EB__10->SetBinContent(32,0.04085691);
   etaPhot_dataZ_EB__10->SetBinContent(33,0.04130528);
   etaPhot_dataZ_EB__10->SetBinContent(34,0.038876);
   etaPhot_dataZ_EB__10->SetBinContent(35,0.03718572);
   etaPhot_dataZ_EB__10->SetBinContent(36,0.03875382);
   etaPhot_dataZ_EB__10->SetBinContent(37,0.03872031);
   etaPhot_dataZ_EB__10->SetBinContent(38,0.0352427);
   etaPhot_dataZ_EB__10->SetBinContent(39,0.03719843);
   etaPhot_dataZ_EB__10->SetBinContent(40,0.03284806);
   etaPhot_dataZ_EB__10->SetBinContent(41,0.03078241);
   etaPhot_dataZ_EB__10->SetBinContent(42,0.02509973);
   etaPhot_dataZ_EB__10->SetBinContent(43,0.02652405);
   etaPhot_dataZ_EB__10->SetBinContent(44,0.02533435);
   etaPhot_dataZ_EB__10->SetBinContent(45,0.01035322);
   etaPhot_dataZ_EB__10->SetBinError(16,0.0001790154);
   etaPhot_dataZ_EB__10->SetBinError(17,0.0002720248);
   etaPhot_dataZ_EB__10->SetBinError(18,0.0002806099);
   etaPhot_dataZ_EB__10->SetBinError(19,0.0002847508);
   etaPhot_dataZ_EB__10->SetBinError(20,0.00031534);
   etaPhot_dataZ_EB__10->SetBinError(21,0.0003440121);
   etaPhot_dataZ_EB__10->SetBinError(22,0.0003678565);
   etaPhot_dataZ_EB__10->SetBinError(23,0.0003375787);
   etaPhot_dataZ_EB__10->SetBinError(24,0.0003542289);
   etaPhot_dataZ_EB__10->SetBinError(25,0.0003471892);
   etaPhot_dataZ_EB__10->SetBinError(26,0.000340184);
   etaPhot_dataZ_EB__10->SetBinError(27,0.0003386777);
   etaPhot_dataZ_EB__10->SetBinError(28,0.0003488398);
   etaPhot_dataZ_EB__10->SetBinError(29,0.0003425853);
   etaPhot_dataZ_EB__10->SetBinError(30,0.0003412864);
   etaPhot_dataZ_EB__10->SetBinError(31,0.0003324181);
   etaPhot_dataZ_EB__10->SetBinError(32,0.0003359173);
   etaPhot_dataZ_EB__10->SetBinError(33,0.000345428);
   etaPhot_dataZ_EB__10->SetBinError(34,0.0003374984);
   etaPhot_dataZ_EB__10->SetBinError(35,0.0003354613);
   etaPhot_dataZ_EB__10->SetBinError(36,0.0003450122);
   etaPhot_dataZ_EB__10->SetBinError(37,0.0003490604);
   etaPhot_dataZ_EB__10->SetBinError(38,0.0003392904);
   etaPhot_dataZ_EB__10->SetBinError(39,0.0003583567);
   etaPhot_dataZ_EB__10->SetBinError(40,0.0003339126);
   etaPhot_dataZ_EB__10->SetBinError(41,0.00032394);
   etaPhot_dataZ_EB__10->SetBinError(42,0.0002762028);
   etaPhot_dataZ_EB__10->SetBinError(43,0.0002814044);
   etaPhot_dataZ_EB__10->SetBinError(44,0.0002758055);
   etaPhot_dataZ_EB__10->SetBinError(45,0.0001813849);
   etaPhot_dataZ_EB__10->SetMinimum(8.908927e-09);
   etaPhot_dataZ_EB__10->SetMaximum(0.2349944);
   etaPhot_dataZ_EB__10->SetEntries(533216);
   etaPhot_dataZ_EB__10->SetDirectory(0);
   etaPhot_dataZ_EB__10->SetStats(0);
   etaPhot_dataZ_EB__10->SetMarkerStyle(20);
   etaPhot_dataZ_EB__10->SetMarkerSize(0.7);
   etaPhot_dataZ_EB__10->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_dataZ_EB__10->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_dataZ_EB__10->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_dataZ_EB__10->Draw("PE");
   
   TH1F *etaPhot_mc_Signal_EB__11 = new TH1F("etaPhot_mc_Signal_EB__11","etaPhot_mc_Signal_EB",60,-3,3);
   etaPhot_mc_Signal_EB__11->SetBinContent(16,0.01442911);
   etaPhot_mc_Signal_EB__11->SetBinContent(17,0.03460545);
   etaPhot_mc_Signal_EB__11->SetBinContent(18,0.03390912);
   etaPhot_mc_Signal_EB__11->SetBinContent(19,0.03274321);
   etaPhot_mc_Signal_EB__11->SetBinContent(20,0.03590158);
   etaPhot_mc_Signal_EB__11->SetBinContent(21,0.03492167);
   etaPhot_mc_Signal_EB__11->SetBinContent(22,0.03754728);
   etaPhot_mc_Signal_EB__11->SetBinContent(23,0.03253493);
   etaPhot_mc_Signal_EB__11->SetBinContent(24,0.03590295);
   etaPhot_mc_Signal_EB__11->SetBinContent(25,0.03597296);
   etaPhot_mc_Signal_EB__11->SetBinContent(26,0.0342821);
   etaPhot_mc_Signal_EB__11->SetBinContent(27,0.0346604);
   etaPhot_mc_Signal_EB__11->SetBinContent(28,0.03526586);
   etaPhot_mc_Signal_EB__11->SetBinContent(29,0.03481733);
   etaPhot_mc_Signal_EB__11->SetBinContent(30,0.03278942);
   etaPhot_mc_Signal_EB__11->SetBinContent(31,0.03357203);
   etaPhot_mc_Signal_EB__11->SetBinContent(32,0.03499752);
   etaPhot_mc_Signal_EB__11->SetBinContent(33,0.03471407);
   etaPhot_mc_Signal_EB__11->SetBinContent(34,0.03543235);
   etaPhot_mc_Signal_EB__11->SetBinContent(35,0.0336257);
   etaPhot_mc_Signal_EB__11->SetBinContent(36,0.03563928);
   etaPhot_mc_Signal_EB__11->SetBinContent(37,0.03621366);
   etaPhot_mc_Signal_EB__11->SetBinContent(38,0.03327299);
   etaPhot_mc_Signal_EB__11->SetBinContent(39,0.03569488);
   etaPhot_mc_Signal_EB__11->SetBinContent(40,0.03484309);
   etaPhot_mc_Signal_EB__11->SetBinContent(41,0.03466324);
   etaPhot_mc_Signal_EB__11->SetBinContent(42,0.03242396);
   etaPhot_mc_Signal_EB__11->SetBinContent(43,0.03561447);
   etaPhot_mc_Signal_EB__11->SetBinContent(44,0.03405052);
   etaPhot_mc_Signal_EB__11->SetBinContent(45,0.01495888);
   etaPhot_mc_Signal_EB__11->SetBinError(16,0.0001708107);
   etaPhot_mc_Signal_EB__11->SetBinError(17,0.0005400923);
   etaPhot_mc_Signal_EB__11->SetBinError(18,0.0002551083);
   etaPhot_mc_Signal_EB__11->SetBinError(19,0.0004146143);
   etaPhot_mc_Signal_EB__11->SetBinError(20,0.0004793701);
   etaPhot_mc_Signal_EB__11->SetBinError(21,0.0004382385);
   etaPhot_mc_Signal_EB__11->SetBinError(22,0.0008178481);
   etaPhot_mc_Signal_EB__11->SetBinError(23,0.0004212033);
   etaPhot_mc_Signal_EB__11->SetBinError(24,0.0005086634);
   etaPhot_mc_Signal_EB__11->SetBinError(25,0.0004609514);
   etaPhot_mc_Signal_EB__11->SetBinError(26,0.000506365);
   etaPhot_mc_Signal_EB__11->SetBinError(27,0.0004217487);
   etaPhot_mc_Signal_EB__11->SetBinError(28,0.0004873315);
   etaPhot_mc_Signal_EB__11->SetBinError(29,0.0007049753);
   etaPhot_mc_Signal_EB__11->SetBinError(30,0.0003615729);
   etaPhot_mc_Signal_EB__11->SetBinError(31,0.0003262452);
   etaPhot_mc_Signal_EB__11->SetBinError(32,0.0002552716);
   etaPhot_mc_Signal_EB__11->SetBinError(33,0.000246496);
   etaPhot_mc_Signal_EB__11->SetBinError(34,0.0005183879);
   etaPhot_mc_Signal_EB__11->SetBinError(35,0.0004245708);
   etaPhot_mc_Signal_EB__11->SetBinError(36,0.000454431);
   etaPhot_mc_Signal_EB__11->SetBinError(37,0.0005563112);
   etaPhot_mc_Signal_EB__11->SetBinError(38,0.000439463);
   etaPhot_mc_Signal_EB__11->SetBinError(39,0.0004094997);
   etaPhot_mc_Signal_EB__11->SetBinError(40,0.0004187647);
   etaPhot_mc_Signal_EB__11->SetBinError(41,0.0002514144);
   etaPhot_mc_Signal_EB__11->SetBinError(42,0.0002477023);
   etaPhot_mc_Signal_EB__11->SetBinError(43,0.0005701965);
   etaPhot_mc_Signal_EB__11->SetBinError(44,0.000374131);
   etaPhot_mc_Signal_EB__11->SetBinError(45,0.0005410956);
   etaPhot_mc_Signal_EB__11->SetEntries(2212552);
   etaPhot_mc_Signal_EB__11->SetDirectory(0);
   etaPhot_mc_Signal_EB__11->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EB__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EB__11->SetLineColor(ci);
   etaPhot_mc_Signal_EB__11->SetLineWidth(2);
   etaPhot_mc_Signal_EB__11->Draw("HSAME");
   
   TH1F *etaPhot_dataZ_EB__12 = new TH1F("etaPhot_dataZ_EB__12","etaPhot_dataZ_EB",60,-3,3);
   etaPhot_dataZ_EB__12->SetBinContent(16,0.01022396);
   etaPhot_dataZ_EB__12->SetBinContent(17,0.02440068);
   etaPhot_dataZ_EB__12->SetBinContent(18,0.02545093);
   etaPhot_dataZ_EB__12->SetBinContent(19,0.02585122);
   etaPhot_dataZ_EB__12->SetBinContent(20,0.02956708);
   etaPhot_dataZ_EB__12->SetBinContent(21,0.03360081);
   etaPhot_dataZ_EB__12->SetBinContent(22,0.03837538);
   etaPhot_dataZ_EB__12->SetBinContent(23,0.03502422);
   etaPhot_dataZ_EB__12->SetBinContent(24,0.03912419);
   etaPhot_dataZ_EB__12->SetBinContent(25,0.03920325);
   etaPhot_dataZ_EB__12->SetBinContent(26,0.03806393);
   etaPhot_dataZ_EB__12->SetBinContent(27,0.03866603);
   etaPhot_dataZ_EB__12->SetBinContent(28,0.04164773);
   etaPhot_dataZ_EB__12->SetBinContent(29,0.04196329);
   etaPhot_dataZ_EB__12->SetBinContent(30,0.04030131);
   etaPhot_dataZ_EB__12->SetBinContent(31,0.03945502);
   etaPhot_dataZ_EB__12->SetBinContent(32,0.04085691);
   etaPhot_dataZ_EB__12->SetBinContent(33,0.04130528);
   etaPhot_dataZ_EB__12->SetBinContent(34,0.038876);
   etaPhot_dataZ_EB__12->SetBinContent(35,0.03718572);
   etaPhot_dataZ_EB__12->SetBinContent(36,0.03875382);
   etaPhot_dataZ_EB__12->SetBinContent(37,0.03872031);
   etaPhot_dataZ_EB__12->SetBinContent(38,0.0352427);
   etaPhot_dataZ_EB__12->SetBinContent(39,0.03719843);
   etaPhot_dataZ_EB__12->SetBinContent(40,0.03284806);
   etaPhot_dataZ_EB__12->SetBinContent(41,0.03078241);
   etaPhot_dataZ_EB__12->SetBinContent(42,0.02509973);
   etaPhot_dataZ_EB__12->SetBinContent(43,0.02652405);
   etaPhot_dataZ_EB__12->SetBinContent(44,0.02533435);
   etaPhot_dataZ_EB__12->SetBinContent(45,0.01035322);
   etaPhot_dataZ_EB__12->SetBinError(16,0.0001790154);
   etaPhot_dataZ_EB__12->SetBinError(17,0.0002720248);
   etaPhot_dataZ_EB__12->SetBinError(18,0.0002806099);
   etaPhot_dataZ_EB__12->SetBinError(19,0.0002847508);
   etaPhot_dataZ_EB__12->SetBinError(20,0.00031534);
   etaPhot_dataZ_EB__12->SetBinError(21,0.0003440121);
   etaPhot_dataZ_EB__12->SetBinError(22,0.0003678565);
   etaPhot_dataZ_EB__12->SetBinError(23,0.0003375787);
   etaPhot_dataZ_EB__12->SetBinError(24,0.0003542289);
   etaPhot_dataZ_EB__12->SetBinError(25,0.0003471892);
   etaPhot_dataZ_EB__12->SetBinError(26,0.000340184);
   etaPhot_dataZ_EB__12->SetBinError(27,0.0003386777);
   etaPhot_dataZ_EB__12->SetBinError(28,0.0003488398);
   etaPhot_dataZ_EB__12->SetBinError(29,0.0003425853);
   etaPhot_dataZ_EB__12->SetBinError(30,0.0003412864);
   etaPhot_dataZ_EB__12->SetBinError(31,0.0003324181);
   etaPhot_dataZ_EB__12->SetBinError(32,0.0003359173);
   etaPhot_dataZ_EB__12->SetBinError(33,0.000345428);
   etaPhot_dataZ_EB__12->SetBinError(34,0.0003374984);
   etaPhot_dataZ_EB__12->SetBinError(35,0.0003354613);
   etaPhot_dataZ_EB__12->SetBinError(36,0.0003450122);
   etaPhot_dataZ_EB__12->SetBinError(37,0.0003490604);
   etaPhot_dataZ_EB__12->SetBinError(38,0.0003392904);
   etaPhot_dataZ_EB__12->SetBinError(39,0.0003583567);
   etaPhot_dataZ_EB__12->SetBinError(40,0.0003339126);
   etaPhot_dataZ_EB__12->SetBinError(41,0.00032394);
   etaPhot_dataZ_EB__12->SetBinError(42,0.0002762028);
   etaPhot_dataZ_EB__12->SetBinError(43,0.0002814044);
   etaPhot_dataZ_EB__12->SetBinError(44,0.0002758055);
   etaPhot_dataZ_EB__12->SetBinError(45,0.0001813849);
   etaPhot_dataZ_EB__12->SetMinimum(8.908927e-09);
   etaPhot_dataZ_EB__12->SetMaximum(0.2349944);
   etaPhot_dataZ_EB__12->SetEntries(533216);
   etaPhot_dataZ_EB__12->SetDirectory(0);
   etaPhot_dataZ_EB__12->SetStats(0);
   etaPhot_dataZ_EB__12->SetMarkerStyle(20);
   etaPhot_dataZ_EB__12->SetMarkerSize(0.7);
   etaPhot_dataZ_EB__12->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_dataZ_EB__12->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_dataZ_EB__12->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_dataZ_EB__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
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
   entry=leg->AddEntry("etaPhot_dataZ_EB","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("etaPhot_mc_Signal_EB","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","etaPhot_dataZ_EB",60,-3,3);
   ratio->SetBinContent(16,0.7085646);
   ratio->SetBinContent(17,0.7051107);
   ratio->SetBinContent(18,0.750563);
   ratio->SetBinContent(19,0.7895138);
   ratio->SetBinContent(20,0.8235593);
   ratio->SetBinContent(21,0.9621764);
   ratio->SetBinContent(22,1.022055);
   ratio->SetBinContent(23,1.076511);
   ratio->SetBinContent(24,1.08972);
   ratio->SetBinContent(25,1.089798);
   ratio->SetBinContent(26,1.110315);
   ratio->SetBinContent(27,1.115568);
   ratio->SetBinContent(28,1.180965);
   ratio->SetBinContent(29,1.205241);
   ratio->SetBinContent(30,1.229095);
   ratio->SetBinContent(31,1.175235);
   ratio->SetBinContent(32,1.167423);
   ratio->SetBinContent(33,1.189872);
   ratio->SetBinContent(34,1.09719);
   ratio->SetBinContent(35,1.105872);
   ratio->SetBinContent(36,1.087391);
   ratio->SetBinContent(37,1.069218);
   ratio->SetBinContent(38,1.059198);
   ratio->SetBinContent(39,1.042122);
   ratio->SetBinContent(40,0.9427425);
   ratio->SetBinContent(41,0.8880418);
   ratio->SetBinContent(42,0.7741107);
   ratio->SetBinContent(43,0.7447548);
   ratio->SetBinContent(44,0.7440224);
   ratio->SetBinContent(45,0.6921119);
   ratio->SetBinError(16,0.01497597);
   ratio->SetBinError(17,0.01352391);
   ratio->SetBinError(18,0.01001832);
   ratio->SetBinError(19,0.01325047);
   ratio->SetBinError(20,0.01407377);
   ratio->SetBinError(21,0.01558319);
   ratio->SetBinError(22,0.02432263);
   ratio->SetBinError(23,0.01737501);
   ratio->SetBinError(24,0.01832218);
   ratio->SetBinError(25,0.01697517);
   ratio->SetBinError(26,0.01916836);
   ratio->SetBinError(27,0.01672541);
   ratio->SetBinError(28,0.0190833);
   ratio->SetBinError(29,0.0263125);
   ratio->SetBinError(30,0.01708887);
   ratio->SetBinError(31,0.01511535);
   ratio->SetBinError(32,0.01283105);
   ratio->SetBinError(33,0.01305377);
   ratio->SetBinError(34,0.01866559);
   ratio->SetBinError(35,0.01716091);
   ratio->SetBinError(36,0.01691029);
   ratio->SetBinError(37,0.01904461);
   ratio->SetBinError(38,0.01731166);
   ratio->SetBinError(39,0.01561165);
   ratio->SetBinError(40,0.01483977);
   ratio->SetBinError(41,0.01134999);
   ratio->SetBinError(42,0.01037003);
   ratio->SetBinError(43,0.01430409);
   ratio->SetBinError(44,0.01150818);
   ratio->SetBinError(45,0.0278171);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(102105.9);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma #eta");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(-3,1,3,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","etaPhot_dataZ_EB",60,-3,3);
   ratio->SetBinContent(16,0.7085646);
   ratio->SetBinContent(17,0.7051107);
   ratio->SetBinContent(18,0.750563);
   ratio->SetBinContent(19,0.7895138);
   ratio->SetBinContent(20,0.8235593);
   ratio->SetBinContent(21,0.9621764);
   ratio->SetBinContent(22,1.022055);
   ratio->SetBinContent(23,1.076511);
   ratio->SetBinContent(24,1.08972);
   ratio->SetBinContent(25,1.089798);
   ratio->SetBinContent(26,1.110315);
   ratio->SetBinContent(27,1.115568);
   ratio->SetBinContent(28,1.180965);
   ratio->SetBinContent(29,1.205241);
   ratio->SetBinContent(30,1.229095);
   ratio->SetBinContent(31,1.175235);
   ratio->SetBinContent(32,1.167423);
   ratio->SetBinContent(33,1.189872);
   ratio->SetBinContent(34,1.09719);
   ratio->SetBinContent(35,1.105872);
   ratio->SetBinContent(36,1.087391);
   ratio->SetBinContent(37,1.069218);
   ratio->SetBinContent(38,1.059198);
   ratio->SetBinContent(39,1.042122);
   ratio->SetBinContent(40,0.9427425);
   ratio->SetBinContent(41,0.8880418);
   ratio->SetBinContent(42,0.7741107);
   ratio->SetBinContent(43,0.7447548);
   ratio->SetBinContent(44,0.7440224);
   ratio->SetBinContent(45,0.6921119);
   ratio->SetBinError(16,0.01497597);
   ratio->SetBinError(17,0.01352391);
   ratio->SetBinError(18,0.01001832);
   ratio->SetBinError(19,0.01325047);
   ratio->SetBinError(20,0.01407377);
   ratio->SetBinError(21,0.01558319);
   ratio->SetBinError(22,0.02432263);
   ratio->SetBinError(23,0.01737501);
   ratio->SetBinError(24,0.01832218);
   ratio->SetBinError(25,0.01697517);
   ratio->SetBinError(26,0.01916836);
   ratio->SetBinError(27,0.01672541);
   ratio->SetBinError(28,0.0190833);
   ratio->SetBinError(29,0.0263125);
   ratio->SetBinError(30,0.01708887);
   ratio->SetBinError(31,0.01511535);
   ratio->SetBinError(32,0.01283105);
   ratio->SetBinError(33,0.01305377);
   ratio->SetBinError(34,0.01866559);
   ratio->SetBinError(35,0.01716091);
   ratio->SetBinError(36,0.01691029);
   ratio->SetBinError(37,0.01904461);
   ratio->SetBinError(38,0.01731166);
   ratio->SetBinError(39,0.01561165);
   ratio->SetBinError(40,0.01483977);
   ratio->SetBinError(41,0.01134999);
   ratio->SetBinError(42,0.01037003);
   ratio->SetBinError(43,0.01430409);
   ratio->SetBinError(44,0.01150818);
   ratio->SetBinError(45,0.0278171);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(102105.9);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma #eta");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
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
