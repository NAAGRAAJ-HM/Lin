/******************************************************************************/
/* File   : lin.cpp                                                           */
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
#include "types.hpp"

#include "lin.hpp"

#include "uC_Lin.hpp"

#include "sfr_access.hpp"

#include "lin_defines.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
LIN_Type LIN = {0};

UART_Type UART1 = {
      0, 0, 0, 0, 0, 0, 0, 0, 0
};

UART_Type UART2 = {
      0, 0, 0, 0, 0, 0, 0, 0, 0
};

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void LIN_Init(void){
#if(LIN_Configuration_En == 1)
   LIN_Set_Mode(LIN_MODE_SLEEP);
   while(LIN_Get_Mode() != LIN_GET_MODE_SLEEP){}
   LIN.CTRL_STS.reg = (uint32) LIN_CTRL_STS;
   SCU.LINST.reg = (uint8) SCU_LINST;
#endif
}
/*
uint8 LIN_End_Of_Sync_Sts(void){
   return( u1_Field_Rd8(&SCU.LINST.reg, (uint8)SCU_LINST_EOFSYN_Pos, (uint8)SCU_LINST_EOFSYN_Msk) );
}

uint8 LIN_Err_In_Sync_Sts(void){
   return( u1_Field_Rd8(&SCU.LINST.reg, (uint8)SCU_LINST_ERRSYN_Pos, (uint8)SCU_LINST_ERRSYN_Msk) );
}

uint8 LIN_Break_Sts(void){
   return( u1_Field_Rd8(&SCU.LINST.reg, (uint8)SCU_LINST_BRK_Pos, (uint8)SCU_LINST_BRK_Msk) );
}

void LIN_Break_Detect_En(void){
  Field_Mod8(&SCU.LINST.reg, (uint8)SCU_LINST_BRDIS_Pos, (uint8)SCU_LINST_BRDIS_Msk, 0u);
}

void LIN_Break_Detect_Dis(void){
  Field_Mod8(&SCU.LINST.reg, (uint8)SCU_LINST_BRDIS_Pos, (uint8)SCU_LINST_BRDIS_Msk, 1u);
}

void LIN_BaudRate_Range_Sel(uint8 a){
  Field_Mod8(&SCU.LINST.reg, (uint8)SCU_LINST_BGSEL_Pos, (uint8)SCU_LINST_BGSEL_Msk, a);
}

void LIN_Over_Curr_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint8)SCUPM_SYS_ISCLR_LIN_OC_ICLR_Pos, (uint8)SCUPM_SYS_ISCLR_LIN_OC_ICLR_Msk, 1u);
}

void LIN_Over_Temp_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint8)SCUPM_SYS_ISCLR_LIN_OT_ICLR_Pos, (uint8)SCUPM_SYS_ISCLR_LIN_OT_ICLR_Msk, 1u);
}

void LIN_Time_Out_Int_Clr(void){
  Field_Wrt32(&SCUPM.SYS_ISCLR.reg, (uint8)SCUPM_SYS_ISCLR_LIN_TMOUT_ICLR_Pos, (uint8)SCUPM_SYS_ISCLR_LIN_TMOUT_ICLR_Msk, 1u);
}

void LIN_End_Of_Sync_Int_Clr(void){
  Field_Wrt8(&SCU.LINSCLR.reg, (uint8)SCU_LINSCLR_EOFSYNC_Pos, (uint8)SCU_LINSCLR_EOFSYNC_Msk, 1u);
}

void LIN_Err_In_Sync_Int_Clr(void){
  Field_Wrt8(&SCU.LINSCLR.reg, (uint8)SCU_LINSCLR_ERRSYNC_Pos, (uint8)SCU_LINSCLR_ERRSYNC_Msk, 1u);
}

void LIN_Break_Int_Clr(void){
  Field_Wrt8(&SCU.LINSCLR.reg, (uint8)SCU_LINSCLR_BRKC_Pos, (uint8)SCU_LINSCLR_BRKC_Msk, 1u);
}

void LIN_Over_Curr_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_OC_IE_Pos, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_OC_IE_Msk, 1u);
}

void LIN_Over_Curr_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_OC_IE_Pos, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_OC_IE_Msk, 0u);
}

void LIN_Over_Temp_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_OT_IE_Pos, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_OT_IE_Msk, 1u);
}

void LIN_Over_Temp_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_OT_IE_Pos, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_OT_IE_Msk, 0u);
}

void LIN_Time_Out_Int_En(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_TMOUT_IE_Pos, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_TMOUT_IE_Msk, 1u);
}

void LIN_Time_Out_Int_Dis(void){
  Field_Mod32(&SCUPM.SYS_IRQ_CTRL.reg, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_TMOUT_IE_Pos, (uint8)SCUPM_SYS_IRQ_CTRL_LIN_TMOUT_IE_Msk, 0u);
}

void LIN_Sync_Int_En(void){
  Field_Mod8(&SCU.LINST.reg, (uint8)SCU_LINST_SYNEN_Pos, (uint8)SCU_LINST_SYNEN_Msk, 1u);
}

void LIN_Sync_Int_Dis(void){
  Field_Mod8(&SCU.LINST.reg, (uint8)SCU_LINST_SYNEN_Pos, (uint8)SCU_LINST_SYNEN_Msk, 0u);
}

void LIN_Set_Mode(uint8 Mode){
  Field_Mod32(&LIN.CTRL_STS.reg, LIN_CTRL_STS_MODE_Pos, LIN_CTRL_STS_MODE_Msk, Mode);
}

uint32 LIN_Get_Mode(void){
   return u32_Field_Rd32(&LIN.CTRL_STS.reg, LIN_CTRL_STS_MODE_FB_Pos, LIN_CTRL_STS_MODE_FB_Msk);
}

void LIN_Set_Slope(uint8 SlopeMode){
  LIN_Set_Mode(LIN_MODE_SLEEP);
  Field_Mod32(&LIN.CTRL_STS.reg, LIN_CTRL_STS_SM_Pos, LIN_CTRL_STS_SM_Msk, SlopeMode);
  LIN_Set_Mode(LIN_MODE_NORMAL);
}
*/
/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

