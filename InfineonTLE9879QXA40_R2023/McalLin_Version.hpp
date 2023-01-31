#pragma once
/******************************************************************************/
/* File   : McalLin_Version.hpp                                               */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALLIN_AR_RELEASE_VERSION_MAJOR                                       4
#define MCALLIN_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALLIN_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALLIN_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALLIN_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALLIN_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

