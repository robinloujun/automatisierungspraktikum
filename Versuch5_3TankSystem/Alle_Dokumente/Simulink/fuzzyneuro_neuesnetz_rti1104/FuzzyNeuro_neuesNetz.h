/*
 * FuzzyNeuro_neuesNetz.h
 *
 * Code generation for model "FuzzyNeuro_neuesNetz.mdl".
 *
 * Model version              : 1.124
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Thu Nov 05 18:46:32 2015
 *
 * Target selection: rti1104.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_FuzzyNeuro_neuesNetz_h_
#define RTW_HEADER_FuzzyNeuro_neuesNetz_h_
#ifndef FuzzyNeuro_neuesNetz_COMMON_INCLUDES_
# define FuzzyNeuro_neuesNetz_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#endif                                 /* FuzzyNeuro_neuesNetz_COMMON_INCLUDES_ */

#include "FuzzyNeuro_neuesNetz_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define FuzzyNeuro_neuesNetz_rtModel   RT_MODEL_FuzzyNeuro_neuesNetz

/* Block states (auto storage) for system '<S8>/Action: u1' */
typedef struct {
  int8_T Actionu1_SubsysRanBC;         /* '<S8>/Action: u1' */
} rtDW_Actionu1_FuzzyNeuro_neuesN;

/* Block signals for system '<S24>/If Action Subsystem3' */
typedef struct {
  real_T xa;                           /* '<S30>/Sum' */
  real_T ba;                           /* '<S30>/Sum1' */
} rtB_IfActionSubsystem3_FuzzyNeu;

/* Block states (auto storage) for system '<S24>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S24>/If Action Subsystem3' */
} rtDW_IfActionSubsystem3_FuzzyNe;

/* Block signals for system '<S24>/If Action Subsystem2' */
typedef struct {
  real_T cb;                           /* '<S29>/Sum2' */
  real_T cx;                           /* '<S29>/Sum3' */
} rtB_IfActionSubsystem2_FuzzyNeu;

/* Block states (auto storage) for system '<S24>/If Action Subsystem2' */
typedef struct {
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S24>/If Action Subsystem2' */
} rtDW_IfActionSubsystem2_FuzzyNe;

/* Block signals for system '<S25>/If Action Subsystem3' */
typedef struct {
  real_T dc;                           /* '<S34>/Sum2' */
  real_T dx;                           /* '<S34>/Sum3' */
} rtB_IfActionSubsystem3_FuzzyN_c;

/* Block states (auto storage) for system '<S25>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S25>/If Action Subsystem3' */
} rtDW_IfActionSubsystem3_Fuzzy_l;

/* Block signals (auto storage) */
typedef struct {
  real_T i1;                           /* '<S6>/TP 5Hz' */
  real_T Product;                      /* '<S6>/Product' */
  real_T Sum;                          /* '<S6>/Sum' */
  real_T Diff1;                        /* '<Root>/Sum1' */
  real_T DataConv;                     /* '<S10>/DataConv' */
  real_T Merge;                        /* '<S25>/Merge' */
  real_T andorMethod;                  /* '<S14>/andorMethod' */
  real_T Weighting;                    /* '<S14>/Weighting' */
  real_T impMethod[101];               /* '<S14>/impMethod' */
  real_T Merge_c;                      /* '<S24>/Merge' */
  real_T andorMethod_p;                /* '<S15>/andorMethod' */
  real_T Weighting_e;                  /* '<S15>/Weighting' */
  real_T impMethod_e[101];             /* '<S15>/impMethod' */
  real_T Merge_g;                      /* '<S26>/Merge' */
  real_T andorMethod_e;                /* '<S16>/andorMethod' */
  real_T Weighting_f;                  /* '<S16>/Weighting' */
  real_T impMethod_k[101];             /* '<S16>/impMethod' */
  real_T AggMethod1[101];              /* '<S7>/AggMethod1' */
  real_T i1_n;                         /* '<S6>/TP 5Hz1' */
  real_T Product1;                     /* '<S6>/Product1' */
  real_T Sum1;                         /* '<S6>/Sum1' */
  real_T Diff2;                        /* '<Root>/Sum2' */
  real_T DataConv_n;                   /* '<S11>/DataConv' */
  real_T Merge_gx;                     /* '<S40>/Merge' */
  real_T andorMethod_l;                /* '<S17>/andorMethod' */
  real_T Weighting_i;                  /* '<S17>/Weighting' */
  real_T impMethod_d[101];             /* '<S17>/impMethod' */
  real_T Merge_j;                      /* '<S39>/Merge' */
  real_T andorMethod_b;                /* '<S18>/andorMethod' */
  real_T Weighting_j;                  /* '<S18>/Weighting' */
  real_T impMethod_h[101];             /* '<S18>/impMethod' */
  real_T Merge_m;                      /* '<S41>/Merge' */
  real_T andorMethod_i;                /* '<S19>/andorMethod' */
  real_T Weighting_es;                 /* '<S19>/Weighting' */
  real_T impMethod_d5[101];            /* '<S19>/impMethod' */
  real_T AggMethod2[101];              /* '<S7>/AggMethod2' */
  real_T Sum1_b;                       /* '<S8>/Sum1' */
  real_T Merge_b;                      /* '<S8>/Merge' */
  real_T Sum1_j;                       /* '<S9>/Sum1' */
  real_T Merge_p;                      /* '<S9>/Merge' */
  real_T viel[101];                    /* '<S12>/viel' */
  real_T viel_i[101];                  /* '<S13>/viel' */
  real_T TmpSignalConversionAtDotProduct[2];/* '<S59>/In2' */
  real_T DotProduct;                   /* '<S59>/Dot Product' */
  real_T DotProduct_j;                 /* '<S61>/Dot Product' */
  real_T DotProduct_d;                 /* '<S62>/Dot Product' */
  real_T DotProduct_m;                 /* '<S63>/Dot Product' */
  real_T DotProduct_c;                 /* '<S64>/Dot Product' */
  real_T DotProduct_d5;                /* '<S65>/Dot Product' */
  real_T DotProduct_k;                 /* '<S66>/Dot Product' */
  real_T DotProduct_j1;                /* '<S67>/Dot Product' */
  real_T DotProduct_g;                 /* '<S68>/Dot Product' */
  real_T DotProduct_a;                 /* '<S60>/Dot Product' */
  real_T netsum[10];                   /* '<S54>/netsum' */
  real_T Gain[10];                     /* '<S58>/Gain' */
  real_T Exp[10];                      /* '<S58>/Exp' */
  real_T Sum_m[10];                    /* '<S58>/Sum' */
  real_T Reciprocal[10];               /* '<S58>/Reciprocal' */
  real_T Gain1[10];                    /* '<S58>/Gain1' */
  real_T Sum1_i[10];                   /* '<S58>/Sum1' */
  real_T DotProduct_h;                 /* '<S72>/Dot Product' */
  real_T DotProduct_al;                /* '<S73>/Dot Product' */
  real_T netsum_a[2];                  /* '<S55>/netsum' */
  real_T MultiportSwitch[2];           /* '<Root>/Multiport Switch' */
  real_T SFunction[3];                 /* '<S89>/S-Function' */
  real_T SFunction_o;                  /* '<S77>/S-Function' */
  real_T SFunction_o3;                 /* '<S78>/S-Function' */
  real_T uq1Vorgabe;                   /* '<S5>/q1->uv1' */
  real_T Saturation;                   /* '<S5>/Saturation' */
  real_T uq2Vorgabe;                   /* '<S5>/q2->uv2' */
  real_T Saturation1;                  /* '<S5>/Saturation1' */
  real_T i1_e;                         /* '<S6>/TP 5Hz2' */
  real_T Product2;                     /* '<S6>/Product2' */
  real_T Sum2;                         /* '<S6>/Sum2' */
  real_T q1mess;                       /* '<Root>/um1->q1mess' */
  real_T q2mess;                       /* '<Root>/um2->q2mess' */
  real_T TotalFiringStrength;          /* '<S7>/Total Firing Strength' */
  real_T ZeroFiringStrength;           /* '<S7>/Zero Firing Strength?' */
  real_T Switch[2];                    /* '<S7>/Switch' */
  real_T ProductCOA[101];              /* '<S8>/Product (COA)' */
  real_T Sum_p;                        /* '<S8>/Sum' */
  real_T AveragingCOA;                 /* '<S8>/Averaging (COA)' */
  real_T ProductCOA_e[101];            /* '<S9>/Product (COA)' */
  real_T Sum_a;                        /* '<S9>/Sum' */
  real_T AveragingCOA_k;               /* '<S9>/Averaging (COA)' */
  boolean_T DataTypeConversion;        /* '<S4>/Data Type Conversion' */
  boolean_T DataTypeConversion1;       /* '<S4>/Data Type Conversion1' */
  boolean_T DataTypeConversion2;       /* '<S4>/Data Type Conversion2' */
  boolean_T DataTypeConversion3;       /* '<S4>/Data Type Conversion3' */
  boolean_T DataTypeConversion4;       /* '<S4>/Data Type Conversion4' */
  boolean_T DataTypeConversion5;       /* '<S4>/Data Type Conversion5' */
  boolean_T DataTypeConversion6;       /* '<S4>/Data Type Conversion6' */
  boolean_T DataTypeConversion7;       /* '<S4>/Data Type Conversion7' */
  rtB_IfActionSubsystem3_FuzzyN_c IfActionSubsystem3_n;/* '<S41>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_dr;/* '<S41>/If Action Subsystem1' */
  rtB_IfActionSubsystem3_FuzzyN_c IfActionSubsystem3_b;/* '<S40>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_d;/* '<S40>/If Action Subsystem1' */
  rtB_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_au;/* '<S39>/If Action Subsystem2' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_l;/* '<S39>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyN_c IfActionSubsystem3_c;/* '<S26>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_p;/* '<S26>/If Action Subsystem1' */
  rtB_IfActionSubsystem3_FuzzyN_c IfActionSubsystem3;/* '<S25>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1;/* '<S25>/If Action Subsystem1' */
  rtB_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_k;/* '<S24>/If Action Subsystem2' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_p;/* '<S24>/If Action Subsystem3' */
} BlockIO_FuzzyNeuro_neuesNetz;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int8_T If_ActiveSubsystem;           /* '<S25>/If' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S25>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S25>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_m;         /* '<S24>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_j;/* '<S24>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S24>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_p;         /* '<S26>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_n;/* '<S26>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanB_f;/* '<S26>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_j;         /* '<S40>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_p;/* '<S40>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanB_p;/* '<S40>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_g;         /* '<S39>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_g;/* '<S39>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_j;/* '<S39>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_h;         /* '<S41>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_e;/* '<S41>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanB_k;/* '<S41>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_jg;        /* '<S8>/If' */
  int8_T ActionOne_SubsysRanBC;        /* '<S8>/Action: One' */
  int8_T If_ActiveSubsystem_ja;        /* '<S9>/If' */
  int8_T ActionOne_SubsysRanBC_m;      /* '<S9>/Action: One' */
  rtDW_IfActionSubsystem3_Fuzzy_l IfActionSubsystem3_n;/* '<S41>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_dr;/* '<S41>/If Action Subsystem1' */
  rtDW_IfActionSubsystem3_Fuzzy_l IfActionSubsystem3_b;/* '<S40>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_d;/* '<S40>/If Action Subsystem1' */
  rtDW_IfActionSubsystem2_FuzzyNe IfActionSubsystem2_au;/* '<S39>/If Action Subsystem2' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem3_l;/* '<S39>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_Fuzzy_l IfActionSubsystem3_c;/* '<S26>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_p;/* '<S26>/If Action Subsystem1' */
  rtDW_IfActionSubsystem3_Fuzzy_l IfActionSubsystem3;/* '<S25>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1;/* '<S25>/If Action Subsystem1' */
  rtDW_IfActionSubsystem2_FuzzyNe IfActionSubsystem2_k;/* '<S24>/If Action Subsystem2' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem3_p;/* '<S24>/If Action Subsystem3' */
  rtDW_Actionu1_FuzzyNeuro_neuesN Actionu1_h;/* '<S9>/Action: u1' */
  rtDW_Actionu1_FuzzyNeuro_neuesN Actionu1;/* '<S8>/Action: u1' */
} D_Work_FuzzyNeuro_neuesNetz;

/* Continuous states (auto storage) */
typedef struct {
  real_T TP5Hz_CSTATE;                 /* '<S6>/TP 5Hz' */
  real_T TP5Hz1_CSTATE;                /* '<S6>/TP 5Hz1' */
  real_T TP5Hz2_CSTATE;                /* '<S6>/TP 5Hz2' */
} ContinuousStates_FuzzyNeuro_neu;

/* State derivatives (auto storage) */
typedef struct {
  real_T TP5Hz_CSTATE;                 /* '<S6>/TP 5Hz' */
  real_T TP5Hz1_CSTATE;                /* '<S6>/TP 5Hz1' */
  real_T TP5Hz2_CSTATE;                /* '<S6>/TP 5Hz2' */
} StateDerivatives_FuzzyNeuro_neu;

/* State disabled  */
typedef struct {
  boolean_T TP5Hz_CSTATE;              /* '<S6>/TP 5Hz' */
  boolean_T TP5Hz1_CSTATE;             /* '<S6>/TP 5Hz1' */
  boolean_T TP5Hz2_CSTATE;             /* '<S6>/TP 5Hz2' */
} StateDisabled_FuzzyNeuro_neuesN;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            FuzzyNeuro_neuesNetz_B
#define BlockIO                        BlockIO_FuzzyNeuro_neuesNetz
#define rtX                            FuzzyNeuro_neuesNetz_X
#define ContinuousStates               ContinuousStates_FuzzyNeuro_neu
#define rtP                            FuzzyNeuro_neuesNetz_P
#define Parameters                     Parameters_FuzzyNeuro_neuesNetz
#define rtDWork                        FuzzyNeuro_neuesNetz_DWork
#define D_Work                         D_Work_FuzzyNeuro_neuesNetz

/* Parameters for system: '<S24>/If Action Subsystem3' */
struct rtP_IfActionSubsystem3_FuzzyNeu_ {
  real_T a_Value;                      /* Expression: a
                                        * Referenced by: '<S30>/a'
                                        */
  real_T b_Value;                      /* Expression: b
                                        * Referenced by: '<S30>/b'
                                        */
};

/* Parameters for system: '<S24>/If Action Subsystem2' */
struct rtP_IfActionSubsystem2_FuzzyNeu_ {
  real_T b_Value;                      /* Expression: b
                                        * Referenced by: '<S29>/b'
                                        */
  real_T c_Value;                      /* Expression: c
                                        * Referenced by: '<S29>/c'
                                        */
};

/* Parameters for system: '<S25>/If Action Subsystem3' */
struct rtP_IfActionSubsystem3_FuzzyN_k_ {
  real_T c_Value;                      /* Expression: c
                                        * Referenced by: '<S34>/c'
                                        */
  real_T d_Value;                      /* Expression: d
                                        * Referenced by: '<S34>/d'
                                        */
};

/* Parameters (auto storage) */
struct Parameters_FuzzyNeuro_neuesNetz_ {
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<S7>/Switch'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S20>/Out1'
                                        */
  real_T One_Value;                    /* Expression: 1
                                        * Referenced by: '<S20>/One'
                                        */
  real_T Out1_Y0_c;                    /* Expression: 0
                                        * Referenced by: '<S22>/Out1'
                                        */
  real_T One_Value_c;                  /* Expression: 1
                                        * Referenced by: '<S22>/One'
                                        */
  real_T Out1_Y0_a;                    /* Expression: 0
                                        * Referenced by: '<S27>/Out1'
                                        */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<S27>/0'
                                        */
  real_T Out1_Y0_ak;                   /* Expression: 1
                                        * Referenced by: '<S28>/Out1'
                                        */
  real_T _Value_e;                     /* Expression: 1
                                        * Referenced by: '<S28>/0'
                                        */
  real_T Out1_Y0_n;                    /* Expression: 0
                                        * Referenced by: '<S31>/Out1'
                                        */
  real_T _Value_h;                     /* Expression: 0
                                        * Referenced by: '<S31>/0'
                                        */
  real_T Out1_Y0_b;                    /* Expression: 0
                                        * Referenced by: '<S33>/Out1'
                                        */
  real_T _Value_p;                     /* Expression: 1
                                        * Referenced by: '<S33>/0'
                                        */
  real_T Out1_Y0_l;                    /* Expression: 0
                                        * Referenced by: '<S35>/Out1'
                                        */
  real_T _Value_a;                     /* Expression: 0
                                        * Referenced by: '<S35>/0'
                                        */
  real_T Out1_Y0_i;                    /* Expression: 0
                                        * Referenced by: '<S37>/Out1'
                                        */
  real_T _Value_em;                    /* Expression: 1
                                        * Referenced by: '<S37>/0'
                                        */
  real_T Out1_Y0_ai;                   /* Expression: 0
                                        * Referenced by: '<S42>/Out1'
                                        */
  real_T _Value_k;                     /* Expression: 0
                                        * Referenced by: '<S42>/0'
                                        */
  real_T Out1_Y0_l5;                   /* Expression: 1
                                        * Referenced by: '<S43>/Out1'
                                        */
  real_T _Value_i;                     /* Expression: 1
                                        * Referenced by: '<S43>/0'
                                        */
  real_T Out1_Y0_k;                    /* Expression: 0
                                        * Referenced by: '<S46>/Out1'
                                        */
  real_T _Value_ib;                    /* Expression: 0
                                        * Referenced by: '<S46>/0'
                                        */
  real_T Out1_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<S48>/Out1'
                                        */
  real_T _Value_i5;                    /* Expression: 1
                                        * Referenced by: '<S48>/0'
                                        */
  real_T Out1_Y0_o;                    /* Expression: 0
                                        * Referenced by: '<S50>/Out1'
                                        */
  real_T _Value_o;                     /* Expression: 0
                                        * Referenced by: '<S50>/0'
                                        */
  real_T Out1_Y0_ia;                   /* Expression: 0
                                        * Referenced by: '<S52>/Out1'
                                        */
  real_T _Value_n;                     /* Expression: 1
                                        * Referenced by: '<S52>/0'
                                        */
  real_T Automatik_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Automatik'
                                        */
  real_T Weight_Value;                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S14>/Weight'
                                        */
  real_T soll1_Value;                  /* Expression: 30
                                        * Referenced by: '<Root>/soll1'
                                        */
  real_T Offseth1_Value;               /* Expression: Offseth1
                                        * Referenced by: '<S6>/Offseth1'
                                        */
  real_T Faktorh1_Value;               /* Expression: Faktorh1
                                        * Referenced by: '<S6>/Faktorh1'
                                        */
  real_T TP5Hz_A;                      /* Computed Parameter: TP5Hz_A
                                        * Referenced by: '<S6>/TP 5Hz'
                                        */
  real_T TP5Hz_C;                      /* Computed Parameter: TP5Hz_C
                                        * Referenced by: '<S6>/TP 5Hz'
                                        */
  real_T nix_Value[101];               /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                        * Referenced by: '<S12>/nix'
                                        */
  real_T Weight_Value_n;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S15>/Weight'
                                        */
  real_T bissle_Value[101];            /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(2).params)
                                        * Referenced by: '<S12>/bissle'
                                        */
  real_T Weight_Value_j;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S16>/Weight'
                                        */
  real_T ganzviel_Value[101];          /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                        * Referenced by: '<S12>/ganzviel'
                                        */
  real_T Weight_Value_i;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S17>/Weight'
                                        */
  real_T soll2_Value;                  /* Expression: 20
                                        * Referenced by: '<Root>/soll2'
                                        */
  real_T Offseth2_Value;               /* Expression: Offseth2
                                        * Referenced by: '<S6>/Offseth2'
                                        */
  real_T Faktorh2_Value;               /* Expression: Faktorh2
                                        * Referenced by: '<S6>/Faktorh2'
                                        */
  real_T TP5Hz1_A;                     /* Computed Parameter: TP5Hz1_A
                                        * Referenced by: '<S6>/TP 5Hz1'
                                        */
  real_T TP5Hz1_C;                     /* Computed Parameter: TP5Hz1_C
                                        * Referenced by: '<S6>/TP 5Hz1'
                                        */
  real_T nix_Value_b[101];             /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(1).params)
                                        * Referenced by: '<S13>/nix'
                                        */
  real_T Weight_Value_b;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S18>/Weight'
                                        */
  real_T stationaer_Value[101];        /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                        * Referenced by: '<S13>/stationaer'
                                        */
  real_T Weight_Value_jv;              /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S19>/Weight'
                                        */
  real_T ganzviel_Value_g[101];        /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                        * Referenced by: '<S13>/ganzviel'
                                        */
  real_T xdata_Value[101];             /* Expression: Xdata
                                        * Referenced by: '<S8>/x data'
                                        */
  real_T xdata_Value_p[101];           /* Expression: Xdata
                                        * Referenced by: '<S9>/x data'
                                        */
  real_T MidRange_Value[2];            /* Expression: mean(cat(1,fis.output.range),2)
                                        * Referenced by: '<S7>/MidRange'
                                        */
  real_T viel_Value[101];              /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                        * Referenced by: '<S12>/viel'
                                        */
  real_T viel_Value_p[101];            /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                        * Referenced by: '<S13>/viel'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S7>/Zero'
                                        */
  real_T Pumpe1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Pumpe1'
                                        */
  real_T Pumpe2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Pumpe2'
                                        */
  real_T IW211_Value[10];              /* Expression: [0.010007011480956507;9.7559540301772607e-005;-0.00045943194759578976;0.00026549758885008323;-0.00037704261757348645;-0.00023329615755329769;-0.0010107765113510359;3.7562430615145637e-005;0.00083885674521977371;0.0073884446713381458]
                                        * Referenced by: '<S70>/IW{2,1}(1,:)''
                                        */
  real_T IW111_Value[2];               /* Expression: [1.4350812730013165;0.36982637838081583]
                                        * Referenced by: '<S57>/IW{1,1}(1,:)''
                                        */
  real_T IW112_Value[2];               /* Expression: [-0.99993750318269126;1.0857089683304775]
                                        * Referenced by: '<S57>/IW{1,1}(2,:)''
                                        */
  real_T IW113_Value[2];               /* Expression: [0.36076993678749514;1.4316697304954116]
                                        * Referenced by: '<S57>/IW{1,1}(3,:)''
                                        */
  real_T IW114_Value[2];               /* Expression: [-0.086804668652516723;1.4736166498679069]
                                        * Referenced by: '<S57>/IW{1,1}(4,:)''
                                        */
  real_T IW115_Value[2];               /* Expression: [1.1362798989988234;-0.93977761535973003]
                                        * Referenced by: '<S57>/IW{1,1}(5,:)''
                                        */
  real_T IW116_Value[2];               /* Expression: [1.388270248975592;-0.49936608330011195]
                                        * Referenced by: '<S57>/IW{1,1}(6,:)''
                                        */
  real_T IW117_Value[2];               /* Expression: [-0.14644537512169173;1.4644145006152187]
                                        * Referenced by: '<S57>/IW{1,1}(7,:)''
                                        */
  real_T IW118_Value[2];               /* Expression: [-1.1140022295779455;0.9640612910542028]
                                        * Referenced by: '<S57>/IW{1,1}(8,:)''
                                        */
  real_T IW119_Value[2];               /* Expression: [1.4194161616233616;-0.39601891708848608]
                                        * Referenced by: '<S57>/IW{1,1}(9,:)''
                                        */
  real_T IW1110_Value[2];              /* Expression: [-0.2072597122421084;1.475820717234636]
                                        * Referenced by: '<S57>/IW{1,1}(10,:)''
                                        */
  real_T b1_Value[10];                 /* Expression: [-9.8545985505022529;3.1869783820136055;-7.8385048556717223;-2.6842174078204861;-1.0793676125527614;-2.1740694877769813;-5.427515514459051;-2.0106026099595997;0.36933408755053759;-8.2681561032045394]
                                        * Referenced by: '<S54>/b{1}'
                                        */
  real_T Gain_Gain;                    /* Expression: -2
                                        * Referenced by: '<S58>/Gain'
                                        */
  real_T one_Value;                    /* Expression: 1
                                        * Referenced by: '<S58>/one'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<S58>/Gain1'
                                        */
  real_T one1_Value;                   /* Expression: 1
                                        * Referenced by: '<S58>/one1'
                                        */
  real_T IW212_Value[10];              /* Expression: [0.0048539083367129532;7.6872455937682105e-005;-0.0013566498908624824;9.8465439347106276e-006;-0.00033394909973916143;6.8337800822604322e-005;0.0018117902613594694;-0.00024838071057661781;0.00040060754880270888;-0.0050191161396336836]
                                        * Referenced by: '<S70>/IW{2,1}(2,:)''
                                        */
  real_T b2_Value[2];                  /* Expression: [-2.0187466227910615;-1.922300189425423]
                                        * Referenced by: '<S55>/b{2}'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<S5>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S5>/Saturation1'
                                        */
  real_T V1_Value;                     /* Expression: 0
                                        * Referenced by: '<Root>/V1'
                                        */
  real_T V13o_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/V13o'
                                        */
  real_T V13u_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/V13u'
                                        */
  real_T V3_Value;                     /* Expression: 0
                                        * Referenced by: '<Root>/V3'
                                        */
  real_T V32o_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/V32o'
                                        */
  real_T V32u_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/V32u'
                                        */
  real_T V2_Value;                     /* Expression: 0
                                        * Referenced by: '<Root>/V2'
                                        */
  real_T V0_Value;                     /* Expression: 0
                                        * Referenced by: '<Root>/V0'
                                        */
  real_T Faktorh3_Value;               /* Expression: Faktorh3
                                        * Referenced by: '<S6>/Faktorh3'
                                        */
  real_T Offseth3_Value;               /* Expression: Offseth3
                                        * Referenced by: '<S6>/Offseth3'
                                        */
  real_T TP5Hz2_A;                     /* Computed Parameter: TP5Hz2_A
                                        * Referenced by: '<S6>/TP 5Hz2'
                                        */
  real_T TP5Hz2_C;                     /* Computed Parameter: TP5Hz2_C
                                        * Referenced by: '<S6>/TP 5Hz2'
                                        */
  rtP_IfActionSubsystem3_FuzzyN_k IfActionSubsystem3_n;/* '<S41>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_dr;/* '<S41>/If Action Subsystem1' */
  rtP_IfActionSubsystem3_FuzzyN_k IfActionSubsystem3_b;/* '<S40>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_d;/* '<S40>/If Action Subsystem1' */
  rtP_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_au;/* '<S39>/If Action Subsystem2' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_l;/* '<S39>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyN_k IfActionSubsystem3_c;/* '<S26>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_p;/* '<S26>/If Action Subsystem1' */
  rtP_IfActionSubsystem3_FuzzyN_k IfActionSubsystem3;/* '<S25>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1;/* '<S25>/If Action Subsystem1' */
  rtP_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_k;/* '<S24>/If Action Subsystem2' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_p;/* '<S24>/If Action Subsystem3' */
};

/* Real-time Model Data Structure */
struct RT_MODEL_FuzzyNeuro_neuesNetz {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    real_T *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    real_T *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeF[1][3];
    ODE1_IntgData intgData;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    void *dwork;
  } Work;
};

/* Block parameters (auto storage) */
extern Parameters_FuzzyNeuro_neuesNetz FuzzyNeuro_neuesNetz_P;

/* Block signals (auto storage) */
extern BlockIO_FuzzyNeuro_neuesNetz FuzzyNeuro_neuesNetz_B;

/* Continuous states (auto storage) */
extern ContinuousStates_FuzzyNeuro_neu FuzzyNeuro_neuesNetz_X;

/* Block states (auto storage) */
extern D_Work_FuzzyNeuro_neuesNetz FuzzyNeuro_neuesNetz_DWork;

/* Model entry point functions */
extern void FuzzyNeuro_neuesNetz_initialize(boolean_T firstTime);
extern void FuzzyNeuro_neuesNetz_output(int_T tid);
extern void FuzzyNeuro_neuesNetz_update(int_T tid);
extern void FuzzyNeuro_neuesNetz_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_FuzzyNeuro_neuesNetz *const FuzzyNeuro_neuesNetz_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FuzzyNeuro_neuesNetz'
 * '<S1>'   : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller'
 * '<S2>'   : 'FuzzyNeuro_neuesNetz/Neural Network'
 * '<S3>'   : 'FuzzyNeuro_neuesNetz/RTI Data'
 * '<S4>'   : 'FuzzyNeuro_neuesNetz/T3Anlage'
 * '<S5>'   : 'FuzzyNeuro_neuesNetz/Umrechnung2'
 * '<S6>'   : 'FuzzyNeuro_neuesNetz/Umrechnunguh'
 * '<S7>'   : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard'
 * '<S8>'   : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1'
 * '<S9>'   : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2'
 * '<S10>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1'
 * '<S11>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2'
 * '<S12>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Pumpe1'
 * '<S13>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Pumpe2'
 * '<S14>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Rule1'
 * '<S15>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Rule2'
 * '<S16>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Rule3'
 * '<S17>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Rule4'
 * '<S18>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Rule5'
 * '<S19>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Rule6'
 * '<S20>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: One'
 * '<S21>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: u1'
 * '<S22>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: One'
 * '<S23>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: u1'
 * '<S24>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig'
 * '<S25>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch'
 * '<S26>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig'
 * '<S27>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem'
 * '<S28>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem1'
 * '<S29>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem2'
 * '<S30>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem3'
 * '<S31>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem'
 * '<S32>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem1'
 * '<S33>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem2'
 * '<S34>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem3'
 * '<S35>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem'
 * '<S36>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem1'
 * '<S37>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem2'
 * '<S38>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem3'
 * '<S39>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig'
 * '<S40>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch'
 * '<S41>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig'
 * '<S42>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem'
 * '<S43>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem1'
 * '<S44>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem2'
 * '<S45>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem3'
 * '<S46>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem'
 * '<S47>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem1'
 * '<S48>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem2'
 * '<S49>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem3'
 * '<S50>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem'
 * '<S51>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem1'
 * '<S52>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem2'
 * '<S53>'  : 'FuzzyNeuro_neuesNetz/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem3'
 * '<S54>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1'
 * '<S55>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 2'
 * '<S56>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/Delays 1'
 * '<S57>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}'
 * '<S58>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/tansig'
 * '<S59>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod1'
 * '<S60>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod10'
 * '<S61>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod2'
 * '<S62>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod3'
 * '<S63>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod4'
 * '<S64>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod5'
 * '<S65>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod6'
 * '<S66>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod7'
 * '<S67>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod8'
 * '<S68>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 1/IW{1,1}/dotprod9'
 * '<S69>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 2/Delays 1'
 * '<S70>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 2/LW{2,1}'
 * '<S71>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 2/purelin'
 * '<S72>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 2/LW{2,1}/dotprod1'
 * '<S73>'  : 'FuzzyNeuro_neuesNetz/Neural Network/Layer 2/LW{2,1}/dotprod2'
 * '<S74>'  : 'FuzzyNeuro_neuesNetz/RTI Data/RTI Data Store'
 * '<S75>'  : 'FuzzyNeuro_neuesNetz/RTI Data/RTI Data Store/RTI Data Store'
 * '<S76>'  : 'FuzzyNeuro_neuesNetz/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S77>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104ADC_C5'
 * '<S78>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104ADC_C6'
 * '<S79>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104BIT_OUT_C0'
 * '<S80>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104BIT_OUT_C1'
 * '<S81>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104BIT_OUT_C2'
 * '<S82>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104BIT_OUT_C3'
 * '<S83>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104BIT_OUT_C4'
 * '<S84>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104BIT_OUT_C5'
 * '<S85>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104BIT_OUT_C6'
 * '<S86>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104BIT_OUT_C7'
 * '<S87>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104DAC_C1'
 * '<S88>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104DAC_C2'
 * '<S89>'  : 'FuzzyNeuro_neuesNetz/T3Anlage/DS1104MUX_ADC'
 */
#endif                                 /* RTW_HEADER_FuzzyNeuro_neuesNetz_h_ */
