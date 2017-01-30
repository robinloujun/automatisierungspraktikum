  /*********************** dSPACE target specific file *************************

   Header file FuzzyNeuro_neuesNetz_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1104 6.8 (02-Nov-2011)
   Fri Oct 30 09:58:01 2015

   (c) Copyright 2008, dSPACE GmbH. All rights reserved.

  *****************************************************************************/
  #ifndef RTI_HEADER_FuzzyNeuro_neuesNetz_trc_ptr_h_
  #define RTI_HEADER_FuzzyNeuro_neuesNetz_trc_ptr_h_
  /* Include the model header file. */
  #include "FuzzyNeuro_neuesNetz.h"
  #include "FuzzyNeuro_neuesNetz_private.h"

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
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_0;
              EXTERN_C volatile  boolean_T *p_FuzzyNeuro_neuesNetz_B_boolean_T_1;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_2;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_3;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_4;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_5;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_6;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_7;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_8;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_9;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_10;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_11;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_12;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_B_real_T_13;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_0;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_1;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_2;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_3;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_4;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_5;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_6;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_7;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_8;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_9;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_10;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_11;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_P_real_T_12;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_0;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_1;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_2;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_3;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_4;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_5;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_6;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_7;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_8;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_9;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_10;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_11;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_12;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_13;
              EXTERN_C volatile  int8_T *p_FuzzyNeuro_neuesNetz_DWork_int8_T_14;
              EXTERN_C volatile  real_T *p_FuzzyNeuro_neuesNetz_X_real_T_0;

   #define RTI_INIT_TRC_POINTERS() \
              p_FuzzyNeuro_neuesNetz_B_real_T_0 = &FuzzyNeuro_neuesNetz_B.i1;\
              p_FuzzyNeuro_neuesNetz_B_boolean_T_1 = &FuzzyNeuro_neuesNetz_B.DataTypeConversion;\
              p_FuzzyNeuro_neuesNetz_B_real_T_2 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_n.dc;\
              p_FuzzyNeuro_neuesNetz_B_real_T_3 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_dr.xa;\
              p_FuzzyNeuro_neuesNetz_B_real_T_4 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_b.dc;\
              p_FuzzyNeuro_neuesNetz_B_real_T_5 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_d.xa;\
              p_FuzzyNeuro_neuesNetz_B_real_T_6 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_au.cb;\
              p_FuzzyNeuro_neuesNetz_B_real_T_7 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_l.xa;\
              p_FuzzyNeuro_neuesNetz_B_real_T_8 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_c.dc;\
              p_FuzzyNeuro_neuesNetz_B_real_T_9 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_p.xa;\
              p_FuzzyNeuro_neuesNetz_B_real_T_10 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3.dc;\
              p_FuzzyNeuro_neuesNetz_B_real_T_11 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem1.xa;\
              p_FuzzyNeuro_neuesNetz_B_real_T_12 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_k.cb;\
              p_FuzzyNeuro_neuesNetz_B_real_T_13 = &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_p.xa;\
              p_FuzzyNeuro_neuesNetz_P_real_T_0 = &FuzzyNeuro_neuesNetz_P.Switch_Threshold;\
              p_FuzzyNeuro_neuesNetz_P_real_T_1 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_n.c_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_2 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_dr.a_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_3 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_b.c_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_4 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_d.a_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_5 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_au.b_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_6 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_l.a_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_7 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_c.c_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_8 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_p.a_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_9 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3.c_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_10 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem1.a_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_11 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_k.b_Value;\
              p_FuzzyNeuro_neuesNetz_P_real_T_12 = &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_p.a_Value;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_0 = &FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_1 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_2 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_dr.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_3 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_4 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_d.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_5 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_au.IfActionSubsystem2_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_6 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_7 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_8 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_p.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_9 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_10 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_11 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_12 = &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_13 = &FuzzyNeuro_neuesNetz_DWork.Actionu1_h.Actionu1_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_DWork_int8_T_14 = &FuzzyNeuro_neuesNetz_DWork.Actionu1.Actionu1_SubsysRanBC;\
              p_FuzzyNeuro_neuesNetz_X_real_T_0 = &FuzzyNeuro_neuesNetz_X.TP5Hz_CSTATE;\

   #endif                       /* RTI_HEADER_FuzzyNeuro_neuesNetz_trc_ptr_h_ */
