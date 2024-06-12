/******************************************************************************/
/* File   : McalLin.cpp                                                           */
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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_McalLin, LIN_VAR) McalLin;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LIN_CODE) module_McalLin::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, LIN_CONST,       LIN_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   LIN_CONFIG_DATA, LIN_APPL_CONST) lptrCfgModule
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
         ,  LIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LIN_CODE) module_McalLin::DeInitFunction(
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
         ,  LIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LIN_CODE) module_McalLin::MainFunction(
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
         ,  LIN_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LIN_CODE) module_McalLin::CheckWakeup(
   void
){
}

FUNC(void, LIN_CODE) module_McalLin::SendMcalFrame(
   void
){
}

FUNC(void, LIN_CODE) module_McalLin::GoToSleep(
   void
){
}

FUNC(void, LIN_CODE) module_McalLin::GoToSleepInternal(
   void
){
}

FUNC(void, LIN_CODE) module_McalLin::Wakeup(
   void
){
}

FUNC(void, LIN_CODE) module_McalLin::WakeupInternal(
   void
){
}

FUNC(void, LIN_CODE) module_McalLin::GetStatus(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

