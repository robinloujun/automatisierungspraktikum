/*
 * FuzzyNeuro.h
 *
 * Code generation for model "FuzzyNeuro.mdl".
 *
 * Model version              : 1.133
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Sat Nov 07 21:31:40 2015
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

/* Block states (auto storage) for system '<S11>/Action: u1' */
typedef struct {
  int8_T Actionu1_SubsysRanBC;         /* '<S11>/Action: u1' */
} rtDW_Actionu1_FuzzyNeuro;

/* Block signals for system '<S27>/If Action Subsystem3' */
typedef struct {
  real_T xa;                           /* '<S33>/Sum' */
  real_T ba;                           /* '<S33>/Sum1' */
} rtB_IfActionSubsystem3_FuzzyNeu;

/* Block states (auto storage) for system '<S27>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S27>/If Action Subsystem3' */
} rtDW_IfActionSubsystem3_FuzzyNe;

/* Block signals for system '<S27>/If Action Subsystem2' */
typedef struct {
  real_T cb;                           /* '<S32>/Sum2' */
  real_T cx;                           /* '<S32>/Sum3' */
} rtB_IfActionSubsystem2_FuzzyNeu;

/* Block states (auto storage) for system '<S27>/If Action Subsystem2' */
typedef struct {
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S27>/If Action Subsystem2' */
} rtDW_IfActionSubsystem2_FuzzyNe;

/* Block signals for system '<S28>/If Action Subsystem3' */
typedef struct {
  real_T dc;                           /* '<S37>/Sum2' */
  real_T dx;                           /* '<S37>/Sum3' */
} rtB_IfActionSubsystem3_FuzzyN_f;

/* Block states (auto storage) for system '<S28>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S28>/If Action Subsystem3' */
} rtDW_IfActionSubsystem3_Fuzzy_p;

/* Block signals (auto storage) */
typedef struct {
  real_T TmpSignalConversionAtDotProduct[2];/* '<S140>/In2' */
  real_T DotProduct;                   /* '<S140>/Dot Product' */
  real_T DotProduct_c;                 /* '<S141>/Dot Product' */
  real_T DotProduct_k;                 /* '<S142>/Dot Product' */
  real_T DotProduct_l;                 /* '<S143>/Dot Product' */
  real_T DotProduct_ka;                /* '<S144>/Dot Product' */
  real_T DotProduct_e;                 /* '<S145>/Dot Product' */
  real_T DotProduct_b;                 /* '<S146>/Dot Product' */
  real_T DotProduct_p;                 /* '<S147>/Dot Product' */
  real_T DotProduct_ko;                /* '<S148>/Dot Product' */
  real_T DotProduct_km;                /* '<S149>/Dot Product' */
  real_T netsum[10];                   /* '<S135>/netsum' */
  real_T Gain[10];                     /* '<S139>/Gain' */
  real_T Exp[10];                      /* '<S139>/Exp' */
  real_T Sum[10];                      /* '<S139>/Sum' */
  real_T Reciprocal[10];               /* '<S139>/Reciprocal' */
  real_T Gain1[10];                    /* '<S139>/Gain1' */
  real_T Sum1[10];                     /* '<S139>/Sum1' */
  real_T DotProduct_h;                 /* '<S153>/Dot Product' */
  real_T DotProduct_m;                 /* '<S154>/Dot Product' */
  real_T netsum_k[2];                  /* '<S136>/netsum' */
  real_T i1;                           /* '<S9>/TP 5Hz' */
  real_T Product;                      /* '<S9>/Product' */
  real_T Sum_d;                        /* '<S9>/Sum' */
  real_T Diff1;                        /* '<Root>/Sum1' */
  real_T DataConv;                     /* '<S13>/DataConv' */
  real_T Merge;                        /* '<S28>/Merge' */
  real_T andorMethod;                  /* '<S17>/andorMethod' */
  real_T Weighting;                    /* '<S17>/Weighting' */
  real_T impMethod[101];               /* '<S17>/impMethod' */
  real_T Merge_b;                      /* '<S27>/Merge' */
  real_T andorMethod_e;                /* '<S18>/andorMethod' */
  real_T Weighting_b;                  /* '<S18>/Weighting' */
  real_T impMethod_n[101];             /* '<S18>/impMethod' */
  real_T Merge_d;                      /* '<S29>/Merge' */
  real_T andorMethod_b;                /* '<S19>/andorMethod' */
  real_T Weighting_g;                  /* '<S19>/Weighting' */
  real_T impMethod_k[101];             /* '<S19>/impMethod' */
  real_T AggMethod1[101];              /* '<S10>/AggMethod1' */
  real_T i1_g;                         /* '<S9>/TP 5Hz1' */
  real_T Product1;                     /* '<S9>/Product1' */
  real_T Sum1_f;                       /* '<S9>/Sum1' */
  real_T Diff2;                        /* '<Root>/Sum2' */
  real_T DataConv_a;                   /* '<S14>/DataConv' */
  real_T Merge_c;                      /* '<S43>/Merge' */
  real_T andorMethod_d;                /* '<S20>/andorMethod' */
  real_T Weighting_a;                  /* '<S20>/Weighting' */
  real_T impMethod_d[101];             /* '<S20>/impMethod' */
  real_T Merge_n;                      /* '<S42>/Merge' */
  real_T andorMethod_k;                /* '<S21>/andorMethod' */
  real_T Weighting_bq;                 /* '<S21>/Weighting' */
  real_T impMethod_e[101];             /* '<S21>/impMethod' */
  real_T Merge_p;                      /* '<S44>/Merge' */
  real_T andorMethod_a;                /* '<S22>/andorMethod' */
  real_T Weighting_j;                  /* '<S22>/Weighting' */
  real_T impMethod_b[101];             /* '<S22>/impMethod' */
  real_T AggMethod2[101];              /* '<S10>/AggMethod2' */
  real_T Sum1_e;                       /* '<S11>/Sum1' */
  real_T Merge_l;                      /* '<S11>/Merge' */
  real_T Sum1_o;                       /* '<S12>/Sum1' */
  real_T Merge_g;                      /* '<S12>/Merge' */
  real_T viel[101];                    /* '<S15>/viel' */
  real_T viel_j[101];                  /* '<S16>/viel' */
  real_T Subtractminx[2];              /* '<S131>/Subtract min x' */
  real_T rangeyrangex[2];              /* '<S131>/range y // range x' */
  real_T Addminy[2];                   /* '<S131>/Add min y' */
  real_T DotProduct_d;                 /* '<S116>/Dot Product' */
  real_T DotProduct_g;                 /* '<S118>/Dot Product' */
  real_T DotProduct_j;                 /* '<S119>/Dot Product' */
  real_T DotProduct_my;                /* '<S120>/Dot Product' */
  real_T DotProduct_j0;                /* '<S121>/Dot Product' */
  real_T DotProduct_ho;                /* '<S122>/Dot Product' */
  real_T DotProduct_dx;                /* '<S123>/Dot Product' */
  real_T DotProduct_li;                /* '<S124>/Dot Product' */
  real_T DotProduct_kf;                /* '<S125>/Dot Product' */
  real_T DotProduct_n;                 /* '<S117>/Dot Product' */
  real_T netsum_i[10];                 /* '<S109>/netsum' */
  real_T Gain_o[10];                   /* '<S115>/Gain' */
  real_T Exp_b[10];                    /* '<S115>/Exp' */
  real_T Sum_a[10];                    /* '<S115>/Sum' */
  real_T Reciprocal_p[10];             /* '<S115>/Reciprocal' */
  real_T Gain1_i[10];                  /* '<S115>/Gain1' */
  real_T Sum1_d[10];                   /* '<S115>/Sum1' */
  real_T DotProduct_o;                 /* '<S129>/Dot Product' */
  real_T DotProduct_p0;                /* '<S130>/Dot Product' */
  real_T netsum_e[2];                  /* '<S110>/netsum' */
  real_T Subtractminy[2];              /* '<S133>/Subtract min y' */
  real_T Dividebyrangey[2];            /* '<S133>/Divide by range y' */
  real_T Addminx[2];                   /* '<S133>/Add min x' */
  real_T MultiportSwitch[2];           /* '<Root>/Multiport Switch' */
  real_T Subtractminx_k[2];            /* '<S79>/Subtract min x' */
  real_T rangeyrangex_i[2];            /* '<S79>/range y // range x' */
  real_T Addminy_o[2];                 /* '<S79>/Add min y' */
  real_T DotProduct_l3;                /* '<S64>/Dot Product' */
  real_T DotProduct_pn;                /* '<S65>/Dot Product' */
  real_T DotProduct_gx;                /* '<S66>/Dot Product' */
  real_T DotProduct_cb;                /* '<S67>/Dot Product' */
  real_T DotProduct_f;                 /* '<S68>/Dot Product' */
  real_T DotProduct_f4;                /* '<S69>/Dot Product' */
  real_T DotProduct_of;                /* '<S70>/Dot Product' */
  real_T DotProduct_a;                 /* '<S71>/Dot Product' */
  real_T DotProduct_ol;                /* '<S72>/Dot Product' */
  real_T DotProduct_c4;                /* '<S73>/Dot Product' */
  real_T netsum_a[10];                 /* '<S57>/netsum' */
  real_T Gain_g[10];                   /* '<S63>/Gain' */
  real_T Exp_j[10];                    /* '<S63>/Exp' */
  real_T Sum_e[10];                    /* '<S63>/Sum' */
  real_T Reciprocal_a[10];             /* '<S63>/Reciprocal' */
  real_T Gain1_p[10];                  /* '<S63>/Gain1' */
  real_T Sum1_d2[10];                  /* '<S63>/Sum1' */
  real_T DotProduct_ak;                /* '<S77>/Dot Product' */
  real_T DotProduct_al;                /* '<S78>/Dot Product' */
  real_T netsum_ka[2];                 /* '<S58>/netsum' */
  real_T Subtractminy_a[2];            /* '<S81>/Subtract min y' */
  real_T Dividebyrangey_l[2];          /* '<S81>/Divide by range y' */
  real_T Addminx_o[2];                 /* '<S81>/Add min x' */
  real_T Constants;                    /* '<S82>/Constants' */
  real_T Subtractminx_ki[2];           /* '<S105>/Subtract min x' */
  real_T rangeyrangex_c[2];            /* '<S105>/range y // range x' */
  real_T Addminy_k[2];                 /* '<S105>/Add min y' */
  real_T DotProduct_kb;                /* '<S90>/Dot Product' */
  real_T DotProduct_ai;                /* '<S91>/Dot Product' */
  real_T DotProduct_lz;                /* '<S92>/Dot Product' */
  real_T DotProduct_dw;                /* '<S93>/Dot Product' */
  real_T DotProduct_pn1;               /* '<S94>/Dot Product' */
  real_T DotProduct_jx;                /* '<S95>/Dot Product' */
  real_T DotProduct_ee;                /* '<S96>/Dot Product' */
  real_T DotProduct_ew;                /* '<S97>/Dot Product' */
  real_T DotProduct_ge;                /* '<S98>/Dot Product' */
  real_T DotProduct_fc;                /* '<S99>/Dot Product' */
  real_T netsum_o[10];                 /* '<S83>/netsum' */
  real_T Gain_m[10];                   /* '<S89>/Gain' */
  real_T Exp_c[10];                    /* '<S89>/Exp' */
  real_T Sum_c[10];                    /* '<S89>/Sum' */
  real_T Reciprocal_g[10];             /* '<S89>/Reciprocal' */
  real_T Gain1_h[10];                  /* '<S89>/Gain1' */
  real_T Sum1_p[10];                   /* '<S89>/Sum1' */
  real_T DotProduct_m3;                /* '<S103>/Dot Product' */
  real_T DotProduct_oi;                /* '<S104>/Dot Product' */
  real_T netsum_m[2];                  /* '<S84>/netsum' */
  real_T Subtractminy_p[2];            /* '<S107>/Subtract min y' */
  real_T Dividebyrangey_m[2];          /* '<S107>/Divide by range y' */
  real_T Addminx_d[2];                 /* '<S107>/Add min x' */
  real_T Constants_n;                  /* '<S108>/Constants' */
  real_T Constants_g;                  /* '<S134>/Constants' */
  real_T SFunction[3];                 /* '<S170>/S-Function' */
  real_T SFunction_n;                  /* '<S158>/S-Function' */
  real_T SFunction_j;                  /* '<S159>/S-Function' */
  real_T uq1Vorgabe;                   /* '<S8>/q1->uv1' */
  real_T Saturation;                   /* '<S8>/Saturation' */
  real_T uq2Vorgabe;                   /* '<S8>/q2->uv2' */
  real_T Saturation1;                  /* '<S8>/Saturation1' */
  real_T i1_m;                         /* '<S9>/TP 5Hz2' */
  real_T Product2;                     /* '<S9>/Product2' */
  real_T Sum2;                         /* '<S9>/Sum2' */
  real_T q1mess;                       /* '<Root>/um1->q1mess' */
  real_T q2mess;                       /* '<Root>/um2->q2mess' */
  real_T TotalFiringStrength;          /* '<S10>/Total Firing Strength' */
  real_T ZeroFiringStrength;           /* '<S10>/Zero Firing Strength?' */
  real_T Switch[2];                    /* '<S10>/Switch' */
  real_T ProductCOA[101];              /* '<S11>/Product (COA)' */
  real_T Sum_dk;                       /* '<S11>/Sum' */
  real_T AveragingCOA;                 /* '<S11>/Averaging (COA)' */
  real_T ProductCOA_n[101];            /* '<S12>/Product (COA)' */
  real_T Sum_h;                        /* '<S12>/Sum' */
  real_T AveragingCOA_m;               /* '<S12>/Averaging (COA)' */
  boolean_T DataTypeConversion;        /* '<S7>/Data Type Conversion' */
  boolean_T DataTypeConversion1;       /* '<S7>/Data Type Conversion1' */
  boolean_T DataTypeConversion2;       /* '<S7>/Data Type Conversion2' */
  boolean_T DataTypeConversion3;       /* '<S7>/Data Type Conversion3' */
  boolean_T DataTypeConversion4;       /* '<S7>/Data Type Conversion4' */
  boolean_T DataTypeConversion5;       /* '<S7>/Data Type Conversion5' */
  boolean_T DataTypeConversion6;       /* '<S7>/Data Type Conversion6' */
  boolean_T DataTypeConversion7;       /* '<S7>/Data Type Conversion7' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_i;/* '<S44>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_l;/* '<S44>/If Action Subsystem1' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_n;/* '<S43>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_j;/* '<S43>/If Action Subsystem1' */
  rtB_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_b;/* '<S42>/If Action Subsystem2' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_g;/* '<S42>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_l;/* '<S29>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_h;/* '<S29>/If Action Subsystem1' */
  rtB_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3;/* '<S28>/If Action Subsystem3' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1;/* '<S28>/If Action Subsystem1' */
  rtB_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_m;/* '<S27>/If Action Subsystem2' */
  rtB_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_j;/* '<S27>/If Action Subsystem3' */
} BlockIO_FuzzyNeuro;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int8_T If_ActiveSubsystem;           /* '<S28>/If' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S28>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S28>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_n;         /* '<S27>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_k;/* '<S27>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S27>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_i;         /* '<S29>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_a;/* '<S29>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanB_k;/* '<S29>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_i2;        /* '<S43>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_p;/* '<S43>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRan_kk;/* '<S43>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_e;         /* '<S42>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_h;/* '<S42>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_o;/* '<S42>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_ie;        /* '<S44>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_j;/* '<S44>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRan_ke;/* '<S44>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_c;         /* '<S11>/If' */
  int8_T ActionOne_SubsysRanBC;        /* '<S11>/Action: One' */
  int8_T If_ActiveSubsystem_a;         /* '<S12>/If' */
  int8_T ActionOne_SubsysRanBC_i;      /* '<S12>/Action: One' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_i;/* '<S44>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_l;/* '<S44>/If Action Subsystem1' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_n;/* '<S43>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_j;/* '<S43>/If Action Subsystem1' */
  rtDW_IfActionSubsystem2_FuzzyNe IfActionSubsystem2_b;/* '<S42>/If Action Subsystem2' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem3_g;/* '<S42>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3_l;/* '<S29>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1_h;/* '<S29>/If Action Subsystem1' */
  rtDW_IfActionSubsystem3_Fuzzy_p IfActionSubsystem3;/* '<S28>/If Action Subsystem3' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem1;/* '<S28>/If Action Subsystem1' */
  rtDW_IfActionSubsystem2_FuzzyNe IfActionSubsystem2_m;/* '<S27>/If Action Subsystem2' */
  rtDW_IfActionSubsystem3_FuzzyNe IfActionSubsystem3_j;/* '<S27>/If Action Subsystem3' */
  rtDW_Actionu1_FuzzyNeuro Actionu1_n; /* '<S12>/Action: u1' */
  rtDW_Actionu1_FuzzyNeuro Actionu1;   /* '<S11>/Action: u1' */
} D_Work_FuzzyNeuro;

/* Continuous states (auto storage) */
typedef struct {
  real_T TP5Hz_CSTATE;                 /* '<S9>/TP 5Hz' */
  real_T TP5Hz1_CSTATE;                /* '<S9>/TP 5Hz1' */
  real_T TP5Hz2_CSTATE;                /* '<S9>/TP 5Hz2' */
} ContinuousStates_FuzzyNeuro;

/* State derivatives (auto storage) */
typedef struct {
  real_T TP5Hz_CSTATE;                 /* '<S9>/TP 5Hz' */
  real_T TP5Hz1_CSTATE;                /* '<S9>/TP 5Hz1' */
  real_T TP5Hz2_CSTATE;                /* '<S9>/TP 5Hz2' */
} StateDerivatives_FuzzyNeuro;

/* State disabled  */
typedef struct {
  boolean_T TP5Hz_CSTATE;              /* '<S9>/TP 5Hz' */
  boolean_T TP5Hz1_CSTATE;             /* '<S9>/TP 5Hz1' */
  boolean_T TP5Hz2_CSTATE;             /* '<S9>/TP 5Hz2' */
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

/* Parameters for system: '<S27>/If Action Subsystem3' */
struct rtP_IfActionSubsystem3_FuzzyNeu_ {
  real_T a_Value;                      /* Expression: a
                                        * Referenced by: '<S33>/a'
                                        */
  real_T b_Value;                      /* Expression: b
                                        * Referenced by: '<S33>/b'
                                        */
};

/* Parameters for system: '<S27>/If Action Subsystem2' */
struct rtP_IfActionSubsystem2_FuzzyNeu_ {
  real_T b_Value;                      /* Expression: b
                                        * Referenced by: '<S32>/b'
                                        */
  real_T c_Value;                      /* Expression: c
                                        * Referenced by: '<S32>/c'
                                        */
};

/* Parameters for system: '<S28>/If Action Subsystem3' */
struct rtP_IfActionSubsystem3_FuzzyN_f_ {
  real_T c_Value;                      /* Expression: c
                                        * Referenced by: '<S37>/c'
                                        */
  real_T d_Value;                      /* Expression: d
                                        * Referenced by: '<S37>/d'
                                        */
};

/* Parameters (auto storage) */
struct Parameters_FuzzyNeuro_ {
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<S10>/Switch'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S23>/Out1'
                                        */
  real_T One_Value;                    /* Expression: 1
                                        * Referenced by: '<S23>/One'
                                        */
  real_T Out1_Y0_a;                    /* Expression: 0
                                        * Referenced by: '<S25>/Out1'
                                        */
  real_T One_Value_j;                  /* Expression: 1
                                        * Referenced by: '<S25>/One'
                                        */
  real_T Out1_Y0_aa;                   /* Expression: 0
                                        * Referenced by: '<S30>/Out1'
                                        */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<S30>/0'
                                        */
  real_T Out1_Y0_c;                    /* Expression: 1
                                        * Referenced by: '<S31>/Out1'
                                        */
  real_T _Value_f;                     /* Expression: 1
                                        * Referenced by: '<S31>/0'
                                        */
  real_T Out1_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S34>/Out1'
                                        */
  real_T _Value_g;                     /* Expression: 0
                                        * Referenced by: '<S34>/0'
                                        */
  real_T Out1_Y0_b;                    /* Expression: 0
                                        * Referenced by: '<S36>/Out1'
                                        */
  real_T _Value_l;                     /* Expression: 1
                                        * Referenced by: '<S36>/0'
                                        */
  real_T Out1_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<S38>/Out1'
                                        */
  real_T _Value_j;                     /* Expression: 0
                                        * Referenced by: '<S38>/0'
                                        */
  real_T Out1_Y0_j;                    /* Expression: 0
                                        * Referenced by: '<S40>/Out1'
                                        */
  real_T _Value_gn;                    /* Expression: 1
                                        * Referenced by: '<S40>/0'
                                        */
  real_T Out1_Y0_jm;                   /* Expression: 0
                                        * Referenced by: '<S45>/Out1'
                                        */
  real_T _Value_p;                     /* Expression: 0
                                        * Referenced by: '<S45>/0'
                                        */
  real_T Out1_Y0_d;                    /* Expression: 1
                                        * Referenced by: '<S46>/Out1'
                                        */
  real_T _Value_h;                     /* Expression: 1
                                        * Referenced by: '<S46>/0'
                                        */
  real_T Out1_Y0_ja;                   /* Expression: 0
                                        * Referenced by: '<S49>/Out1'
                                        */
  real_T _Value_gd;                    /* Expression: 0
                                        * Referenced by: '<S49>/0'
                                        */
  real_T Out1_Y0_e;                    /* Expression: 0
                                        * Referenced by: '<S51>/Out1'
                                        */
  real_T _Value_a;                     /* Expression: 1
                                        * Referenced by: '<S51>/0'
                                        */
  real_T Out1_Y0_h;                    /* Expression: 0
                                        * Referenced by: '<S53>/Out1'
                                        */
  real_T _Value_ff;                    /* Expression: 0
                                        * Referenced by: '<S53>/0'
                                        */
  real_T Out1_Y0_ez;                   /* Expression: 0
                                        * Referenced by: '<S55>/Out1'
                                        */
  real_T _Value_o;                     /* Expression: 1
                                        * Referenced by: '<S55>/0'
                                        */
  real_T IW111_Value[2];               /* Expression: [4.1275744182517728;0.23357654514432352]
                                        * Referenced by: '<S138>/IW{1,1}(1,:)''
                                        */
  real_T IW1110_Value[2];              /* Expression: [3.6457876201992696;-3.6386418260762721]
                                        * Referenced by: '<S138>/IW{1,1}(10,:)''
                                        */
  real_T IW112_Value[2];               /* Expression: [-1.6667301896344879;1.0665599583684517]
                                        * Referenced by: '<S138>/IW{1,1}(2,:)''
                                        */
  real_T IW113_Value[2];               /* Expression: [2.8964187374153179;-2.8510267372607743]
                                        * Referenced by: '<S138>/IW{1,1}(3,:)''
                                        */
  real_T IW114_Value[2];               /* Expression: [0.27911975738719846;5.6566115348900627]
                                        * Referenced by: '<S138>/IW{1,1}(4,:)''
                                        */
  real_T IW115_Value[2];               /* Expression: [-1.039422223225861;0.62947878227408172]
                                        * Referenced by: '<S138>/IW{1,1}(5,:)''
                                        */
  real_T IW116_Value[2];               /* Expression: [-1.4590381293059993;0.12492381724681299]
                                        * Referenced by: '<S138>/IW{1,1}(6,:)''
                                        */
  real_T IW117_Value[2];               /* Expression: [1.2245258169903461;-0.78670493017387266]
                                        * Referenced by: '<S138>/IW{1,1}(7,:)''
                                        */
  real_T IW118_Value[2];               /* Expression: [-1.0429667548775317;0.249863054813382]
                                        * Referenced by: '<S138>/IW{1,1}(8,:)''
                                        */
  real_T IW119_Value[2];               /* Expression: [1.2032645290213637;1.7205672658350526]
                                        * Referenced by: '<S138>/IW{1,1}(9,:)''
                                        */
  real_T b1_Value[10];                 /* Expression: [21.259192532954096;2.0770318927379963;1.2969310551612643;27.485246124733397;-0.25386857255741685;-0.28234416389412609;-1.0136876371033914;-0.20615370659297905;3.2117373283677382;11.063316914170549]
                                        * Referenced by: '<S135>/b{1}'
                                        */
  real_T Gain_Gain;                    /* Expression: -2
                                        * Referenced by: '<S139>/Gain'
                                        */
  real_T one_Value;                    /* Expression: 1
                                        * Referenced by: '<S139>/one'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<S139>/Gain1'
                                        */
  real_T one1_Value;                   /* Expression: 1
                                        * Referenced by: '<S139>/one1'
                                        */
  real_T IW211_Value[10];              /* Expression: [-2.6717667210301745;-0.24577811343660447;-1.6345479954854862;0.84376399445294203;-4.3142865273223423;-5.7951337080560092;0.26122969268007884;7.4366919048603215;-0.013710709087276797;-0.0013937262791041548]
                                        * Referenced by: '<S151>/IW{2,1}(1,:)''
                                        */
  real_T IW212_Value[10];              /* Expression: [2.0314768748581891;4.2986509984954449;0.94371800388158722;-1.3126167298923854;12.345010723633447;7.095091573134793;5.3604887240987606;-17.526696687040062;0.7736551284165788;-0.86176149931881041]
                                        * Referenced by: '<S151>/IW{2,1}(2,:)''
                                        */
  real_T b2_Value[2];                  /* Expression: [3.4431107513275845;1.4427186564250916]
                                        * Referenced by: '<S136>/b{2}'
                                        */
  real_T Automatik_Value;              /* Expression: 3
                                        * Referenced by: '<Root>/Automatik'
                                        */
  real_T Weight_Value;                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S17>/Weight'
                                        */
  real_T soll1_Value;                  /* Expression: 40
                                        * Referenced by: '<Root>/soll1'
                                        */
  real_T Offseth1_Value;               /* Expression: Offseth1
                                        * Referenced by: '<S9>/Offseth1'
                                        */
  real_T Faktorh1_Value;               /* Expression: Faktorh1
                                        * Referenced by: '<S9>/Faktorh1'
                                        */
  real_T TP5Hz_A;                      /* Computed Parameter: TP5Hz_A
                                        * Referenced by: '<S9>/TP 5Hz'
                                        */
  real_T TP5Hz_C;                      /* Computed Parameter: TP5Hz_C
                                        * Referenced by: '<S9>/TP 5Hz'
                                        */
  real_T nix_Value[101];               /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(1).params)
                                        * Referenced by: '<S15>/nix'
                                        */
  real_T Weight_Value_h;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S18>/Weight'
                                        */
  real_T bissle_Value[101];            /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(2).params)
                                        * Referenced by: '<S15>/bissle'
                                        */
  real_T Weight_Value_l;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S19>/Weight'
                                        */
  real_T ganzviel_Value[101];          /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(4).params)
                                        * Referenced by: '<S15>/ganzviel'
                                        */
  real_T Weight_Value_i;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S20>/Weight'
                                        */
  real_T soll2_Value;                  /* Expression: 20
                                        * Referenced by: '<Root>/soll2'
                                        */
  real_T Offseth2_Value;               /* Expression: Offseth2
                                        * Referenced by: '<S9>/Offseth2'
                                        */
  real_T Faktorh2_Value;               /* Expression: Faktorh2
                                        * Referenced by: '<S9>/Faktorh2'
                                        */
  real_T TP5Hz1_A;                     /* Computed Parameter: TP5Hz1_A
                                        * Referenced by: '<S9>/TP 5Hz1'
                                        */
  real_T TP5Hz1_C;                     /* Computed Parameter: TP5Hz1_C
                                        * Referenced by: '<S9>/TP 5Hz1'
                                        */
  real_T nix_Value_m[101];             /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(1).params)
                                        * Referenced by: '<S16>/nix'
                                        */
  real_T Weight_Value_a;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S21>/Weight'
                                        */
  real_T stationaer_Value[101];        /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(2).params)
                                        * Referenced by: '<S16>/stationaer'
                                        */
  real_T Weight_Value_n;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S22>/Weight'
                                        */
  real_T ganzviel_Value_d[101];        /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(3).params)
                                        * Referenced by: '<S16>/ganzviel'
                                        */
  real_T xdata_Value[101];             /* Expression: Xdata
                                        * Referenced by: '<S11>/x data'
                                        */
  real_T xdata_Value_e[101];           /* Expression: Xdata
                                        * Referenced by: '<S12>/x data'
                                        */
  real_T MidRange_Value[2];            /* Expression: mean(cat(1,fis.output.range),2)
                                        * Referenced by: '<S10>/MidRange'
                                        */
  real_T viel_Value[101];              /* Expression: trimf(linspace(fis.output(1).range(1),fis.output(1).range(2),101),fis.output(1).mf(3).params)
                                        * Referenced by: '<S15>/viel'
                                        */
  real_T viel_Value_p[101];            /* Expression: trimf(linspace(fis.output(2).range(1),fis.output(2).range(2),101),fis.output(2).mf(4).params)
                                        * Referenced by: '<S16>/viel'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S10>/Zero'
                                        */
  real_T Pumpe1_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Pumpe1'
                                        */
  real_T Pumpe2_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/Pumpe2'
                                        */
  real_T IW211_Value_i[10];            /* Expression: [0.9861163607610216;-0.038188774771291012;0.66711201140166931;0.65179934834092579;0.20319750754691854;0.072396142352322071;0.0011816416013210934;0.18578659835879338;0.093241841121826541;2.0256920853316438]
                                        * Referenced by: '<S127>/IW{2,1}(1,:)''
                                        */
  real_T IW111_Value_d[2];             /* Expression: [-19.284004231397624;0.71941372102483003]
                                        * Referenced by: '<S114>/IW{1,1}(1,:)''
                                        */
  real_T Subtractminx_Bias[2];         /* Expression: -xmin
                                        * Referenced by: '<S131>/Subtract min x'
                                        */
  real_T rangeyrangex_Gain[2];         /* Expression: (ymax-ymin)./(xmax-xmin)
                                        * Referenced by: '<S131>/range y // range x'
                                        */
  real_T Addminy_Bias;                 /* Expression: ymin
                                        * Referenced by: '<S131>/Add min y'
                                        */
  real_T IW112_Value_k[2];             /* Expression: [0.0025294425295041951;-67.661718527814699]
                                        * Referenced by: '<S114>/IW{1,1}(2,:)''
                                        */
  real_T IW113_Value_o[2];             /* Expression: [15.615402281356381;-1.1265712004585475]
                                        * Referenced by: '<S114>/IW{1,1}(3,:)''
                                        */
  real_T IW114_Value_a[2];             /* Expression: [-0.65189790318734098;-1.2162903769604909]
                                        * Referenced by: '<S114>/IW{1,1}(4,:)''
                                        */
  real_T IW115_Value_f[2];             /* Expression: [46.519374546083185;67.395278036219452]
                                        * Referenced by: '<S114>/IW{1,1}(5,:)''
                                        */
  real_T IW116_Value_h[2];             /* Expression: [-0.51436221294497242;15.00548980202217]
                                        * Referenced by: '<S114>/IW{1,1}(6,:)''
                                        */
  real_T IW117_Value_d[2];             /* Expression: [-4.1015628254644101;-185.30036891939486]
                                        * Referenced by: '<S114>/IW{1,1}(7,:)''
                                        */
  real_T IW118_Value_h[2];             /* Expression: [36.458109175452755;16.985758233475771]
                                        * Referenced by: '<S114>/IW{1,1}(8,:)''
                                        */
  real_T IW119_Value_j[2];             /* Expression: [-0.19451387176962159;38.005404304245928]
                                        * Referenced by: '<S114>/IW{1,1}(9,:)''
                                        */
  real_T IW1110_Value_g[2];            /* Expression: [-50.842937405585651;-45.165972939682625]
                                        * Referenced by: '<S114>/IW{1,1}(10,:)''
                                        */
  real_T b1_Value_o[10];               /* Expression: [18.408641961311112;-65.900602184572691;-1.9740879119672343;1.038546488930326;-11.143105302885123;-2.0535616828358161;-45.303015054099617;6.0692459737516486;-36.23583122299685;-96.288768497851137]
                                        * Referenced by: '<S109>/b{1}'
                                        */
  real_T Gain_Gain_e;                  /* Expression: -2
                                        * Referenced by: '<S115>/Gain'
                                        */
  real_T one_Value_d;                  /* Expression: 1
                                        * Referenced by: '<S115>/one'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: 2
                                        * Referenced by: '<S115>/Gain1'
                                        */
  real_T one1_Value_b;                 /* Expression: 1
                                        * Referenced by: '<S115>/one1'
                                        */
  real_T IW212_Value_o[10];            /* Expression: [0.013113253741516583;0.59639355826246077;0.010454869839986622;0.070569675824932093;0.03759160780864277;0.65907367557960383;-0.28267074732350844;0.0090367084713878706;-0.79757141476745241;-1.237942708364786]
                                        * Referenced by: '<S127>/IW{2,1}(2,:)''
                                        */
  real_T b2_Value_i[2];                /* Expression: [0.64669912205147739;-1.51719528027525]
                                        * Referenced by: '<S110>/b{2}'
                                        */
  real_T Subtractminy_Bias;            /* Expression: -ymin
                                        * Referenced by: '<S133>/Subtract min y'
                                        */
  real_T Dividebyrangey_Gain[2];       /* Expression: (xmax-xmin)./(ymax-ymin)
                                        * Referenced by: '<S133>/Divide by range y'
                                        */
  real_T Addminx_Bias[2];              /* Expression: xmin
                                        * Referenced by: '<S133>/Add min x'
                                        */
  real_T IW111_Value_a[2];             /* Expression: [-0.99513015717673903;3.3995133610187542]
                                        * Referenced by: '<S62>/IW{1,1}(1,:)''
                                        */
  real_T IW1110_Value_h[2];            /* Expression: [0.54264120713111252;-3.3920914060403291]
                                        * Referenced by: '<S62>/IW{1,1}(10,:)''
                                        */
  real_T IW112_Value_c[2];             /* Expression: [8.1605350498440234;1.2526536520780576]
                                        * Referenced by: '<S62>/IW{1,1}(2,:)''
                                        */
  real_T IW113_Value_e[2];             /* Expression: [-31.327422946886887;-2.8704147819042669]
                                        * Referenced by: '<S62>/IW{1,1}(3,:)''
                                        */
  real_T IW114_Value_p[2];             /* Expression: [6.7513837338307887;0.66971357849675728]
                                        * Referenced by: '<S62>/IW{1,1}(4,:)''
                                        */
  real_T IW115_Value_p[2];             /* Expression: [5.1524267364439735;-4.0507478871797362]
                                        * Referenced by: '<S62>/IW{1,1}(5,:)''
                                        */
  real_T IW116_Value_c[2];             /* Expression: [-2.2864743169313111;1.6882391195622033]
                                        * Referenced by: '<S62>/IW{1,1}(6,:)''
                                        */
  real_T IW117_Value_dt[2];            /* Expression: [-2.7392200075581226;-3.3794901612375661]
                                        * Referenced by: '<S62>/IW{1,1}(7,:)''
                                        */
  real_T IW118_Value_c[2];             /* Expression: [1.1417567369673169;-0.13306752909180905]
                                        * Referenced by: '<S62>/IW{1,1}(8,:)''
                                        */
  real_T IW119_Value_o[2];             /* Expression: [-0.00070545466136238705;8.4418876597176844]
                                        * Referenced by: '<S62>/IW{1,1}(9,:)''
                                        */
  real_T Subtractminx_Bias_b[2];       /* Expression: -xmin
                                        * Referenced by: '<S79>/Subtract min x'
                                        */
  real_T rangeyrangex_Gain_h[2];       /* Expression: (ymax-ymin)./(xmax-xmin)
                                        * Referenced by: '<S79>/range y // range x'
                                        */
  real_T Addminy_Bias_c;               /* Expression: ymin
                                        * Referenced by: '<S79>/Add min y'
                                        */
  real_T b1_Value_j[10];               /* Expression: [2.5454724528465191;-7.7483432611746172;3.9309716616691324;-6.2719641910111541;0.85030293687879943;-2.3949842385830666;-1.4261903839852115;0.47222821414273392;-8.9640459742388447;-2.822735668724929]
                                        * Referenced by: '<S57>/b{1}'
                                        */
  real_T Gain_Gain_n;                  /* Expression: -2
                                        * Referenced by: '<S63>/Gain'
                                        */
  real_T one_Value_n;                  /* Expression: 1
                                        * Referenced by: '<S63>/one'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 2
                                        * Referenced by: '<S63>/Gain1'
                                        */
  real_T one1_Value_m;                 /* Expression: 1
                                        * Referenced by: '<S63>/one1'
                                        */
  real_T IW211_Value_e[10];            /* Expression: [3.6358545780541789;6.2472585811988015;-0.56224473918785589;-7.5647768388088723;-0.18846990075460571;0.79459327578492145;0.35980454212383078;1.7996433995390355;-0.29798366057032322;3.9138153960489555]
                                        * Referenced by: '<S75>/IW{2,1}(1,:)''
                                        */
  real_T IW212_Value_l[10];            /* Expression: [8.9236504002291532;3.1324967653848974;-0.014723602230101177;-1.8877012708137759;-0.81330112930730192;2.792241875270018;0.60708254925198202;4.4609512742797168;-8.9763014268183152;9.7085631982491343]
                                        * Referenced by: '<S75>/IW{2,1}(2,:)''
                                        */
  real_T b2_Value_b[2];                /* Expression: [-0.9875108858075623;-5.400900423539988]
                                        * Referenced by: '<S58>/b{2}'
                                        */
  real_T Subtractminy_Bias_k;          /* Expression: -ymin
                                        * Referenced by: '<S81>/Subtract min y'
                                        */
  real_T Dividebyrangey_Gain_i[2];     /* Expression: (xmax-xmin)./(ymax-ymin)
                                        * Referenced by: '<S81>/Divide by range y'
                                        */
  real_T Addminx_Bias_h[2];            /* Expression: xmin
                                        * Referenced by: '<S81>/Add min x'
                                        */
  real_T Constants_Value;              /* Expression: [constants; 0]
                                        * Referenced by: '<S82>/Constants'
                                        */
  real_T IW111_Value_m[2];             /* Expression: [21.548992490262602;-0.72550662584722259]
                                        * Referenced by: '<S88>/IW{1,1}(1,:)''
                                        */
  real_T IW1110_Value_e[2];            /* Expression: [-32.108891304599744;0.59075842273460077]
                                        * Referenced by: '<S88>/IW{1,1}(10,:)''
                                        */
  real_T IW112_Value_kd[2];            /* Expression: [3.119054780815973;22.084958259318338]
                                        * Referenced by: '<S88>/IW{1,1}(2,:)''
                                        */
  real_T IW113_Value_d[2];             /* Expression: [-3.360761956812357;-1.4506679202787212]
                                        * Referenced by: '<S88>/IW{1,1}(3,:)''
                                        */
  real_T IW114_Value_h[2];             /* Expression: [-18.609667396981429;1.8066264158550551]
                                        * Referenced by: '<S88>/IW{1,1}(4,:)''
                                        */
  real_T IW115_Value_a[2];             /* Expression: [41.856866227083138;25.871102445218796]
                                        * Referenced by: '<S88>/IW{1,1}(5,:)''
                                        */
  real_T IW116_Value_l[2];             /* Expression: [-12.10841549066191;4.1444399413960671]
                                        * Referenced by: '<S88>/IW{1,1}(6,:)''
                                        */
  real_T IW117_Value_j[2];             /* Expression: [2.7696463427422895;-30.561658390833419]
                                        * Referenced by: '<S88>/IW{1,1}(7,:)''
                                        */
  real_T IW118_Value_g[2];             /* Expression: [0.1695376530121406;20.157086435580784]
                                        * Referenced by: '<S88>/IW{1,1}(8,:)''
                                        */
  real_T IW119_Value_p[2];             /* Expression: [1.886323241136747;-37.471870585144295]
                                        * Referenced by: '<S88>/IW{1,1}(9,:)''
                                        */
  real_T Subtractminx_Bias_bn[2];      /* Expression: -xmin
                                        * Referenced by: '<S105>/Subtract min x'
                                        */
  real_T rangeyrangex_Gain_f[2];       /* Expression: (ymax-ymin)./(xmax-xmin)
                                        * Referenced by: '<S105>/range y // range x'
                                        */
  real_T Addminy_Bias_p;               /* Expression: ymin
                                        * Referenced by: '<S105>/Add min y'
                                        */
  real_T b1_Value_m[10];               /* Expression: [-22.003326850538553;-3.0897280568616767;2.8604817724017293;18.473423748982423;-5.8485350492139636;-0.80987876996991981;-3.5840777281496403;19.629913218715519;37.288803424994832;-32.875077531242511]
                                        * Referenced by: '<S83>/b{1}'
                                        */
  real_T Gain_Gain_m;                  /* Expression: -2
                                        * Referenced by: '<S89>/Gain'
                                        */
  real_T one_Value_j;                  /* Expression: 1
                                        * Referenced by: '<S89>/one'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S89>/Gain1'
                                        */
  real_T one1_Value_n;                 /* Expression: 1
                                        * Referenced by: '<S89>/one1'
                                        */
  real_T IW211_Value_h[10];            /* Expression: [-8.420019227142312;-0.032949308448346301;-0.23143003216935204;1.6852468668237746;0.4563804693557561;-0.34161244431146159;-0.033433937780226609;0.21881175194447444;0.15913805551509955;7.6008667917842967]
                                        * Referenced by: '<S101>/IW{2,1}(1,:)''
                                        */
  real_T IW212_Value_d[10];            /* Expression: [-1.5888819698740293;0.64173597696085138;0.47067328176946716;-0.50197887101789529;-0.14931468874105255;-0.069058328026990523;-0.28408456665831827;-1.0039717128290664;1.0067786233563916;0.53771523790735787]
                                        * Referenced by: '<S101>/IW{2,1}(2,:)''
                                        */
  real_T b2_Value_h[2];                /* Expression: [-2.8695528311182783;-1.2098009220442492]
                                        * Referenced by: '<S84>/b{2}'
                                        */
  real_T Subtractminy_Bias_h;          /* Expression: -ymin
                                        * Referenced by: '<S107>/Subtract min y'
                                        */
  real_T Dividebyrangey_Gain_b[2];     /* Expression: (xmax-xmin)./(ymax-ymin)
                                        * Referenced by: '<S107>/Divide by range y'
                                        */
  real_T Addminx_Bias_b[2];            /* Expression: xmin
                                        * Referenced by: '<S107>/Add min x'
                                        */
  real_T Constants_Value_a;            /* Expression: [constants; 0]
                                        * Referenced by: '<S108>/Constants'
                                        */
  real_T Constants_Value_i;            /* Expression: [constants; 0]
                                        * Referenced by: '<S134>/Constants'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S8>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S8>/Saturation1'
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
                                        * Referenced by: '<S9>/Faktorh3'
                                        */
  real_T Offseth3_Value;               /* Expression: Offseth3
                                        * Referenced by: '<S9>/Offseth3'
                                        */
  real_T TP5Hz2_A;                     /* Computed Parameter: TP5Hz2_A
                                        * Referenced by: '<S9>/TP 5Hz2'
                                        */
  real_T TP5Hz2_C;                     /* Computed Parameter: TP5Hz2_C
                                        * Referenced by: '<S9>/TP 5Hz2'
                                        */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_i;/* '<S44>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_l;/* '<S44>/If Action Subsystem1' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_n;/* '<S43>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_j;/* '<S43>/If Action Subsystem1' */
  rtP_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_b;/* '<S42>/If Action Subsystem2' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_g;/* '<S42>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3_l;/* '<S29>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1_h;/* '<S29>/If Action Subsystem1' */
  rtP_IfActionSubsystem3_FuzzyN_f IfActionSubsystem3;/* '<S28>/If Action Subsystem3' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem1;/* '<S28>/If Action Subsystem1' */
  rtP_IfActionSubsystem2_FuzzyNeu IfActionSubsystem2_m;/* '<S27>/If Action Subsystem2' */
  rtP_IfActionSubsystem3_FuzzyNeu IfActionSubsystem3_j;/* '<S27>/If Action Subsystem3' */
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
 * '<S2>'   : 'FuzzyNeuro/NN Lukas 1'
 * '<S3>'   : 'FuzzyNeuro/NN Lukas 2'
 * '<S4>'   : 'FuzzyNeuro/NN Simon'
 * '<S5>'   : 'FuzzyNeuro/Neural Network'
 * '<S6>'   : 'FuzzyNeuro/RTI Data'
 * '<S7>'   : 'FuzzyNeuro/T3Anlage'
 * '<S8>'   : 'FuzzyNeuro/Umrechnung2'
 * '<S9>'   : 'FuzzyNeuro/Umrechnunguh'
 * '<S10>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard'
 * '<S11>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1'
 * '<S12>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2'
 * '<S13>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1'
 * '<S14>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2'
 * '<S15>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Pumpe1'
 * '<S16>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Pumpe2'
 * '<S17>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule1'
 * '<S18>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule2'
 * '<S19>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule3'
 * '<S20>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule4'
 * '<S21>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule5'
 * '<S22>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Rule6'
 * '<S23>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: One'
 * '<S24>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: u1'
 * '<S25>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: One'
 * '<S26>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Defuzzification2/Action: u1'
 * '<S27>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig'
 * '<S28>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch'
 * '<S29>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig'
 * '<S30>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem'
 * '<S31>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem1'
 * '<S32>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem2'
 * '<S33>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/richtig/If Action Subsystem3'
 * '<S34>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem'
 * '<S35>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem1'
 * '<S36>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem2'
 * '<S37>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuhoch/If Action Subsystem3'
 * '<S38>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem'
 * '<S39>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem1'
 * '<S40>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem2'
 * '<S41>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe1/zuniedrig/If Action Subsystem3'
 * '<S42>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig'
 * '<S43>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch'
 * '<S44>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig'
 * '<S45>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem'
 * '<S46>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem1'
 * '<S47>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem2'
 * '<S48>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/richtig/If Action Subsystem3'
 * '<S49>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem'
 * '<S50>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem1'
 * '<S51>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem2'
 * '<S52>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuhoch/If Action Subsystem3'
 * '<S53>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem'
 * '<S54>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem1'
 * '<S55>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem2'
 * '<S56>'  : 'FuzzyNeuro/Fuzzy Logic  Controller/FIS Wizard/Hoehe2/zuniedrig/If Action Subsystem3'
 * '<S57>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1'
 * '<S58>'  : 'FuzzyNeuro/NN Lukas 1/Layer 2'
 * '<S59>'  : 'FuzzyNeuro/NN Lukas 1/Process Input 1'
 * '<S60>'  : 'FuzzyNeuro/NN Lukas 1/Process Output 1'
 * '<S61>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/Delays 1'
 * '<S62>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}'
 * '<S63>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/tansig'
 * '<S64>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod1'
 * '<S65>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod10'
 * '<S66>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod2'
 * '<S67>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod3'
 * '<S68>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod4'
 * '<S69>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod5'
 * '<S70>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod6'
 * '<S71>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod7'
 * '<S72>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod8'
 * '<S73>'  : 'FuzzyNeuro/NN Lukas 1/Layer 1/IW{1,1}/dotprod9'
 * '<S74>'  : 'FuzzyNeuro/NN Lukas 1/Layer 2/Delays 1'
 * '<S75>'  : 'FuzzyNeuro/NN Lukas 1/Layer 2/LW{2,1}'
 * '<S76>'  : 'FuzzyNeuro/NN Lukas 1/Layer 2/purelin'
 * '<S77>'  : 'FuzzyNeuro/NN Lukas 1/Layer 2/LW{2,1}/dotprod1'
 * '<S78>'  : 'FuzzyNeuro/NN Lukas 1/Layer 2/LW{2,1}/dotprod2'
 * '<S79>'  : 'FuzzyNeuro/NN Lukas 1/Process Input 1/mapminmax'
 * '<S80>'  : 'FuzzyNeuro/NN Lukas 1/Process Input 1/removeconstantrows'
 * '<S81>'  : 'FuzzyNeuro/NN Lukas 1/Process Output 1/mapminmax_reverse'
 * '<S82>'  : 'FuzzyNeuro/NN Lukas 1/Process Output 1/removeconstantrows_reverse'
 * '<S83>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1'
 * '<S84>'  : 'FuzzyNeuro/NN Lukas 2/Layer 2'
 * '<S85>'  : 'FuzzyNeuro/NN Lukas 2/Process Input 1'
 * '<S86>'  : 'FuzzyNeuro/NN Lukas 2/Process Output 1'
 * '<S87>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/Delays 1'
 * '<S88>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}'
 * '<S89>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/tansig'
 * '<S90>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod1'
 * '<S91>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod10'
 * '<S92>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod2'
 * '<S93>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod3'
 * '<S94>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod4'
 * '<S95>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod5'
 * '<S96>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod6'
 * '<S97>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod7'
 * '<S98>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod8'
 * '<S99>'  : 'FuzzyNeuro/NN Lukas 2/Layer 1/IW{1,1}/dotprod9'
 * '<S100>' : 'FuzzyNeuro/NN Lukas 2/Layer 2/Delays 1'
 * '<S101>' : 'FuzzyNeuro/NN Lukas 2/Layer 2/LW{2,1}'
 * '<S102>' : 'FuzzyNeuro/NN Lukas 2/Layer 2/purelin'
 * '<S103>' : 'FuzzyNeuro/NN Lukas 2/Layer 2/LW{2,1}/dotprod1'
 * '<S104>' : 'FuzzyNeuro/NN Lukas 2/Layer 2/LW{2,1}/dotprod2'
 * '<S105>' : 'FuzzyNeuro/NN Lukas 2/Process Input 1/mapminmax'
 * '<S106>' : 'FuzzyNeuro/NN Lukas 2/Process Input 1/removeconstantrows'
 * '<S107>' : 'FuzzyNeuro/NN Lukas 2/Process Output 1/mapminmax_reverse'
 * '<S108>' : 'FuzzyNeuro/NN Lukas 2/Process Output 1/removeconstantrows_reverse'
 * '<S109>' : 'FuzzyNeuro/NN Simon/Layer 1'
 * '<S110>' : 'FuzzyNeuro/NN Simon/Layer 2'
 * '<S111>' : 'FuzzyNeuro/NN Simon/Process Input 1'
 * '<S112>' : 'FuzzyNeuro/NN Simon/Process Output 1'
 * '<S113>' : 'FuzzyNeuro/NN Simon/Layer 1/Delays 1'
 * '<S114>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}'
 * '<S115>' : 'FuzzyNeuro/NN Simon/Layer 1/tansig'
 * '<S116>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod1'
 * '<S117>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod10'
 * '<S118>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod2'
 * '<S119>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod3'
 * '<S120>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod4'
 * '<S121>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod5'
 * '<S122>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod6'
 * '<S123>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod7'
 * '<S124>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod8'
 * '<S125>' : 'FuzzyNeuro/NN Simon/Layer 1/IW{1,1}/dotprod9'
 * '<S126>' : 'FuzzyNeuro/NN Simon/Layer 2/Delays 1'
 * '<S127>' : 'FuzzyNeuro/NN Simon/Layer 2/LW{2,1}'
 * '<S128>' : 'FuzzyNeuro/NN Simon/Layer 2/purelin'
 * '<S129>' : 'FuzzyNeuro/NN Simon/Layer 2/LW{2,1}/dotprod1'
 * '<S130>' : 'FuzzyNeuro/NN Simon/Layer 2/LW{2,1}/dotprod2'
 * '<S131>' : 'FuzzyNeuro/NN Simon/Process Input 1/mapminmax'
 * '<S132>' : 'FuzzyNeuro/NN Simon/Process Input 1/removeconstantrows'
 * '<S133>' : 'FuzzyNeuro/NN Simon/Process Output 1/mapminmax_reverse'
 * '<S134>' : 'FuzzyNeuro/NN Simon/Process Output 1/removeconstantrows_reverse'
 * '<S135>' : 'FuzzyNeuro/Neural Network/Layer 1'
 * '<S136>' : 'FuzzyNeuro/Neural Network/Layer 2'
 * '<S137>' : 'FuzzyNeuro/Neural Network/Layer 1/Delays 1'
 * '<S138>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}'
 * '<S139>' : 'FuzzyNeuro/Neural Network/Layer 1/tansig'
 * '<S140>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod1'
 * '<S141>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod10'
 * '<S142>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod2'
 * '<S143>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod3'
 * '<S144>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod4'
 * '<S145>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod5'
 * '<S146>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod6'
 * '<S147>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod7'
 * '<S148>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod8'
 * '<S149>' : 'FuzzyNeuro/Neural Network/Layer 1/IW{1,1}/dotprod9'
 * '<S150>' : 'FuzzyNeuro/Neural Network/Layer 2/Delays 1'
 * '<S151>' : 'FuzzyNeuro/Neural Network/Layer 2/LW{2,1}'
 * '<S152>' : 'FuzzyNeuro/Neural Network/Layer 2/purelin'
 * '<S153>' : 'FuzzyNeuro/Neural Network/Layer 2/LW{2,1}/dotprod1'
 * '<S154>' : 'FuzzyNeuro/Neural Network/Layer 2/LW{2,1}/dotprod2'
 * '<S155>' : 'FuzzyNeuro/RTI Data/RTI Data Store'
 * '<S156>' : 'FuzzyNeuro/RTI Data/RTI Data Store/RTI Data Store'
 * '<S157>' : 'FuzzyNeuro/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S158>' : 'FuzzyNeuro/T3Anlage/DS1104ADC_C5'
 * '<S159>' : 'FuzzyNeuro/T3Anlage/DS1104ADC_C6'
 * '<S160>' : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C0'
 * '<S161>' : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C1'
 * '<S162>' : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C2'
 * '<S163>' : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C3'
 * '<S164>' : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C4'
 * '<S165>' : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C5'
 * '<S166>' : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C6'
 * '<S167>' : 'FuzzyNeuro/T3Anlage/DS1104BIT_OUT_C7'
 * '<S168>' : 'FuzzyNeuro/T3Anlage/DS1104DAC_C1'
 * '<S169>' : 'FuzzyNeuro/T3Anlage/DS1104DAC_C2'
 * '<S170>' : 'FuzzyNeuro/T3Anlage/DS1104MUX_ADC'
 */
#endif                                 /* RTW_HEADER_FuzzyNeuro_h_ */
