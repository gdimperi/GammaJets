{
  gROOT->ProcessLine(".x RooCBmyCrujff.cxx+");
  gROOT->ProcessLine(".L fitDebug_Data.C++");
  //  fitDebug("abs(etaPhot)<1.4442  && isMatchedPhot==0 && abs(ptPhot - 52.5)<12.5", "fit_EB_bg_WP095_pt40_65");
  fitDebug_Data("abs(etaPhot)<1.4442 && abs(ptPhot-52.5)<12.5", "fit_HistPdf_EB_WP095_pt40_65", "hltcut30");
  //  fitDebug("abs(etaPhot)<1.4442  && isMatchedPhot==0 && abs(ptPhot-77.5)<12.5", "fit_EB_bg_WP095_pt65_90");
 //fitDebug("abs(etaPhot)<1.4442  && isMatchedPhot==0 && abs(ptPhot-97.5)<7.5", "fit_EB_bg_WP095_pt90_105");
 //fitDebug("abs(etaPhot)<1.4442  && isMatchedPhot==0 && ptPhot>105.", "fit_EB_bg_WP095_pt105");

  
}
