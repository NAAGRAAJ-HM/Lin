/******************************************************************************/
/* File   : Lin.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infLin_Version.h"

#include "module.h"
#include "infLin_EcuM.h"
#include "infLin_Dcm.h"
#include "infLin_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Lin:
      public abstract_module
{
   public:
      FUNC(void, LIN_CODE) InitFunction   (void);
      FUNC(void, LIN_CODE) DeInitFunction (void);
      FUNC(void, LIN_CODE) GetVersionInfo (void);
      FUNC(void, LIN_CODE) MainFunction   (void);
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


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_Lin, LIN_VAR) Lin;
CONSTP2VAR(infEcuMClient, LIN_VAR, LIN_CONST) gptrinfEcuMClient_Lin = &Lin;
CONSTP2VAR(infDcmClient,  LIN_VAR, LIN_CONST) gptrinfDcmClient_Lin  = &Lin;
CONSTP2VAR(infSchMClient, LIN_VAR, LIN_CONST) gptrinfSchMClient_Lin = &Lin;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, LIN_CODE) module_Lin::InitFunction(void){
}

FUNC(void, LIN_CODE) module_Lin::DeInitFunction(void){
}

FUNC(void, LIN_CODE) module_Lin::GetVersionInfo(void){
}

FUNC(void, LIN_CODE) module_Lin::MainFunction(void){
}

#include "Lin_Unused.h"

FUNC(void, LIN_CODE) class_Lin_Unused::CheckWakeup(void){
}

FUNC(void, LIN_CODE) class_Lin_Unused::SendFrame(void){
}

FUNC(void, LIN_CODE) class_Lin_Unused::GoToSleep(void){
}

FUNC(void, LIN_CODE) class_Lin_Unused::GoToSleepInternal(void){
}

FUNC(void, LIN_CODE) class_Lin_Unused::Wakeup(void){
}

FUNC(void, LIN_CODE) class_Lin_Unused::WakeupInternal(void){
}

FUNC(void, LIN_CODE) class_Lin_Unused::GetStatus(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

