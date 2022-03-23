/******************************************************************************/
/* File   : Lin.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "Lin_Cfg.h"
#include "infLin_EcuM.h"
#include "infLin_Dcm.h"
#include "infLin_SchM.h"

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
      FUNC(void, LIN_CODE) InitFunction   (void);
      FUNC(void, LIN_CODE) DeInitFunction (void);
      FUNC(void, LIN_CODE) GetVersionInfo (void);
      FUNC(void, LIN_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, LIN_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_Lin, LIN_VAR) Lin;
CONSTP2VAR(infEcuMClient, LIN_VAR, LIN_CONST) gptrinfEcuMClient_Lin = &Lin;
CONSTP2VAR(infDcmClient,  LIN_VAR, LIN_CONST) gptrinfDcmClient_Lin  = &Lin;
CONSTP2VAR(infSchMClient, LIN_VAR, LIN_CONST) gptrinfSchMClient_Lin = &Lin;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LIN_CODE) module_Lin::InitFunction(void){
   Lin.IsInitDone = E_OK;
}

FUNC(void, LIN_CODE) module_Lin::DeInitFunction(void){
   Lin.IsInitDone = E_NOT_OK;
}

FUNC(void, LIN_CODE) module_Lin::GetVersionInfo(void){
#if(STD_ON == Lin_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

