#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Lin.h"

class class_Lin{
   public:
      FUNC(void, LIN_CODE) InitFunction      (void);
      FUNC(void, LIN_CODE) CheckWakeup       (void);
      FUNC(void, LIN_CODE) GetVersionInfo    (void);
      FUNC(void, LIN_CODE) SendFrame         (void);
      FUNC(void, LIN_CODE) GoToSleep         (void);
      FUNC(void, LIN_CODE) GoToSleepInternal (void);
      FUNC(void, LIN_CODE) Wakeup            (void);
      FUNC(void, LIN_CODE) WakeupInternal    (void);
      FUNC(void, LIN_CODE) GetStatus         (void);
};

extern class_Lin Lin;

