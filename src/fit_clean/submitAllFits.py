#! /usr/bin/env python

import os
import sys
import optparse

# ./submitAllGJets.py
# hardcoded: R9 weight, to be modified below in command

parser = optparse.OptionParser("submitAllGJetsID.py")
parser.add_option('-q', '--queue',       action='store',     dest='queue',       help='run in batch in queue specified as option (default -q cmsan)', default='cmsan')
parser.add_option('-i', '--interactive',      action='store_true',dest='interactive',      help='run the jobs interactively, 2 jobs at a time'                  , default=False)
(opt, args) = parser.parse_args()

ismc = [0,1]

#ptbins = [40]
#ptbins = [40,47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480]
ptbins = [40,65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270 ]

#wantedSel = ["EB","EE"]

os.system("mkdir -p batch")
pwd = os.environ['PWD']

#for est in wantedSel:
for bin in range(0,len(ptbins)):
#for bin in range(0,51):
            
    print "running this bin: "+str(bin+1)
    # chiara: no R9 weight
    # if imc: command = "cmsRun "+pwd+"/PhysicsTools/TagAndProbe/test/testTP_GammaJetEff_Templates_ID.py "+est+" "+str(imc)+" "+bin+" 0 1"   
    # else: command = "cmsRun "+pwd+"/PhysicsTools/TagAndProbe/test/testTP_GammaJetEff_Templates_ID.py "+est+" "+str(imc)+" "+bin+" 0 0"     
    # chiara: si' R9 weight
    command = "python "+pwd+"/fit.py --isFPR 1 --isEB 0 --outdir "+pwd+"/template_signal_dataZee_nonParam_isoW_FPR/ --bin "+str(bin+1)
    print "submit "+command
    logfile = "logfile_EE_bin_"+str(bin+1)+".log"
    outputname = "batch/submit_EE_bin_"+str(bin+1)+".src"
    outputfile = open(outputname,'w')
    outputfile.write('#!/bin/bash\n')
    outputfile.write('export SCRAM_ARCH=slc5_amd64_gcc462\n')
    outputfile.write('cd /cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/fit_clean/ \n')
    outputfile.write('eval `scramv1 runtime -sh`\n')
    #outputfile.write('cd $WORKDIR\n')
    #outputfile.write('scp '+pwd+'/test/* ./ \n')
    outputfile.write(command+"\n")
    #outputfile.write('cp ok*.root '+pwd+'/\n') 
    print outputname 
    if opt.interactive==False:
        os.system("bsub -q "+opt.queue+" -o batch/"+logfile+" source "+pwd+"/"+outputname)
    else:
        print logfile
        if imc==0: os.system(command+" >&! "+logfile+"&")
        else: os.system(command+" >&! "+logfile)

