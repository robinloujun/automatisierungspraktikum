/******************************************************************************

   Include file FuzzyNeuro_neu_usr.c:

   Definition of functions for user-defined initialization,
   system I/O, and background process code.

   RTI1104 4.3 (08-May-2002)
   Tue Sep 24 15:48:20 2002

   Copyright (c) 1997-2001 dSPACE GmbH, GERMANY

 *****************************************************************************/

/* ========================================================================= */
/* =====  Define file version macro. Never change this value.  ============= */
/* ========================================================================= */
#define USER_CODE_FILE_VERSION 4
/* ========================================================================= */

/* Insert #include directives for header files here. */


#if defined(_INLINE) && (defined(_DS1003)||defined(_DS1102)||defined(_DS1004))
# define __INLINE static inline
#else
# define __INLINE static
#endif


static void usr_initialize(void)
{
}


__INLINE void usr_sample_input(void)
{
}


__INLINE void usr_input(void)
{
}


__INLINE void usr_output(void)
{
}


static void usr_terminate(void)
{
}


static void usr_background(void)
{
}


#undef __INLINE

/****** [EOF] ****************************************************************/
