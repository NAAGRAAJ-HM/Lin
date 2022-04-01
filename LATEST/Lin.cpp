/******************************************************************************/
/* File   : Lin.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infLin_EcuM.hpp"
#include "infLin_Dcm.hpp"
#include "infLin_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LIN_AR_RELEASE_MAJOR_VERSION                                           4
#define LIN_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(LIN_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible LIN_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(LIN_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible LIN_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Lin:
      public abstract_module
{
   public:
      module_Lin(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, LIN_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, LIN_CONFIG_DATA, LIN_APPL_CONST) lptrCfgModule
      );
      FUNC(void, LIN_CODE) DeInitFunction (void);
      FUNC(void, LIN_CODE) MainFunction   (void);
};

extern VAR(module_Lin, LIN_VAR) Lin;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, LIN_VAR, LIN_CONST) gptrinfEcuMClient_Lin = &Lin;
CONSTP2VAR(infDcmClient,  LIN_VAR, LIN_CONST) gptrinfDcmClient_Lin  = &Lin;
CONSTP2VAR(infSchMClient, LIN_VAR, LIN_CONST) gptrinfSchMClient_Lin = &Lin;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgLin.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Lin, LIN_VAR) Lin(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LIN_CODE) module_Lin::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, LIN_CONFIG_DATA, LIN_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Lin_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Lin_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Lin_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_Lin as back-up configuration
      }
      IsInitDone = E_OK;
#if(STD_ON == Lin_InitCheck)
   }
#endif
}

FUNC(void, LIN_CODE) module_Lin::DeInitFunction(void){
#if(STD_ON == Lin_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Lin_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Lin_InitCheck)
   }
#endif
}

FUNC(void, LIN_CODE) module_Lin::MainFunction(void){
#if(STD_ON == Lin_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Lin_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == Lin_InitCheck)
   }
#endif
}

class class_Lin_Unused{
   public:
      FUNC(void, LIN_CODE) CheckWakeup       (void);
      FUNC(void, LIN_CODE) SendFrame         (void);
      FUNC(void, LIN_CODE) GoToSleep         (void);
      FUNC(void, LIN_CODE) GoToSleepInternal (void);
      FUNC(void, LIN_CODE) Wakeup            (void);
      FUNC(void, LIN_CODE) WakeupInternal    (void);
      FUNC(void, LIN_CODE) GetStatus         (void);
};

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

