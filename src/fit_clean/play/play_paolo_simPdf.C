{
  gROOT->ProcessLine(".L RooCBmyCrujff.cxx+");

  TFile wsig("workspace_fit_EB_sig_WP095_pt40_65.root");
  RooWorkspace* w_sig=(RooWorkspace*)wsig->Get("w_sig");
  TFile wbkg("workspace_fit_EB_bg_WP095_pt40_65.root");
  RooWorkspace* w_bg=(RooWorkspace*)wbkg->Get("w_bg");

  w_sig->Print();
  w_bg->Print();


  float bkg_s_true_frac=0.4;
  float nevents=5000;

  RooRealVar bkg_frac("bkg_frac","fraction of background",bkg_s_true_frac);
  RooRealVar bkg_frac_r("bkg_frac_r","fraction of background",0.996);
  RooAddPdf  model("full model","sig+bkg",*w_bg->pdf("my_add_s"),*w_sig->pdf("CBmyCrujff_s"),bkg_frac);
  RooAddPdf  model_r("full model_r","sig+bkg _r",*w_bg->pdf("my_add_s"),*w_sig->pdf("CBmyCrujff_s"),bkg_frac_r);
   
  RooRealVar* mass=w_sig->var("combinedPfIso03Phot");
  mass->setBins(121);
  mass->setRange("fitRange",-5.,15.);


  std::string myVars[6];
  myVars[0]="CBC_mean";
  myVars[1]="CBC_sigma";
  myVars[2]="CBC_alphaC";
  myVars[3]="CBC_alphaCB";
  myVars[4]="CBC_n";
  myVars[5]="bkg_frac";

  RooRealVar* origParameters[6];
  for (int i=0;i<5;++i)
    origParameters[i]=(RooRealVar*)w_sig->var(myVars[i].c_str())->clone(Form("orig_%s",myVars[i].c_str()));
  origParameters[5]=(RooRealVar*)bkg_frac.clone(Form("orig_%s",myVars[5].c_str()));

  origParameters[0]->setVal(-8.9839e-01);
  origParameters[1]->setVal(1.0502);
  origParameters[3]->setRange(-10,10);
  origParameters[3]->setVal(-1.0262);
  origParameters[4]->setVal(4.3225);

  TH1F* pull[6];
  for (int i=0;i<6;++i)
    pull[i]=new TH1F(Form("%s_pull",myVars[i].c_str()),Form("%s_pull",myVars[i].c_str()),200,-5.,5.);

//   TH1F* val[6];
//   for (int i=0;i<6;++i)
//     val[i]=new TH1F(Form("%s_val",myVars[i].c_str()),Form("%s_val",myVars[i].c_str()),200,-5.,5.);

  TH1F* err[6];
  for (int i=0;i<6;++i)
    err[i]=new TH1F(Form("%s_err",myVars[i].c_str()),Form("%s_err",myVars[i].c_str()),1000,0.,1.);


  TH1F chi2("chi2","chi2",400,0.,10.);
  TH1F probchi2("probchi2","probchi2",400,0.,1.);

  TH1F nSigPull("nSigPull","nSigPull",200,-5,5.);
   TCanvas* c=new TCanvas("c","c",900,600);
   c->Divide(2,1);

   //   c->SetLogy();
   for (int i=0; i<500;++i)
     {
       std::cout << "********************************************" << std::endl;
       std::cout << "***************   TOY " << i+1 << "    *****************" << std::endl;
       std::cout << "********************************************" << std::endl;

       //////////////////////////////////////////
       //Signal 
       //////////////////////////////////////////
       
       //       toy_CBC_alphaCB   -1.0262e+00 +/-  2.17e-02
       //          toy_CBC_mean   -8.9839e-01 +/-  9.84e-03
       //             toy_CBC_n    4.3225e+00 +/-  2.14e-01
       //         toy_CBC_sigma    1.0502e+00 +/-  7.52e-03

       RooRealVar toy_CBC_mean("toy_CBC_mean", "toy_CBC_mean", -8.9839e-01 , -2, 3.);
       RooRealVar toy_CBC_sigma("toy_CBC_sigma", "toy_CBC_sigma", 1.0502e+00, 0., 3.);
       RooRealVar toy_CBC_alphaC("toy_CBC_alphaC", "toy_CBC_alphaC", w_sig->var("CBC_alphaC")->getVal(), 0., 3.);
       RooRealVar toy_CBC_alphaCB("toy_CBC_alphaCB", "toy_CBC_alphaCB", -1.0262, -4., 0.);
       RooRealVar toy_CBC_n("toy_CBC_n", "toy_CBC_n", 4.322, 0., 100.);
       //   RooRealVar toy_CBC_mean("toy_CBC_mean", "toy_CBC_mean", w_sig->var("CBC_mean")->getVal(), -2, 3.);
       //   RooRealVar toy_CBC_sigma("toy_CBC_sigma", "toy_CBC_sigma", w_sig->var("CBC_sigma")->getVal(), 0., 3.);
       //   RooRealVar toy_CBC_alphaC("toy_CBC_alphaC", "toy_CBC_alphaC", w_sig->var("CBC_alphaC")->getVal(), 0., 3.);
       //   RooRealVar toy_CBC_alphaCB("toy_CBC_alphaCB", "toy_CBC_alphaCB", -w_sig->var("CBC_alphaCB")->getVal(), -4., 0.);
       //   RooRealVar toy_CBC_n("toy_CBC_n", "toy_CBC_n", w_sig->var("CBC_n")->getVal(), 0., 100.);
       
       
       //  RooCBmyCrujff toy_CBmyCrujff_s("toy_CBmyCrujff_s", "toy_CBmyCrujff_s", *mass, toy_CBC_mean, toy_CBC_sigma, toy_CBC_alphaC, toy_CBC_alphaCB, toy_CBC_n);
       RooCBShape toy_sig_s("toy_CBmyCrujff_s", "toy_CBmyCrujff_s", *mass, toy_CBC_mean, toy_CBC_sigma, toy_CBC_alphaCB, toy_CBC_n);
       //RooCBmyCrujff* toy_CBmyCrujff_s=w_sig->pdf("CBmyCrujff_s")->Clone("toy_CBmyCrujff_s");
       
       
       //////////////////////////////////////////
       //Background
       //////////////////////////////////////////
       
       RooRealVar toy_gaussmean("toy_gaussmean","toy_gaussmean", w_bg->var("gaussmean")->getVal(), -3., 1.);
       RooRealVar toy_gausssigma("toy_gausssigma", "toy_gausssigma", w_bg->var("gausssigma")->getVal(), 0., 5.);
       RooRealVar toy_cbmean("toy_cbmean", "toy_cbmean", w_bg->var("cbmean")->getVal(), -1., 4.);
       RooRealVar toy_cbsigma("toy_cbsigma", "toy_cbsigma", w_bg->var("cbsigma")->getVal(), 1., 6.);
       RooRealVar toy_cbalpha_s("toy_cbalpha_s", "toy_cbaplha_s", w_bg->var("cbalpha_s")->getVal(), -5., 0.);
       RooRealVar toy_cbn_s("toy_cbn_s","toy_cbn_s",w_bg->var("cbn_s")->getVal(), 0., 500.);
       RooRealVar toy_frac_s("toy_frac_s", "toy_frac_s",w_bg->var("frac_s")->getVal(), 0., 1.);
       
       //adding gauss to cb for both fit regions
       RooCBShape toy_my_cb_s("toy_my_cb_s", "toy_my_cb_s",  *mass, toy_cbmean, toy_cbsigma, toy_cbalpha_s, toy_cbn_s);
       RooGaussian toy_my_gauss_s("toy_my_gauss_s", "toy_my_gauss_s", *mass, toy_gaussmean, toy_gausssigma);
       RooAddPdf toy_bkg_s("toy_my_add_s", "toy_my_add_s", toy_my_cb_s, toy_my_gauss_s, toy_frac_s);
       
       //  RooAddPdf* toy_bkg_s=w_bg->pdf("my_add_s")->Clone("toy_bkg_s");
       
       //////////////////////////////////////////
       //Composite Model
       //////////////////////////////////////////
       RooRealVar toy_ntot("ntot","number of signal events in signalRange",10000,0.,999999);
       //   RooRealVar toy_nsig("nsig","number of signal events in signalRange",10000,0.,999999);
       RooRealVar toy_nbkg_r("nbkg_r","number of bkg events in signalRange",300,0.,999999);
       
       RooRealVar toy_bkg_frac("toy_bkg_frac","toy_bkg_frac",0.5,0.,1.);
       
       RooArgSet sigVars(toy_CBC_mean,toy_CBC_sigma,toy_CBC_alphaC,toy_CBC_alphaCB,toy_CBC_n);
       RooArgSet bkgVars(toy_gaussmean,toy_gausssigma,toy_cbmean,toy_cbsigma,toy_cbalpha_s,toy_cbn_s,toy_frac_s);
       RooArgSet fitVars(toy_bkg_frac);
       fitVars.add(sigVars);
       fitVars.add(bkgVars);
       
       
       //   RooExtendPdf esig("esig","extended signal p.d.f",toy_CBmyCrujff_s,toy_nsig); 
       //   RooExtendPdf ebkg("ebkg","extended bkg p.d.f",toy_bkg_s,toy_nbkg); 
       
       
       
       //    toy_CBC_mean.setConstant(kTRUE);
       //    toy_CBC_sigma.setConstant(kTRUE);
       //    toy_CBC_alphaC.setConstant(kTRUE);
       //    toy_CBC_alphaCB.setConstant(kTRUE);
       //    toy_CBC_n.setConstant(kTRUE);
       
       // toy_cbalpha_s.setConstant(kTRUE);
       // toy_cbmean.setConstant(kTRUE);
       toy_cbn_s.setConstant(kTRUE);
       // toy_cbsigma.setConstant(kTRUE);
       // toy_frac_s.setConstant(kTRUE);
       // toy_gaussmean.setConstant(kTRUE);
       // toy_gausssigma.setConstant(kTRUE);
       
       //   toy_bkg_frac.setConstant(kTRUE);
       std::cout << "Adding constraints" << std::endl;
       RooGaussian constrain_CBC_alphaCB("constrain_CBC_alphaCB","constrain_CBC_alphaCB",toy_CBC_alphaCB,RooFit::RooConst(-1.0262),RooFit::RooConst(2.17e-02)) ;
       constrain_CBC_alphaCB.Print();
       RooGaussian constrain_CBC_n("constrain_CBC_n","constrain_CBC_n",toy_CBC_n,RooFit::RooConst(4.3225),RooFit::RooConst(2.14e-01)) ;
       constrain_CBC_n.Print();
       RooGaussian constrain_cbalpha_s("constrain_cbalpha_s","constrain_cbalpha_s",toy_cbalpha_s,RooFit::RooConst( w_bg->var("cbalpha_s")->getVal() ),RooFit::RooConst(  w_bg->var("cbalpha_s")->getError())) ;
       constrain_cbalpha_s.Print();
//        RooGaussian constrain_cbn_s("constrain_cbn_s","constrain_cbn_s",toy_cbn_s,RooFit::RooConst( w_bg->var("cbn_s")->getVal() ),RooFit::RooConst( w_bg->var("cbn_s")->getError())) ;
//        constrain_cbn_s.Print();
       RooGaussian constrain_frac_s("constrain_frac_s","constrain_frac_s",toy_frac_s,RooFit::RooConst( w_bg->var("frac_s")->getVal() ),RooFit::RooConst(  w_bg->var("frac_s")->getError())) ;
       constrain_frac_s.Print();
       RooArgList constraints(constrain_CBC_alphaCB,constrain_CBC_n,constrain_cbalpha_s,constrain_frac_s);
       constraints.Print();

       //  RooRealSumPdf  toy_model("toy_model","sig+bkg toy fit model",RooArgList(toy_bkg_s,toy_CBmyCrujff_s), RooArgList(toy_bkg_frac,toy_sig_frac)) ;
       
       RooAddPdf  toy_model("toy_model","sig+bkg toy fit model",RooArgList(toy_bkg_s,toy_sig_s), RooArgList(toy_bkg_frac)) ;

       RooArgList toy_model_pdfs(toy_model);
       toy_model_pdfs.add(constraints);
       RooProdPdf toy_model_c("toy_model_c","toy_model with constraints",toy_model_pdfs);

       RooArgList toy_bkg_s_pdfs(toy_bkg_s);
       toy_bkg_s_pdfs.add(constraints);
       RooProdPdf toy_bkg_s_c("toy_bkg_s_c","toy_model bkg with constraints",toy_bkg_s_pdfs);

       RooExtendPdf toy_model_ext("toy_model_ext","extended model p.d.f",toy_model_c,toy_ntot); 
       RooExtendPdf toy_bkg_r_ext("toy_model_r_ext","extended model p.d.f",toy_bkg_s_c,toy_nbkg_r);        

       RooCategory sample("sample","sample");
       sample.defineType("scut");
       sample.defineType("rcut"); 
       
       RooSimultaneous simPdf("simPdf", "simultaneous pdfs, scut and rcut", sample);
       simPdf.addPdf(toy_model_ext, "scut");
       simPdf.addPdf(toy_bkg_r_ext, "rcut");
       
       
       
       RooDataSet* toy=model.generate(*mass,RooRandom::randomGenerator()->Poisson(nevents));
       RooDataSet* toy_rcut=model_r.generate(*mass,RooRandom::randomGenerator()->Poisson(nevents*2));
       
       RooDataSet toy_full("toy_full","toy_full",*mass,  RooFit::Index(sample), RooFit::Import("scut", *toy), RooFit::Import("rcut", *toy_rcut));
       RooDataHist* toy_binned=toy->binnedClone("toy_binned");
       
       //fit
       RooFitResult* result;
       //unbinned
       //result =  esig.fitTo(*toy,  RooFit::Extended(kTRUE), RooFit::SumW2Error(kFALSE) , RooFit::Range("fitRange"));
       //      result=toy_model_ext.fitTo(*toy, RooFit::Save(),  RooFit::Range("fitRange"), RooFit::Extended(kTRUE), RooFit::NumCPU(4), RooFit::Timer(kTRUE));
      //result=toy_model_ext.fitTo(*toy, RooFit::Save(),  RooFit::Range("fitRange"), RooFit::Extended(kTRUE), RooFit::NumCPU(4), RooFit::Timer(kTRUE));
       result=simPdf.fitTo(toy_full, RooFit::Save(),  RooFit::Range("fitRange"), RooFit::Extended(kTRUE), RooFit::NumCPU(4), RooFit::Timer(kTRUE));
       // result =  toy_bkg_s.fitTo(*toy,  RooFit::Extended(kTRUE), RooFit::SumW2Error(kFALSE) , RooFit::Range("fitRange"));
       
       if (i<1)
	 {
	   c->cd(1)->SetLogy(0);
	   c->cd(2)->SetLogy(0);
	   c->cd(1);
	   RooPlot* p=mass->frame(121);
	   RooPlot* p1=mass->frame(121);
	   //p->SetMinimum(0.0001);
	   toy_full.plotOn(p, RooFit::Cut("sample==sample::scut"), RooFit::Name("toy_scut"));
	   simPdf.plotOn(p, RooFit::Name("pdf_s"), RooFit::LineColor(kRed),RooFit::Slice(sample,"scut"),RooFit::ProjWData(sample,toy_full)) ;
	   simPdf.plotOn(p, RooFit::Name("pdf_s_sig"), RooFit::LineColor(kMagenta),RooFit::Slice(sample,"scut"),RooFit::ProjWData(sample,toy_full),  RooFit::Components("toy_CBmyCrujff_s")) ;
	   //  	  toy->plotOn(p);
	   //  	  toy_model_ext.plotOn(p,RooFit::LineColor(kRed), RooFit::NormRange("fitRange")) ;
	   //      //	toy_bkg_s.plotOn(p,RooFit::LineColor(kRed), RooFit::NormRange("fitRange")) ;
	   //      //esig.plotOn(p,RooFit::LineColor(kCyan),RooFit::Normalization(1.0,RooAbsReal::RelativeExpected)) ;
	   p->Draw();
	   c->cd(2);
	   toy_full.plotOn(p1, RooFit::Cut("sample==sample::rcut"), RooFit::Name("toy_rcut"));
	   simPdf.plotOn(p1, RooFit::Name("pdf_r"), RooFit::LineColor(kRed),RooFit::Slice(sample,"rcut"),RooFit::ProjWData(sample,toy_full)) ;
	   simPdf.plotOn(p1, RooFit::Name("pdf_r_gauss"), RooFit::LineColor(kBlue),RooFit::Slice(sample,"rcut"),RooFit::ProjWData(sample,toy_full),  RooFit::Components("toy_my_gauss_s")) ;
	   simPdf.plotOn(p1, RooFit::Name("pdf_r_cb"), RooFit::LineColor(kGreen),RooFit::Slice(sample,"rcut"),RooFit::ProjWData(sample,toy_full),  RooFit::Components("toy_my_cb_s")) ;
	   p1->Draw();
	   c->SaveAs(Form("toyFit_%d.png",i));
	   c->cd(1)->SetLogy(1);
	   c->cd(2)->SetLogy(1);
	   c->SaveAs(Form("toyFit_log_%d.png",i));
	   // 	  c->SetLogy(0);
	   delete p;
	   delete p1;
	 }
       
       //getChi2
       RooChi2Var _chi2("_chi2","_chi2",toy_model_ext,*toy_binned);
       std::cout <<"++++ CHI2 +++ " <<  _chi2.getVal() << std::endl;
       
       result->Print();
       chi2.Fill(_chi2.getVal() /  ( mass->getBins() - result->floatParsFinal().getSize()) );
       probchi2.Fill(TMath::Prob(_chi2.getVal() , mass->getBins() - result->floatParsFinal().getSize()) ) ;
       for (int j=0;j<6;++j)
	 {
	   char name[50];
	   sprintf(name,"toy_%s",myVars[j].c_str());
	   //	  std::cout << name << std::endl;
	   //       name=myVars[0].c_str();
	   //       printf("%s",name); 
	   RooRealVar* var=(RooRealVar*)fitVars->find(name);
	   if (var->getError()>0)
	     {
	       var->Print();
	       origParameters[j]->Print();
	       //	      std::cout << name << " " << var->getVal() << "," << origParameters[j]->getVal() << "," << (var->getVal()-origParameters[j]->getVal())/var->getError() << "," << var->getError() << std::endl;
	       pull[j]->Fill((var->getVal()-origParameters[j]->getVal())/var->getError());
	       if (j!=5)
		 err[j]->Fill(TMath::Abs(var->getError()/var->getVal()));
	       else
		 err[j]->Fill(TMath::Abs(var->getError()/(1-var->getVal())));
	     }
	   
	 }

       RooFormulaVar nSigFit("nSigFit","nSigFit","@0*(1-@1)",RooArgList(toy_ntot,toy_bkg_frac));
       std::cout << "FINAL FITTED NUMBER OF SIGNAL EVENTS "  << nSigFit.getVal() << "+/-" << nSigFit.getPropagatedError(*result) << std::endl;
       nSigPull.Fill((nSigFit.getVal()-(nevents*(1-bkg_s_true_frac)))/nSigFit.getPropagatedError(*result));
       //       nSigFit.Print();
       delete toy;
       delete toy_binned;
       delete toy_rcut;
       delete result;
      
     }

   TFile out("toys.root","RECREATE");
   for (int i=0;i<6;++i)
     {
       pull[i]->Write();
       err[i]->Write();
     }
   chi2.Write();
   probchi2.Write();
   nSigPull.Write();
   //   nSig.Write();
   out->Write();
   out->Close();
   std::cout << " Bye Bye " << std::endl; 

}
