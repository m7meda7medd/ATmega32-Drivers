#ifndef APP_H
	#define APP_H

#include "../ECUAL/LED/led.h"
#include "../ECUAL/KeyPad/keypad.h"
#include "../ECUAL/LCD/lcd.h"
#include "../MCAL/Timer/Timer0/Timer0.h"
#include "../MCAL/ADC/adc.h"



void APP_init () ;
void APP_start () ;
void TIMER0_Software_PWM(uint8_t value,uint8_t PORT, uint8_t PIN)  ;
void application() ;

#endif // APP_H
