  /*********************** dSPACE target specific file *************************

   Header file FuzzyNeuro_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1104 6.8 (02-Nov-2011)
   Sat Nov 07 21:31:40 2015

   (c) Copyright 2008, dSPACE GmbH. All rights reserved.

  *****************************************************************************/
  #ifndef RTI_HEADER_FuzzyNeuro_trc_ptr_h_
  #define RTI_HEADER_FuzzyNeuro_trc_ptr_h_
  /* Include the model header file. */
  #include "FuzzyNeuro.h"
  #include "FuzzyNeuro_private.h"

  #ifdef EXTERN_C
  #undef EXTERN_C
  #endif

  #ifdef __cplusplus
  #define EXTERN_C                       extern "C"
  #else
  #define EXTERN_C                       extern
  #endif

  /*
   *  Declare the global TRC pointers
   */
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_0;
              EXTERN_C volatile  boolean_T *p_FuzzyNeuro_B_boolean_T_1;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_2;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_3;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_4;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_5;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_6;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_7;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_8;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_9;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_10;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_11;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_12;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_B_real_T_13;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_0;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_1;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_2;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_3;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_4;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_5;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_6;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_7;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_8;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_9;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_10;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_11;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_P_real_T_12;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_0;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_1;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_2;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_3;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_4;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_5;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_6;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_7;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_8;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_9;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_10;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_11;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_12;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_13;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_DWork_int8_T_14;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_X_real_T_0;

   #define RTI_INIT_TRC_POINTERS() \
              p_FuzzyNeuro_B_real_T_0 = &FuzzyNeuro_B.TmpSignalConversionAtDotProduct[0];\
              p_FuzzyNeuro_B_boolean_T_1 = &FuzzyNeuro_B.DataTypeConversion;\
              p_FuzzyNeuro_B_real_T_2 = &FuzzyNeuro_B.IfActionSubsystem3_i.dc;\
              p_FuzzyNeuro_B_real_T_3 = &FuzzyNeuro_B.IfActionSubsystem1_l.xa;\
              p_FuzzyNeuro_B_real_T_4 = &FuzzyNeuro_B.IfActionSubsystem3_n.dc;\
              p_FuzzyNeuro_B_real_T_5 = &FuzzyNeuro_B.IfActionSubsystem1_j.xa;\
              p_FuzzyNeuro_B_real_T_6 = &FuzzyNeuro_B.IfActionSubsystem2_b.cb;\
              p_FuzzyNeuro_B_real_T_7 = &FuzzyNeuro_B.IfActionSubsystem3_g.xa;\
              p_FuzzyNeuro_B_real_T_8 = &FuzzyNeuro_B.IfActionSubsystem3_l.dc;\
              p_FuzzyNeuro_B_real_T_9 = &FuzzyNeuro_B.IfActionSubsystem1_h.xa;\
              p_FuzzyNeuro_B_real_T_10 = &FuzzyNeuro_B.IfActionSubsystem3.dc;\
              p_FuzzyNeuro_B_real_T_11 = &FuzzyNeuro_B.IfActionSubsystem1.xa;\
              p_FuzzyNeuro_B_real_T_12 = &FuzzyNeuro_B.IfActionSubsystem2_m.cb;\
              p_FuzzyNeuro_B_real_T_13 = &FuzzyNeuro_B.IfActionSubsystem3_j.xa;\
              p_FuzzyNeuro_P_real_T_0 = &FuzzyNeuro_P.Switch_Threshold;\
              p_FuzzyNeuro_P_real_T_1 = &FuzzyNeuro_P.IfActionSubsystem3_i.c_Value;\
              p_FuzzyNeuro_P_real_T_2 = &FuzzyNeuro_P.IfActionSubsystem1_l.a_Value;\
              p_FuzzyNeuro_P_real_T_3 = &FuzzyNeuro_P.IfActionSubsystem3_n.c_Value;\
              p_FuzzyNeuro_P_real_T_4 = &FuzzyNeuro_P.IfActionSubsystem1_j.a_Value;\
              p_FuzzyNeuro_P_real_T_5 = &FuzzyNeuro_P.IfActionSubsystem2_b.b_Value;\
              p_FuzzyNeuro_P_real_T_6 = &FuzzyNeuro_P.IfActionSubsystem3_g.a_Value;\
              p_FuzzyNeuro_P_real_T_7 = &FuzzyNeuro_P.IfActionSubsystem3_l.c_Value;\
              p_FuzzyNeuro_P_real_T_8 = &FuzzyNeuro_P.IfActionSubsystem1_h.a_Value;\
              p_FuzzyNeuro_P_real_T_9 = &FuzzyNeuro_P.IfActionSubsystem3.c_Value;\
              p_FuzzyNeuro_P_real_T_10 = &FuzzyNeuro_P.IfActionSubsystem1.a_Value;\
              p_FuzzyNeuro_P_real_T_11 = &FuzzyNeuro_P.IfActionSubsystem2_m.b_Value;\
              p_FuzzyNeuro_P_real_T_12 = &FuzzyNeuro_P.IfActionSubsystem3_j.a_Value;\
              p_FuzzyNeuro_DWork_int8_T_0 = &FuzzyNeuro_DWork.If_ActiveSubsystem;\
              p_FuzzyNeuro_DWork_int8_T_1 = &FuzzyNeuro_DWork.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_2 = &FuzzyNeuro_DWork.IfActionSubsystem1_l.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_3 = &FuzzyNeuro_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_4 = &FuzzyNeuro_DWork.IfActionSubsystem1_j.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_5 = &FuzzyNeuro_DWork.IfActionSubsystem2_b.IfActionSubsystem2_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_6 = &FuzzyNeuro_DWork.IfActionSubsystem3_g.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_7 = &FuzzyNeuro_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_8 = &FuzzyNeuro_DWork.IfActionSubsystem1_h.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_9 = &FuzzyNeuro_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_10 = &FuzzyNeuro_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_11 = &FuzzyNeuro_DWork.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_12 = &FuzzyNeuro_DWork.IfActionSubsystem3_j.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_13 = &FuzzyNeuro_DWork.Actionu1_n.Actionu1_SubsysRanBC;\
              p_FuzzyNeuro_DWork_int8_T_14 = &FuzzyNeuro_DWork.Actionu1.Actionu1_SubsysRanBC;\
              p_FuzzyNeuro_X_real_T_0 = &FuzzyNeuro_X.TP5Hz_CSTATE;\

   #endif                       /* RTI_HEADER_FuzzyNeuro_trc_ptr_h_ */
