{
  gROOT->ProcessLine(".x RooCBmyCrujff.cxx+");
  gROOT->ProcessLine(".L fitData_myPull.C++");
  fitData_myPull("myPulls_onlyFracandN_floating");
}
