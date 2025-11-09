/**
* @file LCD.h
* @author Ivan Kozemchuk
* @brief LCD library
* @version 0.1
* @date 2024-09-13
*
*/

#ifndef LCD_LCD_H_
#define LCD_LCD_H_

#include "stdint.h"

void LCD_Init(void);
void LCD_SendChar(char ch);
void LCD_SendString(char *str);
void LCD_Clear(void);

#endif /* LCD_LCD_H_ */
