function runtlccmd
% RUNTLCCMD - run tlc command (regenerate C code from .rtw file) for model FuzzyNeuro
% This function will run the tlc command stored in the variable 
% "tlccmd" in tlccmd.mat, whose contents is as follows:
% 
% 	tlc
% 	-r
% 	D:\ATP\3Tank\WS1516\HiWi\Versuch B1 - 3-Tank-System\FuzzyNeuro_rti1104\FuzzyNeuro.rtw
% 	C:\dSPACE RCPHIL 7.2\matlab\rti1104\tlc\rti1104.tlc
% 	-OD:\ATP\3Tank\WS1516\HiWi\Versuch B1 - 3-Tank-System\FuzzyNeuro_rti1104
% 	-IC:\dSPACE RCPHIL 7.2\matlab\rti1104\tlc
% 	-IC:\dSPACE RCPHIL 7.2\matlab\rti1104\tlc
% 	-ID:\ATP\3Tank\WS1516\HiWi\Versuch B1 - 3-Tank-System\FuzzyNeuro_rti1104\tlc
% 	-IC:\Program Files\MATLAB\R2011b\rtw\c\tlc\mw
% 	-IC:\Program Files\MATLAB\R2011b\rtw\c\tlc\lib
% 	-IC:\Program Files\MATLAB\R2011b\rtw\c\tlc\blocks
% 	-IC:\Program Files\MATLAB\R2011b\rtw\c\tlc\fixpt
% 	-IC:\Program Files\MATLAB\R2011b\stateflow\c\tlc
% 	-aFoldNonRolledExpr=1
% 	-aInlineInvariantSignals=0
% 	-aInlineParameters=0
% 	-aLocalBlockOutputs=0
% 	-aRollThreshold=5
% 	-aZeroInternalMemoryAtStartup=1
% 	-aZeroExternalMemoryAtStartup=1
% 	-aInitFltsAndDblsToZero=1
% 	-aForceBlockIOInitOptimize=0
% 	-aGenerateReport=0
% 	-aGenCodeOnly=0
% 	-aRTWVerbose=0
% 	-aIncludeHyperlinkInReport=0
% 	-aLaunchReport=0
% 	-aGenerateTraceInfo=0
% 	-aForceParamTrailComments=0
% 	-aGenerateComments=1
% 	-aIgnoreCustomStorageClasses=1
% 	-aIncHierarchyInIds=1
% 	-aMaxRTWIdLen=31
% 	-aShowEliminatedStatements=1
% 	-aIncDataTypeInIds=0
% 	-aInsertBlockDesc=0
% 	-aIgnoreTestpoints=0
% 	-aSimulinkBlockComments=1
% 	-aInlinedPrmAccess="Literals"
% 	-aTargetFcnLib="ansi_tfl_tmw.mat"
% 	-aIsPILTarget=0
% 	-aLogVarNameModifier="rt_"
% 	-aGenerateFullHeader=1
% 	-aExtMode=1
% 	-aExtModeStaticAlloc=0
% 	-aExtModeTesting=0
% 	-aExtModeStaticAllocSize=1000000
% 	-aExtModeTransport=0
% 	-aRTWCAPISignals=0
% 	-aRTWCAPIParams=0
% 	-aGenerateASAP2=0
% 	-aInitialSimState="RUN"
% 	-aExecutionMode="real-time"
% 	-aExecutionModeNonUI="RTSIM"
% 	-aTimeScaleFactor="1.0"
% 	-aTimeScaleFactorNonUI="OPTION_DISABLED"
% 	-aAssertionMode="OFF"
% 	-aTAStimulusEngineEnable=0
% 	-aCCompilerCommonOpts=""
% 	-aCCompilerOptimizationOptsPopup_="Default"
% 	-aCCompilerEffectiveOptimizationOpts="-Ot -Oi -Or -Ox -D_INLINE"
% 	-aCCompilerOptimizationOpts=""
% 	-aCCompilerOptimizationOptsNonUI="USE_DEFAULT"
% 	-aAllowReservedHostServiceNums=0
% 	-aLoadAfterBuild=1
% 	-aLoadToFlash=0
% 	-aLoadApplNonUI="ON"
% 	-aPlatformSelectionPopup="Auto"
% 	-aBoardName=""
% 	-aBoardNameNonUI="OPTION_DISABLED"
% 	-aTRCOnlyGlobals=0
% 	-aTRCGenerateLabels=1
% 	-aTRCGenerateVirtualBlocks=1
% 	-aTRCGenerateStates=0
% 	-aTRCGenerateDerivatives=0
% 	-aTRCApplySubsystemPermissions=0
% 	-aTRCGenerateParamValues=0
% 	-aTRCIsOmitVdOn=0
% 	-aGenerateTraceInfo=0
% 	-aIgnoreTestpoints=0
% 	-aProtectedModelReferenceTarget=0

   disp('This function will be obsoleted in a future release.') 
   mdl = 'FuzzyNeuro';

   sysopen = ~isempty(strmatch(mdl, find_system('type', 'block_diagram'), 'exact'));

   if ~sysopen

      disp([mfilename ': Error: model ' mdl ' is not open. Please open model ' mdl ' and then run ' mfilename ' again.']);

   else

      rtwprivate('rtwattic', 'setBuildDir', 'D:\ATP\3Tank\WS1516\HiWi\Versuch B1 - 3-Tank-System\FuzzyNeuro_rti1104');
      rtwprivate('ec_set_replacement_flag', 'FuzzyNeuro');
      load tlccmd.mat;
      savedpwd = pwd;
      cd ..;
      set_param(mdl,'MakeRTWSettingsObject', makertwObj);
      feval(tlccmd{:});
      set_param(mdl,'MakeRTWSettingsObject', []);
      rtwprivate rtwattic clean;
      cd(savedpwd);

   end
