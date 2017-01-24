/*
 * FuzzyNeuro.h
 *
 * Code generation for model "FuzzyNeuro.mdl".
 *
 * Model version              : 1.139
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Mon Jun 06 10:46:29 2016
 *
 * Target selection: rti1104.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_FuzzyNeuro_h_
#define RTW_HEADER_FuzzyNeuro_h_
#ifndef FuzzyNeuro_COMMON_INCLUDES_
# define FuzzyNeuro_COMMON_INCLUDES_
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
#endif                                 /* FuzzyNeuro_COMMON_INCLUDES_ */

#include "FuzzyNeuro_types.h"

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
#define FuzzyNeuro_rtModel             RT_MODEL_FuzzyNeuro

/* Block states (auto storage) for system '<S34>/Action: u1' */
typedef struct {
  int8_T Actionu1_SubsysRanBC;         /* '<S34>/Action: u1' */
} rtDW_Actionu1_FuzzyNeuro;

/* Block signals for system '<S50>/If Action Subsystem3' */
typedef struct {
  real_T xa;                           /* '<S56>/Sum' */
  real_T ba;                           /* '<S56>/Sum1' */
} rtB_IfActionSubsystem3_FuzzyNeu;

/* Block states (auto storage) for system '<S50>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S50>/If Action Subsystem3' */
} rtDW_IfActionSubsystem3_FuzzyNe;

/* Block signals for system '<S50>/If Action Subsystem2' */
typedef struct {
  real_T cb;                           /* '<S55>/Sum2' */
  real_T cx;                           /* '<S55>/Sum3' */
} rtB_IfActionSubsystem2_FuzzyNeu;

/* Block states (auto storage) for system '<S50>/If Action Subsystem2' */
typedef struct {
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S50>/If Action Subsystem2' */
} rtDW_IfActionSubsystem2_FuzzyNe;

/* Block signals for system '<S51>/If Action Subsystem3' */
typedef struct {
  real_T dc;                           /* '<S60>/Sum2' */
  real_T dx;                           /* '<S60>/Sum3' */
} rtB_IfActionSubsystem3_FuzzyN_f;

/* Block states (auto storage) for system '<S51>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S51>/If Action Subsystem3' */
} rtDW_IfActionSubsystem3_Fuzzy_p;

/* Block signals (auto storage) */
typedef struct {
  real_T i1;                           /* '<S6>/TP 5Hz' */
  real_T Product;                      /* '<S6>/Product' */
  real_T Sum;                          /* '<S6>/Sum' */
  real_T Diff1;                        /* '<Root>/Sum1' */
  real_T i1_g;                         /* '<S6>/TP 5Hz1' */
  real_T Product1;                     /* '<S6>/Product1' */
  real_T Sum1;                         /* '<S6>/Sum1' */
  real_T Diff2;                        /* '<Root>/Sum2' */
  real_T Subtractminx[2];              /* '<S29>/Subtract min x' */
  real_T rangeyrangex[2];              /* '<S29>/range y // range x' */
  real_T Addminy[2];                   /* '<S29>/Add min y' */
  real_T DotProduct;                   /* '<S14>/Dot Product' */
  real_T DotProduct_j;                 /* '<S15>/Dot Product' */
  real_T DotProduct_a;                 /* '<S16>/Dot Product' */
  real_T DotProduct_d;                 /* '<S17>/Dot Product' */
  real_T DotProduct_p;                 /* '<S18>/Dot Product' */
  real_T DotProduct_b;                 /* '<S19>/Dot Product' */
  real_T DotProduct_ds;                /* '<S20>/Dot Product' */
  real_T DotProduct_g;                 /* '<S21>/Dot Product' */
  real_T DotProduct_l;                 /* '<S22>/Dot Product' */
  real_T DotProduct_av;                /* '<S23>/Dot Product' */
  real_T netsum[10];                   /* '<S7>/netsum' */
  real_T Gain[10];                     /* '<S13>/Gain' */
  real_T Exp[10];                      /* '<S13>/Exp' */
  real_T Sum_d[10];                    /* '<S13>/Sum' */
  real_T Reciprocal[10];               /* '<S13>/Reciprocal' */
  real_T Gain1[10];                    /* '<S13>/Gain1' */
  real_T Sum1_o[10];                   /* '<S13>/Sum1' */
  real_T DotProduct_i;                 /* '<S27>/Dot Product' */
  real_T DotProduct_m;                 /* '<S28>/Dot Product' */
  real_T netsum_i[2];                  /* '<S8>/netsum' */
  real_T Subtractminy[2];              /* '<S31>/Subtract min y' */
  real_T Dividebyrangey[2];            /* '<S31>/Divide by range y' */
  real_T Addminx[2];                   /* '<S31>/Add min x' */
  real_T Constants;                    /* '<S32>/Constants' */
  real_T DataConv;                     /* '<S36>/DataConv' */
  real_T Merge;                        /* '<S51>/Merge' */
  real_T andorMethod;                  /* '<S40>/andorMethod' */
  real_T Weighting;                    /* '<S40>/Weighting' */
  real_T impMethod[101];               /* '<S40>/impMethod' */
  real_T Merge_b;                      /* '<S50>/Merge' */
  real_T andorMethod_e;                /* '<S41>/andorMethod' */
  real_T Weighting_b;                  /* '<S41>/Weighting' */
  real_T impMethod_n[101];             /* '<S41>/impMethod' */
  real_T Merge_d;                      /* '<S52>/Merge' */
  real_T andorMethod_b;                /* '<S42>/andorMethod' */
  real_T Weighting_g;                  /* '<S42>/Weighting' */
  real_T impMethod_k[101];             /* '<S42>/impMethod' */
  real_T AggMethod1[101];              /* '<S33>/AggMethod1' */
  real_T DataConv_a;                   /* '<S37>/DataConv' */
  real_T Merge_c;                      /* '<S66>/Merge' */
  real_T andorMethod_d;                /* '<S43>/andorMethod' */
  real_T Weighting_a;                  /* '<S43>/Weighting' */
  real_T impMethod_d[101];             /* '<S43>/impMethod' */
  real_T Merge_n;                      /* '<S65>/Merge' */
  real_T andorMethod_k;                /* '<S44>/andorMethod' */
  real_T Weighting_bq;                 /* '<S44>/Weighting' */
  real_T impMethod_e[101];             /* '<S44>/impMethod' */
  real_T Merge_p;                      /* '<S67>/Merge' */
  real_T andorMethod_a;                /* '<S45>/andorMethod' */
  real_T Weighting_j;                  /* '<S45>/Weighting' */
  real_T impMethod_b[101];             /* '<S45>/impMethod' */
  real_T AggMethod2[101];              /* '<S33>/AggMethod2' */
  real_T Sum1_e;                       /* '<S34>/Sum1' */
  real_T Merge_l;                      /* '<S34>/Merge' */
  real_T Sum1_or;                      /* '<S35>/Sum1' */
  real_T Merge_g;                      /* '<S35>/Merge' */
  real_T viel[101];                    /* '<S38>/viel' */
  real_T viel_j[101];                  /* '<S39>/viel' */
  real_T MultiportSwitch[2];           /* '<Root>/Multiport Switch' */
  real_T SFunction[3];                 /* '<S95>/S-Function' */
  real_T SFunction_n;                  /* '<S83>/S-Function' */
  real_T SFunction_j;                  /* '<S84>/S-Function' */
  real_T uq1Vorgabe;                   /* '<S5>/q1->uv1' */
  real_T Saturation;                   /* '<S5>/Saturation' */
  real_T uq2Vorgabe;                   /* '<S5>/q2->uv2' */
  real_T Saturation1;                  /* '<S5>/Saturation1' */
  real_T i1_m;                         /* '<S6>/TP 5Hz2' */
  real_T Product2;                     /* '<S6>/Product2' */
  real_T Sum2;                         /* '<S6>/Sum2' */
  real_T q1mess;                       /* '<Root>/um1->q1mess' */
  real_T q2mess;                       /* '<Root>/um2->q2mess' */
  real_T TotalFiringStrength;          /* '<S33>/Total Firing Strength' */
  real_T ZeroFiringStrength;           /* '<S33>/Zero Firing Strength?' */
  real_T Switch[2];                    /* '<S33>/Switch' */
  real_T ProductCOA[101];              /* '<S34>/Product (COA)' */
  real_T Sum_dk;                       /* '<S34>/Sum' */
  real_T AveragingCOA;                 /* '<S34>/Averaging (COA)' */
  real_T ProductCOA_n[101];            /* '<S35>/Product (COA)' */
  real_T Sum_h;                        /* '<S35>/Sum' */
  real_T AveragingCOA_m;               /* '<S35>/Averaging (COA)' */
  boolean_T DataTypeConversion;        /* '<S4>/Data Type Conversion' */
  boolean_T DataTypeConversion1;       /* '<S4>/Data Type Conversion1' */
  boolean_T DataTypeConversion2;       /* '<S4>/Data Type Conversion2' */
  boolean_T DataTypeConversion3;       /* '<S4>/Data Type Conversion3' */
  boolean_T DataTypeConversion4;       /* '<S4>/Data Type Conversion4' */
  boolean_T DataTypeConversion5;       /* '<S4>/Data Type Conversion5' */
  boolean_T DataTypeConversion6;       /* '<S4>/Data Type Conversion6' */
  boolean_T DataTypeConversion7;       /* '<S4>/Data Type Conversion7' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_i;/* '<S67>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_l;/* '<S67>/If Action Subsystem1' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_n;/* '<S66>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_j;/* '<S66>/If Action Subsystem1' */
  rtB_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_b;/* '<S65>/If Action Subsystem2' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_g;/* '<S65>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_l;/* '<S52>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_h;/* '<S52>/If Action Subsystem1' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3;/* '<S51>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1;/* '<S51>/If Action Subsystem1' */
  rtB_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_m;/* '<S50>/If Action Subsystem2' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_j;/* '<S50>/If Action Subsystem3' */
} BlockIO_FuzzyNeuro;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int8_T If_ActiveSubsystem;           /* '<S51>/If' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S51>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S51>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_n;         /* '<S50>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_k;/* '<S50>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S50>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_i;         /* '<S52>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_a;/* '<S52>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanB_k;/* '<S52>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_i2;        /* '<S66>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_p;/* '<S66>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRan_kk;/* '<S66>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_e;         /* '<S65>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_h;/* '<S65>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_o;/* '<S65>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_ie;        /* '<S67>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_j;/* '<S67>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRan_ke;/* '<S67>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_c;         /* '<S34>/If' */
  int8_T ActionOne_SubsysRanBC;        /* '<S34>/Action: One' */
  int8_T If_ActiveSubsystem_a;         /* '<S35>/If' */
  int8_T ActionOne_SubsysRanBC_i;      /* '<S35>/Action: One' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_i;/* '<S67>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_l;/* '<S67>/If Action Subsystem1' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_n;/* '<S66>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_j;/* '<S66>/If Action Subsystem1' */
  rtDW_IfActionSubsystem2_FuzzyNe IfActionSubsystem2_b;/* '<S65>/If Action Subsystem2' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem3_g;/* '<S65>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_l;/* '<S52>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_h;/* '<S52>/If Action Subsystem1' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3;/* '<S51>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1;/* '<S51>/If Action Subsystem1' */
  rtDW_IfActionSubsystem2_FuzzyNe IfActionSubsystem2_m;/* '<S50>/If Action Subsystem2' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem3_j;/* '<S50>/If Action Subsystem3' */
  rtDW_Actionu1_FuzzyNeuro Actionu1_n; /* '<S35>/Action: u1' */
  rtDW_Actionu1_FuzzyNeuro Actionu1;   /* '<S34>/Action: u1' */
} D_Work_FuzzyNeuro;

/* Continuous states (auto storage) */
typedef struct {
  real_T TP5Hz_CSTATE;                 /* '<S6>/TP 5Hz' */
  real_T TP5Hz1_CSTATE;                /* '<S6>/TP 5Hz1' */
  real_T TP5Hz2_CSTATE;                /* '<S6>/TP 5Hz2' */
} ContinuousStates_FuzzyNeuro;

/* State derivatives (auto storage) */
typedef struct {
  real_T TP5Hz_CSTATE;                 /* '<S6>/TP 5Hz' */
  real_T TP5Hz1_CSTATE;                /* '<S6>/TP 5Hz1' */
  real_T TP5Hz2_CSTATE;                /* '<S6>/TP 5Hz2' */
} StateDerivatives_FuzzyNeuro;

/* State disabled  */
typedef struct {
  boolean_T TP5Hz_CSTATE;              /* '<S6>/TP 5Hz' */
  boolean_T TP5Hz1_CSTATE;             /* '<S6>/TP 5Hz1' */
  boolean_T TP5Hz2_CSTATE;             /* '<S6>/TP 5Hz2' */
} StateDisabled_FuzzyNeuro;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            FuzzyNeuro_B
#define BlockIO                        BlockIO_FuzzyNeuro
#define rtX                            FuzzyNeuro_X
#define ContinuousStates               ContinuousStates_FuzzyNeuro
#define rtP                            FuzzyNeuro_P
#define Parameters                     Parameters_FuzzyNeuro
#define rtDWork                        FuzzyNeuro_DWork
#define D_Work                         D_Work_FuzzyNeuro

/* Parameters for system: '<S50>/If Action Subsystem3' */
struct rtP_IfActionSubsystem3_FuzzyNeu_ {
  real_T a_Value;                      /* Expression: a
                                        * Referenced by: '<S56>/a'
                                        */
  real_T b_Value;                      /* Expression: b
                                        * Referenced by: '<S56>/b'
                                        */
};

/* Parameters for system: '<S50>/If Action Subsystem2' */
struct rtP_IfActionSubsystem2_FuzzyNeu_ {
  real_T b_Value;                      /* Expression: b
                                        * Referenced by: '<S55>/b'
                                        */
  real_T c_Value;                      /* Expression: c
                                        * Referenced by: '<S55>/c'
                                        */
};

/* Parameters for system: '<S51>/If Action Subsystem3' */
struct rtP_IfActionSubsystem3_FuzzyN_f_ {
  real_T c_Value;                      /* Expression: c
                                        * Referenced by: '<S60>/c'
                                        */
  real_T d_Value;                      /* Expression: d
                                        * Referenced by: '<S60>/d'
                                        */
};

/* Parameters (auto storage) */
struct Parameters_FuzzyNeuro_ {
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<S33>/Switch'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S46>/Out1'
                                        */
  real_T One_Value;                    /* Expression: 1
                                        * Referenced by: '<S46>/One'
                                        */
  real_T Out1_Y0_a;                    /* Expression: 0
                                        * Referenced by: '<S48>/Out1'
                                        */
  real_T One_Value_j;                  /* Expression: 1
                                        * Referenced by: '<S48>/One'
                                        */
  real_T Out1_Y0_aa;                   /* Expression: 0
                                        * Referenced by: '<S53>/Out1'
                                        */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<S53>/0'
                                        */
  real_T Out1_Y0_c;                    /* Expression: 1
                                        * Referenced by: '<S54>/Out1'
                                        */
  real_T _Value_f;                     /* Expression: 1
                                        * Referenced by: '<S54>/0'
                                        */
  real_T Out1_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S57>/Out1'
                                        */
  real_T _Value_g;                     /* Expression: 0
                                        * Referenced by: '<S57>/0'
                                        */
  real_T Out1_Y0_b;                    /* Expression: 0
                                        * Referenced by: '<S59>/Out1'
                                        */
  real_T _Value_l;                     /* Expression: 1
                                        * Referenced by: '<S59>/0'
                                        */
  real_T Out1_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<S61>/Out1'
                                        */
  real_T _Value_j;                     /* Expression: 0
                                        * Referenced by: '<S61>/0'
                                        */
  real_T Out1_Y0_j;                    /* Expression: 0
                                        * Referenced by: '<S63>/Out1'
                                        */
  real_T _Value_gn;                    /* Expression: 1
                                        * Referenced by: '<S63>/0'
                                        */
  real_T Out1_Y0_jm;                   /* Expression: 0
                                        * Referenced by: '<S68>/Out1'
                                        */
  real_T _Value_p;                     /* Expression: 0
                                        * Referenced by: '<S68>/0'
                                        */
  real_T Out1_Y0_d;                    /* Expression: 1
                                        * Referenced by: '<S69>/Out1'
                                        */
  real_T _Value_h;                     /* Expression: 1
                                        * Referenced by: '<S69>/0'
                                        */
  real_T Out1_Y0_ja;                   /* Expression: 0
                                        * Referenced by: '<S72>/Out1'
                                        */
  real_T _Value_gd;                    /* Expression: 0
                                        * Referenced by: '<S72>/0'
                                        */
  real_T Out1_Y0_e;                    /* Expression: 0
                                        * Referenced by: '<S74>/Out1'
                                        */
  real_T _Value_a;                     /* Expression: 1
                                        * Referenced by: '<S74>/0'
                                        */
  real_T Out1_Y0_h;                    /* Expression: 0
                                        * Referenced by: '<S76>/Out1'
                                        */
  real_T _Value_ff;                    /* Expression: 0
                                        * Referenced by: '<S76>/0'
                                        */
  real_T Out1_Y0_ez;                   /* Expression: 0
                                        * Referenced by: '<S78>/Out1'
                                        */
  real_T _Value_o;                     /* Expression: 1
                                        * Referenced by: '<S78>/0'
                                        */
  real_T Automatik_Value;              /* Expression: 2
                                        * Referenced by: '<Root>/Automatik'
                                        */
  real_T IW111_Value[2];               /* Expression: [24.098386788235711;-0.4279185850025865]
                                        * Referenced by: '<S12>/IW{1,1}(1,:)''
                                        */
  real_T IW1110_Value[2];              /* Expression: [0.3026623230213078;23.418226901375043]
                                        * Referenced by: '<S12>/IW{1,1}(10,:)''
                                        */
  real_T IW112_Value[2];               /* Expression: [-0.071688412902524812;17.685224771556427]
                                        * Referenced by: '<S12>/IW{1,1}(2,:)''
                                        */
  real_T IW113_Value[2];               /* Expression: [-0.9497179100873957;4.7080492550412654]
                                        * Referenced by: '<S12>/IW{1,1}(3,:)''
                                        */
  real_T IW114_Value[2];               /* Expression: [-26.585625686576371;0.8974254429735693]
                                        * Referenced by: '<S12>/IW{1,1}(4,:)''
                                        */
  real_T IW115_Value[2];               /* Expression: [-11.111784514851157;-0.074860243156514503]
                                        * Referenced by: '<S12>/IW{1,1}(5,:)''
                                        */
  real_T IW116_Value[2];               /* Expression: [-38.168721515020181;-0.0060066691057752072]
                                        * Referenced by: '<S12>/IW{1,1}(6,:)''
                                        */
  real_T IW117_Value[2];               /* Expression: [3.9612785651921216;-32.790804206865801]
                                        * Referenced by: '<S12>/IW{1,1}(7,:)''
                                        */
  real_T IW118_Value[2];               /* Expression: [-1.6528897055346656;-6.4142659211247519]
                                        * Referenced by: '<S12>/IW{1,1}(8,:)''
                                        */
  real_T IW119_Value[2];               /* Expression: [-14.744557797691087;-12.986386922555933]
                                        * Referenced by: '<S12>/IW{1,1}(9,:)''
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
  real_T Subtractminx_Bias[2];         /* Expression: -xmin
                                        * Referenced by: '<S29>/Subtract min x'
                                        */
  real_T rangeyrangex_Gain[2];         /* Expression: (ymax-ymin)./(xmax-xmin)
                                        * Referenced by: '<S29>/range y // range x'
                                        */
  real_T Addminy_Bias;                 /* Expression: ymin
                                        * Referenced by: '<S29>/Add min y'
                                        */
  real_T b1_Value[10];                 /* Expression: [-23.132915475526335;18.474609047470562;1.4662151945492163;-14.569581228947724;0.67017621939782657;0.29072540359843946;4.8862858063634746;-4.2048994179492416;-10.331217839102383;-22.227581070509256]
                                        * Referenced by: '<S7>/b{1}'
                                        */
  real_T Gain_Gain;                    /* Expression: -2
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T one_Value;                    /* Expression: 1
                                        * Referenced by: '<S13>/one'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<S13>/Gain1'
                                        */
  real_T one1_Value;                   /* Expression: 1
                                        * Referenced by: '<S13>/one1'
                                        */
  real_T IW211_Value[10];              /* Expression: [-1.1144065276262112;-0.5824649784253163;-0.22595762050642262;0.00022093289648473027;-1.0209675688746931;0.14103050613615731;-0.032178970091041877;-0.24979720090733717;0.014522526731102357;0.041969266329005876]
                                        * Referenced by: '<S25>/IW{2,1}(1,:)''
                                        */
  real_T IW212_Value[10];              /* Expression: [0.086272247164651844;-3.8348380603397461;0.52549435874255701;0.14381388471091416;0.47320218934647129;-0.52262759582198293;-0.54970272266645881;0.32910629657303397;-0.3191937807361796;-1.1262875205024596]
                                        * Referenced by: '<S25>/IW{2,1}(2,:)''
                                        */
  real_T b2_Value[2];                  /* Expression: [-0.55687892908004344;2.6402947356072732]
                                        * Referenced by: '<S8>/b{2}'
                                        */
  real_T Subtractminy_Bias;            /* Expression: -ymin
                                        * Referenced by: '<S31>/Subtract min y'
                                        */
  real_T Dividebyrangey_Gain[2];       /* Expression: (xmax-xmin)./(ymax-ymin)
                                        * Referenced by: '<S31>/Divide by range y'
                                        */
  real_T Addminx_Bias[2];              /* Expression: xmin
                                        * Referenced by: '<S31>/Add min x'
                                        */
  real_T Constants_Value;              /* Expression: [constants; 0]
                                        * Referenced by: '<S32>/Constants'
                                        */
  real_T Weight_Value;                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S40>/Weight'
                                        */
  real_T nix_Value[101];               /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                        * Referenced by: '<S38>/nix'
                                        */
  real_T Weight_Value_h;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S41>/Weight'
                                        */
  real_T bissle_Value[101];            /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(2).params)
                                        * Referenced by: '<S38>/bissle'
                                        */
  real_T Weight_Value_l;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S42>/Weight'
                                        */
  real_T ganzviel_Value[101];          /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                        * Referenced by: '<S38>/ganzviel'
                                        */
  real_T Weight_Value_i;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S43>/Weight'
                                        */
  real_T nix_Value_m[101];             /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(1).params)
                                        * Referenced by: '<S39>/nix'
                                        */
  real_T Weight_Value_a;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S44>/Weight'
                                        */
  real_T stationaer_Value[101];        /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                        * Referenced by: '<S39>/stationaer'
                                        */
  real_T Weight_Value_n;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S45>/Weight'
                                        */
  real_T ganzviel_Value_d[101];        /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                        * Referenced by: '<S39>/ganzviel'
                                        */
  real_T xdata_Value[101];             /* Expression: Xdata
                                        * Referenced by: '<S34>/x data'
                                        */
  real_T xdata_Value_e[101];           /* Expression: Xdata
                                        * Referenced by: '<S35>/x data'
                                        */
  real_T MidRange_Value[2];            /* Expression: mean(cat(1,fis.output.range),2)
                                        * Referenced by: '<S33>/MidRange'
                                        */
  real_T viel_Value[101];              /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                        * Referenced by: '<S38>/viel'
                                        */
  real_T viel_Value_p[101];            /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                        * Referenced by: '<S39>/viel'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S33>/Zero'
                                        */
  real_T Pumpe1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Pumpe1'
                                        */
  real_T Pumpe2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Pumpe2'
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
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_i;/* '<S67>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_l;/* '<S67>/If Action Subsystem1' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_n;/* '<S66>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_j;/* '<S66>/If Action Subsystem1' */
  rtP_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_b;/* '<S65>/If Action Subsystem2' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_g;/* '<S65>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_l;/* '<S52>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_h;/* '<S52>/If Action Subsystem1' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3;/* '<S51>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1;/* '<S51>/If Action Subsystem1' */
  rtP_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_m;/* '<S50>/If Action Subsystem2' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_j;/* '<S50>/If Action Subsystem3' */
};

/* Real-time Model Data Structure */
struct RT_MODEL_FuzzyNeuro {
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
extern Parameters_FuzzyNeuro FuzzyNeuro_P;

/* Block signals (auto storage) */
extern BlockIO_FuzzyNeuro FuzzyNeuro_B;

/* Continuous states (auto storage) */
extern ContinuousStates_FuzzyNeuro FuzzyNeuro_X;

/* Block states (auto storage) */
extern D_Work_FuzzyNeuro FuzzyNeuro_DWork;

/* Model entry point functions */
extern void FuzzyNeuro_initialize(boolean_T firstTime);
extern void FuzzyNeuro_output(int_T tid);
extern void FuzzyNeuro_update(int_T tid);
extern void FuzzyNeuro_terminate(void);

/* Real-time Model object */
extern struct RT_MODEL_FuzzyNeuro *const FuzzyNeuro_M;

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
 * '<Root>' : 'FuzzyNeuro'
 * '<S1>'   : 'FuzzyNeuro/Feed-Forward Neural Network'
 * '<S2>'   : 'FuzzyNeuro/Fuzzy Logic  Controller'
 * '<S3>'   : 'FuzzyNeuro/RTI Data'
 * '<S4>'   : 'FuzzyNeuro/T3Anlage'
 * '<S5>'   : 'FuzzyNeuro/Umrechnung2'
 * '<S6>'   : 'FuzzyNeuro/Umrechnunguh'
 * '<S7>'   : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1'
 * '<S8>'   : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 2'
 * '<S9>'   : 'FuzzyNeuro/Feed-Forward Neural Network/Process Input 1'
 * '<S10>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Process Output 1'
 * '<S11>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/Delays 1'
 * '<S12>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}'
 * '<S13>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/tansig'
 * '<S14>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod1'
 * '<S15>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod10'
 * '<S16>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod2'
 * '<S17>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod3'
 * '<S18>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod4'
 * '<S19>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod5'
 * '<S20>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod6'
 * '<S21>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod7'
 * '<S22>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod8'
 * '<S23>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 1/IW{1,1}/dotprod9'
 * '<S24>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 2/Delays 1'
 * '<S25>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 2/LW{2,1}'
 * '<S26>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 2/purelin'
 * '<S27>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 2/LW{2,1}/dotprod1'
 * '<S28>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Layer 2/LW{2,1}/dotprod2'
 * '<S29>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Process Input 1/mapminmax'
 * '<S30>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Process Input 1/removeconstantrows'
 * '<S31>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Process Output 1/mapminmax_reverse'
 * '<S32>'  : 'FuzzyNeuro/Feed-Forward Neural Network/Process Output 1/removeconstantrows_reverse'
 * '<S33>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard'
 * '<S34>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1'
 * '<S35>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2'
 * '<S36>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1'
 * '<S37>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2'
 * '<S38>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Pumpe1'
 * '<S39>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Pumpe2'
 * '<S40>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule1'
 * '<S41>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule2'
 * '<S42>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule3'
 * '<S43>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule4'
 * '<S44>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule5'
 * '<S45>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule6'
 * '<S46>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: One'
 * '<S47>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: u1'
 * '<S48>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: One'
 * '<S49>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: u1'
 * '<S50>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig'
 * '<S51>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch'
 * '<S52>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig'
 * '<S53>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem'
 * '<S54>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem1'
 * '<S55>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem2'
 * '<S56>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem3'
 * '<S57>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem'
 * '<S58>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem1'
 * '<S59>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem2'
 * '<S60>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem3'
 * '<S61>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem'
 * '<S62>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem1'
 * '<S63>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem2'
 * '<S64>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem3'
 * '<S65>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig'
 * '<S66>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch'
 * '<S67>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig'
 * '<S68>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem'
 * '<S69>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem1'
 * '<S70>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem2'
 * '<S71>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem3'
 * '<S72>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem'
 * '<S73>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem1'
 * '<S74>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem2'
 * '<S75>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem3'
 * '<S76>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem'
 * '<S77>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem1'
 * '<S78>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem2'
 * '<S79>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem3'
 * '<S80>'  : 'FuzzyNeuro/RTI Data/RTI Data Store'
 * '<S81>'  : 'FuzzyNeuro/RTI Data/RTI Data Store/RTI Data Store'
 * '<S82>'  : 'FuzzyNeuro/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S83>'  : 'FuzzyNeuro/T3Anlage/DS1104ADC_C5'
 * '<S84>'  : 'FuzzyNeuro/T3Anlage/DS1104ADC_C6'
 * '<S85>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C0'
 * '<S86>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C1'
 * '<S87>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C2'
 * '<S88>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C3'
 * '<S89>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C4'
 * '<S90>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C5'
 * '<S91>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C6'
 * '<S92>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C7'
 * '<S93>'  : 'FuzzyNeuro/T3Anlage/DS1104DAC_C1'
 * '<S94>'  : 'FuzzyNeuro/T3Anlage/DS1104DAC_C2'
 * '<S95>'  : 'FuzzyNeuro/T3Anlage/DS1104MUX_ADC'
 */
#endif                                 /* RTW_HEADER_FuzzyNeuro_h_ */
