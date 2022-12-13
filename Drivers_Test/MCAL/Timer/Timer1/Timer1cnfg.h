/*
 * Timer1cnfg.h
 *
 *  Created on: Oct 11, 2022
 *      Author: mohamed
 */

#ifndef MCAL_TIMER_TIMER1_TIMER1CNFG_H_
#define MCAL_TIMER_TIMER1_TIMER1CNFG_H_
//*************************************Timer1***************************
//*************************PRESCALAR MODES**********************************************
#define NOPRESC    	 0
#define PRESC_8		 1
#define PRESC_64 	 2
#define PRESC_256 	 3
#define PRESC_1024   4
#define EXT_CLK_FALLING     5
#define EXT_CLK_RISING      6
//*******************************Timer1-Modes************************************************
#define NORMAL  		0
#define PWM_PC_8		1
#define PWM_PC_9		2
#define PWM_PC_10		3
#define CTC_TOP_OCR1A   4
#define PWM_FAST_8  	5
#define PWM_FAST_9 	 	6
#define PWM_FAST_10 	7
#define PWM_PFC_TOP_ICR1 	8
#define PWM_PFC_TOP_OCR1A  9
#define PWM_PC_TOP_ICR1   10
#define PWM_PC_TOP_OCR1A  11
#define CTC_TOP_ICR1 		 12
#define PWM_FAST_TOP_ICR1  14
#define PWM_FAST_TOP_OCR1A  15
//**************************************************
#define TIMER1_MODE NORMAL  // configure here     <---------
#define TIMER1_PRESC  PRESC_256 // configure here     <---------
#define TIMER1_PWM_MODE  INV_PWM // configure here     <---------
#define TIMER1_CTC_OC0_MODE  NORMAL  // configure here     <---------
#define TIMER1_INT_MODE DISABLED // configure here
//***************************************************







#endif /* MCAL_TIMER_TIMER1_TIMER1CNFG_H_ */
