#pragma once
/******************************************************************************/
/* File   : McalLin_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalLin.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALLIN_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALLIN_CODE) CheckWakeup       (void);                   \
              FUNC(void, MCALLIN_CODE) SendMcalFrame         (void);                   \
              FUNC(void, MCALLIN_CODE) GoToSleep         (void);                   \
              FUNC(void, MCALLIN_CODE) GoToSleepInternal (void);                   \
              FUNC(void, MCALLIN_CODE) Wakeup            (void);                   \
              FUNC(void, MCALLIN_CODE) WakeupInternal    (void);                   \
              FUNC(void, MCALLIN_CODE) GetStatus         (void);                   \

#define MCALLIN_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALLIN_CODE) CheckWakeup       (void) = 0;               \
      virtual FUNC(void, MCALLIN_CODE) SendMcalFrame         (void) = 0;               \
      virtual FUNC(void, MCALLIN_CODE) GoToSleep         (void) = 0;               \
      virtual FUNC(void, MCALLIN_CODE) GoToSleepInternal (void) = 0;               \
      virtual FUNC(void, MCALLIN_CODE) Wakeup            (void) = 0;               \
      virtual FUNC(void, MCALLIN_CODE) WakeupInternal    (void) = 0;               \
      virtual FUNC(void, MCALLIN_CODE) GetStatus         (void) = 0;               \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalLin_Functionality{
   public:
      MCALLIN_CORE_FUNCTIONALITIES_VIRTUAL
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

