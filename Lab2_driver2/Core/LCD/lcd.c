/**
* @file LCD.c
* @author Ivan Kozemchuk
* @brief LCD library
* @version 0.1
* @date 2024-09-13
*
*/
#include "wh1602.h"
#include "lcd.h"
/**
* @brief LCD initialization
*
*/
void LCD_Init(void)
{
wh1602_Init();
}
/**
* @brief Show character on the display
*
* @param ch symbol to display
*/
void LCD_SendChar(char ch)
{
	char ch_str[2];
	ch_str[0] = ch;
	ch_str[1] = (char)0x0;

	wh1602_SendStr(ch_str);
}
/**
* @brief Show an array of characters on the display
*
* @param str strinh/array to display
* @param size number of characters
*/
void LCD_SendString(char *str)
{
	wh1602_SendStr(str);
	/*
	while (*str)
		{
		wh1602_Print(*str++);
		}
	*/
}
/**
* @brief Clear the LCD
*
*/
void LCD_Clear(void)
{
	wh1602_Clear();
}

