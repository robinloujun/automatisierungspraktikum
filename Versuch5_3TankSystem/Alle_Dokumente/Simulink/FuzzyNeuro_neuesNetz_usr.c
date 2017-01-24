/******************************************************************************

   Include file FuzzyNeuro_neuesNetz_usr.c:

   Definition of functions for user-defined initialization,
   system I/O, and background process code.

   RTI1104 5.2.5 (18-Mar-2005)
   Thu Dec 02 07:57:19 2010

   Copyright (c) 1997-2003 dSPACE GmbH, GERMANY

 *****************************************************************************/

/* ========================================================================= */
/* =====  Define file version macro. Never change this value.  ============= */
/* ========================================================================= */
#define USER_CODE_FILE_VERSION 5
/* ========================================================================= */

/* Insert #include directives for header files here. */


#if defined(_INLINE)
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
