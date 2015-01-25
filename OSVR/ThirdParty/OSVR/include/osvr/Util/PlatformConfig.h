/** @file
    @brief Auto-configured header

    If this filename ends in `.h`, don't edit it: your edits will
    be lost next time this file is regenerated!

    Must be c-safe!

    @date 2014

    @author
    Ryan Pavlik
    <ryan@sensics.com>
    <http://sensics.com>
*/

/*
// Copyright 2014 Sensics, Inc.
//
// All rights reserved.
//
// (Final version intended to be licensed under
// the Apache License, Version 2.0)
*/

#ifndef INCLUDED_PlatformConfig_h_GUID_0D10E644_8114_4294_A839_699F39E1F0E0
#define INCLUDED_PlatformConfig_h_GUID_0D10E644_8114_4294_A839_699F39E1F0E0

/** @def OSVR_HAVE_STRUCT_TIMEVAL_IN_WINSOCK2_H
    @brief Does the system have struct timeval in <winsock2.h>?
*/
#define OSVR_HAVE_STRUCT_TIMEVAL_IN_WINSOCK2_H

/** @def OSVR_HAVE_STRUCT_TIMEVAL_IN_SYS_TIME_H
    @brief Does the system have struct timeval in <sys/time.h>?
*/

/*
    MinGW and similar environments have both winsock and sys/time.h, so
    we hide this define for disambiguation at the top level.
*/
#ifndef OSVR_HAVE_STRUCT_TIMEVAL_IN_WINSOCK2_H
/* #undef OSVR_HAVE_STRUCT_TIMEVAL_IN_SYS_TIME_H */
#endif

#if defined(OSVR_HAVE_STRUCT_TIMEVAL_IN_SYS_TIME_H) ||                         \
    defined(OSVR_HAVE_STRUCT_TIMEVAL_IN_WINSOCK2_H)
#define OSVR_HAVE_STRUCT_TIMEVAL
#endif

#endif