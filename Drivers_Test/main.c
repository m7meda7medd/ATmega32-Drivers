/*
 * Drivers_Test.c
 *
 * Created: 9/13/2022 11:37:24 AM
 * Author : mohamed
 */ 
#include "Application/App.h"
#define F_CPU 16000000UL
int main(void)
{
	LCD_4bit_init() ;


while (1)
{

	LCD_4bit_sendstring_x_y(5, 0, "Love u ") ;

}
}
