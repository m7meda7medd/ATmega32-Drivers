/*
 * LCD.h
 *
 *  Created on: 11/9/2022
 *      Author: Mohamed Samir
 */

#ifndef HAL_LCD_LCD_H_
#define HAL_LCD_LCD_H_


#include <util/delay.h>
#include  "LCD_Cfg.h"
#include "../../MCAL/DIO/dio.h"

void LCD_Init (void);

void LCD_SendCommand (uint8_t cmd);
void LCD_SendData (uint8_t Data);

void LCD_SendString  (uint8_t  *Data);
void LCD_SendString_xy  (uint8_t  *Data, uint8_t  x, uint8_t  y);
void LCD_Pos (uint8_t  x_pos, uint8_t y_pos);
void LCD_Clr(void);

#endif /* HAL_LCD_LCD_H_ */
