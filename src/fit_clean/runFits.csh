#!/bin/tcsh

echo "sono nello script"

#set rundir = "/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/fit_clean/Pull/"
set rundir = "/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/fit_clean/"

echo "cd $rundir"
cd $rundir

echo "sono in `pwd`"

eval `scramv1 runtime -csh`

#echo "ambiente ora"
#env

#commando da eseguire
#python ${rundir}fit.py --outdir fit_FPR/ --isFPR 1 --isoWeight 0
python ${rundir}fit.py --outdir template_signalMC_EB/ --isEB 1 
