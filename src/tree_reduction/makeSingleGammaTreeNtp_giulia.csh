#!/bin/tcsh
# $Id: makeRedNtp.csh,v 1.34 2012/09/27 15:16:42 meridian Exp $

# change if needed
set castordir = /castor/cern.ch/user/g/gdimperi/Higgs/reduced

set photonIDweights_EB = /afs/cern.ch/user/m/meridian/public/photonIDweights/TMVA_EBpf_BDT.weights.xml
set photonIDweights_EE = /afs/cern.ch/user/m/meridian/public/photonIDweights/TMVA_EEpf_BDT.weights.xml
set preselections      = ( cicpfloose cicpfloosenoeleveto cicpfmedium cicpftight cicpfsuper cicpfhyper mcass preselectionMVA preselectionMVAnoeleveto)

if($#argv == 0 || $#argv < 5 || $#argv > 8 ) then
  echo "usage: makeSingleGammaTreeNtp.csh <inlist> <outdir> <pre-selection> <location> <run if 1> <jsonfile> <puweight> <energy correction/smearing>"
  echo "       inlist: valid directory containing list files OR valid list file"
  echo "       outdir: will be created in current directory in rome or on castor at cern"
  echo "               check |castordir| at the beginning of script"
  echo "       preselection:  $preselections"
  echo "       locations: cern roma eth"
  echo "       run: default=0  set to 1 to execute"
  echo "       jsonfile: optional json to select good RUN_LS"
  echo "       puweight: optional file for puweight"
  echo "       energy correction file"
  exit 0
endif

# submit the job only if the 2nd argument is 1
set listdir  = list.V27.41x 
if ($#argv > 0) then
  set listdir = $1
  if(-f $listdir) then
       echo "<$listdir> is a single file"
  else if( -d $listdir ) then
       echo "<$listdir> is a directory"
   else 
    exit -1
  endif
endif 

set outdir = ""
if ($#argv > 1) then
  set outdir = $2
  echo "outdir : $outdir "
endif 

setenv selection  ""
if ($#argv > 2) then
  setenv selection  $3
  set found = 0
  foreach i  ( $preselections )
    if( $selection == $i ) set found = 1
  end
  if($found == 0) then
    echo "bad preselection <$selection>. Choose from $preselections"
    exit -1
  end
  echo "selection : $selection "
endif 

# location: roma or cern or eth
set location = ""
if ($#argv > 3) then
  set location = $4
  echo "location : $location "
  if( $location != roma && $location != cern && $location != eth) then
    echo "bad location. options: roma or cern or eth"
    exit -1
endif 

set run = 0
if ($#argv > 4) then
  set run = $5
  echo "run : $run "
endif 

set json = -1
if ($#argv > 5) then
  set json = $6
  echo "json : $json "
endif 

set puweight = -1
if ($#argv > 6) then
  set puweight = $7
  echo "puweight : $puweight "
endif 

set energyCorrection = -1
if ($#argv > 7) then
  set energyCorrection = $8
  echo "energyCorrection: ${energyCorrection}"
endif 

echo "------   ready ro run at $location ------------------"

# logfiles always stored locally
set logdir = "$PWD/log/$outdir"
if($run == 1) mkdir -p $logdir

# choose queue, location based on location
if ($location == "cern" ) then
  set queue = 8nh
  set outdir = $castordir/$outdir
  set prefix = ""
  echo "chiara: " $outdir
  #if($run == 1) rfmkdir $outdir  # chiara
  echo "$outdir created on castor"
else if ($location == "roma" ) then
  set queue = "cmsshort"
  set outdir = ./$outdir
  set prefix = ""
  if($run == 1) mkdir -p $outdir
else if ($location == "eth" ) then
  set queue = "short.q"
  set outdir = $outdir
  set prefix = ""
  if($run == 1) mkdir -p $outdir
endif 

echo "queue : $queue "
echo "output files: $outdir"
echo "log files: $logdir"
echo "pre-selection: $selection"

# app to run
set app = ./tmp/singlegammaApp_giulia

if(! -e $app ) then
  echo "missing executable $app"
  exit 0
endif 

## if listdir is one file only
if(-f $listdir) then
   set sample  = `echo $listdir  | awk  'BEGIN{FS="/"}{print $NF}' | awk 'BEGIN{FS="."}{print $1}'`
   set listdir = `echo $listdir  | awk  'BEGIN{FS="/"}{print $1}'`
   setenv listfile $listdir
   setenv rootfile "${prefix}${outdir}/redntp_${sample}.root"
   set jobname = "${sample}"
   set logfile = "${logdir}/${sample}.txt"
   set logerrfile = "${logdir}/${sample}_err.txt"
   set listfile = "${listdir}/${sample}.list"

   if ($location == "cern" || $location == "roma") then  
     set command = "bsub -q ${queue} -o $logfile -J ${jobname} scriptSingleGamma_giulia.sh ${PWD} ${PWD}/${listfile} ${rootfile} ${selection} ${json} ${puweight} ${energyCorrection} ${photonIDweights_EB} ${photonIDweights_EE}"
   else if ($location == "eth" ) then
     set command = "qsub -q ${queue} -o $logfile -e $logerrfile scriptSingleGamma_giulia.sh ${PWD} ${PWD}/${listfile} ${rootfile} ${selection} ${json} ${puweight} ${energyCorrection} ${photonIDweights_EB} ${photonIDweights_EE}"
   endif  

   echo "---------------------------"
   echo "job name: ${jobname}"
   echo " command: ${command}"
   if($run == 1) then
     ${command}
   endif

  ## if input is a directory
else if(-d $listdir) then
  foreach i ( `/bin/ls -1 ${listdir} | grep ".list" | awk 'BEGIN{FS="."}{print $1}' | xargs  -I sample echo sample ` )
   set  sample = $i
   echo "sample : $sample"

   if( "`echo $sample | egrep -e "^G_Pt_"`XXX" != "XXX" ) then
     echo "skipping $sample"
     continue
   endif

   setenv rootfile "${prefix}${outdir}/redntp_${sample}.root"
   set jobname = "${sample}"
   set logfile = "${logdir}/${sample}.txt"
   set logerrfile = "${logdir}/${sample}_err.txt"
   setenv listfile  "${listdir}/${sample}.list"

   if ($location == "cern" || $location == "roma") then  
     set command = "bsub -q ${queue} -o $logfile -J ${jobname} scriptSingleGamma_giulia.sh ${PWD} ${PWD}/${listfile} ${rootfile} ${selection} ${json} ${puweight} ${energyCorrection} ${photonIDweights_EB} ${photonIDweights_EE}"
   else if ($location == "eth" ) then
     set command = "qsub -q ${queue} -o $logfile -e $logerrfile scriptSingleGamma_giulia.sh ${PWD} ${PWD}/${listfile} ${rootfile} ${selection} ${json} ${puweight} ${energyCorrection} ${photonIDweights_EB} ${photonIDweights_EE}"
   endif  

   echo "---------------------------"
   echo "job name: ${jobname}"
   echo " command: ${command}"
   if($run == 1) then
     ${command}
   endif


  end

endif