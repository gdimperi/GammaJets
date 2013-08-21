{
  gROOT->ProcessLine(".L RooCBmyCrujff.cxx+");

  TFile wsig("workspace_fit_EB_sig_WP095_pt40_65.root");
  RooWorkspace* w_sig=(RooWorkspace*)wsig->Get("w_sig");
  TFile wbkg("workspace_fit_EB_bg_WP095_pt40_65.root");
  RooWorkspace* w_bg=(RooWorkspace*)wbkg->Get("w_bg");

  w_sig->Print();
  w_bg->Print();


  RooRealVar bkgfrac("bkgfrac","fraction of background",0.) ;
  RooAddPdf  model("full model","sig+bkg",*w_bg->pdf("my_add_s"),*w_sig->pdf("CBmyCrujff_s"),bkgfrac);

  RooRealVar* mass=w_sig->var("combinedPfIso03Phot");
  mass->setRange("fitRange",-1.,8.);
  RooPlot* p=mass->frame(121);

  std::string myVars[5];
  myVars[0]="CBC_mean";
  myVars[1]="CBC_sigma";
  myVars[2]="CBC_alphaC";
  myVars[3]="CBC_alphaCB";
  myVars[4]="CBC_n";

  RooRealVar* origParameters[5];
  for (int i=0;i<5;++i)
    origParameters[i]=(RooRealVar*)w_sig->var(myVars[i].c_str())->clone(Form("orig_%s",myVars[i].c_str()));
    
  TH1F* pull[5];
  for (int i=0;i<5;++i)
    pull[i]=new TH1F(Form("%s_pull",myVars[i].c_str()),Form("%s_pull",myVars[i].c_str()),200,-5.,5.);

  TH1F nSig("nSig","nSig",1000,0.,30000);

//   RooRealVar toy_CBC_mean("toy_CBC_mean", "toy_CBC_mean", -1., -2, 3.);
//   RooRealVar toy_CBC_sigma("toy_CBC_sigma", "toy_CBC_sigma", 1., 0., 3.);
//   RooRealVar toy_CBC_alphaC("toy_CBC_alphaC", "toy_CBC_alphaC", 0., 0., 3.);
//   RooRealVar toy_CBC_alphaCB("toy_CBC_alphaCB", "toy_CBC_alphaCB", 0.7, 0., 4.);
//   RooRealVar toy_CBC_n("toy_CBC_n", "toy_CBC_n", 5., 0., 100.);
  RooRealVar toy_nsig("nsig","number of signal events in signalRange",10000,0.,999999);
  RooRealVar toy_nbkg("nbkg","number of bkg events in signalRange",300,0.,999999);
  
  //  RooArgSet fitVars(toy_CBC_mean,toy_CBC_sigma,toy_CBC_alphaC,toy_CBC_alphaCB,toy_CBC_n);
  
  //      RooCBmyCrujff toy_CBmyCrujff_s("toy_CBmyCrujff_s", "toy_CBmyCrujff_s", *mass, toy_CBC_mean, toy_CBC_sigma, toy_CBC_alphaC, toy_CBC_alphaCB, toy_CBC_n);
  RooCBmyCrujff* toy_CBmyCrujff_s=w_sig->pdf("CBmyCrujff_s")->Clone("toy_CBmyCrujff_s");
  RooAddPdf* toy_bkg_s=w_bg->pdf("my_add_s")->Clone("toy_bkg_s");
  
  //      w_sig->var("CBC_mean")->setConstant(kTRUE);
  //w_sig->var("CBC_sigma")->setConstant(kTRUE);
  //w_sig->var("CBC_alphaC")->setConstant(kTRUE);
  //w_sig->var("CBC_alphaCB")->setConstant(kTRUE);
  //w_sig->var("CBC_n")->setConstant(kTRUE);
  
  w_bg->var("cbalpha_s")->setConstant(kTRUE);
  w_bg->var("cbmean")->setConstant(kTRUE);
  w_bg->var("cbn_s")->setConstant(kTRUE);
  w_bg->var("cbsigma")->setConstant(kTRUE);
  w_bg->var("frac_s")->setConstant(kTRUE);
  w_bg->var("gaussmean")->setConstant(kTRUE);
  w_bg->var("gausssigma")->setConstant(kTRUE);
  
  
  RooExtendPdf esig("esig","extended signal p.d.f",*toy_CBmyCrujff_s,toy_nsig); 
  RooExtendPdf ebkg("ebkg","extended bkg p.d.f",*toy_bkg_s,toy_nbkg); 
  
  RooAddPdf  toy_model("toy_model","sig+bkg toy fit model",RooArgList(ebkg,esig)) ;
  
  for (int i=0; i<1;++i)
    {
      RooDataSet* toy=model->generate(*mass,10000);

      //fit
      RooFitResult* result;
      //unbinned
      result =  esig.fitTo(*toy,  RooFit::Extended(kTRUE), RooFit::SumW2Error(kFALSE) , RooFit::Range("fitRange"));
      //      result =  toy_model.fitTo(*toy, RooFit::Range("fitRange"),  RooFit::Extended(kTRUE), RooFit::SumW2Error(kFALSE) );

        toy->plotOn(p);
        toy_model.plotOn(p,RooFit::LineColor(kCyan),RooFit::Normalization(1.0,RooAbsReal::RelativeExpected)) ;
        p->Draw();
      
      for (int j=0;j<5;++j)
	{
// 	  char name[50];
// 	  sprintf(name,"toy_%s",myVars[j].c_str());
	  //	  std::cout << name << std::endl;
	  //       name=myVars[0].c_str();
	  //       printf("%s",name); 
	  RooRealVar* var=(RooRealVar*) w_sig->var(myVars[j].c_str());
	  if (var->getError()>0)
	    pull[j]->Fill((var->getVal()-origParameters[j]->getVal())/var->getError());
	}
      nSig.Fill(toy_nsig.getVal());
    }
  

  
  TFile out("toys.root","RECREATE");
  for (int i=0;i<5;++i)
    pull[i]->Write();
  nSig.Write();
  out->Write();
  out->Close();

}
