#!/bin/tcsh

echo "sono nello script"

set rundir = "/afs/cern.ch/work/g/gdimperi/GammaJet/giulia_repo/CMSSW_5_3_14/src/GammaJets/src/fit_clean/Pull"

cd $rundir

echo "sono in `pwd`"

cmsenv

echo "ambiente ora"
env

#commando da eseguire
#python pull.py
