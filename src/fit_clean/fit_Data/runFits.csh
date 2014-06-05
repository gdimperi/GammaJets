#!/bin/tcsh

echo "sono nello script"

#set rundir = "/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/fit_clean/Pull/"
set rundir = "/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/fit_clean/fit_Data/"

cd $rundir

echo "sono in `pwd`"


eval `scramv1 runtime -csh`

echo "ambiente ora"
env

#commando da eseguire
#bsub -q cmsshort -oo logfile.log python ${rundir}pull.py


#python ${rundir}fitData.py --config 2 --inputdir ../fit_FPR/ --inputdir_sig ../fit_FPR/ --outdir fitData_weightedDataCS_FPR_config2/ --isFPR 1
python ${rundir}fitData.py --config 3 --inputdir ../template_nonParam_FPR/ --inputdir_sig ../fit_FPR/ --outdir fitData_nonParam_FPR_config3/ --isFPR 1
