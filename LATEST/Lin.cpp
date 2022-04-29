/******************************************************************************/
/* File   : Lin.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgLin.hpp"
#include "Lin_core.hpp"
#include "infLin.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LIN_AR_RELEASE_VERSION_MAJOR                                           4
#define LIN_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(LIN_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible LIN_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(LIN_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible LIN_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Lin:
      public abstract_module
   ,  public class_Lin_Functionality
{
   public:
      module_Lin(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, LIN_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, LIN_CONFIG_DATA, LIN_APPL_CONST) lptrCfgModule
      );
      FUNC(void, LIN_CODE) DeInitFunction (void);
      FUNC(void, LIN_CODE) MainFunction   (void);
      LIN_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Lin, LIN_VAR) Lin(
   {
         LIN_AR_RELEASE_VERSION_MAJOR
      ,  LIN_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Lin_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgLin;
         }
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Lin_InitCheck)
   }
#endif
}

FUNC(void, LIN_CODE) class_Lin_Functionality::CheckWakeup(void){
}

FUNC(void, LIN_CODE) class_Lin_Functionality::SendFrame(void){
}

FUNC(void, LIN_CODE) class_Lin_Functionality::GoToSleep(void){
}

FUNC(void, LIN_CODE) class_Lin_Functionality::GoToSleepInternal(void){
}

FUNC(void, LIN_CODE) class_Lin_Functionality::Wakeup(void){
}

FUNC(void, LIN_CODE) class_Lin_Functionality::WakeupInternal(void){
}

FUNC(void, LIN_CODE) class_Lin_Functionality::GetStatus(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

