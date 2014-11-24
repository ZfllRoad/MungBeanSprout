/* #include "stm32f0_i2cSim.h" */

#ifndef __STM32F0_I2CSIM_H
#define __STM32F0_I2CSIM_H

#include "stm32f0xx.h"
/*====================================================================================================*/
/*====================================================================================================*/
void    I2C_Config( void );
void    I2C_SendByte( uint8_t SendByte );
uint8_t I2C_RecvByte( void );
void    I2C_WriteReg( uint8_t SlaveAddr, uint8_t RegisterAddr, uint8_t WriteData );
void    I2C_ReadReg( uint8_t SlaveAddr, uint8_t RegisterAddr, uint8_t *ReadData );
void    I2C_ReadRegs( uint8_t SlaveAddr, uint8_t RegisterAddr, uint8_t *ReadData, uint8_t NumByte );
/*====================================================================================================*/
/*====================================================================================================*/
#endif