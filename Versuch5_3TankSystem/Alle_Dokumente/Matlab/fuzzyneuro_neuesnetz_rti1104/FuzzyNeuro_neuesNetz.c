/*
 * FuzzyNeuro_neuesNetz.c
 *
 * Code generation for model "FuzzyNeuro_neuesNetz.mdl".
 *
 * Model version              : 1.123
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Fri Oct 30 09:58:01 2015
 *
 * Target selection: rti1104.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "FuzzyNeuro_neuesNetz_trc_ptr.h"
#include "FuzzyNeuro_neuesNetz.h"
#include "FuzzyNeuro_neuesNetz_private.h"
#include "FuzzyNeuro_neuesNetz_dt.h"

/* Block signals (auto storage) */
BlockIO_FuzzyNeuro_neuesNetz FuzzyNeuro_neuesNetz_B;

/* Continuous states */
ContinuousStates_FuzzyNeuro_neu FuzzyNeuro_neuesNetz_X;

/* Block states (auto storage) */
D_Work_FuzzyNeuro_neuesNetz FuzzyNeuro_neuesNetz_DWork;

/* Real-time model */
RT_MODEL_FuzzyNeuro_neuesNetz FuzzyNeuro_neuesNetz_M_;
RT_MODEL_FuzzyNeuro_neuesNetz *const FuzzyNeuro_neuesNetz_M =
  &FuzzyNeuro_neuesNetz_M_;

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
  FuzzyNeuro_neuesNetz_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; i++) {
    *x += h * f0[i];
    x++;
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for action system:
 *    '<S8>/Action: u1'
 *    '<S9>/Action: u1'
 */
void FuzzyNeuro_neuesNetz_Actionu1(real_T rtu_0, real_T *rty_u2)
{
  /* Inport: '<S21>/u1' */
  *rty_u2 = rtu_0;
}

/*
 * Output and update for action system:
 *    '<S24>/If Action Subsystem3'
 *    '<S25>/If Action Subsystem1'
 *    '<S26>/If Action Subsystem1'
 *    '<S39>/If Action Subsystem3'
 *    '<S40>/If Action Subsystem1'
 *    '<S41>/If Action Subsystem1'
 */
void FuzzyNeuro_n_IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem3_FuzzyNeu *localB, rtP_IfActionSubsystem3_FuzzyNeu
  *localP)
{
  /* Sum: '<S30>/Sum' incorporates:
   *  Constant: '<S30>/a'
   */
  localB->xa = rtu_x - localP->a_Value;

  /* Sum: '<S30>/Sum1' incorporates:
   *  Constant: '<S30>/a'
   *  Constant: '<S30>/b'
   */
  localB->ba = localP->b_Value - localP->a_Value;

  /* Product: '<S30>/Product ab (trimf)' */
  *rty_Out1 = localB->xa / localB->ba;
}

/*
 * Output and update for action system:
 *    '<S24>/If Action Subsystem2'
 *    '<S39>/If Action Subsystem2'
 */
void FuzzyNeuro_n_IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem2_FuzzyNeu *localB, rtP_IfActionSubsystem2_FuzzyNeu
  *localP)
{
  /* Sum: '<S29>/Sum2' incorporates:
   *  Constant: '<S29>/b'
   *  Constant: '<S29>/c'
   */
  localB->cb = localP->c_Value - localP->b_Value;

  /* Sum: '<S29>/Sum3' incorporates:
   *  Constant: '<S29>/c'
   */
  localB->cx = localP->c_Value - rtu_x;

  /* Product: '<S29>/Product cd (trimf)' */
  *rty_Out1 = 1.0 / localB->cb * localB->cx;
}

/*
 * Output and update for action system:
 *    '<S25>/If Action Subsystem3'
 *    '<S26>/If Action Subsystem3'
 *    '<S40>/If Action Subsystem3'
 *    '<S41>/If Action Subsystem3'
 */
void FuzzyNeuro_IfActionSubsystem3_m(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem3_FuzzyN_c *localB, rtP_IfActionSubsystem3_FuzzyN_k
  *localP)
{
  /* Sum: '<S34>/Sum2' incorporates:
   *  Constant: '<S34>/c'
   *  Constant: '<S34>/d'
   */
  localB->dc = localP->d_Value - localP->c_Value;

  /* Sum: '<S34>/Sum3' incorporates:
   *  Constant: '<S34>/d'
   */
  localB->dx = localP->d_Value - rtu_x;

  /* Product: '<S34>/Product cd (trimf)' */
  *rty_Out1 = 1.0 / localB->dc * localB->dx;
}

/* Model output function */
void FuzzyNeuro_neuesNetz_output(int_T tid)
{
  int8_T rtAction;
  int32_T tmp;
  int32_T i;
  real_T u;
  real_T u_0;
  real_T u_1;
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    /* set solver stop time */
    if (!(FuzzyNeuro_neuesNetz_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&FuzzyNeuro_neuesNetz_M->solverInfo,
                            ((FuzzyNeuro_neuesNetz_M->Timing.clockTickH0 + 1) *
        FuzzyNeuro_neuesNetz_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&FuzzyNeuro_neuesNetz_M->solverInfo,
                            ((FuzzyNeuro_neuesNetz_M->Timing.clockTick0 + 1) *
        FuzzyNeuro_neuesNetz_M->Timing.stepSize0 +
        FuzzyNeuro_neuesNetz_M->Timing.clockTickH0 *
        FuzzyNeuro_neuesNetz_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    FuzzyNeuro_neuesNetz_M->Timing.t[0] = rtsiGetT
      (&FuzzyNeuro_neuesNetz_M->solverInfo);
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
  srClearBC(FuzzyNeuro_neuesNetz_DWork.ActionOne_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.Actionu1.Actionu1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.ActionOne_SubsysRanBC_m);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_j);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_n);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_f);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_g);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_SubsysRanB_j);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_p);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_p);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_e);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_k);

  /* RTWBLOCK_START_COMMENT */

  /* TransferFcn: '<S6>/TP 5Hz' */
  FuzzyNeuro_neuesNetz_B.i1 = FuzzyNeuro_neuesNetz_P.TP5Hz_C*
    FuzzyNeuro_neuesNetz_X.TP5Hz_CSTATE;

  /* Product: '<S6>/Product' incorporates:
   *  Constant: '<S6>/Faktorh1'
   */
  FuzzyNeuro_neuesNetz_B.Product = FuzzyNeuro_neuesNetz_P.Faktorh1_Value *
    FuzzyNeuro_neuesNetz_B.i1;

  /* Sum: '<S6>/Sum' incorporates:
   *  Constant: '<S6>/Offseth1'
   */
  FuzzyNeuro_neuesNetz_B.Sum = FuzzyNeuro_neuesNetz_P.Offseth1_Value +
    FuzzyNeuro_neuesNetz_B.Product;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/soll1'
   */
  FuzzyNeuro_neuesNetz_B.Diff1 = FuzzyNeuro_neuesNetz_P.soll1_Value -
    FuzzyNeuro_neuesNetz_B.Sum;

  /* DataTypeConversion: '<S10>/DataConv' */
  FuzzyNeuro_neuesNetz_B.DataConv = FuzzyNeuro_neuesNetz_B.Diff1;

  /* If: '<S25>/If' incorporates:
   *  Constant: '<S31>/0'
   *  Constant: '<S33>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    if ((FuzzyNeuro_neuesNetz_B.DataConv < -61.0) ||
        (FuzzyNeuro_neuesNetz_B.DataConv > 0.0)) {
      rtAction = 0;
    } else if ((FuzzyNeuro_neuesNetz_B.DataConv >= -60.0) &&
               (FuzzyNeuro_neuesNetz_B.DataConv <= -2.0)) {
      rtAction = 1;
    } else if (FuzzyNeuro_neuesNetz_B.DataConv < -60.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem = rtAction;
  } else {
    rtAction = FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge = FuzzyNeuro_neuesNetz_P._Value_h;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge = FuzzyNeuro_neuesNetz_P._Value_p;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    FuzzyNeuro_n_IfActionSubsystem3(FuzzyNeuro_neuesNetz_B.DataConv,
      &FuzzyNeuro_neuesNetz_B.Merge, &FuzzyNeuro_neuesNetz_B.IfActionSubsystem1,
                                    (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem1);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_neuesNetz_B.DataConv,
      &FuzzyNeuro_neuesNetz_B.Merge, &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3,
                                    (rtP_IfActionSubsystem3_FuzzyN_k *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S25>/If' */

  /* MinMax: '<S14>/andorMethod' */
  FuzzyNeuro_neuesNetz_B.andorMethod = FuzzyNeuro_neuesNetz_B.Merge;

  /* Product: '<S14>/Weighting' incorporates:
   *  Constant: '<S14>/Weight'
   */
  FuzzyNeuro_neuesNetz_B.Weighting = FuzzyNeuro_neuesNetz_P.Weight_Value *
    FuzzyNeuro_neuesNetz_B.andorMethod;

  /* MinMax: '<S14>/impMethod' incorporates:
   *  Constant: '<S12>/nix'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_neuesNetz_B.Weighting;
    u_0 = FuzzyNeuro_neuesNetz_P.nix_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_neuesNetz_B.impMethod[i] = u;
  }

  /* End of MinMax: '<S14>/impMethod' */

  /* If: '<S24>/If' incorporates:
   *  Constant: '<S27>/0'
   *  Constant: '<S28>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    if ((FuzzyNeuro_neuesNetz_B.DataConv < -2.0) ||
        (FuzzyNeuro_neuesNetz_B.DataConv > 2.0)) {
      rtAction = 0;
    } else if (FuzzyNeuro_neuesNetz_B.DataConv == 0.0) {
      rtAction = 1;
    } else if (FuzzyNeuro_neuesNetz_B.DataConv < 0.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_m = rtAction;
  } else {
    rtAction = FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_m;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_c = FuzzyNeuro_neuesNetz_P._Value;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_j);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_c = FuzzyNeuro_neuesNetz_P._Value_e;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    FuzzyNeuro_n_IfActionSubsystem3(FuzzyNeuro_neuesNetz_B.DataConv,
      &FuzzyNeuro_neuesNetz_B.Merge_c,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_p,
      (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_p);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    FuzzyNeuro_n_IfActionSubsystem2(FuzzyNeuro_neuesNetz_B.DataConv,
      &FuzzyNeuro_neuesNetz_B.Merge_c,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_k,
      (rtP_IfActionSubsystem2_FuzzyNeu *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_k);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S24>/If' */

  /* MinMax: '<S15>/andorMethod' */
  FuzzyNeuro_neuesNetz_B.andorMethod_p = FuzzyNeuro_neuesNetz_B.Merge_c;

  /* Product: '<S15>/Weighting' incorporates:
   *  Constant: '<S15>/Weight'
   */
  FuzzyNeuro_neuesNetz_B.Weighting_e = FuzzyNeuro_neuesNetz_P.Weight_Value_n *
    FuzzyNeuro_neuesNetz_B.andorMethod_p;

  /* MinMax: '<S15>/impMethod' incorporates:
   *  Constant: '<S12>/bissle'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_neuesNetz_B.Weighting_e;
    u_0 = FuzzyNeuro_neuesNetz_P.bissle_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_neuesNetz_B.impMethod_e[i] = u;
  }

  /* End of MinMax: '<S15>/impMethod' */

  /* If: '<S26>/If' incorporates:
   *  Constant: '<S35>/0'
   *  Constant: '<S37>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    if ((FuzzyNeuro_neuesNetz_B.DataConv < 0.0) ||
        (FuzzyNeuro_neuesNetz_B.DataConv > 61.0)) {
      rtAction = 0;
    } else if ((FuzzyNeuro_neuesNetz_B.DataConv >= 2.0) &&
               (FuzzyNeuro_neuesNetz_B.DataConv <= 60.0)) {
      rtAction = 1;
    } else if (FuzzyNeuro_neuesNetz_B.DataConv < 2.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_p = rtAction;
  } else {
    rtAction = FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_p;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_g = FuzzyNeuro_neuesNetz_P._Value_a;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_n);
    }

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_g = FuzzyNeuro_neuesNetz_P._Value_em;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_f);
    }

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    FuzzyNeuro_n_IfActionSubsystem3(FuzzyNeuro_neuesNetz_B.DataConv,
      &FuzzyNeuro_neuesNetz_B.Merge_g,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_p,
      (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_p);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_p.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_neuesNetz_B.DataConv,
      &FuzzyNeuro_neuesNetz_B.Merge_g,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_c,
      (rtP_IfActionSubsystem3_FuzzyN_k *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_c);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S26>/If' */

  /* MinMax: '<S16>/andorMethod' */
  FuzzyNeuro_neuesNetz_B.andorMethod_e = FuzzyNeuro_neuesNetz_B.Merge_g;

  /* Product: '<S16>/Weighting' incorporates:
   *  Constant: '<S16>/Weight'
   */
  FuzzyNeuro_neuesNetz_B.Weighting_f = FuzzyNeuro_neuesNetz_P.Weight_Value_j *
    FuzzyNeuro_neuesNetz_B.andorMethod_e;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S16>/impMethod' incorporates:
     *  Constant: '<S12>/ganzviel'
     */
    u = FuzzyNeuro_neuesNetz_B.Weighting_f;
    u_0 = FuzzyNeuro_neuesNetz_P.ganzviel_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_neuesNetz_B.impMethod_k[i] = u;

    /* MinMax: '<S7>/AggMethod1' */
    u = FuzzyNeuro_neuesNetz_B.impMethod[i];
    u_0 = FuzzyNeuro_neuesNetz_B.impMethod_e[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    u_0 = FuzzyNeuro_neuesNetz_B.impMethod_k[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_neuesNetz_B.AggMethod1[i] = u;
  }

  /* TransferFcn: '<S6>/TP 5Hz1' */
  FuzzyNeuro_neuesNetz_B.i1_n = FuzzyNeuro_neuesNetz_P.TP5Hz1_C*
    FuzzyNeuro_neuesNetz_X.TP5Hz1_CSTATE;

  /* Product: '<S6>/Product1' incorporates:
   *  Constant: '<S6>/Faktorh2'
   */
  FuzzyNeuro_neuesNetz_B.Product1 = FuzzyNeuro_neuesNetz_P.Faktorh2_Value *
    FuzzyNeuro_neuesNetz_B.i1_n;

  /* Sum: '<S6>/Sum1' incorporates:
   *  Constant: '<S6>/Offseth2'
   */
  FuzzyNeuro_neuesNetz_B.Sum1 = FuzzyNeuro_neuesNetz_P.Offseth2_Value +
    FuzzyNeuro_neuesNetz_B.Product1;

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/soll2'
   */
  FuzzyNeuro_neuesNetz_B.Diff2 = FuzzyNeuro_neuesNetz_P.soll2_Value -
    FuzzyNeuro_neuesNetz_B.Sum1;

  /* DataTypeConversion: '<S11>/DataConv' */
  FuzzyNeuro_neuesNetz_B.DataConv_n = FuzzyNeuro_neuesNetz_B.Diff2;

  /* If: '<S40>/If' incorporates:
   *  Constant: '<S46>/0'
   *  Constant: '<S48>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    if ((FuzzyNeuro_neuesNetz_B.DataConv_n < -61.0) ||
        (FuzzyNeuro_neuesNetz_B.DataConv_n > 0.0)) {
      rtAction = 0;
    } else if ((FuzzyNeuro_neuesNetz_B.DataConv_n >= -60.0) &&
               (FuzzyNeuro_neuesNetz_B.DataConv_n <= -2.0)) {
      rtAction = 1;
    } else if (FuzzyNeuro_neuesNetz_B.DataConv_n < -60.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_j = rtAction;
  } else {
    rtAction = FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_j;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_gx = FuzzyNeuro_neuesNetz_P._Value_ib;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_p);
    }

    /* End of Outputs for SubSystem: '<S40>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_gx = FuzzyNeuro_neuesNetz_P._Value_i5;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_p);
    }

    /* End of Outputs for SubSystem: '<S40>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    FuzzyNeuro_n_IfActionSubsystem3(FuzzyNeuro_neuesNetz_B.DataConv_n,
      &FuzzyNeuro_neuesNetz_B.Merge_gx,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_d,
      (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_d);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_d.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S40>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S40>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_neuesNetz_B.DataConv_n,
      &FuzzyNeuro_neuesNetz_B.Merge_gx,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_b,
      (rtP_IfActionSubsystem3_FuzzyN_k *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_b);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S40>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S40>/If' */

  /* MinMax: '<S17>/andorMethod' */
  FuzzyNeuro_neuesNetz_B.andorMethod_l = FuzzyNeuro_neuesNetz_B.Merge_gx;

  /* Product: '<S17>/Weighting' incorporates:
   *  Constant: '<S17>/Weight'
   */
  FuzzyNeuro_neuesNetz_B.Weighting_i = FuzzyNeuro_neuesNetz_P.Weight_Value_i *
    FuzzyNeuro_neuesNetz_B.andorMethod_l;

  /* MinMax: '<S17>/impMethod' incorporates:
   *  Constant: '<S13>/nix'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_neuesNetz_B.Weighting_i;
    u_0 = FuzzyNeuro_neuesNetz_P.nix_Value_b[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_neuesNetz_B.impMethod_d[i] = u;
  }

  /* End of MinMax: '<S17>/impMethod' */

  /* If: '<S39>/If' incorporates:
   *  Constant: '<S42>/0'
   *  Constant: '<S43>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    if ((FuzzyNeuro_neuesNetz_B.DataConv_n < -2.0) ||
        (FuzzyNeuro_neuesNetz_B.DataConv_n > 2.0)) {
      rtAction = 0;
    } else if (FuzzyNeuro_neuesNetz_B.DataConv_n == 0.0) {
      rtAction = 1;
    } else if (FuzzyNeuro_neuesNetz_B.DataConv_n < 0.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_g = rtAction;
  } else {
    rtAction = FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_g;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_j = FuzzyNeuro_neuesNetz_P._Value_k;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_g);
    }

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S43>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_j = FuzzyNeuro_neuesNetz_P._Value_i;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_SubsysRanB_j);
    }

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S45>/Action Port'
     */
    FuzzyNeuro_n_IfActionSubsystem3(FuzzyNeuro_neuesNetz_B.DataConv_n,
      &FuzzyNeuro_neuesNetz_B.Merge_j,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_l,
      (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_l);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S39>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    FuzzyNeuro_n_IfActionSubsystem2(FuzzyNeuro_neuesNetz_B.DataConv_n,
      &FuzzyNeuro_neuesNetz_B.Merge_j,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_au,
      (rtP_IfActionSubsystem2_FuzzyNeu *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem2_au);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_au.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S39>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S39>/If' */

  /* MinMax: '<S18>/andorMethod' */
  FuzzyNeuro_neuesNetz_B.andorMethod_b = FuzzyNeuro_neuesNetz_B.Merge_j;

  /* Product: '<S18>/Weighting' incorporates:
   *  Constant: '<S18>/Weight'
   */
  FuzzyNeuro_neuesNetz_B.Weighting_j = FuzzyNeuro_neuesNetz_P.Weight_Value_b *
    FuzzyNeuro_neuesNetz_B.andorMethod_b;

  /* MinMax: '<S18>/impMethod' incorporates:
   *  Constant: '<S13>/stationaer'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_neuesNetz_B.Weighting_j;
    u_0 = FuzzyNeuro_neuesNetz_P.stationaer_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_neuesNetz_B.impMethod_h[i] = u;
  }

  /* End of MinMax: '<S18>/impMethod' */

  /* If: '<S41>/If' incorporates:
   *  Constant: '<S50>/0'
   *  Constant: '<S52>/0'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    if ((FuzzyNeuro_neuesNetz_B.DataConv_n < 0.0) ||
        (FuzzyNeuro_neuesNetz_B.DataConv_n > 61.0)) {
      rtAction = 0;
    } else if ((FuzzyNeuro_neuesNetz_B.DataConv_n >= 2.0) &&
               (FuzzyNeuro_neuesNetz_B.DataConv_n <= 60.0)) {
      rtAction = 1;
    } else if (FuzzyNeuro_neuesNetz_B.DataConv_n < 2.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_h = rtAction;
  } else {
    rtAction = FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_h;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_m = FuzzyNeuro_neuesNetz_P._Value_o;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_e);
    }

    /* End of Outputs for SubSystem: '<S41>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_m = FuzzyNeuro_neuesNetz_P._Value_n;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_k);
    }

    /* End of Outputs for SubSystem: '<S41>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    FuzzyNeuro_n_IfActionSubsystem3(FuzzyNeuro_neuesNetz_B.DataConv_n,
      &FuzzyNeuro_neuesNetz_B.Merge_m,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_dr,
      (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem1_dr);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_dr.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S41>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_neuesNetz_B.DataConv_n,
      &FuzzyNeuro_neuesNetz_B.Merge_m,
      &FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_n,
      (rtP_IfActionSubsystem3_FuzzyN_k *)
      &FuzzyNeuro_neuesNetz_P.IfActionSubsystem3_n);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC
        (FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S41>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S41>/If' */

  /* MinMax: '<S19>/andorMethod' */
  FuzzyNeuro_neuesNetz_B.andorMethod_i = FuzzyNeuro_neuesNetz_B.Merge_m;

  /* Product: '<S19>/Weighting' incorporates:
   *  Constant: '<S19>/Weight'
   */
  FuzzyNeuro_neuesNetz_B.Weighting_es = FuzzyNeuro_neuesNetz_P.Weight_Value_jv *
    FuzzyNeuro_neuesNetz_B.andorMethod_i;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S19>/impMethod' incorporates:
     *  Constant: '<S13>/ganzviel'
     */
    u = FuzzyNeuro_neuesNetz_B.Weighting_es;
    u_0 = FuzzyNeuro_neuesNetz_P.ganzviel_Value_g[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_neuesNetz_B.impMethod_d5[i] = u;

    /* MinMax: '<S7>/AggMethod2' */
    u = FuzzyNeuro_neuesNetz_B.impMethod_d[i];
    u_0 = FuzzyNeuro_neuesNetz_B.impMethod_h[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    u_0 = FuzzyNeuro_neuesNetz_B.impMethod_d5[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_neuesNetz_B.AggMethod2[i] = u;
  }

  /* Sum: '<S8>/Sum1' */
  u = FuzzyNeuro_neuesNetz_B.AggMethod1[0];
  for (i = 0; i < 100; i++) {
    tmp = i + 1;
    u += FuzzyNeuro_neuesNetz_B.AggMethod1[tmp];
  }

  FuzzyNeuro_neuesNetz_B.Sum1_b = u;

  /* End of Sum: '<S8>/Sum1' */

  /* If: '<S8>/If' incorporates:
   *  Constant: '<S20>/One'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    if (FuzzyNeuro_neuesNetz_B.Sum1_b <= 0.0) {
      rtAction = 0;
    } else {
      rtAction = 1;
    }

    FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_jg = rtAction;
  } else {
    rtAction = FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_jg;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S8>/Action: One' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_b = FuzzyNeuro_neuesNetz_P.One_Value;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.ActionOne_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S8>/Action: One' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S8>/Action: u1' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    FuzzyNeuro_neuesNetz_Actionu1(FuzzyNeuro_neuesNetz_B.Sum1_b,
      &FuzzyNeuro_neuesNetz_B.Merge_b);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.Actionu1.Actionu1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S8>/Action: u1' */
    break;
  }

  /* End of If: '<S8>/If' */

  /* Sum: '<S9>/Sum1' */
  u = FuzzyNeuro_neuesNetz_B.AggMethod2[0];
  for (i = 0; i < 100; i++) {
    tmp = i + 1;
    u += FuzzyNeuro_neuesNetz_B.AggMethod2[tmp];
  }

  FuzzyNeuro_neuesNetz_B.Sum1_j = u;

  /* End of Sum: '<S9>/Sum1' */

  /* If: '<S9>/If' incorporates:
   *  Constant: '<S22>/One'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    if (FuzzyNeuro_neuesNetz_B.Sum1_j <= 0.0) {
      rtAction = 0;
    } else {
      rtAction = 1;
    }

    FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_ja = rtAction;
  } else {
    rtAction = FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_ja;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S9>/Action: One' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      FuzzyNeuro_neuesNetz_B.Merge_p = FuzzyNeuro_neuesNetz_P.One_Value_c;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.ActionOne_SubsysRanBC_m);
    }

    /* End of Outputs for SubSystem: '<S9>/Action: One' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S9>/Action: u1' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    FuzzyNeuro_neuesNetz_Actionu1(FuzzyNeuro_neuesNetz_B.Sum1_j,
      &FuzzyNeuro_neuesNetz_B.Merge_p);
    if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
      srUpdateBC(FuzzyNeuro_neuesNetz_DWork.Actionu1_h.Actionu1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S9>/Action: u1' */
    break;
  }

  /* End of If: '<S9>/If' */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    for (i = 0; i < 101; i++) {
      /* Constant: '<S12>/viel' */
      FuzzyNeuro_neuesNetz_B.viel[i] = FuzzyNeuro_neuesNetz_P.viel_Value[i];

      /* Constant: '<S13>/viel' */
      FuzzyNeuro_neuesNetz_B.viel_i[i] = FuzzyNeuro_neuesNetz_P.viel_Value_p[i];
    }

    /* SignalConversion: '<S59>/TmpSignal ConversionAtDot ProductInport2' */
    FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0] =
      FuzzyNeuro_neuesNetz_B.Diff1;
    FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1] =
      FuzzyNeuro_neuesNetz_B.Diff2;

    /* DotProduct: '<S59>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(1,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW111_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW111_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct = u;

    /* DotProduct: '<S61>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(2,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW112_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW112_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_j = u;

    /* DotProduct: '<S62>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(3,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW113_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW113_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_d = u;

    /* DotProduct: '<S63>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(4,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW114_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW114_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_m = u;

    /* DotProduct: '<S64>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(5,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW115_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW115_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_c = u;

    /* DotProduct: '<S65>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(6,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW116_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW116_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_d5 = u;

    /* DotProduct: '<S66>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(7,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW117_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW117_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_k = u;

    /* DotProduct: '<S67>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(8,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW118_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW118_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_j1 = u;

    /* DotProduct: '<S68>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(9,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW119_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW119_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_g = u;

    /* DotProduct: '<S60>/Dot Product' incorporates:
     *  Constant: '<S57>/IW{1,1}(10,:)''
     */
    u = FuzzyNeuro_neuesNetz_P.IW1110_Value[0] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0];
    u += FuzzyNeuro_neuesNetz_P.IW1110_Value[1] *
      FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1];
    FuzzyNeuro_neuesNetz_B.DotProduct_a = u;

    /* Sum: '<S54>/netsum' incorporates:
     *  Constant: '<S54>/b{1}'
     */
    FuzzyNeuro_neuesNetz_B.netsum[0] = FuzzyNeuro_neuesNetz_B.DotProduct +
      FuzzyNeuro_neuesNetz_P.b1_Value[0];
    FuzzyNeuro_neuesNetz_B.netsum[1] = FuzzyNeuro_neuesNetz_B.DotProduct_j +
      FuzzyNeuro_neuesNetz_P.b1_Value[1];
    FuzzyNeuro_neuesNetz_B.netsum[2] = FuzzyNeuro_neuesNetz_B.DotProduct_d +
      FuzzyNeuro_neuesNetz_P.b1_Value[2];
    FuzzyNeuro_neuesNetz_B.netsum[3] = FuzzyNeuro_neuesNetz_B.DotProduct_m +
      FuzzyNeuro_neuesNetz_P.b1_Value[3];
    FuzzyNeuro_neuesNetz_B.netsum[4] = FuzzyNeuro_neuesNetz_B.DotProduct_c +
      FuzzyNeuro_neuesNetz_P.b1_Value[4];
    FuzzyNeuro_neuesNetz_B.netsum[5] = FuzzyNeuro_neuesNetz_B.DotProduct_d5 +
      FuzzyNeuro_neuesNetz_P.b1_Value[5];
    FuzzyNeuro_neuesNetz_B.netsum[6] = FuzzyNeuro_neuesNetz_B.DotProduct_k +
      FuzzyNeuro_neuesNetz_P.b1_Value[6];
    FuzzyNeuro_neuesNetz_B.netsum[7] = FuzzyNeuro_neuesNetz_B.DotProduct_j1 +
      FuzzyNeuro_neuesNetz_P.b1_Value[7];
    FuzzyNeuro_neuesNetz_B.netsum[8] = FuzzyNeuro_neuesNetz_B.DotProduct_g +
      FuzzyNeuro_neuesNetz_P.b1_Value[8];
    FuzzyNeuro_neuesNetz_B.netsum[9] = FuzzyNeuro_neuesNetz_B.DotProduct_a +
      FuzzyNeuro_neuesNetz_P.b1_Value[9];

    /* DotProduct: '<S72>/Dot Product' incorporates:
     *  Constant: '<S70>/IW{2,1}(1,:)''
     */
    u = 0.0;
    for (i = 0; i < 10; i++) {
      /* Gain: '<S58>/Gain' */
      FuzzyNeuro_neuesNetz_B.Gain[i] = FuzzyNeuro_neuesNetz_P.Gain_Gain *
        FuzzyNeuro_neuesNetz_B.netsum[i];

      /* Math: '<S58>/Exp'
       *
       * About '<S58>/Exp':
       *  Operator: exp
       */
      FuzzyNeuro_neuesNetz_B.Exp[i] = exp(FuzzyNeuro_neuesNetz_B.Gain[i]);

      /* Sum: '<S58>/Sum' incorporates:
       *  Constant: '<S58>/one'
       */
      FuzzyNeuro_neuesNetz_B.Sum_m[i] = FuzzyNeuro_neuesNetz_B.Exp[i] +
        FuzzyNeuro_neuesNetz_P.one_Value;

      /* Math: '<S58>/Reciprocal'
       *
       * About '<S58>/Reciprocal':
       *  Operator: reciprocal
       */
      FuzzyNeuro_neuesNetz_B.Reciprocal[i] = 1.0 /
        FuzzyNeuro_neuesNetz_B.Sum_m[i];

      /* Gain: '<S58>/Gain1' */
      FuzzyNeuro_neuesNetz_B.Gain1[i] = FuzzyNeuro_neuesNetz_P.Gain1_Gain *
        FuzzyNeuro_neuesNetz_B.Reciprocal[i];

      /* Sum: '<S58>/Sum1' incorporates:
       *  Constant: '<S58>/one1'
       */
      FuzzyNeuro_neuesNetz_B.Sum1_i[i] = FuzzyNeuro_neuesNetz_B.Gain1[i] -
        FuzzyNeuro_neuesNetz_P.one1_Value;
      u += FuzzyNeuro_neuesNetz_P.IW211_Value[i] *
        FuzzyNeuro_neuesNetz_B.Sum1_i[i];
    }

    FuzzyNeuro_neuesNetz_B.DotProduct_h = u;

    /* End of DotProduct: '<S72>/Dot Product' */

    /* DotProduct: '<S73>/Dot Product' incorporates:
     *  Constant: '<S70>/IW{2,1}(2,:)''
     */
    u = 0.0;
    for (i = 0; i < 10; i++) {
      u += FuzzyNeuro_neuesNetz_P.IW212_Value[i] *
        FuzzyNeuro_neuesNetz_B.Sum1_i[i];
    }

    FuzzyNeuro_neuesNetz_B.DotProduct_al = u;

    /* End of DotProduct: '<S73>/Dot Product' */

    /* Sum: '<S55>/netsum' incorporates:
     *  Constant: '<S55>/b{2}'
     */
    FuzzyNeuro_neuesNetz_B.netsum_a[0] = FuzzyNeuro_neuesNetz_B.DotProduct_h +
      FuzzyNeuro_neuesNetz_P.b2_Value[0];
    FuzzyNeuro_neuesNetz_B.netsum_a[1] = FuzzyNeuro_neuesNetz_B.DotProduct_al +
      FuzzyNeuro_neuesNetz_P.b2_Value[1];
  }

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Automatik'
   *  Constant: '<Root>/Pumpe1'
   *  Constant: '<Root>/Pumpe2'
   */
  switch ((int32_T)FuzzyNeuro_neuesNetz_P.Automatik_Value) {
   case 1:
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[0] =
      FuzzyNeuro_neuesNetz_P.Pumpe1_Value;
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[1] =
      FuzzyNeuro_neuesNetz_P.Pumpe2_Value;
    break;

   case 2:
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[0] = FuzzyNeuro_neuesNetz_B.netsum_a
      [0];
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[1] = FuzzyNeuro_neuesNetz_B.netsum_a
      [1];
    break;

   default:
    /* Sum: '<S7>/Total Firing Strength' */
    FuzzyNeuro_neuesNetz_B.TotalFiringStrength =
      ((((FuzzyNeuro_neuesNetz_B.Weighting + FuzzyNeuro_neuesNetz_B.Weighting_e)
         + FuzzyNeuro_neuesNetz_B.Weighting_f) +
        FuzzyNeuro_neuesNetz_B.Weighting_i) + FuzzyNeuro_neuesNetz_B.Weighting_j)
      + FuzzyNeuro_neuesNetz_B.Weighting_es;

    /* RelationalOperator: '<S7>/Zero Firing Strength?' incorporates:
     *  Constant: '<S7>/Zero'
     */
    FuzzyNeuro_neuesNetz_B.ZeroFiringStrength = (real_T)
      (FuzzyNeuro_neuesNetz_B.TotalFiringStrength >
       FuzzyNeuro_neuesNetz_P.Zero_Value);

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/MidRange'
     */
    if (FuzzyNeuro_neuesNetz_B.ZeroFiringStrength >=
        FuzzyNeuro_neuesNetz_P.Switch_Threshold) {
      /* Product: '<S8>/Product (COA)' incorporates:
       *  Constant: '<S8>/x data'
       */
      for (i = 0; i < 101; i++) {
        FuzzyNeuro_neuesNetz_B.ProductCOA[i] =
          FuzzyNeuro_neuesNetz_P.xdata_Value[i] *
          FuzzyNeuro_neuesNetz_B.AggMethod1[i];
      }

      /* End of Product: '<S8>/Product (COA)' */

      /* Sum: '<S8>/Sum' */
      u = FuzzyNeuro_neuesNetz_B.ProductCOA[0];
      for (i = 0; i < 100; i++) {
        tmp = i + 1;
        u += FuzzyNeuro_neuesNetz_B.ProductCOA[tmp];
      }

      FuzzyNeuro_neuesNetz_B.Sum_p = u;

      /* End of Sum: '<S8>/Sum' */

      /* Product: '<S8>/Averaging (COA)' */
      FuzzyNeuro_neuesNetz_B.AveragingCOA = FuzzyNeuro_neuesNetz_B.Sum_p /
        FuzzyNeuro_neuesNetz_B.Merge_b;

      /* Product: '<S9>/Product (COA)' incorporates:
       *  Constant: '<S9>/x data'
       */
      for (i = 0; i < 101; i++) {
        FuzzyNeuro_neuesNetz_B.ProductCOA_e[i] =
          FuzzyNeuro_neuesNetz_P.xdata_Value_p[i] *
          FuzzyNeuro_neuesNetz_B.AggMethod2[i];
      }

      /* End of Product: '<S9>/Product (COA)' */

      /* Sum: '<S9>/Sum' */
      u = FuzzyNeuro_neuesNetz_B.ProductCOA_e[0];
      for (i = 0; i < 100; i++) {
        tmp = i + 1;
        u += FuzzyNeuro_neuesNetz_B.ProductCOA_e[tmp];
      }

      FuzzyNeuro_neuesNetz_B.Sum_a = u;

      /* End of Sum: '<S9>/Sum' */

      /* Product: '<S9>/Averaging (COA)' */
      FuzzyNeuro_neuesNetz_B.AveragingCOA_k = FuzzyNeuro_neuesNetz_B.Sum_a /
        FuzzyNeuro_neuesNetz_B.Merge_p;
      FuzzyNeuro_neuesNetz_B.Switch[0] = FuzzyNeuro_neuesNetz_B.AveragingCOA;
      FuzzyNeuro_neuesNetz_B.Switch[1] = FuzzyNeuro_neuesNetz_B.AveragingCOA_k;
    } else {
      FuzzyNeuro_neuesNetz_B.Switch[0] = FuzzyNeuro_neuesNetz_P.MidRange_Value[0];
      FuzzyNeuro_neuesNetz_B.Switch[1] = FuzzyNeuro_neuesNetz_P.MidRange_Value[1];
    }

    /* End of Switch: '<S7>/Switch' */
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[0] = FuzzyNeuro_neuesNetz_B.Switch[0];
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[1] = FuzzyNeuro_neuesNetz_B.Switch[1];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    /* S-Function (rti_commonblock): '<S89>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* S-Function (rti_commonblock): '<S77>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:ADC Group:NON_MUX */
    FuzzyNeuro_neuesNetz_B.SFunction_o = (real_T) ds1104_adc_read_conv(2);

    /* S-Function (rti_commonblock): '<S78>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:ADC Group:NON_MUX */
    FuzzyNeuro_neuesNetz_B.SFunction_o3 = (real_T) ds1104_adc_read_conv(3);
  }

  /* Fcn: '<S5>/q1->uv1' */
  FuzzyNeuro_neuesNetz_B.uq1Vorgabe = 0.279 *
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[0] - 0.786;

  /* Saturate: '<S5>/Saturation' */
  u = FuzzyNeuro_neuesNetz_B.uq1Vorgabe;
  u_0 = FuzzyNeuro_neuesNetz_P.Saturation_LowerSat;
  u_1 = FuzzyNeuro_neuesNetz_P.Saturation_UpperSat;
  FuzzyNeuro_neuesNetz_B.Saturation = u >= u_1 ? u_1 : u <= u_0 ? u_0 : u;
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    /* S-Function (rti_commonblock): '<S87>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:DAC */
    ds1104_dac_write(1, FuzzyNeuro_neuesNetz_B.Saturation);
  }

  /* Fcn: '<S5>/q2->uv2' */
  FuzzyNeuro_neuesNetz_B.uq2Vorgabe = 0.288 *
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[1] - 0.769;

  /* Saturate: '<S5>/Saturation1' */
  u = FuzzyNeuro_neuesNetz_B.uq2Vorgabe;
  u_0 = FuzzyNeuro_neuesNetz_P.Saturation1_LowerSat;
  u_1 = FuzzyNeuro_neuesNetz_P.Saturation1_UpperSat;
  FuzzyNeuro_neuesNetz_B.Saturation1 = u >= u_1 ? u_1 : u <= u_0 ? u_0 : u;
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    /* S-Function (rti_commonblock): '<S88>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:DAC */
    ds1104_dac_write(2, FuzzyNeuro_neuesNetz_B.Saturation1);

    /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
     *  Constant: '<Root>/V1'
     */
    FuzzyNeuro_neuesNetz_B.DataTypeConversion = (FuzzyNeuro_neuesNetz_P.V1_Value
      != 0.0);

    /* S-Function (rti_commonblock): '<S79>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_neuesNetz_B.DataTypeConversion > 0) {
      ds1104_bit_io_set(DS1104_DIO0);
    } else {
      ds1104_bit_io_clear(DS1104_DIO0);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion1' incorporates:
     *  Constant: '<Root>/V13o'
     */
    FuzzyNeuro_neuesNetz_B.DataTypeConversion1 =
      (FuzzyNeuro_neuesNetz_P.V13o_Value != 0.0);

    /* S-Function (rti_commonblock): '<S80>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_neuesNetz_B.DataTypeConversion1 > 0) {
      ds1104_bit_io_set(DS1104_DIO1);
    } else {
      ds1104_bit_io_clear(DS1104_DIO1);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/V13u'
     */
    FuzzyNeuro_neuesNetz_B.DataTypeConversion2 =
      (FuzzyNeuro_neuesNetz_P.V13u_Value != 0.0);

    /* S-Function (rti_commonblock): '<S81>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_neuesNetz_B.DataTypeConversion2 > 0) {
      ds1104_bit_io_set(DS1104_DIO2);
    } else {
      ds1104_bit_io_clear(DS1104_DIO2);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion3' incorporates:
     *  Constant: '<Root>/V3'
     */
    FuzzyNeuro_neuesNetz_B.DataTypeConversion3 =
      (FuzzyNeuro_neuesNetz_P.V3_Value != 0.0);

    /* S-Function (rti_commonblock): '<S82>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_neuesNetz_B.DataTypeConversion3 > 0) {
      ds1104_bit_io_set(DS1104_DIO3);
    } else {
      ds1104_bit_io_clear(DS1104_DIO3);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion4' incorporates:
     *  Constant: '<Root>/V32o'
     */
    FuzzyNeuro_neuesNetz_B.DataTypeConversion4 =
      (FuzzyNeuro_neuesNetz_P.V32o_Value != 0.0);

    /* S-Function (rti_commonblock): '<S83>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_neuesNetz_B.DataTypeConversion4 > 0) {
      ds1104_bit_io_set(DS1104_DIO4);
    } else {
      ds1104_bit_io_clear(DS1104_DIO4);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion5' incorporates:
     *  Constant: '<Root>/V32u'
     */
    FuzzyNeuro_neuesNetz_B.DataTypeConversion5 =
      (FuzzyNeuro_neuesNetz_P.V32u_Value != 0.0);

    /* S-Function (rti_commonblock): '<S84>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_neuesNetz_B.DataTypeConversion5 > 0) {
      ds1104_bit_io_set(DS1104_DIO5);
    } else {
      ds1104_bit_io_clear(DS1104_DIO5);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion6' incorporates:
     *  Constant: '<Root>/V2'
     */
    FuzzyNeuro_neuesNetz_B.DataTypeConversion6 =
      (FuzzyNeuro_neuesNetz_P.V2_Value != 0.0);

    /* S-Function (rti_commonblock): '<S85>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_neuesNetz_B.DataTypeConversion6 > 0) {
      ds1104_bit_io_set(DS1104_DIO6);
    } else {
      ds1104_bit_io_clear(DS1104_DIO6);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/V0'
     */
    FuzzyNeuro_neuesNetz_B.DataTypeConversion7 =
      (FuzzyNeuro_neuesNetz_P.V0_Value != 0.0);

    /* S-Function (rti_commonblock): '<S86>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_neuesNetz_B.DataTypeConversion7 > 0) {
      ds1104_bit_io_set(DS1104_DIO7);
    } else {
      ds1104_bit_io_clear(DS1104_DIO7);
    }
  }

  /* TransferFcn: '<S6>/TP 5Hz2' */
  FuzzyNeuro_neuesNetz_B.i1_e = FuzzyNeuro_neuesNetz_P.TP5Hz2_C*
    FuzzyNeuro_neuesNetz_X.TP5Hz2_CSTATE;

  /* Product: '<S6>/Product2' incorporates:
   *  Constant: '<S6>/Faktorh3'
   */
  FuzzyNeuro_neuesNetz_B.Product2 = FuzzyNeuro_neuesNetz_P.Faktorh3_Value *
    FuzzyNeuro_neuesNetz_B.i1_e;

  /* Sum: '<S6>/Sum2' incorporates:
   *  Constant: '<S6>/Offseth3'
   */
  FuzzyNeuro_neuesNetz_B.Sum2 = FuzzyNeuro_neuesNetz_P.Offseth3_Value +
    FuzzyNeuro_neuesNetz_B.Product2;
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    /* Fcn: '<Root>/um1->q1mess' */
    FuzzyNeuro_neuesNetz_B.q1mess = 8.13 * FuzzyNeuro_neuesNetz_B.SFunction_o;

    /* Fcn: '<Root>/um2->q2mess' */
    FuzzyNeuro_neuesNetz_B.q2mess = 8.2 * FuzzyNeuro_neuesNetz_B.SFunction_o3 +
      0.132;
  }

  /* user code (Output function Trailer) */

  /* dSPACE Data Capture block: (none) */
  /* ... Service number: 1 */
  /* ... Service name:   (default) */
  if (rtmIsContinuousTask(FuzzyNeuro_neuesNetz_M, 0) && rtmIsMajorTimeStep
      (FuzzyNeuro_neuesNetz_M)) {
    host_service(1, rtk_current_task_absolute_time_ptr_get());
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void FuzzyNeuro_neuesNetz_update(int_T tid)
{
  if (rtmIsMajorTimeStep(FuzzyNeuro_neuesNetz_M)) {
    rt_ertODEUpdateContinuousStates(&FuzzyNeuro_neuesNetz_M->solverInfo);
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
  if (!(++FuzzyNeuro_neuesNetz_M->Timing.clockTick0)) {
    ++FuzzyNeuro_neuesNetz_M->Timing.clockTickH0;
  }

  FuzzyNeuro_neuesNetz_M->Timing.t[0] = rtsiGetSolverStopTime
    (&FuzzyNeuro_neuesNetz_M->solverInfo);

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
    if (!(++FuzzyNeuro_neuesNetz_M->Timing.clockTick1)) {
      ++FuzzyNeuro_neuesNetz_M->Timing.clockTickH1;
    }

    FuzzyNeuro_neuesNetz_M->Timing.t[1] =
      FuzzyNeuro_neuesNetz_M->Timing.clockTick1 *
      FuzzyNeuro_neuesNetz_M->Timing.stepSize1 +
      FuzzyNeuro_neuesNetz_M->Timing.clockTickH1 *
      FuzzyNeuro_neuesNetz_M->Timing.stepSize1 * 4294967296.0;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
void FuzzyNeuro_neuesNetz_derivatives(void)
{
  /* Derivatives for TransferFcn: '<S6>/TP 5Hz' */
  {
    ((StateDerivatives_FuzzyNeuro_neu *)
      FuzzyNeuro_neuesNetz_M->ModelData.derivs)->TP5Hz_CSTATE =
      FuzzyNeuro_neuesNetz_B.SFunction[0];
    ((StateDerivatives_FuzzyNeuro_neu *)
      FuzzyNeuro_neuesNetz_M->ModelData.derivs)->TP5Hz_CSTATE +=
      (FuzzyNeuro_neuesNetz_P.TP5Hz_A)*FuzzyNeuro_neuesNetz_X.TP5Hz_CSTATE;
  }

  /* Derivatives for If: '<S25>/If' */
  /* Derivatives for If: '<S24>/If' */
  /* Derivatives for If: '<S26>/If' */
  /* Derivatives for TransferFcn: '<S6>/TP 5Hz1' */
  {
    ((StateDerivatives_FuzzyNeuro_neu *)
      FuzzyNeuro_neuesNetz_M->ModelData.derivs)->TP5Hz1_CSTATE =
      FuzzyNeuro_neuesNetz_B.SFunction[1];
    ((StateDerivatives_FuzzyNeuro_neu *)
      FuzzyNeuro_neuesNetz_M->ModelData.derivs)->TP5Hz1_CSTATE +=
      (FuzzyNeuro_neuesNetz_P.TP5Hz1_A)*FuzzyNeuro_neuesNetz_X.TP5Hz1_CSTATE;
  }

  /* Derivatives for If: '<S40>/If' */
  /* Derivatives for If: '<S39>/If' */
  /* Derivatives for If: '<S41>/If' */
  /* Derivatives for If: '<S8>/If' */
  /* Derivatives for If: '<S9>/If' */
  /* Derivatives for TransferFcn: '<S6>/TP 5Hz2' */
  {
    ((StateDerivatives_FuzzyNeuro_neu *)
      FuzzyNeuro_neuesNetz_M->ModelData.derivs)->TP5Hz2_CSTATE =
      FuzzyNeuro_neuesNetz_B.SFunction[2];
    ((StateDerivatives_FuzzyNeuro_neu *)
      FuzzyNeuro_neuesNetz_M->ModelData.derivs)->TP5Hz2_CSTATE +=
      (FuzzyNeuro_neuesNetz_P.TP5Hz2_A)*FuzzyNeuro_neuesNetz_X.TP5Hz2_CSTATE;
  }
}

/* Model initialize function */
void FuzzyNeuro_neuesNetz_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)FuzzyNeuro_neuesNetz_M, 0,
                sizeof(RT_MODEL_FuzzyNeuro_neuesNetz));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&FuzzyNeuro_neuesNetz_M->solverInfo,
                          &FuzzyNeuro_neuesNetz_M->Timing.simTimeStep);
    rtsiSetTPtr(&FuzzyNeuro_neuesNetz_M->solverInfo, &rtmGetTPtr
                (FuzzyNeuro_neuesNetz_M));
    rtsiSetStepSizePtr(&FuzzyNeuro_neuesNetz_M->solverInfo,
                       &FuzzyNeuro_neuesNetz_M->Timing.stepSize0);
    rtsiSetdXPtr(&FuzzyNeuro_neuesNetz_M->solverInfo,
                 &FuzzyNeuro_neuesNetz_M->ModelData.derivs);
    rtsiSetContStatesPtr(&FuzzyNeuro_neuesNetz_M->solverInfo,
                         &FuzzyNeuro_neuesNetz_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&FuzzyNeuro_neuesNetz_M->solverInfo,
      &FuzzyNeuro_neuesNetz_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&FuzzyNeuro_neuesNetz_M->solverInfo,
                          (&rtmGetErrorStatus(FuzzyNeuro_neuesNetz_M)));
    rtsiSetRTModelPtr(&FuzzyNeuro_neuesNetz_M->solverInfo,
                      FuzzyNeuro_neuesNetz_M);
  }

  rtsiSetSimTimeStep(&FuzzyNeuro_neuesNetz_M->solverInfo, MAJOR_TIME_STEP);
  FuzzyNeuro_neuesNetz_M->ModelData.intgData.f[0] =
    FuzzyNeuro_neuesNetz_M->ModelData.odeF[0];
  FuzzyNeuro_neuesNetz_M->ModelData.contStates = ((real_T *)
    &FuzzyNeuro_neuesNetz_X);
  rtsiSetSolverData(&FuzzyNeuro_neuesNetz_M->solverInfo, (void *)
                    &FuzzyNeuro_neuesNetz_M->ModelData.intgData);
  rtsiSetSolverName(&FuzzyNeuro_neuesNetz_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = FuzzyNeuro_neuesNetz_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    FuzzyNeuro_neuesNetz_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    FuzzyNeuro_neuesNetz_M->Timing.sampleTimes =
      (&FuzzyNeuro_neuesNetz_M->Timing.sampleTimesArray[0]);
    FuzzyNeuro_neuesNetz_M->Timing.offsetTimes =
      (&FuzzyNeuro_neuesNetz_M->Timing.offsetTimesArray[0]);

    /* task periods */
    FuzzyNeuro_neuesNetz_M->Timing.sampleTimes[0] = (0.0);
    FuzzyNeuro_neuesNetz_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    FuzzyNeuro_neuesNetz_M->Timing.offsetTimes[0] = (0.0);
    FuzzyNeuro_neuesNetz_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(FuzzyNeuro_neuesNetz_M, &FuzzyNeuro_neuesNetz_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = FuzzyNeuro_neuesNetz_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    FuzzyNeuro_neuesNetz_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(FuzzyNeuro_neuesNetz_M, -1);
  FuzzyNeuro_neuesNetz_M->Timing.stepSize0 = 0.01;
  FuzzyNeuro_neuesNetz_M->Timing.stepSize1 = 0.01;

  /* external mode info */
  FuzzyNeuro_neuesNetz_M->Sizes.checksums[0] = (3953648730U);
  FuzzyNeuro_neuesNetz_M->Sizes.checksums[1] = (1296009695U);
  FuzzyNeuro_neuesNetz_M->Sizes.checksums[2] = (4066704538U);
  FuzzyNeuro_neuesNetz_M->Sizes.checksums[3] = (770576726U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[31];
    FuzzyNeuro_neuesNetz_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.ActionOne_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.Actionu1.Actionu1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.ActionOne_SubsysRanBC_m;
    systemRan[6] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.Actionu1_h.Actionu1_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_j;
    systemRan[8] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC;
    systemRan[15] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_n;
    systemRan[16] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_p.IfActionSubsystem3_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_f;
    systemRan[18] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC;
    systemRan[19] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_g;
    systemRan[20] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_SubsysRanB_j;
    systemRan[21] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_au.IfActionSubsystem2_SubsysRanBC;
    systemRan[22] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC;
    systemRan[23] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_p;
    systemRan[24] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_d.IfActionSubsystem3_SubsysRanBC;
    systemRan[25] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_p;
    systemRan[26] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC;
    systemRan[27] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem_SubsysRanBC_e;
    systemRan[28] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem1_dr.IfActionSubsystem3_SubsysRanBC;
    systemRan[29] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem2_SubsysRanB_k;
    systemRan[30] = (sysRanDType *)
      &FuzzyNeuro_neuesNetz_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC;
    rteiSetModelMappingInfoPtr(FuzzyNeuro_neuesNetz_M->extModeInfo,
      &FuzzyNeuro_neuesNetz_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(FuzzyNeuro_neuesNetz_M->extModeInfo,
                        FuzzyNeuro_neuesNetz_M->Sizes.checksums);
    rteiSetTPtr(FuzzyNeuro_neuesNetz_M->extModeInfo, rtmGetTPtr
                (FuzzyNeuro_neuesNetz_M));
  }

  FuzzyNeuro_neuesNetz_M->solverInfoPtr = (&FuzzyNeuro_neuesNetz_M->solverInfo);
  FuzzyNeuro_neuesNetz_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&FuzzyNeuro_neuesNetz_M->solverInfo, 0.01);
  rtsiSetSolverMode(&FuzzyNeuro_neuesNetz_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  FuzzyNeuro_neuesNetz_M->ModelData.blockIO = ((void *) &FuzzyNeuro_neuesNetz_B);
  (void) memset(((void *) &FuzzyNeuro_neuesNetz_B), 0,
                sizeof(BlockIO_FuzzyNeuro_neuesNetz));

  {
    int_T i;
    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.impMethod[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.impMethod_e[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.impMethod_k[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.AggMethod1[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.impMethod_d[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.impMethod_h[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.impMethod_d5[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.AggMethod2[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.viel[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.viel_i[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_neuesNetz_B.netsum[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_neuesNetz_B.Gain[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_neuesNetz_B.Exp[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_neuesNetz_B.Sum_m[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_neuesNetz_B.Reciprocal[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_neuesNetz_B.Gain1[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_neuesNetz_B.Sum1_i[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.ProductCOA[i] = 0.0;
    }

    for (i = 0; i < 101; i++) {
      FuzzyNeuro_neuesNetz_B.ProductCOA_e[i] = 0.0;
    }

    FuzzyNeuro_neuesNetz_B.i1 = 0.0;
    FuzzyNeuro_neuesNetz_B.Product = 0.0;
    FuzzyNeuro_neuesNetz_B.Sum = 0.0;
    FuzzyNeuro_neuesNetz_B.Diff1 = 0.0;
    FuzzyNeuro_neuesNetz_B.DataConv = 0.0;
    FuzzyNeuro_neuesNetz_B.Merge = 0.0;
    FuzzyNeuro_neuesNetz_B.andorMethod = 0.0;
    FuzzyNeuro_neuesNetz_B.Weighting = 0.0;
    FuzzyNeuro_neuesNetz_B.Merge_c = 0.0;
    FuzzyNeuro_neuesNetz_B.andorMethod_p = 0.0;
    FuzzyNeuro_neuesNetz_B.Weighting_e = 0.0;
    FuzzyNeuro_neuesNetz_B.Merge_g = 0.0;
    FuzzyNeuro_neuesNetz_B.andorMethod_e = 0.0;
    FuzzyNeuro_neuesNetz_B.Weighting_f = 0.0;
    FuzzyNeuro_neuesNetz_B.i1_n = 0.0;
    FuzzyNeuro_neuesNetz_B.Product1 = 0.0;
    FuzzyNeuro_neuesNetz_B.Sum1 = 0.0;
    FuzzyNeuro_neuesNetz_B.Diff2 = 0.0;
    FuzzyNeuro_neuesNetz_B.DataConv_n = 0.0;
    FuzzyNeuro_neuesNetz_B.Merge_gx = 0.0;
    FuzzyNeuro_neuesNetz_B.andorMethod_l = 0.0;
    FuzzyNeuro_neuesNetz_B.Weighting_i = 0.0;
    FuzzyNeuro_neuesNetz_B.Merge_j = 0.0;
    FuzzyNeuro_neuesNetz_B.andorMethod_b = 0.0;
    FuzzyNeuro_neuesNetz_B.Weighting_j = 0.0;
    FuzzyNeuro_neuesNetz_B.Merge_m = 0.0;
    FuzzyNeuro_neuesNetz_B.andorMethod_i = 0.0;
    FuzzyNeuro_neuesNetz_B.Weighting_es = 0.0;
    FuzzyNeuro_neuesNetz_B.Sum1_b = 0.0;
    FuzzyNeuro_neuesNetz_B.Merge_b = 0.0;
    FuzzyNeuro_neuesNetz_B.Sum1_j = 0.0;
    FuzzyNeuro_neuesNetz_B.Merge_p = 0.0;
    FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[0] = 0.0;
    FuzzyNeuro_neuesNetz_B.TmpSignalConversionAtDotProduct[1] = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_j = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_d = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_m = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_c = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_d5 = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_k = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_j1 = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_g = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_a = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_h = 0.0;
    FuzzyNeuro_neuesNetz_B.DotProduct_al = 0.0;
    FuzzyNeuro_neuesNetz_B.netsum_a[0] = 0.0;
    FuzzyNeuro_neuesNetz_B.netsum_a[1] = 0.0;
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[0] = 0.0;
    FuzzyNeuro_neuesNetz_B.MultiportSwitch[1] = 0.0;
    FuzzyNeuro_neuesNetz_B.SFunction[0] = 0.0;
    FuzzyNeuro_neuesNetz_B.SFunction[1] = 0.0;
    FuzzyNeuro_neuesNetz_B.SFunction[2] = 0.0;
    FuzzyNeuro_neuesNetz_B.SFunction_o = 0.0;
    FuzzyNeuro_neuesNetz_B.SFunction_o3 = 0.0;
    FuzzyNeuro_neuesNetz_B.uq1Vorgabe = 0.0;
    FuzzyNeuro_neuesNetz_B.Saturation = 0.0;
    FuzzyNeuro_neuesNetz_B.uq2Vorgabe = 0.0;
    FuzzyNeuro_neuesNetz_B.Saturation1 = 0.0;
    FuzzyNeuro_neuesNetz_B.i1_e = 0.0;
    FuzzyNeuro_neuesNetz_B.Product2 = 0.0;
    FuzzyNeuro_neuesNetz_B.Sum2 = 0.0;
    FuzzyNeuro_neuesNetz_B.q1mess = 0.0;
    FuzzyNeuro_neuesNetz_B.q2mess = 0.0;
    FuzzyNeuro_neuesNetz_B.TotalFiringStrength = 0.0;
    FuzzyNeuro_neuesNetz_B.ZeroFiringStrength = 0.0;
    FuzzyNeuro_neuesNetz_B.Switch[0] = 0.0;
    FuzzyNeuro_neuesNetz_B.Switch[1] = 0.0;
    FuzzyNeuro_neuesNetz_B.Sum_p = 0.0;
    FuzzyNeuro_neuesNetz_B.AveragingCOA = 0.0;
    FuzzyNeuro_neuesNetz_B.Sum_a = 0.0;
    FuzzyNeuro_neuesNetz_B.AveragingCOA_k = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_n.dc = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_n.dx = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_dr.xa = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_dr.ba = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_b.dc = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_b.dx = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_d.xa = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_d.ba = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_au.cb = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_au.cx = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_l.xa = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_l.ba = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_c.dc = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_c.dx = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_p.xa = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem1_p.ba = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3.dc = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3.dx = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem1.xa = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem1.ba = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_k.cb = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem2_k.cx = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_p.xa = 0.0;
    FuzzyNeuro_neuesNetz_B.IfActionSubsystem3_p.ba = 0.0;
  }

  /* parameters */
  FuzzyNeuro_neuesNetz_M->ModelData.defaultParam = ((real_T *)
    &FuzzyNeuro_neuesNetz_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &FuzzyNeuro_neuesNetz_X;
    FuzzyNeuro_neuesNetz_M->ModelData.contStates = (x);
    (void) memset((void *)&FuzzyNeuro_neuesNetz_X, 0,
                  sizeof(ContinuousStates_FuzzyNeuro_neu));
  }

  /* states (dwork) */
  FuzzyNeuro_neuesNetz_M->Work.dwork = ((void *) &FuzzyNeuro_neuesNetz_DWork);
  (void) memset((void *)&FuzzyNeuro_neuesNetz_DWork, 0,
                sizeof(D_Work_FuzzyNeuro_neuesNetz));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    FuzzyNeuro_neuesNetz_M->SpecialInfo.mappingInfo = (&dtInfo);
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
void FuzzyNeuro_neuesNetz_terminate(void)
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
  FuzzyNeuro_neuesNetz_output(tid);
}

void MdlUpdate(int_T tid)
{
  FuzzyNeuro_neuesNetz_update(tid);
}

void MdlInitializeSizes(void)
{
  FuzzyNeuro_neuesNetz_M->Sizes.numContStates = (3);/* Number of continuous states */
  FuzzyNeuro_neuesNetz_M->Sizes.numY = (0);/* Number of model outputs */
  FuzzyNeuro_neuesNetz_M->Sizes.numU = (0);/* Number of model inputs */
  FuzzyNeuro_neuesNetz_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  FuzzyNeuro_neuesNetz_M->Sizes.numSampTimes = (2);/* Number of sample times */
  FuzzyNeuro_neuesNetz_M->Sizes.numBlocks = (222);/* Number of blocks */
  FuzzyNeuro_neuesNetz_M->Sizes.numBlockIO = (117);/* Number of block outputs */
  FuzzyNeuro_neuesNetz_M->Sizes.numBlockPrms = (1157);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for TransferFcn: '<S6>/TP 5Hz' */
  FuzzyNeuro_neuesNetz_X.TP5Hz_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S6>/TP 5Hz1' */
  FuzzyNeuro_neuesNetz_X.TP5Hz1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S6>/TP 5Hz2' */
  FuzzyNeuro_neuesNetz_X.TP5Hz2_CSTATE = 0.0;
}

void MdlStart(void)
{
  /* Start for If: '<S25>/If' */
  FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S31>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge = FuzzyNeuro_neuesNetz_P.Out1_Y0_n;

  /* End of Start for SubSystem: '<S25>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S33>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge = FuzzyNeuro_neuesNetz_P.Out1_Y0_b;

  /* End of Start for SubSystem: '<S25>/If Action Subsystem2' */

  /* Start for If: '<S24>/If' */
  FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_m = -1;

  /* Start for IfAction SubSystem: '<S24>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S27>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_c = FuzzyNeuro_neuesNetz_P.Out1_Y0_a;

  /* End of Start for SubSystem: '<S24>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S24>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S28>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_c = FuzzyNeuro_neuesNetz_P.Out1_Y0_ak;

  /* End of Start for SubSystem: '<S24>/If Action Subsystem1' */

  /* Start for If: '<S26>/If' */
  FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_p = -1;

  /* Start for IfAction SubSystem: '<S26>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S35>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_g = FuzzyNeuro_neuesNetz_P.Out1_Y0_l;

  /* End of Start for SubSystem: '<S26>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S26>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S37>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_g = FuzzyNeuro_neuesNetz_P.Out1_Y0_i;

  /* End of Start for SubSystem: '<S26>/If Action Subsystem2' */

  /* Start for If: '<S40>/If' */
  FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_j = -1;

  /* Start for IfAction SubSystem: '<S40>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S46>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_gx = FuzzyNeuro_neuesNetz_P.Out1_Y0_k;

  /* End of Start for SubSystem: '<S40>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S40>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S48>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_gx = FuzzyNeuro_neuesNetz_P.Out1_Y0_f;

  /* End of Start for SubSystem: '<S40>/If Action Subsystem2' */

  /* Start for If: '<S39>/If' */
  FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_g = -1;

  /* Start for IfAction SubSystem: '<S39>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S42>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_j = FuzzyNeuro_neuesNetz_P.Out1_Y0_ai;

  /* End of Start for SubSystem: '<S39>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S39>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S43>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_j = FuzzyNeuro_neuesNetz_P.Out1_Y0_l5;

  /* End of Start for SubSystem: '<S39>/If Action Subsystem1' */

  /* Start for If: '<S41>/If' */
  FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_h = -1;

  /* Start for IfAction SubSystem: '<S41>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S50>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_m = FuzzyNeuro_neuesNetz_P.Out1_Y0_o;

  /* End of Start for SubSystem: '<S41>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S41>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S52>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_m = FuzzyNeuro_neuesNetz_P.Out1_Y0_ia;

  /* End of Start for SubSystem: '<S41>/If Action Subsystem2' */

  /* Start for If: '<S8>/If' */
  FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_jg = -1;

  /* Start for IfAction SubSystem: '<S8>/Action: One' */
  /* VirtualOutportStart for Outport: '<S20>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_b = FuzzyNeuro_neuesNetz_P.Out1_Y0;

  /* End of Start for SubSystem: '<S8>/Action: One' */

  /* Start for If: '<S9>/If' */
  FuzzyNeuro_neuesNetz_DWork.If_ActiveSubsystem_ja = -1;

  /* Start for IfAction SubSystem: '<S9>/Action: One' */
  /* VirtualOutportStart for Outport: '<S22>/Out1' */
  FuzzyNeuro_neuesNetz_B.Merge_p = FuzzyNeuro_neuesNetz_P.Out1_Y0_c;

  /* End of Start for SubSystem: '<S9>/Action: One' */
  MdlInitialize();
}

void MdlTerminate(void)
{
  FuzzyNeuro_neuesNetz_terminate();
}

RT_MODEL_FuzzyNeuro_neuesNetz *FuzzyNeuro_neuesNetz(void)
{
  FuzzyNeuro_neuesNetz_initialize(1);
  return FuzzyNeuro_neuesNetz_M;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
