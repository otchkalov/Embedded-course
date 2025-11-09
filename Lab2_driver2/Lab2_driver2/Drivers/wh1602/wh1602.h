/**
* @file wh1602.h
* @author Oleksii Chkalov
* @brief wh1602 driver
* @version 0.1
* @date 2024-09-13
*
*/
#ifndef WH1602_WH1602_H_
#define WH1602_WH1602_H_

#include <stdint.h>
#include "stm32f4xx_hal.h"

#define LCD_RS_PORT		GPIOE
#define LCD_RS_PIN		GPIO_PIN_7
#define LCD_RW_PORT		GPIOE
#define LCD_RW_PIN		GPIO_PIN_10
#define LCD_E_PORT		GPIOE
#define LCD_E_PIN		GPIO_PIN_11
#define LCD_DB0_PORT	GPIOE
#define LCD_DB0_PIN		GPIO_PIN_0
#define LCD_DB1_PORT	GPIOE
#define LCD_DB1_PIN		GPIO_PIN_0
#define LCD_DB2_PORT	GPIOE
#define LCD_DB2_PIN		GPIO_PIN_0
#define LCD_DB3_PORT	GPIOE
#define LCD_DB3_PIN		GPIO_PIN_0
#define LCD_DB4_PORT	GPIOE
#define LCD_DB4_PIN		GPIO_PIN_12
#define LCD_DB5_PORT	GPIOE
#define LCD_DB5_PIN		GPIO_PIN_13
#define LCD_DB6_PORT	GPIOE
#define LCD_DB6_PIN		GPIO_PIN_14
#define LCD_DB7_PORT	GPIOE
#define LCD_DB7_PIN		GPIO_PIN_15

#define LCD_WAIT_DELAY_US		40//us
#define LCD_E_PULSE_DURATION	1//us


void wh1602_Init(void);
void wh1602_Command(uint8_t dt);
void wh1602_SendChar(char ch);
void wh1602_Clear(void);

#endif /* WH1602_WH1602_H_ */
