/*
 * FuzzyNeuro_neuesNetz_dt.h
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
  { (char_T *)(&FuzzyNeuro_neuesNetz_B.i1), 0, 0, 1354 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.DataTypeConversion), 8, 0, 8 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_n.dc), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_dr.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_b.dc), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_d.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_au.cb), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_l.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_c.dc), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_p.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem3.dc), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem1.xa), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_k.cb), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_p.xa), 0, 0, 2 }
  ,

  { (char_T *)(&FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem), 2, 0, 22 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_dr.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_d.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_au.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_p.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_DWork.Actionu1_h.Actionu1_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_DWork.Actionu1.Actionu1_SubsysRanBC), 2, 0,
    1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  29U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&FuzzyNeuro_neuesNetz_P.Switch_Threshold), 0, 0, 1133 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_n.c_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_dr.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_b.c_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_d.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_au.b_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_l.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_c.c_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_p.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem3.c_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem1.a_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_k.b_Value), 0, 0, 2 },

  { (char_T *)(&FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_p.a_Value), 0, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  13U,
  rtPTransitions
};

/* [EOF] FuzzyNeuro_neuesNetz_dt.h */
