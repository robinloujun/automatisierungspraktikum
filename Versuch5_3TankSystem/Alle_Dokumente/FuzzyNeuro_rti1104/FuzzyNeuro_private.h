/*
 * FuzzyNeuro_private.h
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
#ifndef RTW_HEADER_FuzzyNeuro_private_h_
#define RTW_HEADER_FuzzyNeuro_private_h_
#include "rtwtypes.h"
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#else
#ifdef TMWTYPES_PREVIOUSLY_INCLUDED
#error This file requires rtwtypes.h to be included before tmwtypes.h
#else

/* Check for inclusion of an incorrect version of rtwtypes.h */
#ifndef RTWTYPES_ID_C08S16I32L32N32F1
#error This code was generated with a different "rtwtypes.h" than the file included
#endif                                 /* RTWTYPES_ID_C08S16I32L32N32F1 */
#endif                                 /* TMWTYPES_PREVIOUSLY_INCLUDED */
#endif                                 /* __RTWTYPES_H__ */

extern void FuzzyNeuro_Actionu1(real_T rtu_0, real_T *rty_u2);
extern void FuzzyNeuro_IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem3_FuzzyNeu *localB, rtP_IfActionSubsystem3_FuzzyNeu
  *localP);
extern void FuzzyNeuro_IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem2_FuzzyNeu *localB, rtP_IfActionSubsystem2_FuzzyNeu
  *localP);
extern void FuzzyNeuro_IfActionSubsystem3_m(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem3_FuzzyN_f *localB, rtP_IfActionSubsystem3_FuzzyN_f
  *localP);

/* private model entry point functions */
extern void FuzzyNeuro_derivatives(void);

#endif                                 /* RTW_HEADER_FuzzyNeuro_private_h_ */
