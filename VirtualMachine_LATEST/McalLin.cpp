/******************************************************************************/
/* File   : McalLin.cpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalLin.hpp"
#include "infMcalLin_Imp.hpp"

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
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_McalLin, MCALLIN_VAR) McalLin;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALLIN_CODE) module_McalLin::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALLIN_CONST,       MCALLIN_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALLIN_CONFIG_DATA, MCALLIN_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalLin_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalLin_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalLin_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalLin_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalLin_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALLIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALLIN_CODE) module_McalLin::DeInitFunction(
   void
){
#if(STD_ON == McalLin_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalLin_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalLin_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALLIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALLIN_CODE) module_McalLin::MainFunction(
   void
){
#if(STD_ON == McalLin_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalLin_InitCheck)
   }
   else{
#if(STD_ON == McalLin_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALLIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALLIN_CODE) module_McalLin::CheckWakeup(
   void
){
}

FUNC(void, MCALLIN_CODE) module_McalLin::SendMcalFrame(
   void
){
}

FUNC(void, MCALLIN_CODE) module_McalLin::GoToSleep(
   void
){
}

FUNC(void, MCALLIN_CODE) module_McalLin::GoToSleepInternal(
   void
){
}

FUNC(void, MCALLIN_CODE) module_McalLin::Wakeup(
   void
){
}

FUNC(void, MCALLIN_CODE) module_McalLin::WakeupInternal(
   void
){
}

FUNC(void, MCALLIN_CODE) module_McalLin::GetStatus(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

