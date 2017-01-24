# =============================================================================
#  Make include file FuzzyNeuro_neu_usr.mk:
#
#   RTI1104 4.3 (08-May-2002)
#   Tue Sep 24 15:48:20 2002
#
#   Copyright (c) 1999-2001 dSPACE GmbH, GERMANY
# =============================================================================

# =============================================================================
# ===== Define file version macro. Never change this value. ===================
# =============================================================================
USER_MAKEFILE_VERSION = 2
# =============================================================================

# -----------------------------------------------------------------------------
# Macros for user-specific settings.
#
# All macros below may list several items (files or directories). You can
# separate multiple items with blanks or list them on several lines using
# the \ (backslash) as line continuation character.
#
# The directory names may include absolute or partial path
# descriptions, e.g., .\project1\file3.c
#
# Blanks in directory or file names are not allowed.
#
# Examples:
#
# USER_SRCS = file1.c file2.c file3.c
#
# USER_SRCS = \
#   file1.c \
#   file2.c \
#   file3.c
#
# -----------------------------------------------------------------------------

# Directories where S-Function C source files are stored.
SFCN_DIR =

# Additional C source files to be compiled (file name extension .c).
USER_SRCS =

# Additional assembler source files to be compiled (file name extension .asm).
USER_ASM_SRCS =

# Directories where additional C and assembler source files are stored.
USER_SRCS_DIR =

# Path names for user include files.
USER_INCLUDES_PATH =

# Additional user object files to be linked.
USER_OBJS =

# Additional user libraries to be linked.
USER_LIBS =

# EOF -------------------------------------------------------------------------
