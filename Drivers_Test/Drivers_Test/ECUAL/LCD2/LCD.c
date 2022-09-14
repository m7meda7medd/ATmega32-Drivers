/*
 * LCD.c
 *
 *  Created on: 11/9/2022
 *      Author: Mohamed Samir
 */
#include  "LCD.h"

static void LCD_Trigger_Enable();

void LCD_Init ()
{
	_delay_ms(35);

	/*
	 * Function set:
	 *	DL = 1 : 8 bit interface operation
	 *	N = 0 : 1 - line display
	 *	F = 0 : 5 x 7 dot character font
	 */
	LCD_SendCommand (0x02);
	LCD_SendCommand (0x02);
	LCD_SendCommand (0x08); //0bNF00 --> 4bit Mode SELECTED
	_delay_us(40);

	//Display ON/OFF control
	LCD_SendCommand (0x00);
	LCD_SendCommand (Disp);
	_delay_us(40);

	LCD_SendCommand (0x00);
	LCD_SendCommand (CLRSc); // Clear Display screen
	_delay_ms(2);

	LCD_SendCommand (0x00);
	LCD_SendCommand (EnMode);



}

void LCD_SendCommand(uint8_t  cmd)
{
	// RS=0 to send a Command and RS=1 to send Instraction
	DIO_write (RS,PORT_B,LOW);
	// RW=0 to Write and RW=1 to Read
	DIO_write (RW,PORT_B,LOW);
	// Write Command

	(GET_BIT(cmd,0)) ? DIO_write(D4,PORT_A,HIGH) : DIO_write(D4,PORT_A, LOW);
	(GET_BIT(cmd,1)) ? DIO_write(D5,PORT_A, HIGH) : DIO_write(D5, PORT_A,LOW);
	(GET_BIT(cmd,2)) ? DIO_write(D6,PORT_A, HIGH) : DIO_write(D6,PORT_A, LOW);
	(GET_BIT(cmd,3)) ? DIO_write(D7,PORT_A, HIGH) : DIO_write(D7, PORT_A,LOW);

	// Enable=1 for 230 nano secounds
	LCD_Trigger_Enable() ;



}
void LCD_SendData(uint8_t  Data)
{
	// RS=0 to send a Command and RS=1 to send Instraction
	DIO_write (RS,PORT_B,HIGH);
	// RW=0 to Write and RW=1 to Read
	DIO_write (RW,PORT_B,LOW);
	// Write Command By Sending UPPER 4bit FIRST
	(GET_BIT(Data,4)) ? DIO_write(D4,PORT_A, HIGH) : DIO_write(D4,PORT_A, LOW);
	(GET_BIT(Data,5)) ? DIO_write(D5,PORT_A, HIGH) : DIO_write(D5,PORT_A, LOW);
	(GET_BIT(Data,6)) ? DIO_write(D6,PORT_A, HIGH) : DIO_write(D6,PORT_A, LOW);
	(GET_BIT(Data,7)) ? DIO_write(D7,PORT_A, HIGH) : DIO_write(D7,PORT_A, LOW);


	// Enable=1 for 230 nano secounds
	LCD_Trigger_Enable() ;

	(GET_BIT(Data,0)) ? DIO_write(D4,PORT_A, HIGH) : DIO_write(D4,PORT_A, LOW);
	(GET_BIT(Data,1)) ? DIO_write(D5,PORT_A, HIGH) : DIO_write(D5,PORT_A, LOW);
	(GET_BIT(Data,2)) ? DIO_write(D6,PORT_A, HIGH) : DIO_write(D6,PORT_A, LOW);
	(GET_BIT(Data,3)) ? DIO_write(D7,PORT_A, HIGH) : DIO_write(D7,PORT_A, LOW);

	LCD_Trigger_Enable() ;

}

void LCD_Trigger_Enable()
{
	DIO_write(EN,PORT_B ,HIGH);
	_delay_us(10);
	DIO_write(EN,PORT_B, LOW);
}

void LCD_SendString  (uint8_t  *Data)
{
	while( *Data > 0)
		{
			LCD_SendData(*Data++);
		}
}

void LCD_SendString_xy  (uint8_t  *Data,uint8_t  x, uint8_t  y)
{
	LCD_Pos(x,y);
	LCD_SendString(Data);
}
void LCD_Pos (uint8_t x_pos, uint8_t  y_pos)
{
// x_pos from 0 to 1
// y_pos from 0 to 15
	//u8 UAdress = 0 ;
	uint8_t  Adress = 0 ;
	if (0 == x_pos)
	{
		Adress = 0x80 ;
	}
	else if (1 == x_pos)
	{
		Adress = 0xc0 ;
	}
	if (y_pos < 16)
	{
		Adress += y_pos ;
	}
	else{LCD_SendString((uint8_t *)"ERROR"); /*Error (out of range)*/ }

	LCD_SendCommand (Adress>>4) ;
	LCD_SendCommand (Adress) ;
	//LCD_SendCommand (LAdress) ;
}
void LCD_Clr(void)
{
	LCD_SendCommand(CLRSc>>4);
	LCD_SendCommand (CLRSc); // Clear Display screen
	_delay_ms(2);
}
