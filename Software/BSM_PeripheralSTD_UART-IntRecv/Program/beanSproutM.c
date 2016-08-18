/*=====================================================================================================*/
/*=====================================================================================================*/
#include "drivers\stm32f0_system.h"
#include "modules\serial.h"

#include "beanSproutM.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
void Serial_RecvEven( void )
{
  uint8_t recvData = Serial_RecvByte();
  if(recvData == 0x0D)
    Serial_SendStr("\r\n");
  else
    Serial_SendByte(recvData);
}

void BSM_Init( void )
{
  BSM_GPIO_Config();
  BSM_UART_Config(Serial_RecvEven);
}

void BSM_Loop( void )
{
  while(1) {

  }
}
/*=====================================================================================================*/
/*=====================================================================================================*/
