

#include "lcd.h"



void LCD_4bit_init ()
{	{
	_delay_ms(35);

	/*
	 * Function set:
	 *	DL = 1 : 8 bit interface operation
	 *	N = 0 : 1 - line display
	 *	F = 0 : 5 x 7 dot character font
	 */
	LCD_4bit_sendcmd (0x02);
	LCD_4bit_sendcmd (0x08); //0bNF00 --> 4bit Mode SELECTED
	_delay_us(40);

	//Display ON/OFF control
	LCD_4bit_sendcmd (0x00);
	LCD_4bit_sendcmd(Disp);
	_delay_us(40);

	LCD_4bit_sendcmd (0x00);
	LCD_4bit_sendcmd(CLRSc); // Clear Display screen
	_delay_ms(2);

	LCD_4bit_sendcmd(0x00);
	LCD_4bit_sendcmd(EnMode);
	
	DIO_init(EN,EN_PORT,OUT) ;
	DIO_init(RS,RS_PORT,OUT) ;
	DIO_init(RW,RW_PORT,OUT) ;
	DIO_init(PIN_0,LCD_PORT,OUT) ;
	DIO_init(PIN_1,LCD_PORT,OUT) ;
	DIO_init(PIN_2,LCD_PORT,OUT) ;
	DIO_init(PIN_3,LCD_PORT,OUT) ;



}
}
void LCD_4bit_sendcmd(uint8_t cmd)
{ 	DIO_write(RS,RS_PORT,LOW) ; // write 0 on RS to write command
	DIO_write(RW,RW_PORT,LOW) ; // write 0 on RW to write
	(GET_BIT(cmd,7)) ? DIO_write(PIN_0,PORT_A,HIGH) : DIO_write(PIN_0,LCD_PORT,HIGH) ;
	(GET_BIT(cmd,6)) ? DIO_write(PIN_1,LCD_PORT,HIGH) : DIO_write(PIN_1,LCD_PORT,HIGH) ;
	(GET_BIT(cmd,5)) ? DIO_write(PIN_2,LCD_PORT,HIGH) : DIO_write(PIN_2,LCD_PORT,HIGH) ;
	(GET_BIT(cmd,4)) ? DIO_write(PIN_3,LCD_PORT,HIGH) : DIO_write(PIN_3,LCD_PORT,HIGH) ;
	LCD_trig_EN() ;
	(GET_BIT(cmd,3)) ? DIO_write(PIN_0,LCD_PORT,HIGH) : DIO_write(PIN_0,LCD_PORT,HIGH) ;
	(GET_BIT(cmd,2)) ? DIO_write(PIN_1,LCD_PORT,HIGH) : DIO_write(PIN_1,LCD_PORT,HIGH) ; 	
	(GET_BIT(cmd,1)) ? DIO_write(PIN_2,LCD_PORT,HIGH) : DIO_write(PIN_2,LCD_PORT,HIGH) ;
	(GET_BIT(cmd,0)) ? DIO_write(PIN_3,LCD_PORT,HIGH) : DIO_write(PIN_3,LCD_PORT,HIGH) ;
		LCD_trig_EN() ;
}	
void LCD_4bit_sendstring (uint8_t* string)
{
	while (*string !='\0')
	{
		LCD_4bit_sendchar(*string) ;
		string++ ;
	}



}
void LCD_4bit_sendchar(uint8_t Char)
{ 	DIO_write(RS,RS_PORT,HIGH) ; // write 1 on RS to write Data
	DIO_write(RW,RW_PORT,LOW) ; // write 0 on RW to write
	(GET_BIT(Char,7)) ? DIO_write(PIN_0,LCD_PORT,HIGH) : DIO_write(PIN_0,LCD_PORT,HIGH) ;
	(GET_BIT(Char,6)) ? DIO_write(PIN_1,LCD_PORT,HIGH) : DIO_write(PIN_1,LCD_PORT,HIGH) ;
	(GET_BIT(Char,5)) ? DIO_write(PIN_2,LCD_PORT,HIGH) : DIO_write(PIN_2,LCD_PORT,HIGH) ;
	(GET_BIT(Char,4)) ? DIO_write(PIN_3,LCD_PORT,HIGH) : DIO_write(PIN_3,LCD_PORT,HIGH) ;
	LCD_trig_EN() ;
	(GET_BIT(Char,3)) ? DIO_write(PIN_0,LCD_PORT,HIGH) : DIO_write(PIN_0,LCD_PORT,HIGH) ;
	(GET_BIT(Char,2)) ? DIO_write(PIN_1,LCD_PORT,HIGH) : DIO_write(PIN_1,LCD_PORT,HIGH) ;
	(GET_BIT(Char,1)) ? DIO_write(PIN_2,LCD_PORT,HIGH) : DIO_write(PIN_2,LCD_PORT,HIGH) ;
	(GET_BIT(Char,0)) ? DIO_write(PIN_3,LCD_PORT,HIGH) : DIO_write(PIN_3,LCD_PORT,HIGH) ;
	LCD_trig_EN() ;
}
 void LCD_trig_EN(void)
{
	
	DIO_write(EN,EN_PORT,HIGH) ;
	_delay_us(10) ;
	DIO_write(EN,EN_PORT,LOW) ;
	
}

