/*********************** dSPACE target specific file *************************

   Include file FuzzyNeuro_neuesNetz_rti.c:

   Definition of functions and variables for the system I/O and for
   the hardware and software interrupts used.

   RTI1104 6.8 (02-Nov-2011)
   Thu Nov 05 18:46:32 2015

   (c) Copyright 2006, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#if !(defined(__RTI_SIMENGINE__) || defined(RTIMP_FRAME))
# error This file may be included only by the RTI(-MP) simulation engine.
#endif

/* Include the model header file. */
#include "FuzzyNeuro_neuesNetz.h"
#include "FuzzyNeuro_neuesNetz_private.h"

/* Defines for block output and parameter structure existence */
#define RTI_rtB_STRUCTURE_EXISTS       1
#define RTI_rtP_STRUCTURE_EXISTS       1
#define RTB_STRUCTURE_NAME             FuzzyNeuro_neuesNetz_B
#define RTP_STRUCTURE_NAME             FuzzyNeuro_neuesNetz_P

/* dSPACE generated includes for header files */
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>

/****** Definitions: task functions for timer tasks *********************/

/* Timer Task 1. (Base rate). */
static void rti_TIMERA(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  baseRateService(task);

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* ===== Declarations of RTI blocks ======================================== */

/* dSPACE Test-Automation Stimulus Engine */
#define TA_STIMULUS_ENGINE_ENABLE      0

/* ===== Definition of interface functions for simulation engine =========== */
#ifdef MULTITASKING
# define dsIsSampleHit(RTM,sti)        rtmGetSampleHitPtr(RTM)[sti]
#else
# define dsIsSampleHit(RTM,sti)        rtmIsSampleHit(RTM,sti,0)
#endif

#if defined(_INLINE)
# define __INLINE                      static inline
#else
# define __INLINE                      static
#endif

static void rti_mdl_initialize_host_services(void)
{
  {
    ts_timestamp_type ts = { 0, 0 };

    host_service(1, &ts);
  }
}

static void rti_mdl_initialize_io_boards(void)
{
  /* Registering of RTI products and modules at VCM */
  {
    vcm_module_register(VCM_MID_RTI1104, (void *) 0,
                        VCM_TXT_RTI1104, 6, 8, 0,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);

    {
      vcm_module_descriptor_type* msg_mod_ptr;
      msg_mod_ptr = vcm_module_register(VCM_MID_MATLAB, (void *) 0,
        VCM_TXT_MATLAB, 7, 13, 0,
        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_SIMULINK, msg_mod_ptr,
                          VCM_TXT_SIMULINK, 7, 8, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_RTW, msg_mod_ptr,
                          VCM_TXT_RTW, 8, 1, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
    }
  }

  /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO */
  ds1104_bit_io_init(DS1104_DIO0_OUT|DS1104_DIO1_OUT|DS1104_DIO2_OUT|
                     DS1104_DIO3_OUT|DS1104_DIO4_OUT|DS1104_DIO5_OUT|
                     DS1104_DIO6_OUT|DS1104_DIO7_OUT);

  /* Initialization of Master ADC units */
  ds1104_adc_trigger_setup(2, DS1104_TRIGGER_DISABLE);
  ds1104_adc_trigger_setup(3, DS1104_TRIGGER_DISABLE);

  /* Initialization of Master DAC units */
  ds1104_dac_init(DS1104_DACMODE_TRANSPARENT);
  ds1104_dac_trigger_setup(DS1104_TRIGGER_DISABLE);
}

/* Function rti_mdl_slave_load() is empty */
#define rti_mdl_slave_load()

/* Function rti_mdl_rtk_initialize() is empty */
#define rti_mdl_rtk_initialize()

static void rti_mdl_initialize_io_units(void)
{
  /* dSPACE I/O Board DS1104 #1 Unit:DAC */
  ds1104_dac_write(1, 0);
  ds1104_dac_write(2, 0);

  /* dSPACE I/O Board DS1104 #1 Unit:BIT_IO Group:BIT_OUT_CLEAR */
  ds1104_bit_io_clear(DS1104_DIO0|DS1104_DIO1|DS1104_DIO2|DS1104_DIO3|
                      DS1104_DIO4|DS1104_DIO5|DS1104_DIO6|DS1104_DIO7);
}

/* Function rti_mdl_acknowledge_interrupts() is empty */
#define rti_mdl_acknowledge_interrupts()

/* Function rti_mdl_timetables_register() is empty */
#define rti_mdl_timetables_register()

/* Function rti_mdl_timesync_simstate() is empty */
#define rti_mdl_timesync_simstate()

/* Function rti_mdl_timesync_baserate() is empty */
#define rti_mdl_timesync_baserate()

/* Function rti_mdl_background() is empty */
#define rti_mdl_background()

__INLINE void rti_mdl_sample_input(void)
{
  /* Calls for base sample time: [0.01, 0] */
  /* dSPACE I/O Board DS1104 #1 Unit:ADC */
  ds1104_adc_start(DS1104_ADC2|DS1104_ADC3);

  /* dSPACE I/O Board DS1104 #1 Unit:ADC Group:MUX */
  {
    static UInt16 channels_conv1[] = { 1, 2, 3 };

    ds1104_adc_read_mux(channels_conv1, 3, FuzzyNeuro_neuesNetz_B.SFunction);
  }
}

#undef __INLINE

/****** [EOF] ****************************************************************/
