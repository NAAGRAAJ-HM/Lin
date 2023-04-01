#pragma once
/******************************************************************************/
/* File   : McalLin_core.hpp                                                      */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalLin.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LIN_CORE_FUNCTIONALITIES                                               \
              FUNC(void, LIN_CODE) CheckWakeup       (void);                   \
              FUNC(void, LIN_CODE) SendMcalFrame         (void);                   \
              FUNC(void, LIN_CODE) GoToSleep         (void);                   \
              FUNC(void, LIN_CODE) GoToSleepInternal (void);                   \
              FUNC(void, LIN_CODE) Wakeup            (void);                   \
              FUNC(void, LIN_CODE) WakeupInternal    (void);                   \
              FUNC(void, LIN_CODE) GetStatus         (void);                   \

#define LIN_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, LIN_CODE) CheckWakeup       (void) = 0;               \
      virtual FUNC(void, LIN_CODE) SendMcalFrame         (void) = 0;               \
      virtual FUNC(void, LIN_CODE) GoToSleep         (void) = 0;               \
      virtual FUNC(void, LIN_CODE) GoToSleepInternal (void) = 0;               \
      virtual FUNC(void, LIN_CODE) Wakeup            (void) = 0;               \
      virtual FUNC(void, LIN_CODE) WakeupInternal    (void) = 0;               \
      virtual FUNC(void, LIN_CODE) GetStatus         (void) = 0;               \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalLin_Functionality{
   public:
      LIN_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

