#ifndef WH1602_H
#define WH1602_H

#include "stm32f4xx_hal.h"   // adjust to your STM32 family

// ==== Pin Configuration ====
// Control pins
#define WH1602_RS_GPIO   GPIOE
#define WH1602_RS_PIN    GPIO_PIN_7

#define WH1602_RW_GPI0	 GPIOE
#define WH1602_RW_PIN	 GPIO_PIN_10

#define WH1602_EN_GPIO   GPIOE
#define WH1602_EN_PIN    GPIO_PIN_11

// Data pins D0–D7
#define WH1602_D0_GPIO   GPIOE
#define WH1602_D0_PIN    GPIO_PIN_0
#define WH1602_D1_GPIO   GPIOE
#define WH1602_D1_PIN    GPIO_PIN_0
#define WH1602_D2_GPIO   GPIOE
#define WH1602_D2_PIN    GPIO_PIN_0
#define WH1602_D3_GPIO   GPIOE
#define WH1602_D3_PIN    GPIO_PIN_0
#define WH1602_D4_GPIO   GPIOE
#define WH1602_D4_PIN    GPIO_PIN_12
#define WH1602_D5_GPIO   GPIOE
#define WH1602_D5_PIN    GPIO_PIN_13
#define WH1602_D6_GPIO   GPIOE
#define WH1602_D6_PIN    GPIO_PIN_14
#define WH1602_D7_GPIO   GPIOE
#define WH1602_D7_PIN    GPIO_PIN_15


// ==== Functions ====
void wh1602_Init(void);
void wh1602_Clear(void);
void wh1602_Home(void);
void wh1602_SetCursor(uint8_t row, uint8_t col);
void wh1602_SendChar(char ch);
void wh1602_SendStr(char *str);

#endif
