{

  cout << endl << "Welcome to my rootlogon.C" << endl;
  cout << "reading PhysicsTools/Utilities/macros/setTDRStyle.C" << endl;
  cout << "and some personal modifications." << endl << endl;

  //gROOT->ProcessLine(".L ~/setTDRStyle.C");
  //setTDRStyle();
  // tdrStyle->SetOptTitle(0);
  //tdrStyle->SetPadBottomMargin(0.14);
  //tdrStyle->SetPadLeftMargin(0.18);
  //tdrStyle->SetPadRightMargin(0.15); // per la paletta !
  //tdrStyle->SetTitleXOffset(1.0);
  // tdrStyle->SetTitleYOffset(1.3);
  // tdrStyle->SetNdivisions(505, "X");
  //tdrStyle->SetErrorX(0.5);

///////// pretty palette ///////////

  const Int_t NRGBs = 5;
  const Int_t NCont = 255;

  Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
  Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
  Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
  Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
  TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
  // tdrStyle->SetNumberContours(NCont);
  
/////////////////////////////////////

  gROOT->ForceStyle();
  gSystem->Load("libFWCoreFWLite.so");
  AutoLibraryLoader::enable();
  gSystem->Load("libDataFormatsFWLite.so");
  //gSystem->Load("libRooFit");

  ///////giulia

  if(gSystem->Getenv("CMSSW_VERSION")) {    
    TString rfitpath("/afs/cern.ch/cms/slc5_amd64_gcc462/lcg/roofit/5.32.03-cms16/include");
    TString path = gSystem->GetIncludePath();
    path += "-I. -I$ROOTSYS/src -I";
    path += rfitpath;
    gSystem->SetIncludePath(path.Data());
    gSystem->Load("/afs/cern.ch/cms/slc5_amd64_gcc462/lcg/roofit/5.32.03-cms16/lib/libRooFitCore.so");
    gSystem->Load("/afs/cern.ch/cms/slc5_amd64_gcc462/lcg/roofit/5.32.03-cms16/lib/libRooFit.so");
    gSystem->Load("libFWCoreFWLite.so");
    TString str = gSystem->GetMakeSharedLib();
    if (str.Contains("-m32")==0 && str.Contains("-m64")==0) {
      str.ReplaceAll("g++", "g++ -m32");
      gSystem->SetMakeSharedLib(str);
    }
  }
  
  
  using namespace RooFit ;
  
  cout << "loaded" << endl;
}
