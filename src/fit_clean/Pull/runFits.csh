#!/bin/tcsh

echo "sono nello script"

#set rundir = "/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/fit_clean/Pull/"
set rundir = "/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/fit_clean/Pull/"

cd $rundir

echo "sono in `pwd`"


eval `scramv1 runtime -csh`

echo "ambiente ora"
env

#commando da eseguire
#bsub -q cmsshort -oo logfile.log python ${rundir}pull.py


python ${rundir}pull.py --config 4 --inputdir ../fit_FPR/ --outdir pull_weightedDataCS_FPR_config4/
