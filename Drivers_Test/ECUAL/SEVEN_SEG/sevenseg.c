/*
 * sevenseg.c
 *
 *  Created on: Sep 15, 2022
 *      Author: mohamed
 */
#include "sevenseg.h"



void SEVSEG_init()
{
	DIO_init (PIN_0,PORT_D,OUT);
	DIO_init (PIN_1,PORT_D,OUT);
	DIO_init (PIN_2,PORT_D,OUT);
	DIO_init (PIN_3,PORT_D,OUT);
	DIO_init (PIN_4,PORT_D,OUT) ;
	DIO_init (PIN_5,PORT_D,OUT) ;
	DIO_init (PIN_6,PORT_D,OUT) ;
	DIO_init (PIN_7,PORT_D,OUT) ;




}

void SEVSEG1_cc_write_todecoder (uint8_t Number )
{
	(GET_BIT(Number,0)) ? DIO_write(PIN_0,PORT_D,HIGH) : DIO_write(PIN_0,PORT_D,LOW) ;
	(GET_BIT(Number,1)) ? DIO_write(PIN_1,PORT_D,HIGH) : DIO_write(PIN_1,PORT_D,LOW) ;
	(GET_BIT(Number,2)) ? DIO_write(PIN_2,PORT_D,HIGH) : DIO_write(PIN_2,PORT_D,LOW) ;
	(GET_BIT(Number,3)) ? DIO_write(PIN_3,PORT_D,HIGH) : DIO_write(PIN_3,PORT_D,LOW) ;
}

void SEVSEG2_cc_write_todecoder (uint8_t Number )
{

	(GET_BIT(Number,0)) ? DIO_write(PIN_4,PORT_D,HIGH) : DIO_write(PIN_4,PORT_D,LOW) ;
	(GET_BIT(Number,1)) ? DIO_write(PIN_5,PORT_D,HIGH) : DIO_write(PIN_5,PORT_D,LOW) ;
	(GET_BIT(Number,2)) ? DIO_write(PIN_6,PORT_D,HIGH) : DIO_write(PIN_6,PORT_D,LOW) ;
	(GET_BIT(Number,3)) ? DIO_write(PIN_7,PORT_D,HIGH) : DIO_write(PIN_7,PORT_D,LOW) ;

}








