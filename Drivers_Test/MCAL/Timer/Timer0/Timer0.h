/*
 * Timer0.h
 *
 *  Created on: Oct 11, 2022
 *      Author: mohamed
 */

#ifndef MCAL_TIMER_TIMER0_TIMER0_H_
#define MCAL_TIMER_TIMER0_TIMER0_H_

#include "../../McalReg/Registers.h"
#include "../../McalReg/Typedefs.h"
#include "../../DIO/dio.h"
#include "Timer0cnfg.h"

#define T0OVF_vect  __vector_11
#define T0CTC_vect  __vector_10
//***************************TIMER initialization**************************
void TIMER0_init(void) ; // initialize mode
void TIMER0_stop(void) ; // stop timer 0
//**********************************************************************
//************************* functions of CTC mode ***********************
void TIMER0_CTC_callback(uint8_t*ptf) ;
void TIMER0_setOCRCvalue(uint8_t value) ;
//***************************************************
//************************ functions of normal mode ***********************
void TIMER0_delay(uint32_t counter)  ;
void TIMER0_OVF_callback(void (*ptf)(uint8_t,uint8_t,uint8_t));
//*************************************************************************
//************************ functions of PWM mode ***********************
void TIMER0_GEN_PWM(uint8_t Value) ;
//**************************************************************

#endif /* MCAL_TIMER_TIMER0_TIMER0_H_ */
