/*
 * FuzzyNeuro.h
 *
 * Code generation for model "FuzzyNeuro.mdl".
 *
 * Model version              : 1.140
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Tue Jan 24 15:36:14 2017
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

/* Block states (auto storage) for system '<S7>/Action: u1' */
typedef struct {
  int8_T Actionu1_SubsysRanBC;         /* '<S7>/Action: u1' */
} rtDW_Actionu1_FuzzyNeuro;

/* Block signals for system '<S23>/If Action Subsystem3' */
typedef struct {
  real_T xa;                           /* '<S29>/Sum' */
  real_T ba;                           /* '<S29>/Sum1' */
} rtB_IfActionSubsystem3_FuzzyNeu;

/* Block states (auto storage) for system '<S23>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S23>/If Action Subsystem3' */
} rtDW_IfActionSubsystem3_FuzzyNe;

/* Block signals for system '<S23>/If Action Subsystem2' */
typedef struct {
  real_T cb;                           /* '<S28>/Sum2' */
  real_T cx;                           /* '<S28>/Sum3' */
} rtB_IfActionSubsystem2_FuzzyNeu;

/* Block states (auto storage) for system '<S23>/If Action Subsystem2' */
typedef struct {
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S23>/If Action Subsystem2' */
} rtDW_IfActionSubsystem2_FuzzyNe;

/* Block signals for system '<S24>/If Action Subsystem3' */
typedef struct {
  real_T dc;                           /* '<S33>/Sum2' */
  real_T dx;                           /* '<S33>/Sum3' */
} rtB_IfActionSubsystem3_FuzzyN_f;

/* Block states (auto storage) for system '<S24>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S24>/If Action Subsystem3' */
} rtDW_IfActionSubsystem3_Fuzzy_p;

/* Block signals (auto storage) */
typedef struct {
  real_T i1;                           /* '<S5>/TP 5Hz' */
  real_T Product;                      /* '<S5>/Product' */
  real_T Sum;                          /* '<S5>/Sum' */
  real_T Diff1;                        /* '<Root>/Sum1' */
  real_T DataConv;                     /* '<S9>/DataConv' */
  real_T Merge;                        /* '<S24>/Merge' */
  real_T andorMethod;                  /* '<S13>/andorMethod' */
  real_T Weighting;                    /* '<S13>/Weighting' */
  real_T impMethod[101];               /* '<S13>/impMethod' */
  real_T Merge_b;                      /* '<S23>/Merge' */
  real_T andorMethod_e;                /* '<S14>/andorMethod' */
  real_T Weighting_b;                  /* '<S14>/Weighting' */
  real_T impMethod_n[101];             /* '<S14>/impMethod' */
  real_T Merge_d;                      /* '<S25>/Merge' */
  real_T andorMethod_b;                /* '<S15>/andorMethod' */
  real_T Weighting_g;                  /* '<S15>/Weighting' */
  real_T impMethod_k[101];             /* '<S15>/impMethod' */
  real_T AggMethod1[101];              /* '<S6>/AggMethod1' */
  real_T i1_g;                         /* '<S5>/TP 5Hz1' */
  real_T Product1;                     /* '<S5>/Product1' */
  real_T Sum1;                         /* '<S5>/Sum1' */
  real_T Diff2;                        /* '<Root>/Sum2' */
  real_T DataConv_a;                   /* '<S10>/DataConv' */
  real_T Merge_c;                      /* '<S39>/Merge' */
  real_T andorMethod_d;                /* '<S16>/andorMethod' */
  real_T Weighting_a;                  /* '<S16>/Weighting' */
  real_T impMethod_d[101];             /* '<S16>/impMethod' */
  real_T Merge_n;                      /* '<S38>/Merge' */
  real_T andorMethod_k;                /* '<S17>/andorMethod' */
  real_T Weighting_bq;                 /* '<S17>/Weighting' */
  real_T impMethod_e[101];             /* '<S17>/impMethod' */
  real_T Merge_p;                      /* '<S40>/Merge' */
  real_T andorMethod_a;                /* '<S18>/andorMethod' */
  real_T Weighting_j;                  /* '<S18>/Weighting' */
  real_T impMethod_b[101];             /* '<S18>/impMethod' */
  real_T AggMethod2[101];              /* '<S6>/AggMethod2' */
  real_T Sum1_e;                       /* '<S7>/Sum1' */
  real_T Merge_l;                      /* '<S7>/Merge' */
  real_T Sum1_o;                       /* '<S8>/Sum1' */
  real_T Merge_g;                      /* '<S8>/Merge' */
  real_T viel[101];                    /* '<S11>/viel' */
  real_T viel_j[101];                  /* '<S12>/viel' */
  real_T MultiportSwitch[2];           /* '<Root>/Multiport Switch' */
  real_T SFunction[3];                 /* '<S68>/S-Function' */
  real_T SFunction_j;                  /* '<S57>/S-Function' */
  real_T SFunction_j2;                 /* '<S56>/S-Function' */
  real_T uq1Vorgabe;                   /* '<S4>/q1->uv1' */
  real_T Saturation;                   /* '<S4>/Saturation' */
  real_T uq2Vorgabe;                   /* '<S4>/q2->uv2' */
  real_T Saturation1;                  /* '<S4>/Saturation1' */
  real_T i1_m;                         /* '<S5>/TP 5Hz2' */
  real_T Product2;                     /* '<S5>/Product2' */
  real_T Sum2;                         /* '<S5>/Sum2' */
  real_T q1mess;                       /* '<Root>/um1->q1mess' */
  real_T q2mess;                       /* '<Root>/um2->q2mess' */
  real_T TotalFiringStrength;          /* '<S6>/Total Firing Strength' */
  real_T ZeroFiringStrength;           /* '<S6>/Zero Firing Strength?' */
  real_T Switch[2];                    /* '<S6>/Switch' */
  real_T ProductCOA[101];              /* '<S7>/Product (COA)' */
  real_T Sum_d;                        /* '<S7>/Sum' */
  real_T AveragingCOA;                 /* '<S7>/Averaging (COA)' */
  real_T ProductCOA_n[101];            /* '<S8>/Product (COA)' */
  real_T Sum_h;                        /* '<S8>/Sum' */
  real_T AveragingCOA_m;               /* '<S8>/Averaging (COA)' */
  boolean_T DataTypeConversion;        /* '<S3>/Data Type Conversion' */
  boolean_T DataTypeConversion1;       /* '<S3>/Data Type Conversion1' */
  boolean_T DataTypeConversion2;       /* '<S3>/Data Type Conversion2' */
  boolean_T DataTypeConversion3;       /* '<S3>/Data Type Conversion3' */
  boolean_T DataTypeConversion4;       /* '<S3>/Data Type Conversion4' */
  boolean_T DataTypeConversion5;       /* '<S3>/Data Type Conversion5' */
  boolean_T DataTypeConversion6;       /* '<S3>/Data Type Conversion6' */
  boolean_T DataTypeConversion7;       /* '<S3>/Data Type Conversion7' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_i;/* '<S40>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_l;/* '<S40>/If Action Subsystem1' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_n;/* '<S39>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_j;/* '<S39>/If Action Subsystem1' */
  rtB_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_b;/* '<S38>/If Action Subsystem2' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_g;/* '<S38>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_l;/* '<S25>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_h;/* '<S25>/If Action Subsystem1' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3;/* '<S24>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1;/* '<S24>/If Action Subsystem1' */
  rtB_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_m;/* '<S23>/If Action Subsystem2' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_j;/* '<S23>/If Action Subsystem3' */
} BlockIO_FuzzyNeuro;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int8_T If_ActiveSubsystem;           /* '<S24>/If' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S24>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S24>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_n;         /* '<S23>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_k;/* '<S23>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S23>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_i;         /* '<S25>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_a;/* '<S25>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanB_k;/* '<S25>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_i2;        /* '<S39>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_p;/* '<S39>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRan_kk;/* '<S39>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_e;         /* '<S38>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_h;/* '<S38>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_o;/* '<S38>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_ie;        /* '<S40>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_j;/* '<S40>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRan_ke;/* '<S40>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_c;         /* '<S7>/If' */
  int8_T ActionOne_SubsysRanBC;        /* '<S7>/Action: One' */
  int8_T If_ActiveSubsystem_a;         /* '<S8>/If' */
  int8_T ActionOne_SubsysRanBC_i;      /* '<S8>/Action: One' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_i;/* '<S40>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_l;/* '<S40>/If Action Subsystem1' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_n;/* '<S39>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_j;/* '<S39>/If Action Subsystem1' */
  rtDW_IfActionSubsystem2_FuzzyNe IfActionSubsystem2_b;/* '<S38>/If Action Subsystem2' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem3_g;/* '<S38>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_l;/* '<S25>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_h;/* '<S25>/If Action Subsystem1' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3;/* '<S24>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1;/* '<S24>/If Action Subsystem1' */
  rtDW_IfActionSubsystem2_FuzzyNe IfActionSubsystem2_m;/* '<S23>/If Action Subsystem2' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem3_j;/* '<S23>/If Action Subsystem3' */
  rtDW_Actionu1_FuzzyNeuro Actionu1_n; /* '<S8>/Action: u1' */
  rtDW_Actionu1_FuzzyNeuro Actionu1;   /* '<S7>/Action: u1' */
} D_Work_FuzzyNeuro;

/* Continuous states (auto storage) */
typedef struct {
  real_T TP5Hz_CSTATE;                 /* '<S5>/TP 5Hz' */
  real_T TP5Hz1_CSTATE;                /* '<S5>/TP 5Hz1' */
  real_T TP5Hz2_CSTATE;                /* '<S5>/TP 5Hz2' */
} ContinuousStates_FuzzyNeuro;

/* State derivatives (auto storage) */
typedef struct {
  real_T TP5Hz_CSTATE;                 /* '<S5>/TP 5Hz' */
  real_T TP5Hz1_CSTATE;                /* '<S5>/TP 5Hz1' */
  real_T TP5Hz2_CSTATE;                /* '<S5>/TP 5Hz2' */
} StateDerivatives_FuzzyNeuro;

/* State disabled  */
typedef struct {
  boolean_T TP5Hz_CSTATE;              /* '<S5>/TP 5Hz' */
  boolean_T TP5Hz1_CSTATE;             /* '<S5>/TP 5Hz1' */
  boolean_T TP5Hz2_CSTATE;             /* '<S5>/TP 5Hz2' */
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

/* Parameters for system: '<S23>/If Action Subsystem3' */
struct rtP_IfActionSubsystem3_FuzzyNeu_ {
  real_T a_Value;                      /* Expression: a
                                        * Referenced by: '<S29>/a'
                                        */
  real_T b_Value;                      /* Expression: b
                                        * Referenced by: '<S29>/b'
                                        */
};

/* Parameters for system: '<S23>/If Action Subsystem2' */
struct rtP_IfActionSubsystem2_FuzzyNeu_ {
  real_T b_Value;                      /* Expression: b
                                        * Referenced by: '<S28>/b'
                                        */
  real_T c_Value;                      /* Expression: c
                                        * Referenced by: '<S28>/c'
                                        */
};

/* Parameters for system: '<S24>/If Action Subsystem3' */
struct rtP_IfActionSubsystem3_FuzzyN_f_ {
  real_T c_Value;                      /* Expression: c
                                        * Referenced by: '<S33>/c'
                                        */
  real_T d_Value;                      /* Expression: d
                                        * Referenced by: '<S33>/d'
                                        */
};

/* Parameters (auto storage) */
struct Parameters_FuzzyNeuro_ {
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<S6>/Switch'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S19>/Out1'
                                        */
  real_T One_Value;                    /* Expression: 1
                                        * Referenced by: '<S19>/One'
                                        */
  real_T Out1_Y0_a;                    /* Expression: 0
                                        * Referenced by: '<S21>/Out1'
                                        */
  real_T One_Value_j;                  /* Expression: 1
                                        * Referenced by: '<S21>/One'
                                        */
  real_T Out1_Y0_aa;                   /* Expression: 0
                                        * Referenced by: '<S26>/Out1'
                                        */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<S26>/0'
                                        */
  real_T Out1_Y0_c;                    /* Expression: 1
                                        * Referenced by: '<S27>/Out1'
                                        */
  real_T _Value_f;                     /* Expression: 1
                                        * Referenced by: '<S27>/0'
                                        */
  real_T Out1_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S30>/Out1'
                                        */
  real_T _Value_g;                     /* Expression: 0
                                        * Referenced by: '<S30>/0'
                                        */
  real_T Out1_Y0_b;                    /* Expression: 0
                                        * Referenced by: '<S32>/Out1'
                                        */
  real_T _Value_l;                     /* Expression: 1
                                        * Referenced by: '<S32>/0'
                                        */
  real_T Out1_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<S34>/Out1'
                                        */
  real_T _Value_j;                     /* Expression: 0
                                        * Referenced by: '<S34>/0'
                                        */
  real_T Out1_Y0_j;                    /* Expression: 0
                                        * Referenced by: '<S36>/Out1'
                                        */
  real_T _Value_gn;                    /* Expression: 1
                                        * Referenced by: '<S36>/0'
                                        */
  real_T Out1_Y0_jm;                   /* Expression: 0
                                        * Referenced by: '<S41>/Out1'
                                        */
  real_T _Value_p;                     /* Expression: 0
                                        * Referenced by: '<S41>/0'
                                        */
  real_T Out1_Y0_d;                    /* Expression: 1
                                        * Referenced by: '<S42>/Out1'
                                        */
  real_T _Value_h;                     /* Expression: 1
                                        * Referenced by: '<S42>/0'
                                        */
  real_T Out1_Y0_ja;                   /* Expression: 0
                                        * Referenced by: '<S45>/Out1'
                                        */
  real_T _Value_gd;                    /* Expression: 0
                                        * Referenced by: '<S45>/0'
                                        */
  real_T Out1_Y0_e;                    /* Expression: 0
                                        * Referenced by: '<S47>/Out1'
                                        */
  real_T _Value_a;                     /* Expression: 1
                                        * Referenced by: '<S47>/0'
                                        */
  real_T Out1_Y0_h;                    /* Expression: 0
                                        * Referenced by: '<S49>/Out1'
                                        */
  real_T _Value_ff;                    /* Expression: 0
                                        * Referenced by: '<S49>/0'
                                        */
  real_T Out1_Y0_ez;                   /* Expression: 0
                                        * Referenced by: '<S51>/Out1'
                                        */
  real_T _Value_o;                     /* Expression: 1
                                        * Referenced by: '<S51>/0'
                                        */
  real_T Automatik_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Automatik'
                                        */
  real_T Weight_Value;                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S13>/Weight'
                                        */
  real_T soll1_Value;                  /* Expression: 30
                                        * Referenced by: '<Root>/soll1'
                                        */
  real_T Offseth1_Value;               /* Expression: Offseth1
                                        * Referenced by: '<S5>/Offseth1'
                                        */
  real_T Faktorh1_Value;               /* Expression: Faktorh1
                                        * Referenced by: '<S5>/Faktorh1'
                                        */
  real_T TP5Hz_A;                      /* Computed Parameter: TP5Hz_A
                                        * Referenced by: '<S5>/TP 5Hz'
                                        */
  real_T TP5Hz_C;                      /* Computed Parameter: TP5Hz_C
                                        * Referenced by: '<S5>/TP 5Hz'
                                        */
  real_T nix_Value[101];               /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                        * Referenced by: '<S11>/nix'
                                        */
  real_T Weight_Value_h;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S14>/Weight'
                                        */
  real_T bissle_Value[101];            /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(2).params)
                                        * Referenced by: '<S11>/bissle'
                                        */
  real_T Weight_Value_l;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S15>/Weight'
                                        */
  real_T ganzviel_Value[101];          /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                        * Referenced by: '<S11>/ganzviel'
                                        */
  real_T Weight_Value_i;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S16>/Weight'
                                        */
  real_T soll2_Value;                  /* Expression: 20
                                        * Referenced by: '<Root>/soll2'
                                        */
  real_T Offseth2_Value;               /* Expression: Offseth2
                                        * Referenced by: '<S5>/Offseth2'
                                        */
  real_T Faktorh2_Value;               /* Expression: Faktorh2
                                        * Referenced by: '<S5>/Faktorh2'
                                        */
  real_T TP5Hz1_A;                     /* Computed Parameter: TP5Hz1_A
                                        * Referenced by: '<S5>/TP 5Hz1'
                                        */
  real_T TP5Hz1_C;                     /* Computed Parameter: TP5Hz1_C
                                        * Referenced by: '<S5>/TP 5Hz1'
                                        */
  real_T nix_Value_m[101];             /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(1).params)
                                        * Referenced by: '<S12>/nix'
                                        */
  real_T Weight_Value_a;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S17>/Weight'
                                        */
  real_T stationaer_Value[101];        /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                        * Referenced by: '<S12>/stationaer'
                                        */
  real_T Weight_Value_n;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S18>/Weight'
                                        */
  real_T ganzviel_Value_d[101];        /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                        * Referenced by: '<S12>/ganzviel'
                                        */
  real_T xdata_Value[101];             /* Expression: Xdata
                                        * Referenced by: '<S7>/x data'
                                        */
  real_T xdata_Value_e[101];           /* Expression: Xdata
                                        * Referenced by: '<S8>/x data'
                                        */
  real_T MidRange_Value[2];            /* Expression: mean(cat(1,fis.output.range),2)
                                        * Referenced by: '<S6>/MidRange'
                                        */
  real_T viel_Value[101];              /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                        * Referenced by: '<S11>/viel'
                                        */
  real_T viel_Value_p[101];            /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                        * Referenced by: '<S12>/viel'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S6>/Zero'
                                        */
  real_T Pumpe1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Pumpe1'
                                        */
  real_T Pumpe2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Pumpe2'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S4>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S4>/Saturation1'
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
                                        * Referenced by: '<S5>/Faktorh3'
                                        */
  real_T Offseth3_Value;               /* Expression: Offseth3
                                        * Referenced by: '<S5>/Offseth3'
                                        */
  real_T TP5Hz2_A;                     /* Computed Parameter: TP5Hz2_A
                                        * Referenced by: '<S5>/TP 5Hz2'
                                        */
  real_T TP5Hz2_C;                     /* Computed Parameter: TP5Hz2_C
                                        * Referenced by: '<S5>/TP 5Hz2'
                                        */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_i;/* '<S40>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_l;/* '<S40>/If Action Subsystem1' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_n;/* '<S39>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_j;/* '<S39>/If Action Subsystem1' */
  rtP_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_b;/* '<S38>/If Action Subsystem2' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_g;/* '<S38>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_l;/* '<S25>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_h;/* '<S25>/If Action Subsystem1' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3;/* '<S24>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1;/* '<S24>/If Action Subsystem1' */
  rtP_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_m;/* '<S23>/If Action Subsystem2' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_j;/* '<S23>/If Action Subsystem3' */
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
 * '<S1>'   : 'FuzzyNeuro/Fuzzy Logic  Controller'
 * '<S2>'   : 'FuzzyNeuro/RTI Data'
 * '<S3>'   : 'FuzzyNeuro/T3Anlage'
 * '<S4>'   : 'FuzzyNeuro/Umrechnung2'
 * '<S5>'   : 'FuzzyNeuro/Umrechnunguh'
 * '<S6>'   : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard'
 * '<S7>'   : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1'
 * '<S8>'   : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2'
 * '<S9>'   : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1'
 * '<S10>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2'
 * '<S11>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Pumpe1'
 * '<S12>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Pumpe2'
 * '<S13>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule1'
 * '<S14>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule2'
 * '<S15>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule3'
 * '<S16>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule4'
 * '<S17>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule5'
 * '<S18>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule6'
 * '<S19>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: One'
 * '<S20>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: u1'
 * '<S21>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: One'
 * '<S22>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: u1'
 * '<S23>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig'
 * '<S24>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch'
 * '<S25>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig'
 * '<S26>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem'
 * '<S27>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem1'
 * '<S28>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem2'
 * '<S29>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem3'
 * '<S30>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem'
 * '<S31>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem1'
 * '<S32>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem2'
 * '<S33>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem3'
 * '<S34>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem'
 * '<S35>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem1'
 * '<S36>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem2'
 * '<S37>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem3'
 * '<S38>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig'
 * '<S39>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch'
 * '<S40>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig'
 * '<S41>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem'
 * '<S42>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem1'
 * '<S43>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem2'
 * '<S44>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem3'
 * '<S45>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem'
 * '<S46>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem1'
 * '<S47>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem2'
 * '<S48>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem3'
 * '<S49>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem'
 * '<S50>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem1'
 * '<S51>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem2'
 * '<S52>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem3'
 * '<S53>'  : 'FuzzyNeuro/RTI Data/RTI Data Store'
 * '<S54>'  : 'FuzzyNeuro/RTI Data/RTI Data Store/RTI Data Store'
 * '<S55>'  : 'FuzzyNeuro/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S56>'  : 'FuzzyNeuro/T3Anlage/DS1104ADC_C6'
 * '<S57>'  : 'FuzzyNeuro/T3Anlage/DS1104ADC_C7'
 * '<S58>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C0'
 * '<S59>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C1'
 * '<S60>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C2'
 * '<S61>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C3'
 * '<S62>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C4'
 * '<S63>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C5'
 * '<S64>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C6'
 * '<S65>'  : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C7'
 * '<S66>'  : 'FuzzyNeuro/T3Anlage/DS1104DAC_C1'
 * '<S67>'  : 'FuzzyNeuro/T3Anlage/DS1104DAC_C2'
 * '<S68>'  : 'FuzzyNeuro/T3Anlage/DS1104MUX_ADC'
 */
#endif                                 /* RTW_HEADER_FuzzyNeuro_h_ */
