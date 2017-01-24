/*
 * FuzzyNeuro.c
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
 *    '<S34>/Action: u1'
 *    '<S35>/Action: u1'
 */
void FuzzyNeuro_Actionu1(real_T rtu_0, real_T *rty_u2)
{
  /* Inport: '<S47>/u1' */
  *rty_u2 = rtu_0;
}

/*
 * Output and update for action system:
 *    '<S50>/If Action Subsystem3'
 *    '<S51>/If Action Subsystem1'
 *    '<S52>/If Action Subsystem1'
 *    '<S65>/If Action Subsystem3'
 *    '<S66>/If Action Subsystem1'
 *    '<S67>/If Action Subsystem1'
 */
void FuzzyNeuro_IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem3_FuzzyNeu *localB, rtP_IfActionSubsystem3_FuzzyNeu
  *localP)
{
  /* Sum: '<S56>/Sum' incorporates:
   *  Constant: '<S56>/a'
   */
  localB->xa = rtu_x - localP->a_Value;

  /* Sum: '<S56>/Sum1' incorporates:
   *  Constant: '<S56>/a'
   *  Constant: '<S56>/b'
   */
  localB->ba = localP->b_Value - localP->a_Value;

  /* Product: '<S56>/Product ab (trimf)' */
  *rty_Out1 = localB->xa / localB->ba;
}

/*
 * Output and update for action system:
 *    '<S50>/If Action Subsystem2'
 *    '<S65>/If Action Subsystem2'
 */
void FuzzyNeuro_IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem2_FuzzyNeu *localB, rtP_IfActionSubsystem2_FuzzyNeu
  *localP)
{
  /* Sum: '<S55>/Sum2' incorporates:
   *  Constant: '<S55>/b'
   *  Constant: '<S55>/c'
   */
  localB->cb = localP->c_Value - localP->b_Value;

  /* Sum: '<S55>/Sum3' incorporates:
   *  Constant: '<S55>/c'
   */
  localB->cx = localP->c_Value - rtu_x;

  /* Product: '<S55>/Product cd (trimf)' */
  *rty_Out1 = 1.0 / localB->cb * localB->cx;
}

/*
 * Output and update for action system:
 *    '<S51>/If Action Subsystem3'
 *    '<S52>/If Action Subsystem3'
 *    '<S66>/If Action Subsystem3'
 *    '<S67>/If Action Subsystem3'
 */
void FuzzyNeuro_IfActionSubsystem3_m(real_T rtu_x, real_T *rty_Out1,
  rtB_IfActionSubsystem3_FuzzyN_f *localB, rtP_IfActionSubsystem3_FuzzyN_f
  *localP)
{
  /* Sum: '<S60>/Sum2' incorporates:
   *  Constant: '<S60>/c'
   *  Constant: '<S60>/d'
   */
  localB->dc = localP->d_Value - localP->c_Value;

  /* Sum: '<S60>/Sum3' incorporates:
   *  Constant: '<S60>/d'
   */
  localB->dx = localP->d_Value - rtu_x;

  /* Product: '<S60>/Product cd (trimf)' */
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

  /* TransferFcn: '<S6>/TP 5Hz' */
  FuzzyNeuro_B.i1 = FuzzyNeuro_P.TP5Hz_C*FuzzyNeuro_X.TP5Hz_CSTATE;

  /* Product: '<S6>/Product' incorporates:
   *  Constant: '<S6>/Faktorh1'
   */
  FuzzyNeuro_B.Product = FuzzyNeuro_P.Faktorh1_Value * FuzzyNeuro_B.i1;

  /* Sum: '<S6>/Sum' incorporates:
   *  Constant: '<S6>/Offseth1'
   */
  FuzzyNeuro_B.Sum = FuzzyNeuro_P.Offseth1_Value + FuzzyNeuro_B.Product;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Constant: '<Root>/soll1'
   */
  FuzzyNeuro_B.Diff1 = FuzzyNeuro_P.soll1_Value - FuzzyNeuro_B.Sum;

  /* TransferFcn: '<S6>/TP 5Hz1' */
  FuzzyNeuro_B.i1_g = FuzzyNeuro_P.TP5Hz1_C*FuzzyNeuro_X.TP5Hz1_CSTATE;

  /* Product: '<S6>/Product1' incorporates:
   *  Constant: '<S6>/Faktorh2'
   */
  FuzzyNeuro_B.Product1 = FuzzyNeuro_P.Faktorh2_Value * FuzzyNeuro_B.i1_g;

  /* Sum: '<S6>/Sum1' incorporates:
   *  Constant: '<S6>/Offseth2'
   */
  FuzzyNeuro_B.Sum1 = FuzzyNeuro_P.Offseth2_Value + FuzzyNeuro_B.Product1;

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/soll2'
   */
  FuzzyNeuro_B.Diff2 = FuzzyNeuro_P.soll2_Value - FuzzyNeuro_B.Sum1;
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* Bias: '<S29>/Subtract min x' */
    FuzzyNeuro_B.Subtractminx[0] = FuzzyNeuro_B.Diff1 +
      FuzzyNeuro_P.Subtractminx_Bias[0];
    FuzzyNeuro_B.Subtractminx[1] = FuzzyNeuro_B.Diff2 +
      FuzzyNeuro_P.Subtractminx_Bias[1];

    /* Gain: '<S29>/range y // range x' */
    FuzzyNeuro_B.rangeyrangex[0] = FuzzyNeuro_P.rangeyrangex_Gain[0] *
      FuzzyNeuro_B.Subtractminx[0];
    FuzzyNeuro_B.rangeyrangex[1] = FuzzyNeuro_P.rangeyrangex_Gain[1] *
      FuzzyNeuro_B.Subtractminx[1];

    /* Bias: '<S29>/Add min y' */
    FuzzyNeuro_B.Addminy[0] = FuzzyNeuro_B.rangeyrangex[0] +
      FuzzyNeuro_P.Addminy_Bias;
    FuzzyNeuro_B.Addminy[1] = FuzzyNeuro_B.rangeyrangex[1] +
      FuzzyNeuro_P.Addminy_Bias;

    /* DotProduct: '<S14>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(1,:)''
     */
    u = FuzzyNeuro_P.IW111_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW111_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct = u;

    /* DotProduct: '<S15>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(10,:)''
     */
    u = FuzzyNeuro_P.IW1110_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW1110_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_j = u;

    /* DotProduct: '<S16>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(2,:)''
     */
    u = FuzzyNeuro_P.IW112_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW112_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_a = u;

    /* DotProduct: '<S17>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(3,:)''
     */
    u = FuzzyNeuro_P.IW113_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW113_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_d = u;

    /* DotProduct: '<S18>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(4,:)''
     */
    u = FuzzyNeuro_P.IW114_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW114_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_p = u;

    /* DotProduct: '<S19>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(5,:)''
     */
    u = FuzzyNeuro_P.IW115_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW115_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_b = u;

    /* DotProduct: '<S20>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(6,:)''
     */
    u = FuzzyNeuro_P.IW116_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW116_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_ds = u;

    /* DotProduct: '<S21>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(7,:)''
     */
    u = FuzzyNeuro_P.IW117_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW117_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_g = u;

    /* DotProduct: '<S22>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(8,:)''
     */
    u = FuzzyNeuro_P.IW118_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW118_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_l = u;

    /* DotProduct: '<S23>/Dot Product' incorporates:
     *  Constant: '<S12>/IW{1,1}(9,:)''
     */
    u = FuzzyNeuro_P.IW119_Value[0] * FuzzyNeuro_B.Addminy[0];
    u += FuzzyNeuro_P.IW119_Value[1] * FuzzyNeuro_B.Addminy[1];
    FuzzyNeuro_B.DotProduct_av = u;

    /* Sum: '<S7>/netsum' incorporates:
     *  Constant: '<S7>/b{1}'
     */
    FuzzyNeuro_B.netsum[0] = FuzzyNeuro_B.DotProduct + FuzzyNeuro_P.b1_Value[0];
    FuzzyNeuro_B.netsum[1] = FuzzyNeuro_B.DotProduct_a + FuzzyNeuro_P.b1_Value[1];
    FuzzyNeuro_B.netsum[2] = FuzzyNeuro_B.DotProduct_d + FuzzyNeuro_P.b1_Value[2];
    FuzzyNeuro_B.netsum[3] = FuzzyNeuro_B.DotProduct_p + FuzzyNeuro_P.b1_Value[3];
    FuzzyNeuro_B.netsum[4] = FuzzyNeuro_B.DotProduct_b + FuzzyNeuro_P.b1_Value[4];
    FuzzyNeuro_B.netsum[5] = FuzzyNeuro_B.DotProduct_ds + FuzzyNeuro_P.b1_Value
      [5];
    FuzzyNeuro_B.netsum[6] = FuzzyNeuro_B.DotProduct_g + FuzzyNeuro_P.b1_Value[6];
    FuzzyNeuro_B.netsum[7] = FuzzyNeuro_B.DotProduct_l + FuzzyNeuro_P.b1_Value[7];
    FuzzyNeuro_B.netsum[8] = FuzzyNeuro_B.DotProduct_av + FuzzyNeuro_P.b1_Value
      [8];
    FuzzyNeuro_B.netsum[9] = FuzzyNeuro_B.DotProduct_j + FuzzyNeuro_P.b1_Value[9];

    /* DotProduct: '<S27>/Dot Product' incorporates:
     *  Constant: '<S25>/IW{2,1}(1,:)''
     */
    u = 0.0;
    for (i = 0; i < 10; i++) {
      /* Gain: '<S13>/Gain' */
      FuzzyNeuro_B.Gain[i] = FuzzyNeuro_P.Gain_Gain * FuzzyNeuro_B.netsum[i];

      /* Math: '<S13>/Exp'
       *
       * About '<S13>/Exp':
       *  Operator: exp
       */
      FuzzyNeuro_B.Exp[i] = exp(FuzzyNeuro_B.Gain[i]);

      /* Sum: '<S13>/Sum' incorporates:
       *  Constant: '<S13>/one'
       */
      FuzzyNeuro_B.Sum_d[i] = FuzzyNeuro_B.Exp[i] + FuzzyNeuro_P.one_Value;

      /* Math: '<S13>/Reciprocal'
       *
       * About '<S13>/Reciprocal':
       *  Operator: reciprocal
       */
      FuzzyNeuro_B.Reciprocal[i] = 1.0 / FuzzyNeuro_B.Sum_d[i];

      /* Gain: '<S13>/Gain1' */
      FuzzyNeuro_B.Gain1[i] = FuzzyNeuro_P.Gain1_Gain *
        FuzzyNeuro_B.Reciprocal[i];

      /* Sum: '<S13>/Sum1' incorporates:
       *  Constant: '<S13>/one1'
       */
      FuzzyNeuro_B.Sum1_o[i] = FuzzyNeuro_B.Gain1[i] - FuzzyNeuro_P.one1_Value;
      u += FuzzyNeuro_P.IW211_Value[i] * FuzzyNeuro_B.Sum1_o[i];
    }

    FuzzyNeuro_B.DotProduct_i = u;

    /* End of DotProduct: '<S27>/Dot Product' */

    /* DotProduct: '<S28>/Dot Product' incorporates:
     *  Constant: '<S25>/IW{2,1}(2,:)''
     */
    u = 0.0;
    for (i = 0; i < 10; i++) {
      u += FuzzyNeuro_P.IW212_Value[i] * FuzzyNeuro_B.Sum1_o[i];
    }

    FuzzyNeuro_B.DotProduct_m = u;

    /* End of DotProduct: '<S28>/Dot Product' */

    /* Sum: '<S8>/netsum' incorporates:
     *  Constant: '<S8>/b{2}'
     */
    FuzzyNeuro_B.netsum_i[0] = FuzzyNeuro_B.DotProduct_i +
      FuzzyNeuro_P.b2_Value[0];
    FuzzyNeuro_B.netsum_i[1] = FuzzyNeuro_B.DotProduct_m +
      FuzzyNeuro_P.b2_Value[1];

    /* Bias: '<S31>/Subtract min y' */
    FuzzyNeuro_B.Subtractminy[0] = FuzzyNeuro_B.netsum_i[0] +
      FuzzyNeuro_P.Subtractminy_Bias;
    FuzzyNeuro_B.Subtractminy[1] = FuzzyNeuro_B.netsum_i[1] +
      FuzzyNeuro_P.Subtractminy_Bias;

    /* Gain: '<S31>/Divide by range y' */
    FuzzyNeuro_B.Dividebyrangey[0] = FuzzyNeuro_P.Dividebyrangey_Gain[0] *
      FuzzyNeuro_B.Subtractminy[0];
    FuzzyNeuro_B.Dividebyrangey[1] = FuzzyNeuro_P.Dividebyrangey_Gain[1] *
      FuzzyNeuro_B.Subtractminy[1];

    /* Bias: '<S31>/Add min x' */
    FuzzyNeuro_B.Addminx[0] = FuzzyNeuro_B.Dividebyrangey[0] +
      FuzzyNeuro_P.Addminx_Bias[0];
    FuzzyNeuro_B.Addminx[1] = FuzzyNeuro_B.Dividebyrangey[1] +
      FuzzyNeuro_P.Addminx_Bias[1];

    /* Constant: '<S32>/Constants' */
    FuzzyNeuro_B.Constants = FuzzyNeuro_P.Constants_Value;
  }

  /* DataTypeConversion: '<S36>/DataConv' */
  FuzzyNeuro_B.DataConv = FuzzyNeuro_B.Diff1;

  /* If: '<S51>/If' incorporates:
   *  Constant: '<S57>/0'
   *  Constant: '<S59>/0'
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
    /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge = FuzzyNeuro_P._Value_g;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S51>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S59>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge = FuzzyNeuro_P._Value_l;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S51>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge,
      &FuzzyNeuro_B.IfActionSubsystem1, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem1);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem1.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S51>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S51>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S60>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge,
      &FuzzyNeuro_B.IfActionSubsystem3, (rtP_IfActionSubsystem3_FuzzyN_f *)
      &FuzzyNeuro_P.IfActionSubsystem3);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S51>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S51>/If' */

  /* MinMax: '<S40>/andorMethod' */
  FuzzyNeuro_B.andorMethod = FuzzyNeuro_B.Merge;

  /* Product: '<S40>/Weighting' incorporates:
   *  Constant: '<S40>/Weight'
   */
  FuzzyNeuro_B.Weighting = FuzzyNeuro_P.Weight_Value * FuzzyNeuro_B.andorMethod;

  /* MinMax: '<S40>/impMethod' incorporates:
   *  Constant: '<S38>/nix'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_B.Weighting;
    u_0 = FuzzyNeuro_P.nix_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod[i] = u;
  }

  /* End of MinMax: '<S40>/impMethod' */

  /* If: '<S50>/If' incorporates:
   *  Constant: '<S53>/0'
   *  Constant: '<S54>/0'
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
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_b = FuzzyNeuro_P._Value;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_k);
    }

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_b = FuzzyNeuro_P._Value_f;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge_b,
      &FuzzyNeuro_B.IfActionSubsystem3_j, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem3_j);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_j.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S50>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem2(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge_b,
      &FuzzyNeuro_B.IfActionSubsystem2_m, (rtP_IfActionSubsystem2_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem2_m);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S50>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S50>/If' */

  /* MinMax: '<S41>/andorMethod' */
  FuzzyNeuro_B.andorMethod_e = FuzzyNeuro_B.Merge_b;

  /* Product: '<S41>/Weighting' incorporates:
   *  Constant: '<S41>/Weight'
   */
  FuzzyNeuro_B.Weighting_b = FuzzyNeuro_P.Weight_Value_h *
    FuzzyNeuro_B.andorMethod_e;

  /* MinMax: '<S41>/impMethod' incorporates:
   *  Constant: '<S38>/bissle'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_B.Weighting_b;
    u_0 = FuzzyNeuro_P.bissle_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_n[i] = u;
  }

  /* End of MinMax: '<S41>/impMethod' */

  /* If: '<S52>/If' incorporates:
   *  Constant: '<S61>/0'
   *  Constant: '<S63>/0'
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
    /* Outputs for IfAction SubSystem: '<S52>/If Action Subsystem' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_d = FuzzyNeuro_P._Value_j;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_a);
    }

    /* End of Outputs for SubSystem: '<S52>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S52>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_d = FuzzyNeuro_P._Value_gn;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRanB_k);
    }

    /* End of Outputs for SubSystem: '<S52>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S52>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge_d,
      &FuzzyNeuro_B.IfActionSubsystem1_h, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem1_h);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem1_h.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S52>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S52>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_B.DataConv, &FuzzyNeuro_B.Merge_d,
      &FuzzyNeuro_B.IfActionSubsystem3_l, (rtP_IfActionSubsystem3_FuzzyN_f *)
      &FuzzyNeuro_P.IfActionSubsystem3_l);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_l.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S52>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S52>/If' */

  /* MinMax: '<S42>/andorMethod' */
  FuzzyNeuro_B.andorMethod_b = FuzzyNeuro_B.Merge_d;

  /* Product: '<S42>/Weighting' incorporates:
   *  Constant: '<S42>/Weight'
   */
  FuzzyNeuro_B.Weighting_g = FuzzyNeuro_P.Weight_Value_l *
    FuzzyNeuro_B.andorMethod_b;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S42>/impMethod' incorporates:
     *  Constant: '<S38>/ganzviel'
     */
    u = FuzzyNeuro_B.Weighting_g;
    u_0 = FuzzyNeuro_P.ganzviel_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_k[i] = u;

    /* MinMax: '<S33>/AggMethod1' */
    u = FuzzyNeuro_B.impMethod[i];
    u_0 = FuzzyNeuro_B.impMethod_n[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    u_0 = FuzzyNeuro_B.impMethod_k[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.AggMethod1[i] = u;
  }

  /* DataTypeConversion: '<S37>/DataConv' */
  FuzzyNeuro_B.DataConv_a = FuzzyNeuro_B.Diff2;

  /* If: '<S66>/If' incorporates:
   *  Constant: '<S72>/0'
   *  Constant: '<S74>/0'
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
    /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem' incorporates:
     *  ActionPort: '<S72>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_c = FuzzyNeuro_P._Value_gd;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_p);
    }

    /* End of Outputs for SubSystem: '<S66>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S74>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_c = FuzzyNeuro_P._Value_a;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_kk);
    }

    /* End of Outputs for SubSystem: '<S66>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S73>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv_a, &FuzzyNeuro_B.Merge_c,
      &FuzzyNeuro_B.IfActionSubsystem1_j, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem1_j);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem1_j.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S66>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S75>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_B.DataConv_a,
      &FuzzyNeuro_B.Merge_c, &FuzzyNeuro_B.IfActionSubsystem3_n,
      (rtP_IfActionSubsystem3_FuzzyN_f *) &FuzzyNeuro_P.IfActionSubsystem3_n);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_n.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S66>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S66>/If' */

  /* MinMax: '<S43>/andorMethod' */
  FuzzyNeuro_B.andorMethod_d = FuzzyNeuro_B.Merge_c;

  /* Product: '<S43>/Weighting' incorporates:
   *  Constant: '<S43>/Weight'
   */
  FuzzyNeuro_B.Weighting_a = FuzzyNeuro_P.Weight_Value_i *
    FuzzyNeuro_B.andorMethod_d;

  /* MinMax: '<S43>/impMethod' incorporates:
   *  Constant: '<S39>/nix'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_B.Weighting_a;
    u_0 = FuzzyNeuro_P.nix_Value_m[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_d[i] = u;
  }

  /* End of MinMax: '<S43>/impMethod' */

  /* If: '<S65>/If' incorporates:
   *  Constant: '<S68>/0'
   *  Constant: '<S69>/0'
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
    /* Outputs for IfAction SubSystem: '<S65>/If Action Subsystem' incorporates:
     *  ActionPort: '<S68>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_n = FuzzyNeuro_P._Value_p;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_h);
    }

    /* End of Outputs for SubSystem: '<S65>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S65>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S69>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_n = FuzzyNeuro_P._Value_h;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem1_SubsysRanB_o);
    }

    /* End of Outputs for SubSystem: '<S65>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S65>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S71>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv_a, &FuzzyNeuro_B.Merge_n,
      &FuzzyNeuro_B.IfActionSubsystem3_g, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem3_g);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_g.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S65>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S65>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S70>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem2(FuzzyNeuro_B.DataConv_a, &FuzzyNeuro_B.Merge_n,
      &FuzzyNeuro_B.IfActionSubsystem2_b, (rtP_IfActionSubsystem2_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem2_b);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem2_b.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S65>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S65>/If' */

  /* MinMax: '<S44>/andorMethod' */
  FuzzyNeuro_B.andorMethod_k = FuzzyNeuro_B.Merge_n;

  /* Product: '<S44>/Weighting' incorporates:
   *  Constant: '<S44>/Weight'
   */
  FuzzyNeuro_B.Weighting_bq = FuzzyNeuro_P.Weight_Value_a *
    FuzzyNeuro_B.andorMethod_k;

  /* MinMax: '<S44>/impMethod' incorporates:
   *  Constant: '<S39>/stationaer'
   */
  for (i = 0; i < 101; i++) {
    u = FuzzyNeuro_B.Weighting_bq;
    u_0 = FuzzyNeuro_P.stationaer_Value[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_e[i] = u;
  }

  /* End of MinMax: '<S44>/impMethod' */

  /* If: '<S67>/If' incorporates:
   *  Constant: '<S76>/0'
   *  Constant: '<S78>/0'
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
    /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem' incorporates:
     *  ActionPort: '<S76>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_p = FuzzyNeuro_P._Value_ff;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem_SubsysRanBC_j);
    }

    /* End of Outputs for SubSystem: '<S67>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S78>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_p = FuzzyNeuro_P._Value_o;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.IfActionSubsystem2_SubsysRan_ke);
    }

    /* End of Outputs for SubSystem: '<S67>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S77>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3(FuzzyNeuro_B.DataConv_a, &FuzzyNeuro_B.Merge_p,
      &FuzzyNeuro_B.IfActionSubsystem1_l, (rtP_IfActionSubsystem3_FuzzyNeu *)
      &FuzzyNeuro_P.IfActionSubsystem1_l);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem1_l.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S67>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S79>/Action Port'
     */
    FuzzyNeuro_IfActionSubsystem3_m(FuzzyNeuro_B.DataConv_a,
      &FuzzyNeuro_B.Merge_p, &FuzzyNeuro_B.IfActionSubsystem3_i,
      (rtP_IfActionSubsystem3_FuzzyN_f *) &FuzzyNeuro_P.IfActionSubsystem3_i);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC
        (FuzzyNeuro_DWork.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S67>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S67>/If' */

  /* MinMax: '<S45>/andorMethod' */
  FuzzyNeuro_B.andorMethod_a = FuzzyNeuro_B.Merge_p;

  /* Product: '<S45>/Weighting' incorporates:
   *  Constant: '<S45>/Weight'
   */
  FuzzyNeuro_B.Weighting_j = FuzzyNeuro_P.Weight_Value_n *
    FuzzyNeuro_B.andorMethod_a;
  for (i = 0; i < 101; i++) {
    /* MinMax: '<S45>/impMethod' incorporates:
     *  Constant: '<S39>/ganzviel'
     */
    u = FuzzyNeuro_B.Weighting_j;
    u_0 = FuzzyNeuro_P.ganzviel_Value_d[i];
    u = (u <= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.impMethod_b[i] = u;

    /* MinMax: '<S33>/AggMethod2' */
    u = FuzzyNeuro_B.impMethod_d[i];
    u_0 = FuzzyNeuro_B.impMethod_e[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    u_0 = FuzzyNeuro_B.impMethod_b[i];
    u = (u >= u_0) || rtIsNaN(u_0) ? u : u_0;
    FuzzyNeuro_B.AggMethod2[i] = u;
  }

  /* Sum: '<S34>/Sum1' */
  u = FuzzyNeuro_B.AggMethod1[0];
  for (i = 0; i < 100; i++) {
    tmp = i + 1;
    u += FuzzyNeuro_B.AggMethod1[tmp];
  }

  FuzzyNeuro_B.Sum1_e = u;

  /* End of Sum: '<S34>/Sum1' */

  /* If: '<S34>/If' incorporates:
   *  Constant: '<S46>/One'
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
    /* Outputs for IfAction SubSystem: '<S34>/Action: One' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_l = FuzzyNeuro_P.One_Value;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.ActionOne_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S34>/Action: One' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S34>/Action: u1' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    FuzzyNeuro_Actionu1(FuzzyNeuro_B.Sum1_e, &FuzzyNeuro_B.Merge_l);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.Actionu1.Actionu1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S34>/Action: u1' */
    break;
  }

  /* End of If: '<S34>/If' */

  /* Sum: '<S35>/Sum1' */
  u = FuzzyNeuro_B.AggMethod2[0];
  for (i = 0; i < 100; i++) {
    tmp = i + 1;
    u += FuzzyNeuro_B.AggMethod2[tmp];
  }

  FuzzyNeuro_B.Sum1_or = u;

  /* End of Sum: '<S35>/Sum1' */

  /* If: '<S35>/If' incorporates:
   *  Constant: '<S48>/One'
   */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    if (FuzzyNeuro_B.Sum1_or <= 0.0) {
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
    /* Outputs for IfAction SubSystem: '<S35>/Action: One' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      FuzzyNeuro_B.Merge_g = FuzzyNeuro_P.One_Value_j;
    }

    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.ActionOne_SubsysRanBC_i);
    }

    /* End of Outputs for SubSystem: '<S35>/Action: One' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S35>/Action: u1' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    FuzzyNeuro_Actionu1(FuzzyNeuro_B.Sum1_or, &FuzzyNeuro_B.Merge_g);
    if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
      srUpdateBC(FuzzyNeuro_DWork.Actionu1_n.Actionu1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S35>/Action: u1' */
    break;
  }

  /* End of If: '<S35>/If' */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    for (i = 0; i < 101; i++) {
      /* Constant: '<S38>/viel' */
      FuzzyNeuro_B.viel[i] = FuzzyNeuro_P.viel_Value[i];

      /* Constant: '<S39>/viel' */
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
    FuzzyNeuro_B.MultiportSwitch[0] = FuzzyNeuro_B.Addminx[0];
    FuzzyNeuro_B.MultiportSwitch[1] = FuzzyNeuro_B.Addminx[1];
    break;

   default:
    /* Sum: '<S33>/Total Firing Strength' */
    FuzzyNeuro_B.TotalFiringStrength = ((((FuzzyNeuro_B.Weighting +
      FuzzyNeuro_B.Weighting_b) + FuzzyNeuro_B.Weighting_g) +
      FuzzyNeuro_B.Weighting_a) + FuzzyNeuro_B.Weighting_bq) +
      FuzzyNeuro_B.Weighting_j;

    /* RelationalOperator: '<S33>/Zero Firing Strength?' incorporates:
     *  Constant: '<S33>/Zero'
     */
    FuzzyNeuro_B.ZeroFiringStrength = (real_T)(FuzzyNeuro_B.TotalFiringStrength >
      FuzzyNeuro_P.Zero_Value);

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S33>/MidRange'
     */
    if (FuzzyNeuro_B.ZeroFiringStrength >= FuzzyNeuro_P.Switch_Threshold) {
      /* Product: '<S34>/Product (COA)' incorporates:
       *  Constant: '<S34>/x data'
       */
      for (i = 0; i < 101; i++) {
        FuzzyNeuro_B.ProductCOA[i] = FuzzyNeuro_P.xdata_Value[i] *
          FuzzyNeuro_B.AggMethod1[i];
      }

      /* End of Product: '<S34>/Product (COA)' */

      /* Sum: '<S34>/Sum' */
      u = FuzzyNeuro_B.ProductCOA[0];
      for (i = 0; i < 100; i++) {
        tmp = i + 1;
        u += FuzzyNeuro_B.ProductCOA[tmp];
      }

      FuzzyNeuro_B.Sum_dk = u;

      /* End of Sum: '<S34>/Sum' */

      /* Product: '<S34>/Averaging (COA)' */
      FuzzyNeuro_B.AveragingCOA = FuzzyNeuro_B.Sum_dk / FuzzyNeuro_B.Merge_l;

      /* Product: '<S35>/Product (COA)' incorporates:
       *  Constant: '<S35>/x data'
       */
      for (i = 0; i < 101; i++) {
        FuzzyNeuro_B.ProductCOA_n[i] = FuzzyNeuro_P.xdata_Value_e[i] *
          FuzzyNeuro_B.AggMethod2[i];
      }

      /* End of Product: '<S35>/Product (COA)' */

      /* Sum: '<S35>/Sum' */
      u = FuzzyNeuro_B.ProductCOA_n[0];
      for (i = 0; i < 100; i++) {
        tmp = i + 1;
        u += FuzzyNeuro_B.ProductCOA_n[tmp];
      }

      FuzzyNeuro_B.Sum_h = u;

      /* End of Sum: '<S35>/Sum' */

      /* Product: '<S35>/Averaging (COA)' */
      FuzzyNeuro_B.AveragingCOA_m = FuzzyNeuro_B.Sum_h / FuzzyNeuro_B.Merge_g;
      FuzzyNeuro_B.Switch[0] = FuzzyNeuro_B.AveragingCOA;
      FuzzyNeuro_B.Switch[1] = FuzzyNeuro_B.AveragingCOA_m;
    } else {
      FuzzyNeuro_B.Switch[0] = FuzzyNeuro_P.MidRange_Value[0];
      FuzzyNeuro_B.Switch[1] = FuzzyNeuro_P.MidRange_Value[1];
    }

    /* End of Switch: '<S33>/Switch' */
    FuzzyNeuro_B.MultiportSwitch[0] = FuzzyNeuro_B.Switch[0];
    FuzzyNeuro_B.MultiportSwitch[1] = FuzzyNeuro_B.Switch[1];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* S-Function (rti_commonblock): '<S95>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* S-Function (rti_commonblock): '<S83>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:ADC Group:NON_MUX */
    FuzzyNeuro_B.SFunction_n = (real_T) ds1104_adc_read_conv(2);

    /* S-Function (rti_commonblock): '<S84>/S-Function' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:ADC Group:NON_MUX */
    FuzzyNeuro_B.SFunction_j = (real_T) ds1104_adc_read_conv(3);
  }

  /* Fcn: '<S5>/q1->uv1' */
  FuzzyNeuro_B.uq1Vorgabe = 0.279 * FuzzyNeuro_B.MultiportSwitch[0] - 0.786;

  /* Saturate: '<S5>/Saturation' */
  u = FuzzyNeuro_B.uq1Vorgabe;
  u_0 = FuzzyNeuro_P.Saturation_LowerSat;
  u_1 = FuzzyNeuro_P.Saturation_UpperSat;
  FuzzyNeuro_B.Saturation = u >= u_1 ? u_1 : u <= u_0 ? u_0 : u;
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* S-Function (rti_commonblock): '<S93>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:DAC */
    ds1104_dac_write(1, FuzzyNeuro_B.Saturation);
  }

  /* Fcn: '<S5>/q2->uv2' */
  FuzzyNeuro_B.uq2Vorgabe = 0.288 * FuzzyNeuro_B.MultiportSwitch[1] - 0.769;

  /* Saturate: '<S5>/Saturation1' */
  u = FuzzyNeuro_B.uq2Vorgabe;
  u_0 = FuzzyNeuro_P.Saturation1_LowerSat;
  u_1 = FuzzyNeuro_P.Saturation1_UpperSat;
  FuzzyNeuro_B.Saturation1 = u >= u_1 ? u_1 : u <= u_0 ? u_0 : u;
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* S-Function (rti_commonblock): '<S94>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:DAC */
    ds1104_dac_write(2, FuzzyNeuro_B.Saturation1);

    /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
     *  Constant: '<Root>/V1'
     */
    FuzzyNeuro_B.DataTypeConversion = (FuzzyNeuro_P.V1_Value != 0.0);

    /* S-Function (rti_commonblock): '<S85>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion > 0) {
      ds1104_bit_io_set(DS1104_DIO0);
    } else {
      ds1104_bit_io_clear(DS1104_DIO0);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion1' incorporates:
     *  Constant: '<Root>/V13o'
     */
    FuzzyNeuro_B.DataTypeConversion1 = (FuzzyNeuro_P.V13o_Value != 0.0);

    /* S-Function (rti_commonblock): '<S86>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion1 > 0) {
      ds1104_bit_io_set(DS1104_DIO1);
    } else {
      ds1104_bit_io_clear(DS1104_DIO1);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion2' incorporates:
     *  Constant: '<Root>/V13u'
     */
    FuzzyNeuro_B.DataTypeConversion2 = (FuzzyNeuro_P.V13u_Value != 0.0);

    /* S-Function (rti_commonblock): '<S87>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion2 > 0) {
      ds1104_bit_io_set(DS1104_DIO2);
    } else {
      ds1104_bit_io_clear(DS1104_DIO2);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion3' incorporates:
     *  Constant: '<Root>/V3'
     */
    FuzzyNeuro_B.DataTypeConversion3 = (FuzzyNeuro_P.V3_Value != 0.0);

    /* S-Function (rti_commonblock): '<S88>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion3 > 0) {
      ds1104_bit_io_set(DS1104_DIO3);
    } else {
      ds1104_bit_io_clear(DS1104_DIO3);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion4' incorporates:
     *  Constant: '<Root>/V32o'
     */
    FuzzyNeuro_B.DataTypeConversion4 = (FuzzyNeuro_P.V32o_Value != 0.0);

    /* S-Function (rti_commonblock): '<S89>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion4 > 0) {
      ds1104_bit_io_set(DS1104_DIO4);
    } else {
      ds1104_bit_io_clear(DS1104_DIO4);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion5' incorporates:
     *  Constant: '<Root>/V32u'
     */
    FuzzyNeuro_B.DataTypeConversion5 = (FuzzyNeuro_P.V32u_Value != 0.0);

    /* S-Function (rti_commonblock): '<S90>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion5 > 0) {
      ds1104_bit_io_set(DS1104_DIO5);
    } else {
      ds1104_bit_io_clear(DS1104_DIO5);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion6' incorporates:
     *  Constant: '<Root>/V2'
     */
    FuzzyNeuro_B.DataTypeConversion6 = (FuzzyNeuro_P.V2_Value != 0.0);

    /* S-Function (rti_commonblock): '<S91>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion6 > 0) {
      ds1104_bit_io_set(DS1104_DIO6);
    } else {
      ds1104_bit_io_clear(DS1104_DIO6);
    }

    /* DataTypeConversion: '<S4>/Data Type Conversion7' incorporates:
     *  Constant: '<Root>/V0'
     */
    FuzzyNeuro_B.DataTypeConversion7 = (FuzzyNeuro_P.V0_Value != 0.0);

    /* S-Function (rti_commonblock): '<S92>/S-Function1' */
    /* This comment workarounds a Real-Time Workshop code generation problem */

    /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT */
    if (FuzzyNeuro_B.DataTypeConversion7 > 0) {
      ds1104_bit_io_set(DS1104_DIO7);
    } else {
      ds1104_bit_io_clear(DS1104_DIO7);
    }
  }

  /* TransferFcn: '<S6>/TP 5Hz2' */
  FuzzyNeuro_B.i1_m = FuzzyNeuro_P.TP5Hz2_C*FuzzyNeuro_X.TP5Hz2_CSTATE;

  /* Product: '<S6>/Product2' incorporates:
   *  Constant: '<S6>/Faktorh3'
   */
  FuzzyNeuro_B.Product2 = FuzzyNeuro_P.Faktorh3_Value * FuzzyNeuro_B.i1_m;

  /* Sum: '<S6>/Sum2' incorporates:
   *  Constant: '<S6>/Offseth3'
   */
  FuzzyNeuro_B.Sum2 = FuzzyNeuro_P.Offseth3_Value + FuzzyNeuro_B.Product2;
  if (rtmIsMajorTimeStep(FuzzyNeuro_M)) {
    /* Fcn: '<Root>/um1->q1mess' */
    FuzzyNeuro_B.q1mess = 8.13 * FuzzyNeuro_B.SFunction_n;

    /* Fcn: '<Root>/um2->q2mess' */
    FuzzyNeuro_B.q2mess = 8.2 * FuzzyNeuro_B.SFunction_j + 0.132;
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
  /* Derivatives for TransferFcn: '<S6>/TP 5Hz' */
  {
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz_CSTATE = FuzzyNeuro_B.SFunction[0];
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz_CSTATE += (FuzzyNeuro_P.TP5Hz_A)*FuzzyNeuro_X.TP5Hz_CSTATE;
  }

  /* Derivatives for TransferFcn: '<S6>/TP 5Hz1' */
  {
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz1_CSTATE = FuzzyNeuro_B.SFunction[1];
    ((StateDerivatives_FuzzyNeuro *) FuzzyNeuro_M->ModelData.derivs)
      ->TP5Hz1_CSTATE += (FuzzyNeuro_P.TP5Hz1_A)*FuzzyNeuro_X.TP5Hz1_CSTATE;
  }

  /* Derivatives for If: '<S51>/If' */
  /* Derivatives for If: '<S50>/If' */
  /* Derivatives for If: '<S52>/If' */
  /* Derivatives for If: '<S66>/If' */
  /* Derivatives for If: '<S65>/If' */
  /* Derivatives for If: '<S67>/If' */
  /* Derivatives for If: '<S34>/If' */
  /* Derivatives for If: '<S35>/If' */
  /* Derivatives for TransferFcn: '<S6>/TP 5Hz2' */
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

  /* non-finite (run-time) assignments */
  FuzzyNeuro_P.Faktorh3_Value = rtNaN;
  FuzzyNeuro_P.Offseth3_Value = rtNaN;

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
  FuzzyNeuro_M->Sizes.checksums[0] = (78696832U);
  FuzzyNeuro_M->Sizes.checksums[1] = (3345638671U);
  FuzzyNeuro_M->Sizes.checksums[2] = (3296353144U);
  FuzzyNeuro_M->Sizes.checksums[3] = (2236205390U);

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
    for (i = 0; i < 10; i++) {
      FuzzyNeuro_B.netsum[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_B.Gain[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_B.Exp[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_B.Sum_d[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_B.Reciprocal[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_B.Gain1[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      FuzzyNeuro_B.Sum1_o[i] = 0.0;
    }

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
    FuzzyNeuro_B.i1_g = 0.0;
    FuzzyNeuro_B.Product1 = 0.0;
    FuzzyNeuro_B.Sum1 = 0.0;
    FuzzyNeuro_B.Diff2 = 0.0;
    FuzzyNeuro_B.Subtractminx[0] = 0.0;
    FuzzyNeuro_B.Subtractminx[1] = 0.0;
    FuzzyNeuro_B.rangeyrangex[0] = 0.0;
    FuzzyNeuro_B.rangeyrangex[1] = 0.0;
    FuzzyNeuro_B.Addminy[0] = 0.0;
    FuzzyNeuro_B.Addminy[1] = 0.0;
    FuzzyNeuro_B.DotProduct = 0.0;
    FuzzyNeuro_B.DotProduct_j = 0.0;
    FuzzyNeuro_B.DotProduct_a = 0.0;
    FuzzyNeuro_B.DotProduct_d = 0.0;
    FuzzyNeuro_B.DotProduct_p = 0.0;
    FuzzyNeuro_B.DotProduct_b = 0.0;
    FuzzyNeuro_B.DotProduct_ds = 0.0;
    FuzzyNeuro_B.DotProduct_g = 0.0;
    FuzzyNeuro_B.DotProduct_l = 0.0;
    FuzzyNeuro_B.DotProduct_av = 0.0;
    FuzzyNeuro_B.DotProduct_i = 0.0;
    FuzzyNeuro_B.DotProduct_m = 0.0;
    FuzzyNeuro_B.netsum_i[0] = 0.0;
    FuzzyNeuro_B.netsum_i[1] = 0.0;
    FuzzyNeuro_B.Subtractminy[0] = 0.0;
    FuzzyNeuro_B.Subtractminy[1] = 0.0;
    FuzzyNeuro_B.Dividebyrangey[0] = 0.0;
    FuzzyNeuro_B.Dividebyrangey[1] = 0.0;
    FuzzyNeuro_B.Addminx[0] = 0.0;
    FuzzyNeuro_B.Addminx[1] = 0.0;
    FuzzyNeuro_B.Constants = 0.0;
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
    FuzzyNeuro_B.Sum1_or = 0.0;
    FuzzyNeuro_B.Merge_g = 0.0;
    FuzzyNeuro_B.MultiportSwitch[0] = 0.0;
    FuzzyNeuro_B.MultiportSwitch[1] = 0.0;
    FuzzyNeuro_B.SFunction[0] = 0.0;
    FuzzyNeuro_B.SFunction[1] = 0.0;
    FuzzyNeuro_B.SFunction[2] = 0.0;
    FuzzyNeuro_B.SFunction_n = 0.0;
    FuzzyNeuro_B.SFunction_j = 0.0;
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
    FuzzyNeuro_B.Sum_dk = 0.0;
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
  FuzzyNeuro_M->Sizes.numBlocks = (228);/* Number of blocks */
  FuzzyNeuro_M->Sizes.numBlockIO = (123);/* Number of block outputs */
  FuzzyNeuro_M->Sizes.numBlockPrms = (1168);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for TransferFcn: '<S6>/TP 5Hz' */
  FuzzyNeuro_X.TP5Hz_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S6>/TP 5Hz1' */
  FuzzyNeuro_X.TP5Hz1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<S6>/TP 5Hz2' */
  FuzzyNeuro_X.TP5Hz2_CSTATE = 0.0;
}

void MdlStart(void)
{
  /* Start for If: '<S51>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S51>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S57>/Out1' */
  FuzzyNeuro_B.Merge = FuzzyNeuro_P.Out1_Y0_g;

  /* End of Start for SubSystem: '<S51>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S51>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S59>/Out1' */
  FuzzyNeuro_B.Merge = FuzzyNeuro_P.Out1_Y0_b;

  /* End of Start for SubSystem: '<S51>/If Action Subsystem2' */

  /* Start for If: '<S50>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_n = -1;

  /* Start for IfAction SubSystem: '<S50>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S53>/Out1' */
  FuzzyNeuro_B.Merge_b = FuzzyNeuro_P.Out1_Y0_aa;

  /* End of Start for SubSystem: '<S50>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S50>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S54>/Out1' */
  FuzzyNeuro_B.Merge_b = FuzzyNeuro_P.Out1_Y0_c;

  /* End of Start for SubSystem: '<S50>/If Action Subsystem1' */

  /* Start for If: '<S52>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_i = -1;

  /* Start for IfAction SubSystem: '<S52>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S61>/Out1' */
  FuzzyNeuro_B.Merge_d = FuzzyNeuro_P.Out1_Y0_f;

  /* End of Start for SubSystem: '<S52>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S52>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S63>/Out1' */
  FuzzyNeuro_B.Merge_d = FuzzyNeuro_P.Out1_Y0_j;

  /* End of Start for SubSystem: '<S52>/If Action Subsystem2' */

  /* Start for If: '<S66>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_i2 = -1;

  /* Start for IfAction SubSystem: '<S66>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S72>/Out1' */
  FuzzyNeuro_B.Merge_c = FuzzyNeuro_P.Out1_Y0_ja;

  /* End of Start for SubSystem: '<S66>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S66>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S74>/Out1' */
  FuzzyNeuro_B.Merge_c = FuzzyNeuro_P.Out1_Y0_e;

  /* End of Start for SubSystem: '<S66>/If Action Subsystem2' */

  /* Start for If: '<S65>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_e = -1;

  /* Start for IfAction SubSystem: '<S65>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S68>/Out1' */
  FuzzyNeuro_B.Merge_n = FuzzyNeuro_P.Out1_Y0_jm;

  /* End of Start for SubSystem: '<S65>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S65>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S69>/Out1' */
  FuzzyNeuro_B.Merge_n = FuzzyNeuro_P.Out1_Y0_d;

  /* End of Start for SubSystem: '<S65>/If Action Subsystem1' */

  /* Start for If: '<S67>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_ie = -1;

  /* Start for IfAction SubSystem: '<S67>/If Action Subsystem' */
  /* VirtualOutportStart for Outport: '<S76>/Out1' */
  FuzzyNeuro_B.Merge_p = FuzzyNeuro_P.Out1_Y0_h;

  /* End of Start for SubSystem: '<S67>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S67>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S78>/Out1' */
  FuzzyNeuro_B.Merge_p = FuzzyNeuro_P.Out1_Y0_ez;

  /* End of Start for SubSystem: '<S67>/If Action Subsystem2' */

  /* Start for If: '<S34>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_c = -1;

  /* Start for IfAction SubSystem: '<S34>/Action: One' */
  /* VirtualOutportStart for Outport: '<S46>/Out1' */
  FuzzyNeuro_B.Merge_l = FuzzyNeuro_P.Out1_Y0;

  /* End of Start for SubSystem: '<S34>/Action: One' */

  /* Start for If: '<S35>/If' */
  FuzzyNeuro_DWork.If_ActiveSubsystem_a = -1;

  /* Start for IfAction SubSystem: '<S35>/Action: One' */
  /* VirtualOutportStart for Outport: '<S48>/Out1' */
  FuzzyNeuro_B.Merge_g = FuzzyNeuro_P.Out1_Y0_a;

  /* End of Start for SubSystem: '<S35>/Action: One' */
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
