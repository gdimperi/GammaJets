{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Sat Sep 27 23:33:15 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,-0.005374611,3.525,0.0483715);
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
   
   TH1F *etaPhot_mc_Z_EB__16 = new TH1F("etaPhot_mc_Z_EB__16","etaPhot_mc_Z_EB",60,-3,3);
   etaPhot_mc_Z_EB__16->SetBinContent(16,0.01183344);
   etaPhot_mc_Z_EB__16->SetBinContent(17,0.02739329);
   etaPhot_mc_Z_EB__16->SetBinContent(18,0.02819525);
   etaPhot_mc_Z_EB__16->SetBinContent(19,0.02824247);
   etaPhot_mc_Z_EB__16->SetBinContent(20,0.03069986);
   etaPhot_mc_Z_EB__16->SetBinContent(21,0.03255802);
   etaPhot_mc_Z_EB__16->SetBinContent(22,0.0352075);
   etaPhot_mc_Z_EB__16->SetBinContent(23,0.03348584);
   etaPhot_mc_Z_EB__16->SetBinContent(24,0.03720001);
   etaPhot_mc_Z_EB__16->SetBinContent(25,0.03838646);
   etaPhot_mc_Z_EB__16->SetBinContent(26,0.03768001);
   etaPhot_mc_Z_EB__16->SetBinContent(27,0.03811296);
   etaPhot_mc_Z_EB__16->SetBinContent(28,0.04005218);
   etaPhot_mc_Z_EB__16->SetBinContent(29,0.04001127);
   etaPhot_mc_Z_EB__16->SetBinContent(30,0.03874153);
   etaPhot_mc_Z_EB__16->SetBinContent(31,0.03973199);
   etaPhot_mc_Z_EB__16->SetBinContent(32,0.04122769);
   etaPhot_mc_Z_EB__16->SetBinContent(33,0.04028943);
   etaPhot_mc_Z_EB__16->SetBinContent(34,0.03908997);
   etaPhot_mc_Z_EB__16->SetBinContent(35,0.03724313);
   etaPhot_mc_Z_EB__16->SetBinContent(36,0.0381877);
   etaPhot_mc_Z_EB__16->SetBinContent(37,0.03719005);
   etaPhot_mc_Z_EB__16->SetBinContent(38,0.03393218);
   etaPhot_mc_Z_EB__16->SetBinContent(39,0.03491705);
   etaPhot_mc_Z_EB__16->SetBinContent(40,0.03272662);
   etaPhot_mc_Z_EB__16->SetBinContent(41,0.03127725);
   etaPhot_mc_Z_EB__16->SetBinContent(42,0.02835273);
   etaPhot_mc_Z_EB__16->SetBinContent(43,0.02893039);
   etaPhot_mc_Z_EB__16->SetBinContent(44,0.02736832);
   etaPhot_mc_Z_EB__16->SetBinContent(45,0.01173545);
   etaPhot_mc_Z_EB__16->SetBinError(16,0.0001246854);
   etaPhot_mc_Z_EB__16->SetBinError(17,0.0001896388);
   etaPhot_mc_Z_EB__16->SetBinError(18,0.000192412);
   etaPhot_mc_Z_EB__16->SetBinError(19,0.000192638);
   etaPhot_mc_Z_EB__16->SetBinError(20,0.0002009901);
   etaPhot_mc_Z_EB__16->SetBinError(21,0.0002070854);
   etaPhot_mc_Z_EB__16->SetBinError(22,0.0002154579);
   etaPhot_mc_Z_EB__16->SetBinError(23,0.0002100572);
   etaPhot_mc_Z_EB__16->SetBinError(24,0.0002214882);
   etaPhot_mc_Z_EB__16->SetBinError(25,0.0002251818);
   etaPhot_mc_Z_EB__16->SetBinError(26,0.0002232064);
   etaPhot_mc_Z_EB__16->SetBinError(27,0.0002244022);
   etaPhot_mc_Z_EB__16->SetBinError(28,0.0002301286);
   etaPhot_mc_Z_EB__16->SetBinError(29,0.0002300522);
   etaPhot_mc_Z_EB__16->SetBinError(30,0.0002263794);
   etaPhot_mc_Z_EB__16->SetBinError(31,0.000229322);
   etaPhot_mc_Z_EB__16->SetBinError(32,0.0002335962);
   etaPhot_mc_Z_EB__16->SetBinError(33,0.0002308431);
   etaPhot_mc_Z_EB__16->SetBinError(34,0.0002273182);
   etaPhot_mc_Z_EB__16->SetBinError(35,0.000221708);
   etaPhot_mc_Z_EB__16->SetBinError(36,0.0002245609);
   etaPhot_mc_Z_EB__16->SetBinError(37,0.0002214169);
   etaPhot_mc_Z_EB__16->SetBinError(38,0.000211298);
   etaPhot_mc_Z_EB__16->SetBinError(39,0.0002144719);
   etaPhot_mc_Z_EB__16->SetBinError(40,0.0002075576);
   etaPhot_mc_Z_EB__16->SetBinError(41,0.0002026387);
   etaPhot_mc_Z_EB__16->SetBinError(42,0.0001929832);
   etaPhot_mc_Z_EB__16->SetBinError(43,0.0001947013);
   etaPhot_mc_Z_EB__16->SetBinError(44,0.0001893963);
   etaPhot_mc_Z_EB__16->SetBinError(45,0.0001241022);
   etaPhot_mc_Z_EB__16->SetMinimum(1.183848e-07);
   etaPhot_mc_Z_EB__16->SetMaximum(0.230875);
   etaPhot_mc_Z_EB__16->SetEntries(787500);
   etaPhot_mc_Z_EB__16->SetDirectory(0);
   etaPhot_mc_Z_EB__16->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EB__16->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EB__16->SetMarkerColor(ci);
   etaPhot_mc_Z_EB__16->SetMarkerStyle(20);
   etaPhot_mc_Z_EB__16->SetMarkerSize(0.7);
   etaPhot_mc_Z_EB__16->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_mc_Z_EB__16->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_mc_Z_EB__16->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_mc_Z_EB__16->Draw("PE");
   
   TH1F *etaPhot_mc_Signal_EB__17 = new TH1F("etaPhot_mc_Signal_EB__17","etaPhot_mc_Signal_EB",60,-3,3);
   etaPhot_mc_Signal_EB__17->SetBinContent(16,0.0145624);
   etaPhot_mc_Signal_EB__17->SetBinContent(17,0.03439246);
   etaPhot_mc_Signal_EB__17->SetBinContent(18,0.03398667);
   etaPhot_mc_Signal_EB__17->SetBinContent(19,0.03281392);
   etaPhot_mc_Signal_EB__17->SetBinContent(20,0.03465857);
   etaPhot_mc_Signal_EB__17->SetBinContent(21,0.0350903);
   etaPhot_mc_Signal_EB__17->SetBinContent(22,0.03553515);
   etaPhot_mc_Signal_EB__17->SetBinContent(23,0.03306242);
   etaPhot_mc_Signal_EB__17->SetBinContent(24,0.03546);
   etaPhot_mc_Signal_EB__17->SetBinContent(25,0.03511859);
   etaPhot_mc_Signal_EB__17->SetBinContent(26,0.0359771);
   etaPhot_mc_Signal_EB__17->SetBinContent(27,0.03477306);
   etaPhot_mc_Signal_EB__17->SetBinContent(28,0.03511637);
   etaPhot_mc_Signal_EB__17->SetBinContent(29,0.03673114);
   etaPhot_mc_Signal_EB__17->SetBinContent(30,0.03389409);
   etaPhot_mc_Signal_EB__17->SetBinContent(31,0.03444873);
   etaPhot_mc_Signal_EB__17->SetBinContent(32,0.0357135);
   etaPhot_mc_Signal_EB__17->SetBinContent(33,0.03549514);
   etaPhot_mc_Signal_EB__17->SetBinContent(34,0.03477604);
   etaPhot_mc_Signal_EB__17->SetBinContent(35,0.03391998);
   etaPhot_mc_Signal_EB__17->SetBinContent(36,0.03476531);
   etaPhot_mc_Signal_EB__17->SetBinContent(37,0.03447694);
   etaPhot_mc_Signal_EB__17->SetBinContent(38,0.03259427);
   etaPhot_mc_Signal_EB__17->SetBinContent(39,0.03494132);
   etaPhot_mc_Signal_EB__17->SetBinContent(40,0.03506128);
   etaPhot_mc_Signal_EB__17->SetBinContent(41,0.03483755);
   etaPhot_mc_Signal_EB__17->SetBinContent(42,0.03336256);
   etaPhot_mc_Signal_EB__17->SetBinContent(43,0.03499744);
   etaPhot_mc_Signal_EB__17->SetBinContent(44,0.03516811);
   etaPhot_mc_Signal_EB__17->SetBinContent(45,0.01426958);
   etaPhot_mc_Signal_EB__17->SetBinError(16,0.0004191411);
   etaPhot_mc_Signal_EB__17->SetBinError(17,0.0006609604);
   etaPhot_mc_Signal_EB__17->SetBinError(18,0.0006312265);
   etaPhot_mc_Signal_EB__17->SetBinError(19,0.000619707);
   etaPhot_mc_Signal_EB__17->SetBinError(20,0.0006457911);
   etaPhot_mc_Signal_EB__17->SetBinError(21,0.0006612019);
   etaPhot_mc_Signal_EB__17->SetBinError(22,0.0006453737);
   etaPhot_mc_Signal_EB__17->SetBinError(23,0.0006383985);
   etaPhot_mc_Signal_EB__17->SetBinError(24,0.0006461641);
   etaPhot_mc_Signal_EB__17->SetBinError(25,0.0006323834);
   etaPhot_mc_Signal_EB__17->SetBinError(26,0.0006772826);
   etaPhot_mc_Signal_EB__17->SetBinError(27,0.0006457981);
   etaPhot_mc_Signal_EB__17->SetBinError(28,0.0006387108);
   etaPhot_mc_Signal_EB__17->SetBinError(29,0.0006805608);
   etaPhot_mc_Signal_EB__17->SetBinError(30,0.0006185218);
   etaPhot_mc_Signal_EB__17->SetBinError(31,0.0006372977);
   etaPhot_mc_Signal_EB__17->SetBinError(32,0.0006494813);
   etaPhot_mc_Signal_EB__17->SetBinError(33,0.0006264019);
   etaPhot_mc_Signal_EB__17->SetBinError(34,0.0006184454);
   etaPhot_mc_Signal_EB__17->SetBinError(35,0.0006195413);
   etaPhot_mc_Signal_EB__17->SetBinError(36,0.0006157461);
   etaPhot_mc_Signal_EB__17->SetBinError(37,0.0006118065);
   etaPhot_mc_Signal_EB__17->SetBinError(38,0.00059002);
   etaPhot_mc_Signal_EB__17->SetBinError(39,0.0006202296);
   etaPhot_mc_Signal_EB__17->SetBinError(40,0.0006451096);
   etaPhot_mc_Signal_EB__17->SetBinError(41,0.0006360186);
   etaPhot_mc_Signal_EB__17->SetBinError(42,0.0006503);
   etaPhot_mc_Signal_EB__17->SetBinError(43,0.0006511802);
   etaPhot_mc_Signal_EB__17->SetBinError(44,0.0006647773);
   etaPhot_mc_Signal_EB__17->SetBinError(45,0.0004036928);
   etaPhot_mc_Signal_EB__17->SetEntries(836234);
   etaPhot_mc_Signal_EB__17->SetDirectory(0);
   etaPhot_mc_Signal_EB__17->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EB__17->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EB__17->SetLineColor(ci);
   etaPhot_mc_Signal_EB__17->SetLineWidth(2);
   etaPhot_mc_Signal_EB__17->Draw("HSAME");
   
   TH1F *etaPhot_mc_Z_EB__18 = new TH1F("etaPhot_mc_Z_EB__18","etaPhot_mc_Z_EB",60,-3,3);
   etaPhot_mc_Z_EB__18->SetBinContent(16,0.01183344);
   etaPhot_mc_Z_EB__18->SetBinContent(17,0.02739329);
   etaPhot_mc_Z_EB__18->SetBinContent(18,0.02819525);
   etaPhot_mc_Z_EB__18->SetBinContent(19,0.02824247);
   etaPhot_mc_Z_EB__18->SetBinContent(20,0.03069986);
   etaPhot_mc_Z_EB__18->SetBinContent(21,0.03255802);
   etaPhot_mc_Z_EB__18->SetBinContent(22,0.0352075);
   etaPhot_mc_Z_EB__18->SetBinContent(23,0.03348584);
   etaPhot_mc_Z_EB__18->SetBinContent(24,0.03720001);
   etaPhot_mc_Z_EB__18->SetBinContent(25,0.03838646);
   etaPhot_mc_Z_EB__18->SetBinContent(26,0.03768001);
   etaPhot_mc_Z_EB__18->SetBinContent(27,0.03811296);
   etaPhot_mc_Z_EB__18->SetBinContent(28,0.04005218);
   etaPhot_mc_Z_EB__18->SetBinContent(29,0.04001127);
   etaPhot_mc_Z_EB__18->SetBinContent(30,0.03874153);
   etaPhot_mc_Z_EB__18->SetBinContent(31,0.03973199);
   etaPhot_mc_Z_EB__18->SetBinContent(32,0.04122769);
   etaPhot_mc_Z_EB__18->SetBinContent(33,0.04028943);
   etaPhot_mc_Z_EB__18->SetBinContent(34,0.03908997);
   etaPhot_mc_Z_EB__18->SetBinContent(35,0.03724313);
   etaPhot_mc_Z_EB__18->SetBinContent(36,0.0381877);
   etaPhot_mc_Z_EB__18->SetBinContent(37,0.03719005);
   etaPhot_mc_Z_EB__18->SetBinContent(38,0.03393218);
   etaPhot_mc_Z_EB__18->SetBinContent(39,0.03491705);
   etaPhot_mc_Z_EB__18->SetBinContent(40,0.03272662);
   etaPhot_mc_Z_EB__18->SetBinContent(41,0.03127725);
   etaPhot_mc_Z_EB__18->SetBinContent(42,0.02835273);
   etaPhot_mc_Z_EB__18->SetBinContent(43,0.02893039);
   etaPhot_mc_Z_EB__18->SetBinContent(44,0.02736832);
   etaPhot_mc_Z_EB__18->SetBinContent(45,0.01173545);
   etaPhot_mc_Z_EB__18->SetBinError(16,0.0001246854);
   etaPhot_mc_Z_EB__18->SetBinError(17,0.0001896388);
   etaPhot_mc_Z_EB__18->SetBinError(18,0.000192412);
   etaPhot_mc_Z_EB__18->SetBinError(19,0.000192638);
   etaPhot_mc_Z_EB__18->SetBinError(20,0.0002009901);
   etaPhot_mc_Z_EB__18->SetBinError(21,0.0002070854);
   etaPhot_mc_Z_EB__18->SetBinError(22,0.0002154579);
   etaPhot_mc_Z_EB__18->SetBinError(23,0.0002100572);
   etaPhot_mc_Z_EB__18->SetBinError(24,0.0002214882);
   etaPhot_mc_Z_EB__18->SetBinError(25,0.0002251818);
   etaPhot_mc_Z_EB__18->SetBinError(26,0.0002232064);
   etaPhot_mc_Z_EB__18->SetBinError(27,0.0002244022);
   etaPhot_mc_Z_EB__18->SetBinError(28,0.0002301286);
   etaPhot_mc_Z_EB__18->SetBinError(29,0.0002300522);
   etaPhot_mc_Z_EB__18->SetBinError(30,0.0002263794);
   etaPhot_mc_Z_EB__18->SetBinError(31,0.000229322);
   etaPhot_mc_Z_EB__18->SetBinError(32,0.0002335962);
   etaPhot_mc_Z_EB__18->SetBinError(33,0.0002308431);
   etaPhot_mc_Z_EB__18->SetBinError(34,0.0002273182);
   etaPhot_mc_Z_EB__18->SetBinError(35,0.000221708);
   etaPhot_mc_Z_EB__18->SetBinError(36,0.0002245609);
   etaPhot_mc_Z_EB__18->SetBinError(37,0.0002214169);
   etaPhot_mc_Z_EB__18->SetBinError(38,0.000211298);
   etaPhot_mc_Z_EB__18->SetBinError(39,0.0002144719);
   etaPhot_mc_Z_EB__18->SetBinError(40,0.0002075576);
   etaPhot_mc_Z_EB__18->SetBinError(41,0.0002026387);
   etaPhot_mc_Z_EB__18->SetBinError(42,0.0001929832);
   etaPhot_mc_Z_EB__18->SetBinError(43,0.0001947013);
   etaPhot_mc_Z_EB__18->SetBinError(44,0.0001893963);
   etaPhot_mc_Z_EB__18->SetBinError(45,0.0001241022);
   etaPhot_mc_Z_EB__18->SetMinimum(1.183848e-07);
   etaPhot_mc_Z_EB__18->SetMaximum(0.230875);
   etaPhot_mc_Z_EB__18->SetEntries(787500);
   etaPhot_mc_Z_EB__18->SetDirectory(0);
   etaPhot_mc_Z_EB__18->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EB__18->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EB__18->SetMarkerColor(ci);
   etaPhot_mc_Z_EB__18->SetMarkerStyle(20);
   etaPhot_mc_Z_EB__18->SetMarkerSize(0.7);
   etaPhot_mc_Z_EB__18->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_mc_Z_EB__18->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_mc_Z_EB__18->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_mc_Z_EB__18->Draw("PESAME");
   
   TLegend *leg = new TLegend(0.94,2.371988e-310,2.498006e-16,1.5,NULL,"brNDC");
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
   entry=leg->AddEntry("etaPhot_mc_Z_EB","MC Z #rightarrow ee","PL");
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
   
   TH1F *ratio = new TH1F("ratio","etaPhot_mc_Z_EB",60,-3,3);
   ratio->SetBinContent(16,0.812602);
   ratio->SetBinContent(17,0.796491);
   ratio->SetBinContent(18,0.8295975);
   ratio->SetBinContent(19,0.8606856);
   ratio->SetBinContent(20,0.8857797);
   ratio->SetBinContent(21,0.9278353);
   ratio->SetBinContent(22,0.9907795);
   ratio->SetBinContent(23,1.012806);
   ratio->SetBinContent(24,1.04907);
   ratio->SetBinContent(25,1.093052);
   ratio->SetBinContent(26,1.047333);
   ratio->SetBinContent(27,1.096048);
   ratio->SetBinContent(28,1.140556);
   ratio->SetBinContent(29,1.089301);
   ratio->SetBinContent(30,1.143017);
   ratio->SetBinContent(31,1.153366);
   ratio->SetBinContent(32,1.154401);
   ratio->SetBinContent(33,1.135069);
   ratio->SetBinContent(34,1.124049);
   ratio->SetBinContent(35,1.09797);
   ratio->SetBinContent(36,1.098443);
   ratio->SetBinContent(37,1.078694);
   ratio->SetBinContent(38,1.041047);
   ratio->SetBinContent(39,0.9993054);
   ratio->SetBinContent(40,0.9334121);
   ratio->SetBinContent(41,0.8978029);
   ratio->SetBinContent(42,0.8498366);
   ratio->SetBinContent(43,0.8266432);
   ratio->SetBinContent(44,0.7782141);
   ratio->SetBinContent(45,0.8224105);
   ratio->SetBinError(16,0.02490661);
   ratio->SetBinError(17,0.01626995);
   ratio->SetBinError(18,0.0164151);
   ratio->SetBinError(19,0.01728213);
   ratio->SetBinError(20,0.01749384);
   ratio->SetBinError(21,0.01845226);
   ratio->SetBinError(22,0.01898817);
   ratio->SetBinError(23,0.02056231);
   ratio->SetBinError(24,0.02011106);
   ratio->SetBinError(25,0.02070078);
   ratio->SetBinError(26,0.02066953);
   ratio->SetBinError(27,0.02135405);
   ratio->SetBinError(28,0.02175538);
   ratio->SetBinError(29,0.02113222);
   ratio->SetBinError(30,0.02190178);
   ratio->SetBinError(31,0.02235146);
   ratio->SetBinError(32,0.02198913);
   ratio->SetBinError(33,0.02106047);
   ratio->SetBinError(34,0.02103131);
   ratio->SetBinError(35,0.02109248);
   ratio->SetBinError(36,0.02049934);
   ratio->SetBinError(37,0.02019044);
   ratio->SetBinError(38,0.01992884);
   ratio->SetBinError(39,0.01877025);
   ratio->SetBinError(40,0.01816594);
   ratio->SetBinError(41,0.01739241);
   ratio->SetBinError(42,0.01754585);
   ratio->SetBinError(43,0.01635616);
   ratio->SetBinError(44,0.01566527);
   ratio->SetBinError(45,0.0248387);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(74077.9);
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
   
   TH1F *ratio = new TH1F("ratio","etaPhot_mc_Z_EB",60,-3,3);
   ratio->SetBinContent(16,0.812602);
   ratio->SetBinContent(17,0.796491);
   ratio->SetBinContent(18,0.8295975);
   ratio->SetBinContent(19,0.8606856);
   ratio->SetBinContent(20,0.8857797);
   ratio->SetBinContent(21,0.9278353);
   ratio->SetBinContent(22,0.9907795);
   ratio->SetBinContent(23,1.012806);
   ratio->SetBinContent(24,1.04907);
   ratio->SetBinContent(25,1.093052);
   ratio->SetBinContent(26,1.047333);
   ratio->SetBinContent(27,1.096048);
   ratio->SetBinContent(28,1.140556);
   ratio->SetBinContent(29,1.089301);
   ratio->SetBinContent(30,1.143017);
   ratio->SetBinContent(31,1.153366);
   ratio->SetBinContent(32,1.154401);
   ratio->SetBinContent(33,1.135069);
   ratio->SetBinContent(34,1.124049);
   ratio->SetBinContent(35,1.09797);
   ratio->SetBinContent(36,1.098443);
   ratio->SetBinContent(37,1.078694);
   ratio->SetBinContent(38,1.041047);
   ratio->SetBinContent(39,0.9993054);
   ratio->SetBinContent(40,0.9334121);
   ratio->SetBinContent(41,0.8978029);
   ratio->SetBinContent(42,0.8498366);
   ratio->SetBinContent(43,0.8266432);
   ratio->SetBinContent(44,0.7782141);
   ratio->SetBinContent(45,0.8224105);
   ratio->SetBinError(16,0.02490661);
   ratio->SetBinError(17,0.01626995);
   ratio->SetBinError(18,0.0164151);
   ratio->SetBinError(19,0.01728213);
   ratio->SetBinError(20,0.01749384);
   ratio->SetBinError(21,0.01845226);
   ratio->SetBinError(22,0.01898817);
   ratio->SetBinError(23,0.02056231);
   ratio->SetBinError(24,0.02011106);
   ratio->SetBinError(25,0.02070078);
   ratio->SetBinError(26,0.02066953);
   ratio->SetBinError(27,0.02135405);
   ratio->SetBinError(28,0.02175538);
   ratio->SetBinError(29,0.02113222);
   ratio->SetBinError(30,0.02190178);
   ratio->SetBinError(31,0.02235146);
   ratio->SetBinError(32,0.02198913);
   ratio->SetBinError(33,0.02106047);
   ratio->SetBinError(34,0.02103131);
   ratio->SetBinError(35,0.02109248);
   ratio->SetBinError(36,0.02049934);
   ratio->SetBinError(37,0.02019044);
   ratio->SetBinError(38,0.01992884);
   ratio->SetBinError(39,0.01877025);
   ratio->SetBinError(40,0.01816594);
   ratio->SetBinError(41,0.01739241);
   ratio->SetBinError(42,0.01754585);
   ratio->SetBinError(43,0.01635616);
   ratio->SetBinError(44,0.01566527);
   ratio->SetBinError(45,0.0248387);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(74077.9);
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
