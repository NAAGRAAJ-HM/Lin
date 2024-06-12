#include "Std_Types.hpp"

#include "infMcalLinMcalAta.hpp"

extern uint8  ucBytes2Send;
extern uint8* pucByte2Send;

enum RLIN30_status{
      RLIN30_busy
   ,  RLIN30_ready
};

void   RLIN30_init                     (void);
void   RLIN30_port_init                (void);
enum   RLIN30_status RLIN30_get_status (void);
void   RLIN30_table_setup              (void);
void   RLIN31_init                     (void);
void   RLIN31_port_init                (void);
void   RLIN30_send_string              (uint8  send_string[]);
void   RLIN30_send_integer             (uint16 send_integer);
void   RLIN30_send_byte                (uint8  send_byte);
void   WordIn4AsciiBytesToV24          (uint16 ushInteger);
void   ByteIn2AsciiToV24               (uint8  ucByte);
void   SendStringToV24                 (uint8  send_bytes);
void   WordInAsciiToV24                (uint16 ushInteger);
uint16 LowNibbleToAsciiWord            (uint8  ucByteValue);

#include "device.hpp"
#ifdef SPI4MFA
void infMcalLinMcalAta_vDisableCSig0(void){
   CSIG0CTL0 = 0x01;
}

void infMcalLinMcalAta_vEnableCSig0(void){
   CSIG0CTL0 |= 0xE0;
}

void infMcalLinMcalAta_vInitCSig0(void){
   CSIG0CTL0  = 0x01;
   CSIG0CTL1  = (1<< 17);
   CSIG0CTL2  = 0x4014;
   CSIG0CFG0  = 0x08010000;
   CSIG0STCR0 = 0xff;
   CSIG0CTL0 |= 0xE0;
}

uint8 infMcalLinMcalAta_u8ActiveTransferSpi(uint8 u8ValueByte){
   uint16 timeout = (500*10)-5;
   CSIG0TX0H      = u8ValueByte;
   while(
         ((CSIG0STR0 & 0x80) == 0x80)
      && (timeout-- >0)
   );
   return((uint8)CSIG0RX0);
}
#endif
