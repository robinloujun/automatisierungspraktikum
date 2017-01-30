/*
 * FuzzyNeuro_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(struct_isB4Cw3Ovpp8VfzP6RUqbD),
  sizeof(rti_timestamp_T),
  sizeof(struct_dZjXwTiylTPloSUBFpnHJB)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "struct_isB4Cw3Ovpp8VfzP6RUqbD",
  "rti_timestamp_T",
  "struct_dZjXwTiylTPloSUBFpnHJB"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&FuzzyNeuro_B.i1), 0, 0, 1365 },

  { (char_T *)(&FuzzyNeuro_B.DataTypeConversion), 8, 0, 8 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem3_i.dc), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem1_l.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem3_n.dc), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem1_j.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem2_b.cb), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem3_g.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem3_l.dc), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem1_h.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem3.dc), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem1.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem2_m.cb), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_B.IfActionSubsystem3_j.xa), 0, 0, 2 }
  ,

  { (char_T *)(&FuzzyNeuro_DWork.If_ActiveSubsystem), 2, 0, 22 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem1_l.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem1_j.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem2_b.IfActionSubsystem2_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem3_g.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem1_h.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)
    (&FuzzyNeuro_DWork.IfActionSubsystem3_j.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&FuzzyNeuro_DWork.Actionu1_n.Actionu1_SubsysRanBC), 2, 0, 1 },

  { (char_T *)(&FuzzyNeuro_DWork.Actionu1.Actionu1_SubsysRanBC), 2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  29U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&FuzzyNeuro_P.Switch_Threshold), 0, 0, 1144 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem3_i.c_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem1_l.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem3_n.c_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem1_j.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem2_b.b_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem3_g.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem3_l.c_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem1_h.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem3.c_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem1.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem2_m.b_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_P.IfActionSubsystem3_j.a_Value), 0, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  13U,
  rtPTransitions
};

/* [EOF] FuzzyNeuro_dt.h */
