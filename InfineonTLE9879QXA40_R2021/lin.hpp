#pragma once
/******************************************************************************/
/* File   : Template.hpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LIN_MODE_SLEEP                                                      (0u)
#define LIN_MODE_RCV_ONLY                                                   (1u)
#define LIN_MODE_NORMAL                                                     (3u)
#define LIN_GET_MODE_SLEEP                                                  (1u)
#define LIN_GET_MODE_RCV_ONLY                                               (5u)
#define LIN_GET_MODE_NORMAL                                                 (7u)
#define LIN_SLOPE_NORMAL                                                    (0u)
#define LIN_SLOPE_FAST                                                      (1u)
#define LIN_SLOPE_LOW                                                       (2u)
#define LIN_SLOPE_FLASH                                                     (3u)

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void   LIN_Init                                        (void);
extern uint8  LIN_End_Of_Sync_Sts                             (void);
extern uint8  LIN_Err_In_Sync_Sts                             (void);
extern uint8  LIN_Break_Sts                                   (void);
extern void   LIN_Break_Detect_En                             (void);
extern void   LIN_Break_Detect_Dis                            (void);
extern void   LIN_BaudRate_Range_Sel                          (uint8 a);
extern void   LIN_Over_Curr_Int_Clr                           (void);
extern void   LIN_Over_Temp_Int_Clr                           (void);
extern void   LIN_Time_Out_Int_Clr                            (void);
extern void   LIN_End_Of_Sync_Int_Clr                         (void);
extern void   LIN_Err_In_Sync_Int_Clr                         (void);
extern void   LIN_Break_Int_Clr                               (void);
extern void   LIN_Over_Curr_Int_En                            (void);
extern void   LIN_Over_Curr_Int_Dis                           (void);
extern void   LIN_Over_Temp_Int_En                            (void);
extern void   LIN_Over_Temp_Int_Dis                           (void);
extern void   LIN_Time_Out_Int_En                             (void);
extern void   LIN_Time_Out_Int_Dis                            (void);
extern void   LIN_Sync_Int_En                                 (void);
extern void   LIN_Sync_Int_Dis                                (void);
extern void   LIN_Set_Mode                                    (uint8 Mode);
extern uint32 LIN_Get_Mode                                    (void);
extern void   LIN_Set_Slope                                   (uint8 SlopeMode);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

