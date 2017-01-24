/*
 * FuzzyNeuro.c
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
#include "FuzzyNeuro_trc_ptr.h"
#include "FuzzyNeuro.h"
#include "FuzzyNeuro_private.h"
#include "FuzzyNeuro_dt.h"

/* Block signals (auto storage) */
BlockIO_FuzzyNeuro FuzzyNeuro_B;

/* Continuous states */
ContinuousStates_FuzzyNeuro FuzzyNeuro_X;

/* Block states (auto storage) */
D_Work_FuzzyNeuro FuzzyNeuro_DWork;

/* Real-time model */
RT_MODEL_FuzzyNeuro FuzzyNeuro_M_;
RT_MODEL_FuzzyNeuro *const FuzzyNeuro_M = &FuzzyNeuro_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 3;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  FuzzyNeuro_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; i++) {
    *x += h * f0[i];
    x++;
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for action system:
 *    '<S7>/Action: u1'
 *    '<S8>/Action: u1'
 */
void FuzzyNeuro_Actionu1(real_T rtu_0, real_T *rty_u2)
{
  /* Inport: '<S20>/u1' */
  *rty_u2 = rtu_0;
}

/*
 * Output and update for action system:
 *    '<S23>/If Action Subsystem3'
 *    '<S24>/If Action Subsystem1'
 *    '<S25>/If Action Subsystem1'
 *    '<S38>/If Action Subsystem3'
 *    '<S39>/If Action Subsystem1'
 *    '<S40>/If Action Subsystem1'
 */
void FuzzyNeuro_IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem3_FuzzyNeu *localB, rtP_IfActionSubsystem3_FuzzyNeu
  *localP)
{
  /* Sum: '<S29>/Sum' incorporates:
   *  Constant: '<S29>/a'
   */
  localB->xa = rtu_x - localP->a_Value;

  /* Sum: '<S29>/Sum1' incorporates:
   *  Constant: '<S29>/a'
   *  Constant: '<S29>/b'
   */
  localB->ba = localP->b_Value - localP->a_Value;

  /* Product: '<S29>/Product ab (trimf)' */
  *rty_Out1 = localB->xa / localB->ba;
}

/*
 * Output and update for action system:
 *    '<S23>/If Action Subsystem2'
 *    '<S38>/If Action Subsystem2'
 */
void FuzzyNeuro_IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem2_FuzzyNeu *localB, rtP_IfActionSubsystem2_FuzzyNeu
  *localP)
{
  /* Sum: '<S28>/Sum2' incorporates:
   *  Constant: '<S28>/b'
   *  Constant: '<S28>/c'
   */
  localB->cb = localP->c_Value - localP->b_Value;

  /* Sum: '<S28>/Sum3' incorporates:
   *  Constant: '<S28>/c'
   */
  localB->cx = localP->c_Value - rtu_x;

  /* Product: '<S28>/Product cd (trimf)' */
  *rty_Out1 = 1.0 / localB->cb * localB->cx;
}

/*
 * Output and update for action system:
 *    '<S24>/If Action Subsystem3'
 *    '<S25>/If Action Subsystem3'
 *    '<S39>/If Action Subsystem3'
 *    '<S40>/If Action Subsystem3'
 */
void FuzzyNeuro_IfActionSubsystem3_m(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem3_FuzzyN_f *localB, rtP_IfActionSubsystem3_FuzzyN_f
  *localP)
{
  /* Sum: '<S33>/Sum2' incorporates:
   *  Constant: '<S33>/c'
   *  Constant: '<S33>/d'
   */
  localB->dc = localP->d_Value - localP->c_Value;

  /* Sum: '<S33>/Sum3' incorporates:
   *  Constant: '<S33>/d'
   */
  localB->dx = localP->d_Value - rtu_x;

  /* Product: '<S33>/Product cd (trimf)' */
  *rty_Out1 = 1.0 / localB->dc * localB->dx;
}

/* Model output function */
void FuzzyNeuro_output(int_T tid)
{
  int8_T rtAction;
  int32_T tmp;
  int32_T i;
  real_T u;
  real_T u_0;
  real_T u_1;
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* set solver stop time */
    if (!(FuzzyNeuro_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&FuzzyNeuro_M->solverInfo,
                            ((FuzzyNeuro_M->Timing.clockTickH0 + 1) *
        FuzzyNeuro_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&FuzzyNeuro_M->solverInfo,
                            ((FuzzyNeuro_M->Timing.clockTick0 + 1) *
        FuzzyNeuro_M->Timing.stepSize0 + FuzzyNeuro_M->Timing.clockTickH0 *
        FuzzyNeuro_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(FuzzyNeuro_M)) {
    FuzzyNeuro_M->Timing.t[0] = rtsiGetT(&FuzzyNeuro_M->solverInfo);
  }

  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* RTWBLOCK_START_COMMENT */
  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.ActionOne_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.Actionu1.Actionu1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.ActionOne_SubsysRanBC_i);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_k);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem3_j.IfActionSubsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_a);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanB_k);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_h);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanB_o);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_p);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_kk);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_j);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_ke);

  /* RTWBLOCK_START_COMMENT */

  /* TransferFcn: '<S5>/TP 5Hz' */
  FuzzyNeuro_B.i1 = FuzzyNeuro_P.TP5Hz_C*FuzzyNeuro_X.TP5Hz_CSTATE;

  /* Product: '<S5>/Product' incorporates:
   *  Constant: '<S5>/Faktorh1'
   */
  FuzzyNeuro_B.Product = FuzzyNeuro_P.Faktorh1_Value * FuzzyNeuro_B.i1;

  /* Sum: '<S5>/Sum' incorporates:
   *  Constant: '<S5>/Offseth1'
   */
  FuzzyNeuro_B.Sum = FuzzyNeuro_P.Offseth1_Value + FuzzyNeuro_B.Product;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/soll1'
   */
  FuzzyNeuro_B.Diff1 = FuzzyNeuro_P.soll1_Value - FuzzyNeuro_B.Sum;

  /* DataTypeConversion: '<S9>/DataConv' */
  FuzzyNeuro_B.DataConv = FuzzyNeuro_B.Diff1;

  /* If: '<S24>/If' incorporates:
   *  Constant: '<S30>/0'
   *  Constant: '<S32>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if ((FuzzyNeuro_B.DataConv < -61.0) || (FuzzyNeuro_B.DataConv > 0.0)) {
      rtAction = 0;
    } else if ((FuzzyNeuro_B.DataConv >= -60.0) && (FuzzyNeuro_B.DataConv <=
                -2.0)) {
      rtAction = 1;
    } else if (FuzzyNeuro_B.DataConv < -60.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_DWork.If_ActiveSubsystem = rtAction;
  } else {
    rtAction = FuzzyNeuro_DWork.If_ActiveSubsystem;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge = FuzzyNeuro_P._Value_g;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge = FuzzyNeuro_P._Value_l;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge,
      &FuzzyNeuro_B.IfActionSubsystem1, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem1);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge,
      &FuzzyNeuro_B.IfActionSubsystem3, (rtP_IfActionSubsystem3_FuzzyN_f *)
      &FuzzyNeuro_P.IfActionSubsystem3);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S24>/If' */

  /* MinMax: '<S13>/andorMethod' */
  FuzzyNeuro_B.andorMethod = FuzzyNeuro_B.Merge;

  /* Product: '<S13>/Weighting' incorporates:
   *  Constant: '<S13>/Weight'
   */
  FuzzyNeuro_B.Weighting = FuzzyNeuro_P.Weight_Value * FuzzyNeuro_B.andorMethod;

  /* MinMax: '<S13>/impMethod' incorporates:
   *  Constant: '<S11>/nix'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_B.Weighting;
    u_0 = FuzzyNeuro_P.nix_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod[i] = u;
  }

  /* End of MinMax: '<S13>/impMethod' */

  /* If: '<S23>/If' incorporates:
   *  Constant: '<S26>/0'
   *  Constant: '<S27>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if ((FuzzyNeuro_B.DataConv < -2.0) || (FuzzyNeuro_B.DataConv > 2.0)) {
      rtAction = 0;
    } else if (FuzzyNeuro_B.DataConv == 0.0) {
      rtAction = 1;
    } else if (FuzzyNeuro_B.DataConv < 0.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_DWork.If_ActiveSubsystem_n = rtAction;
  } else {
    rtAction = FuzzyNeuro_DWork.If_ActiveSubsystem_n;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_b = FuzzyNeuro_P._Value;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_k);
    }

    /* End of Outputs for SubSystem: '<S23>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_b = FuzzyNeuro_P._Value_f;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S23>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge_b,
      &FuzzyNeuro_B.IfActionSubsystem3_j, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem3_j);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_j.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S23>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem2(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge_b,
      &FuzzyNeuro_B.IfActionSubsystem2_m, (rtP_IfActionSubsystem2_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem2_m);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S23>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S23>/If' */

  /* MinMax: '<S14>/andorMethod' */
  FuzzyNeuro_B.andorMethod_e = FuzzyNeuro_B.Merge_b;

  /* Product: '<S14>/Weighting' incorporates:
   *  Constant: '<S14>/Weight'
   */
  FuzzyNeuro_B.Weighting_b = FuzzyNeuro_P.Weight_Value_h *
    FuzzyNeuro_B.andorMethod_e;

  /* MinMax: '<S14>/impMethod' incorporates:
   *  Constant: '<S11>/bissle'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_B.Weighting_b;
    u_0 = FuzzyNeuro_P.bissle_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_n[i] = u;
  }

  /* End of MinMax: '<S14>/impMethod' */

  /* If: '<S25>/If' incorporates:
   *  Constant: '<S34>/0'
   *  Constant: '<S36>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if ((FuzzyNeuro_B.DataConv < 0.0) || (FuzzyNeuro_B.DataConv > 61.0)) {
      rtAction = 0;
    } else if ((FuzzyNeuro_B.DataConv >= 2.0) && (FuzzyNeuro_B.DataConv <= 60.0))
    {
      rtAction = 1;
    } else if (FuzzyNeuro_B.DataConv < 2.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_DWork.If_ActiveSubsystem_i = rtAction;
  } else {
    rtAction = FuzzyNeuro_DWork.If_ActiveSubsystem_i;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_d = FuzzyNeuro_P._Value_j;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_a);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_d = FuzzyNeuro_P._Value_gn;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanB_k);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge_d,
      &FuzzyNeuro_B.IfActionSubsystem1_h, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem1_h);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem1_h.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge_d,
      &FuzzyNeuro_B.IfActionSubsystem3_l, (rtP_IfActionSubsystem3_FuzzyN_f *)
      &FuzzyNeuro_P.IfActionSubsystem3_l);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S25>/If' */

  /* MinMax: '<S15>/andorMethod' */
  FuzzyNeuro_B.andorMethod_b = FuzzyNeuro_B.Merge_d;

  /* Product: '<S15>/Weighting' incorporates:
   *  Constant: '<S15>/Weight'
   */
  FuzzyNeuro_B.Weighting_g = FuzzyNeuro_P.Weight_Value_l *
    FuzzyNeuro_B.andorMethod_b;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S15>/impMethod' incorporates:
     *  Constant: '<S11>/ganzviel'
     */
    u = FuzzyNeuro_B.Weighting_g;
    u_0 = FuzzyNeuro_P.ganzviel_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_k[i] = u;

    /* MinMax: '<S6>/AggMethod1' */
    u = FuzzyNeuro_B.impMethod[i];
    u_0 = FuzzyNeuro_B.impMethod_n[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    u_0 = FuzzyNeuro_B.impMethod_k[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.AggMethod1[i] = u;
  }

  /* TransferFcn: '<S5>/TP 5Hz1' */
  FuzzyNeuro_B.i1_g = FuzzyNeuro_P.TP5Hz1_C*FuzzyNeuro_X.TP5Hz1_CSTATE;

  /* Product: '<S5>/Product1' incorporates:
   *  Constant: '<S5>/Faktorh2'
   */
  FuzzyNeuro_B.Product1 = FuzzyNeuro_P.Faktorh2_Value * FuzzyNeuro_B.i1_g;

  /* Sum: '<S5>/Sum1' incorporates:
   *  Constant: '<S5>/Offseth2'
   */
  FuzzyNeuro_B.Sum1 = FuzzyNeuro_P.Offseth2_Value + FuzzyNeuro_B.Product1;

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/soll2'
   */
  FuzzyNeuro_B.Diff2 = FuzzyNeuro_P.soll2_Value - FuzzyNeuro_B.Sum1;

  /* DataTypeConversion: '<S10>/DataConv' */
  FuzzyNeuro_B.DataConv_a = FuzzyNeuro_B.Diff2;

  /* If: '<S39>/If' incorporates:
   *  Constant: '<S45>/0'
   *  Constant: '<S47>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if ((FuzzyNeuro_B.DataConv_a < -61.0) || (FuzzyNeuro_B.DataConv_a > 0.0)) {
      rtAction = 0;
    } else if ((FuzzyNeuro_B.DataConv_a >= -60.0) && (FuzzyNeuro_B.DataConv_a <=
                -2.0)) {
      rtAction = 1;
    } else if (FuzzyNeuro_B.DataConv_a < -60.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_DWork.If_ActiveSubsystem_i2 = rtAction;
  } else {
    rtAction = FuzzyNeuro_DWork.If_ActiveSubsystem_i2;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_c = FuzzyNeuro_P._Value_gd;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_p);
    }

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_c = FuzzyNeuro_P._Value_a;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_kk);
    }

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv_a, &FuzzyNeuro_B.Merge_c,
      &FuzzyNeuro_B.IfActionSubsystem1_j, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem1_j);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem1_j.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_B.DataConv_a,
      &FuzzyNeuro_B.Merge_c, &FuzzyNeuro_B.IfActionSubsystem3_n,
      (rtP_IfActionSubsystem3_FuzzyN_f *) &FuzzyNeuro_P.IfActionSubsystem3_n);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S39>/If' */

  /* MinMax: '<S16>/andorMethod' */
  FuzzyNeuro_B.andorMethod_d = FuzzyNeuro_B.Merge_c;

  /* Product: '<S16>/Weighting' incorporates:
   *  Constant: '<S16>/Weight'
   */
  FuzzyNeuro_B.Weighting_a = FuzzyNeuro_P.Weight_Value_i *
    FuzzyNeuro_B.andorMethod_d;

  /* MinMax: '<S16>/impMethod' incorporates:
   *  Constant: '<S12>/nix'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_B.Weighting_a;
    u_0 = FuzzyNeuro_P.nix_Value_m[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_d[i] = u;
  }

  /* End of MinMax: '<S16>/impMethod' */

  /* If: '<S38>/If' incorporates:
   *  Constant: '<S41>/0'
   *  Constant: '<S42>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if ((FuzzyNeuro_B.DataConv_a < -2.0) || (FuzzyNeuro_B.DataConv_a > 2.0)) {
      rtAction = 0;
    } else if (FuzzyNeuro_B.DataConv_a == 0.0) {
      rtAction = 1;
    } else if (FuzzyNeuro_B.DataConv_a < 0.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_DWork.If_ActiveSubsystem_e = rtAction;
  } else {
    rtAction = FuzzyNeuro_DWork.If_ActiveSubsystem_e;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S38>/If Action Subsystem' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_n = FuzzyNeuro_P._Value_p;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_h);
    }

    /* End of Outputs for SubSystem: '<S38>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S38>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_n = FuzzyNeuro_P._Value_h;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanB_o);
    }

    /* End of Outputs for SubSystem: '<S38>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S38>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv_a, &FuzzyNeuro_B.Merge_n,
      &FuzzyNeuro_B.IfActionSubsystem3_g, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem3_g);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_g.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S38>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S38>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S43>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem2(FuzzyNeuro_B.DataConv_a, &FuzzyNeuro_B.Merge_n,
      &FuzzyNeuro_B.IfActionSubsystem2_b, (rtP_IfActionSubsystem2_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem2_b);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem2_b.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S38>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S38>/If' */

  /* MinMax: '<S17>/andorMethod' */
  FuzzyNeuro_B.andorMethod_k = FuzzyNeuro_B.Merge_n;

  /* Product: '<S17>/Weighting' incorporates:
   *  Constant: '<S17>/Weight'
   */
  FuzzyNeuro_B.Weighting_bq = FuzzyNeuro_P.Weight_Value_a *
    FuzzyNeuro_B.andorMethod_k;

  /* MinMax: '<S17>/impMethod' incorporates:
   *  Constant: '<S12>/stationaer'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_B.Weighting_bq;
    u_0 = FuzzyNeuro_P.stationaer_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_e[i] = u;
  }

  /* End of MinMax: '<S17>/impMethod' */

  /* If: '<S40>/If' incorporates:
   *  Constant: '<S49>/0'
   *  Constant: '<S51>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if ((FuzzyNeuro_B.DataConv_a < 0.0) || (FuzzyNeuro_B.DataConv_a > 61.0)) {
      rtAction = 0;
    } else if ((FuzzyNeuro_B.DataConv_a >= 2.0) && (FuzzyNeuro_B.DataConv_a <=
                60.0)) {
      rtAction = 1;
    } else if (FuzzyNeuro_B.DataConv_a < 2.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_DWork.If_ActiveSubsystem_ie = rtAction;
  } else {
    rtAction = FuzzyNeuro_DWork.If_ActiveSubsystem_ie;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_p = FuzzyNeuro_P._Value_ff;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_j);
    }

    /* End of Outputs for SubSystem: '<S40>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_p = FuzzyNeuro_P._Value_o;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_ke);
    }

    /* End of Outputs for SubSystem: '<S40>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv_a, &FuzzyNeuro_B.Merge_p,
      &FuzzyNeuro_B.IfActionSubsystem1_l, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem1_l);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem1_l.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S40>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_B.DataConv_a,
      &FuzzyNeuro_B.Merge_p, &FuzzyNeuro_B.IfActionSubsystem3_i,
      (rtP_IfActionSubsystem3_FuzzyN_f *) &FuzzyNeuro_P.IfActionSubsystem3_i);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S40>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S40>/If' */

  /* MinMax: '<S18>/andorMethod' */
  FuzzyNeuro_B.andorMethod_a = FuzzyNeuro_B.Merge_p;

  /* Product: '<S18>/Weighting' incorporates:
   *  Constant: '<S18>/Weight'
   */
  FuzzyNeuro_B.Weighting_j = FuzzyNeuro_P.Weight_Value_n *
    FuzzyNeuro_B.andorMethod_a;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S18>/impMethod' incorporates:
     *  Constant: '<S12>/ganzviel'
     */
    u = FuzzyNeuro_B.Weighting_j;
    u_0 = FuzzyNeuro_P.ganzviel_Value_d[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_b[i] = u;

    /* MinMax: '<S6>/AggMethod2' */
    u = FuzzyNeuro_B.impMethod_d[i];
    u_0 = FuzzyNeuro_B.impMethod_e[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    u_0 = FuzzyNeuro_B.impMethod_b[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.AggMethod2[i] = u;
  }

  /* Sum: '<S7>/Sum1' */
  u = FuzzyNeuro_B.AggMethod1[0];
  for (i = 0; i < 100; i++) {
    tmp = i + 1;
    u += FuzzyNeuro_B.AggMethod1[tmp];
  }

  FuzzyNeuro_B.Sum1_e = u;

  /* End of Sum: '<S7>/Sum1' */

  /* If: '<S7>/If' incorporates:
   *  Constant: '<S19>/One'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if (FuzzyNeuro_B.Sum1_e <= 0.0) {
      rtAction = 0;
    } else {
      rtAction = 1;
    }

    FuzzyNeuro_DWork.If_ActiveSubsystem_c = rtAction;
  } else {
    rtAction = FuzzyNeuro_DWork.If_ActiveSubsystem_c;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S7>/Action: One' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_l = FuzzyNeuro_P.One_Value;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.ActionOne_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S7>/Action: One' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S7>/Action: u1' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    FuzzyNeuro_Actionu1(FuzzyNeuro_B.Sum1_e, &FuzzyNeuro_B.Merge_l);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.Actionu1.Actionu1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S7>/Action: u1' */
    break;
  }

  /* End of If: '<S7>/If' */

  /* Sum: '<S8>/Sum1' */
  u = FuzzyNeuro_B.AggMethod2[0];
  for (i = 0; i < 100; i++) {
    tmp = i + 1;
    u += FuzzyNeuro_B.AggMethod2[tmp];
  }

  FuzzyNeuro_B.Sum1_o = u;

  /* End of Sum: '<S8>/Sum1' */

  /* If: '<S8>/If' incorporates:
   *  Constant: '<S21>/One'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if (FuzzyNeuro_B.Sum1_o <= 0.0) {
      rtAction = 0;
    } else {
      rtAction = 1;
    }

    FuzzyNeuro_DWork.If_ActiveSubsystem_a = rtAction;
  } else {
    rtAction = FuzzyNeuro_DWork.If_ActiveSubsystem_a;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S8>/Action: One' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_g = FuzzyNeuro_P.One_Value_j;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.ActionOne_SubsysRanBC_i);
    }

    /* End of Outputs for SubSystem: '<S8>/Action: One' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S8>/Action: u1' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    FuzzyNeuro_Actionu1(FuzzyNeuro_B.Sum1_o, &FuzzyNeuro_B.Merge_g);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.Actionu1_n.Actionu1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S8>/Action: u1' */
    break;
  }

  /* End of If: '<S8>/If' */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    for (i = 0; i < 101; i++) {
      /* Constant: '<S11>/viel' */
      FuzzyNeuro_B.viel[i] = FuzzyNeuro_P.viel_Value[i];

      /* Constant: '<S12>/viel' */
      FuzzyNeuro_B.viel_j[i] = FuzzyNeuro_P.viel_Value_p[i];
    }
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Automatik'
   *  Constant: '<Root>/Pumpe1'
   *  Constant: '<Root>/Pumpe2'
   */
  switch ((int32_T)FuzzyNeuro_P.Automatik_Value) {
   case 1:
    FuzzyNeuro_B.MultiportSwitch[0] = FuzzyNeuro_P.Pumpe1_Value;
    FuzzyNeuro_B.MultiportSwitch[1] = FuzzyNeuro_P.Pumpe2_Value;
    break;

   case 2:
    FuzzyNeuro_B.MultiportSwitch[0] = 0.0;
    FuzzyNeuro_B.MultiportSwitch[1] = 0.0;
    break;

   default:
    /* Sum: '<S6>/Total Firing Strength' */
    FuzzyNeuro_B.TotalFiringStrength = ((((FuzzyNeuro_B.Weighting +
      FuzzyNeuro_B.Weighting_b) + FuzzyNeuro_B.Weighting_g) +
      FuzzyNeuro_B.Weighting_a) + FuzzyNeuro_B.Weighting_bq) +
      FuzzyNeuro_B.Weighting_j;

    /* RelationalOperator: '<S6>/Zero Firing Strength?' incorporates:
     *  Constant: '<S6>/Zero'
     */
    FuzzyNeuro_B.ZeroFiringStrength = (real_T)(FuzzyNeuro_B.TotalFiringStrength >
      FuzzyNeuro_P.Zero_Value);

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/MidRange'
     */
    if (FuzzyNeuro_B.ZeroFiringStrength >= FuzzyNeuro_P.Switch_Threshold) {
      /* Product: '<S7>/Product (COA)' incorporates:
       *  Constant: '<S7>/x data'
       */
      for (i = 0; i < 101; i++) {
        FuzzyNeuro_B.ProductCOA[i] = FuzzyNeuro_P.xdata_Value[i] *
          FuzzyNeuro_B.AggMethod1[i];
      }

      /* End of Product: '<S7>/Product (COA)' */

      /* Sum: '<S7>/Sum' */
      u = FuzzyNeuro_B.ProductCOA[0];
      for (i = 0; i < 100; i++) {
        tmp = i + 1;
        u += FuzzyNeuro_B.ProductCOA[tmp];
      }

      FuzzyNeuro_B.Sum_d = u;

      /* End of Sum: '<S7>/Sum' */

      /* Product: '<S7>/Averaging (COA)' */
      FuzzyNeuro_B.AveragingCOA = FuzzyNeuro_B.Sum_d / FuzzyNeuro_B.Merge_l;

      /* Product: '<S8>/Product (COA)' incorporates:
       *  Constant: '<S8>/x data'
       */
      for (i = 0; i < 101; i++) {
        FuzzyNeuro_B.ProductCOA_n[i] = FuzzyNeuro_P.xdata_Value_e[i] *
          FuzzyNeuro_B.AggMethod2[i];
      }

      /* End of Product: '<S8>/Product (COA)' */

      /* Sum: '<S8>/Sum' */
      u = FuzzyNeuro_B.ProductCOA_n[0];
      for (i = 0; i < 100; i++) {
        tmp = i + 1;
        u += FuzzyNeuro_B.ProductCOA_n[tmp];
      }

      FuzzyNeuro_B.Sum_h = u;

      /* End of Sum: '<S8>/Sum' */

      /* Product: '<S8>/Averaging (COA)' */
      FuzzyNeuro_B.AveragingCOA_m = FuzzyNeuro_B.Sum_h / FuzzyNeuro_B.Merge_g;
      FuzzyNeuro_B.Switch[0] = FuzzyNeuro_B.AveragingCOA;
      FuzzyNeuro_B.Switch[1] = FuzzyNeuro_B.AveragingCOA_m;
    } else {
      FuzzyNeuro_B.Switch[0] = FuzzyNeuro_P.MidRange_Value[0];
      FuzzyNeuro_B.Switch[1] = FuzzyNeuro_P.MidRange_Value[1];
    }

    /* End of Switch: '<S6>/Switch' */
    FuzzyNeuro_B.MultiportSwitch[0] = FuzzyNeuro_B.Switch[0];
    FuzzyNeuro_B.MultiportSwitch[1] = FuzzyNeuro_B.Switch[1];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* S-Function (rti_commonblock): '<S68>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* S-Function (rti_commonblock): '<S57>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:ADC Group:NON_MUX */
    FuzzyNeuro_B.SFunction_j = (real_T) ds1104_adc_read_conv(4);

    /* S-Function (rti_commonblock): '<S56>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:ADC Group:NON_MUX */
    FuzzyNeuro_B.SFunction_j2 = (real_T) ds1104_adc_read_conv(3);
  }

  /* Fcn: '<S4>/q1->uv1' */
  FuzzyNeuro_B.uq1Vorgabe = 0.279 * FuzzyNeuro_B.MultiportSwitch[0] - 0.786;

  /* Saturate: '<S4>/Saturation' */
  u = FuzzyNeuro_B.uq1Vorgabe;
  u_0 = FuzzyNeuro_P.Saturation_LowerSat;
  u_1 = FuzzyNeuro_P.Saturation_UpperSat;
  FuzzyNeuro_B.Saturation = u >= u_1 ? u_1 : u <= u_0 ? u_0 : u;
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* S-Function (rti_commonblock): '<S66>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:DAC */
    ds1104_dac_write(1, FuzzyNeuro_B.Saturation);
  }

  /* Fcn: '<S4>/q2->uv2' */
  FuzzyNeuro_B.uq2Vorgabe = 0.288 * FuzzyNeuro_B.MultiportSwitch[1] - 0.769;

  /* Saturate: '<S4>/Saturation1' */
  u = FuzzyNeuro_B.uq2Vorgabe;
  u_0 = FuzzyNeuro_P.Saturation1_LowerSat;
  u_1 = FuzzyNeuro_P.Saturation1_UpperSat;
  FuzzyNeuro_B.Saturation1 = u >= u_1 ? u_1 : u <= u_0 ? u_0 : u;
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* S-Function (rti_commonblock): '<S67>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:DAC */
    ds1104_dac_write(2, FuzzyNeuro_B.Saturation1);

    /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
     *  Constant: '<Root>/V1'
     */
    FuzzyNeuro_B.DataTypeConversion = (FuzzyNeuro_P.V1_Value != 0.0);

    /* S-Function (rti_commonblock): '<S58>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion > 0) {
      ds1104_bit_io_set(DS1104_DIO0);
    } else {
      ds1104_bit_io_clear(DS1104_DIO0);
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
     *  Constant: '<Root>/V13o'
     */
    FuzzyNeuro_B.DataTypeConversion1 = (FuzzyNeuro_P.V13o_Value != 0.0);

    /* S-Function (rti_commonblock): '<S59>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion1 > 0) {
      ds1104_bit_io_set(DS1104_DIO1);
    } else {
      ds1104_bit_io_clear(DS1104_DIO1);
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/V13u'
     */
    FuzzyNeuro_B.DataTypeConversion2 = (FuzzyNeuro_P.V13u_Value != 0.0);

    /* S-Function (rti_commonblock): '<S60>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion2 > 0) {
      ds1104_bit_io_set(DS1104_DIO2);
    } else {
      ds1104_bit_io_clear(DS1104_DIO2);
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
     *  Constant: '<Root>/V3'
     */
    FuzzyNeuro_B.DataTypeConversion3 = (FuzzyNeuro_P.V3_Value != 0.0);

    /* S-Function (rti_commonblock): '<S61>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion3 > 0) {
      ds1104_bit_io_set(DS1104_DIO3);
    } else {
      ds1104_bit_io_clear(DS1104_DIO3);
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion4' incorporates:
     *  Constant: '<Root>/V32o'
     */
    FuzzyNeuro_B.DataTypeConversion4 = (FuzzyNeuro_P.V32o_Value != 0.0);

    /* S-Function (rti_commonblock): '<S62>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion4 > 0) {
      ds1104_bit_io_set(DS1104_DIO4);
    } else {
      ds1104_bit_io_clear(DS1104_DIO4);
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion5' incorporates:
     *  Constant: '<Root>/V32u'
     */
    FuzzyNeuro_B.DataTypeConversion5 = (FuzzyNeuro_P.V32u_Value != 0.0);

    /* S-Function (rti_commonblock): '<S63>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion5 > 0) {
      ds1104_bit_io_set(DS1104_DIO5);
    } else {
      ds1104_bit_io_clear(DS1104_DIO5);
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion6' incorporates:
     *  Constant: '<Root>/V2'
     */
    FuzzyNeuro_B.DataTypeConversion6 = (FuzzyNeuro_P.V2_Value != 0.0);

    /* S-Function (rti_commonblock): '<S64>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion6 > 0) {
      ds1104_bit_io_set(DS1104_DIO6);
    } else {
      ds1104_bit_io_clear(DS1104_DIO6);
    }

    /* DataTypeConversion: '<S3>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/V0'
     */
    FuzzyNeuro_B.DataTypeConversion7 = (FuzzyNeuro_P.V0_Value != 0.0);

    /* S-Function (rti_commonblock): '<S65>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion7 > 0) {
      ds1104_bit_io_set(DS1104_DIO7);
    } else {
      ds1104_bit_io_clear(DS1104_DIO7);
    }
  }

  /* TransferFcn: '<S5>/TP 5Hz2' */
  FuzzyNeuro_B.i1_m = FuzzyNeuro_P.TP5Hz2_C*FuzzyNeuro_X.TP5Hz2_CSTATE;

  /* Product: '<S5>/Product2' incorporates:
   *  Constant: '<S5>/Faktorh3'
   */
  FuzzyNeuro_B.Product2 = FuzzyNeuro_P.Faktorh3_Value * FuzzyNeuro_B.i1_m;

  /* Sum: '<S5>/Sum2' incorporates:
   *  Constant: '<S5>/Offseth3'
   */
  FuzzyNeuro_B.Sum2 = FuzzyNeuro_P.Offseth3_Value + FuzzyNeuro_B.Product2;
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* Fcn: '<Root>/um1->q1mess' */
    FuzzyNeuro_B.q1mess = 8.13 * FuzzyNeuro_B.SFunction_j;

    /* Fcn: '<Root>/um2->q2mess' */
    FuzzyNeuro_B.q2mess = 8.2 * FuzzyNeuro_B.SFunction_j2 + 0.132;
  }

  /* user code (Output function Trailer) */

  /* dSPACE Data Capture block: (none) */
  /* ... Service number: 1 */
  /* ... Service name:   (default) */
  if (rtmIsContinuousTask(FuzzyNeuro_M, 0) && rtmIsMajorTimeStep(FuzzyNeuro_M))
  {
    host_service(1, rtk_current_task_absolute_time_ptr_get());
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void FuzzyNeuro_update(int_T tid)
{
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    rt_ertODEUpdateContinuousStates(&FuzzyNeuro_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++FuzzyNeuro_M->Timing.clockTick0)) {
    ++FuzzyNeuro_M->Timing.clockTickH0;
  }

  FuzzyNeuro_M->Timing.t[0] = rtsiGetSolverStopTime(&FuzzyNeuro_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++FuzzyNeuro_M->Timing.clockTick1)) {
      ++FuzzyNeuro_M->Timing.clockTickH1;
    }

    FuzzyNeuro_M->Timing.t[1] = FuzzyNeuro_M->Timing.clockTick1 *
      FuzzyNeuro_M->Timing.stepSize1 + FuzzyNeuro_M->Timing.clockTickH1 *
      FuzzyNeuro_M->Timing.stepSize1 * 4294967296.0;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
void FuzzyNeuro_derivatives(void)
{
  /* Derivatives for TransferFcn: '<S5>/TP 5Hz' */
  {
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz_CSTATE = FuzzyNeuro_B.SFunction[0];
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz_CSTATE += (FuzzyNeuro_P.TP5Hz_A)*FuzzyNeuro_X.TP5Hz_CSTATE;
  }

  /* Derivatives for If: '<S24>/If' */
  /* Derivatives for If: '<S23>/If' */
  /* Derivatives for If: '<S25>/If' */
  /* Derivatives for TransferFcn: '<S5>/TP 5Hz1' */
  {
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz1_CSTATE = FuzzyNeuro_B.SFunction[1];
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz1_CSTATE += (FuzzyNeuro_P.TP5Hz1_A)*FuzzyNeuro_X.TP5Hz1_CSTATE;
  }

  /* Derivatives for If: '<S39>/If' */
  /* Derivatives for If: '<S38>/If' */
  /* Derivatives for If: '<S40>/If' */
  /* Derivatives for If: '<S7>/If' */
  /* Derivatives for If: '<S8>/If' */
  /* Derivatives for TransferFcn: '<S5>/TP 5Hz2' */
  {
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz2_CSTATE = FuzzyNeuro_B.SFunction[2];
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz2_CSTATE += (FuzzyNeuro_P.TP5Hz2_A)*FuzzyNeuro_X.TP5Hz2_CSTATE;
  }
}

/* Model initialize function */
void FuzzyNeuro_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)FuzzyNeuro_M, 0,
                sizeof(RT_MODEL_FuzzyNeuro));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&FuzzyNeuro_M->solverInfo,
                          &FuzzyNeuro_M->Timing.simTimeStep);
    rtsiSetTPtr(&FuzzyNeuro_M->solverInfo, &rtmGetTPtr(FuzzyNeuro_M));
    rtsiSetStepSizePtr(&FuzzyNeuro_M->solverInfo,
                       &FuzzyNeuro_M->Timing.stepSize0);
    rtsiSetdXPtr(&FuzzyNeuro_M->solverInfo, &FuzzyNeuro_M->ModelData.derivs);
    rtsiSetContStatesPtr(&FuzzyNeuro_M->solverInfo,
                         &FuzzyNeuro_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&FuzzyNeuro_M->solverInfo,
      &FuzzyNeuro_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&FuzzyNeuro_M->solverInfo, (&rtmGetErrorStatus
      (FuzzyNeuro_M)));
    rtsiSetRTModelPtr(&FuzzyNeuro_M->solverInfo, FuzzyNeuro_M);
  }

  rtsiSetSimTimeStep(&FuzzyNeuro_M->solverInfo, MAJOR_TIME_STEP);
  FuzzyNeuro_M->ModelData.intgData.f[0] = FuzzyNeuro_M->ModelData.odeF[0];
  FuzzyNeuro_M->ModelData.contStates = ((real_T *) &FuzzyNeuro_X);
  rtsiSetSolverData(&FuzzyNeuro_M->solverInfo, (void *)
                    &FuzzyNeuro_M->ModelData.intgData);
  rtsiSetSolverName(&FuzzyNeuro_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = FuzzyNeuro_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    FuzzyNeuro_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    FuzzyNeuro_M->Timing.sampleTimes = (&FuzzyNeuro_M->Timing.sampleTimesArray[0]);
    FuzzyNeuro_M->Timing.offsetTimes = (&FuzzyNeuro_M->Timing.offsetTimesArray[0]);

    /* task periods */
    FuzzyNeuro_M->Timing.sampleTimes[0] = (0.0);
    FuzzyNeuro_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    FuzzyNeuro_M->Timing.offsetTimes[0] = (0.0);
    FuzzyNeuro_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(FuzzyNeuro_M, &FuzzyNeuro_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = FuzzyNeuro_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    FuzzyNeuro_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(FuzzyNeuro_M, -1);
  FuzzyNeuro_M->Timing.stepSize0 = 0.01;
  FuzzyNeuro_M->Timing.stepSize1 = 0.01;

  /* external mode info */
  FuzzyNeuro_M->Sizes.checksums[0] = (1513453435U);
  FuzzyNeuro_M->Sizes.checksums[1] = (4278060393U);
  FuzzyNeuro_M->Sizes.checksums[2] = (1118506515U);
  FuzzyNeuro_M->Sizes.checksums[3] = (1901709821U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[31];
    FuzzyNeuro_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)&FuzzyNeuro_DWork.ActionOne_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &FuzzyNeuro_DWork.Actionu1.Actionu1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)&FuzzyNeuro_DWork.ActionOne_SubsysRanBC_i;
    systemRan[6] = (sysRanDType *)
      &FuzzyNeuro_DWork.Actionu1_n.Actionu1_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_k;
    systemRan[8] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem3_j.IfActionSubsystem3_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC;
    systemRan[15] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_a;
    systemRan[16] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem1_h.IfActionSubsystem3_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanB_k;
    systemRan[18] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC;
    systemRan[19] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_h;
    systemRan[20] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanB_o;
    systemRan[21] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem2_b.IfActionSubsystem2_SubsysRanBC;
    systemRan[22] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem3_g.IfActionSubsystem3_SubsysRanBC;
    systemRan[23] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_p;
    systemRan[24] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem1_j.IfActionSubsystem3_SubsysRanBC;
    systemRan[25] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_kk;
    systemRan[26] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC;
    systemRan[27] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_j;
    systemRan[28] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem1_l.IfActionSubsystem3_SubsysRanBC;
    systemRan[29] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_ke;
    systemRan[30] = (sysRanDType *)
      &FuzzyNeuro_DWork.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC;
    rteiSetModelMappingInfoPtr(FuzzyNeuro_M->extModeInfo,
      &FuzzyNeuro_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(FuzzyNeuro_M->extModeInfo, FuzzyNeuro_M->Sizes.checksums);
    rteiSetTPtr(FuzzyNeuro_M->extModeInfo, rtmGetTPtr(FuzzyNeuro_M));
  }

  FuzzyNeuro_M->solverInfoPtr = (&FuzzyNeuro_M->solverInfo);
  FuzzyNeuro_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&FuzzyNeuro_M->solverInfo, 0.01);
  rtsiSetSolverMode(&FuzzyNeuro_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  FuzzyNeuro_M->ModelData.blockIO = ((void *) &FuzzyNeuro_B);
  (void) memset(((void *) &FuzzyNeuro_B), 0,
                sizeof(BlockIO_FuzzyNeuro));

  {
    int_T i;
    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.impMethod[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.impMethod_n[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.impMethod_k[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.AggMethod1[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.impMethod_d[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.impMethod_e[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.impMethod_b[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.AggMethod2[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.viel[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.viel_j[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.ProductCOA[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_B.ProductCOA_n[i] = 0.0;
    }

    FuzzyNeuro_B.i1 = 0.0;
    FuzzyNeuro_B.Product = 0.0;
    FuzzyNeuro_B.Sum = 0.0;
    FuzzyNeuro_B.Diff1 = 0.0;
    FuzzyNeuro_B.DataConv = 0.0;
    FuzzyNeuro_B.Merge = 0.0;
    FuzzyNeuro_B.andorMethod = 0.0;
    FuzzyNeuro_B.Weighting = 0.0;
    FuzzyNeuro_B.Merge_b = 0.0;
    FuzzyNeuro_B.andorMethod_e = 0.0;
    FuzzyNeuro_B.Weighting_b = 0.0;
    FuzzyNeuro_B.Merge_d = 0.0;
    FuzzyNeuro_B.andorMethod_b = 0.0;
    FuzzyNeuro_B.Weighting_g = 0.0;
    FuzzyNeuro_B.i1_g = 0.0;
    FuzzyNeuro_B.Product1 = 0.0;
    FuzzyNeuro_B.Sum1 = 0.0;
    FuzzyNeuro_B.Diff2 = 0.0;
    FuzzyNeuro_B.DataConv_a = 0.0;
    FuzzyNeuro_B.Merge_c = 0.0;
    FuzzyNeuro_B.andorMethod_d = 0.0;
    FuzzyNeuro_B.Weighting_a = 0.0;
    FuzzyNeuro_B.Merge_n = 0.0;
    FuzzyNeuro_B.andorMethod_k = 0.0;
    FuzzyNeuro_B.Weighting_bq = 0.0;
    FuzzyNeuro_B.Merge_p = 0.0;
    FuzzyNeuro_B.andorMethod_a = 0.0;
    FuzzyNeuro_B.Weighting_j = 0.0;
    FuzzyNeuro_B.Sum1_e = 0.0;
    FuzzyNeuro_B.Merge_l = 0.0;
    FuzzyNeuro_B.Sum1_o = 0.0;
    FuzzyNeuro_B.Merge_g = 0.0;
    FuzzyNeuro_B.MultiportSwitch[0] = 0.0;
    FuzzyNeuro_B.MultiportSwitch[1] = 0.0;
    FuzzyNeuro_B.SFunction[0] = 0.0;
    FuzzyNeuro_B.SFunction[1] = 0.0;
    FuzzyNeuro_B.SFunction[2] = 0.0;
    FuzzyNeuro_B.SFunction_j = 0.0;
    FuzzyNeuro_B.SFunction_j2 = 0.0;
    FuzzyNeuro_B.uq1Vorgabe = 0.0;
    FuzzyNeuro_B.Saturation = 0.0;
    FuzzyNeuro_B.uq2Vorgabe = 0.0;
    FuzzyNeuro_B.Saturation1 = 0.0;
    FuzzyNeuro_B.i1_m = 0.0;
    FuzzyNeuro_B.Product2 = 0.0;
    FuzzyNeuro_B.Sum2 = 0.0;
    FuzzyNeuro_B.q1mess = 0.0;
    FuzzyNeuro_B.q2mess = 0.0;
    FuzzyNeuro_B.TotalFiringStrength = 0.0;
    FuzzyNeuro_B.ZeroFiringStrength = 0.0;
    FuzzyNeuro_B.Switch[0] = 0.0;
    FuzzyNeuro_B.Switch[1] = 0.0;
    FuzzyNeuro_B.Sum_d = 0.0;
    FuzzyNeuro_B.AveragingCOA = 0.0;
    FuzzyNeuro_B.Sum_h = 0.0;
    FuzzyNeuro_B.AveragingCOA_m = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_i.dc = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_i.dx = 0.0;
    FuzzyNeuro_B.IfActionSubsystem1_l.xa = 0.0;
    FuzzyNeuro_B.IfActionSubsystem1_l.ba = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_n.dc = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_n.dx = 0.0;
    FuzzyNeuro_B.IfActionSubsystem1_j.xa = 0.0;
    FuzzyNeuro_B.IfActionSubsystem1_j.ba = 0.0;
    FuzzyNeuro_B.IfActionSubsystem2_b.cb = 0.0;
    FuzzyNeuro_B.IfActionSubsystem2_b.cx = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_g.xa = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_g.ba = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_l.dc = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_l.dx = 0.0;
    FuzzyNeuro_B.IfActionSubsystem1_h.xa = 0.0;
    FuzzyNeuro_B.IfActionSubsystem1_h.ba = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3.dc = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3.dx = 0.0;
    FuzzyNeuro_B.IfActionSubsystem1.xa = 0.0;
    FuzzyNeuro_B.IfActionSubsystem1.ba = 0.0;
    FuzzyNeuro_B.IfActionSubsystem2_m.cb = 0.0;
    FuzzyNeuro_B.IfActionSubsystem2_m.cx = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_j.xa = 0.0;
    FuzzyNeuro_B.IfActionSubsystem3_j.ba = 0.0;
  }

  /* parameters */
  FuzzyNeuro_M->ModelData.defaultParam = ((real_T *)&FuzzyNeuro_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &FuzzyNeuro_X;
    FuzzyNeuro_M->ModelData.contStates = (x);
    (void) memset((void *)&FuzzyNeuro_X, 0,
                  sizeof(ContinuousStates_FuzzyNeuro));
  }

  /* states (dwork) */
  FuzzyNeuro_M->Work.dwork = ((void *) &FuzzyNeuro_DWork);
  (void) memset((void *)&FuzzyNeuro_DWork, 0,
                sizeof(D_Work_FuzzyNeuro));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    FuzzyNeuro_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  {
    /* user code (registration function declaration) */
    /*Call the macro that initializes the global TRC pointers
       inside the model initialization/registration function. */
    RTI_INIT_TRC_POINTERS();
  }
}

/* Model terminate function */
void FuzzyNeuro_terminate(void)
{
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  FuzzyNeuro_output(tid);
}

void MdlUpdate(int_T tid)
{
  FuzzyNeuro_update(tid);
}

void MdlInitializeSizes(void)
{
  FuzzyNeuro_M->Sizes.numContStates = (3);/* Number of continuous states */
  FuzzyNeuro_M->Sizes.numY = (0);      /* Number of model outputs */
  FuzzyNeuro_M->Sizes.numU = (0);      /* Number of model inputs */
  FuzzyNeuro_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  FuzzyNeuro_M->Sizes.numSampTimes = (2);/* Number of sample times */
  FuzzyNeuro_M->Sizes.numBlocks = (185);/* Number of blocks */
  FuzzyNeuro_M->Sizes.numBlockIO = (96);/* Number of block outputs */
  FuzzyNeuro_M->Sizes.numBlockPrms = (1101);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for TransferFcn: '<S5>/TP 5Hz' */
  FuzzyNeuro_X.TP5Hz_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S5>/TP 5Hz1' */
  FuzzyNeuro_X.TP5Hz1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S5>/TP 5Hz2' */
  FuzzyNeuro_X.TP5Hz2_CSTATE = 0.0;
}

void MdlStart(void)
{
  /* Start for If: '<S24>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S24>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S30>/Out1' */
  FuzzyNeuro_B.Merge = FuzzyNeuro_P.Out1_Y0_g;

  /* End of Start for SubSystem: '<S24>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S24>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S32>/Out1' */
  FuzzyNeuro_B.Merge = FuzzyNeuro_P.Out1_Y0_b;

  /* End of Start for SubSystem: '<S24>/If Action Subsystem2' */

  /* Start for If: '<S23>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_n = -1;

  /* Start for IfAction SubSystem: '<S23>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S26>/Out1' */
  FuzzyNeuro_B.Merge_b = FuzzyNeuro_P.Out1_Y0_aa;

  /* End of Start for SubSystem: '<S23>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S23>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S27>/Out1' */
  FuzzyNeuro_B.Merge_b = FuzzyNeuro_P.Out1_Y0_c;

  /* End of Start for SubSystem: '<S23>/If Action Subsystem1' */

  /* Start for If: '<S25>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_i = -1;

  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S34>/Out1' */
  FuzzyNeuro_B.Merge_d = FuzzyNeuro_P.Out1_Y0_f;

  /* End of Start for SubSystem: '<S25>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S36>/Out1' */
  FuzzyNeuro_B.Merge_d = FuzzyNeuro_P.Out1_Y0_j;

  /* End of Start for SubSystem: '<S25>/If Action Subsystem2' */

  /* Start for If: '<S39>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_i2 = -1;

  /* Start for IfAction SubSystem: '<S39>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S45>/Out1' */
  FuzzyNeuro_B.Merge_c = FuzzyNeuro_P.Out1_Y0_ja;

  /* End of Start for SubSystem: '<S39>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S39>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S47>/Out1' */
  FuzzyNeuro_B.Merge_c = FuzzyNeuro_P.Out1_Y0_e;

  /* End of Start for SubSystem: '<S39>/If Action Subsystem2' */

  /* Start for If: '<S38>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_e = -1;

  /* Start for IfAction SubSystem: '<S38>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S41>/Out1' */
  FuzzyNeuro_B.Merge_n = FuzzyNeuro_P.Out1_Y0_jm;

  /* End of Start for SubSystem: '<S38>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S38>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S42>/Out1' */
  FuzzyNeuro_B.Merge_n = FuzzyNeuro_P.Out1_Y0_d;

  /* End of Start for SubSystem: '<S38>/If Action Subsystem1' */

  /* Start for If: '<S40>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_ie = -1;

  /* Start for IfAction SubSystem: '<S40>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S49>/Out1' */
  FuzzyNeuro_B.Merge_p = FuzzyNeuro_P.Out1_Y0_h;

  /* End of Start for SubSystem: '<S40>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S40>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S51>/Out1' */
  FuzzyNeuro_B.Merge_p = FuzzyNeuro_P.Out1_Y0_ez;

  /* End of Start for SubSystem: '<S40>/If Action Subsystem2' */

  /* Start for If: '<S7>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_c = -1;

  /* Start for IfAction SubSystem: '<S7>/Action: One' */
  /* VirtualOutportStart for Outport: '<S19>/Out1' */
  FuzzyNeuro_B.Merge_l = FuzzyNeuro_P.Out1_Y0;

  /* End of Start for SubSystem: '<S7>/Action: One' */

  /* Start for If: '<S8>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_a = -1;

  /* Start for IfAction SubSystem: '<S8>/Action: One' */
  /* VirtualOutportStart for Outport: '<S21>/Out1' */
  FuzzyNeuro_B.Merge_g = FuzzyNeuro_P.Out1_Y0_a;

  /* End of Start for SubSystem: '<S8>/Action: One' */
  MdlInitialize();
}

void MdlTerminate(void)
{
  FuzzyNeuro_terminate();
}

RT_MODEL_FuzzyNeuro *FuzzyNeuro(void)
{
  FuzzyNeuro_initialize(1);
  return FuzzyNeuro_M;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
