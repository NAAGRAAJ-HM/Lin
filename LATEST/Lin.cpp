/*****************************************************/
/* File   : Lin.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Lin_EcuM.h"
#include "Lin_SchM.h"
#include "Lin_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Lin:
      public abstract_module
   ,  public interface_Lin_EcuM
   ,  public interface_Lin_SchM
{
   public:
      FUNC(void, LIN_CODE) InitFunction   (void);
      FUNC(void, LIN_CODE) DeInitFunction (void);
      FUNC(void, LIN_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Lin Lin;

interface_Lin_EcuM *EcuM_Client_ptr_Lin = &Lin;
interface_Lin_SchM *SchM_Client_ptr_Lin = &Lin;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, LIN_CODE) module_Lin::InitFunction(void){
}

FUNC(void, LIN_CODE) module_Lin::DeInitFunction(void){
}

FUNC(void, LIN_CODE) module_Lin::MainFunction(void){
}

FUNC(void, LIN_CODE) class_Lin_Unused::CheckWakeup(void){
}

FUNC(void, LIN_CODE) class_Lin_Unused::GetVersionInfo(void){
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

