/*
 * Timer0cnfg.h
 *
 *  Created on: Oct 11, 2022
 *      Author: mohamed
 */

#ifndef MCAL_TIMER_TIMER0_TIMER0CNFG_H_
#define MCAL_TIMER_TIMER0_TIMER0CNFG_H_


//********************************************************************************
#define ENABLED 1
#define DISABLED 0
//***************************************modes of timer***************************
#define NORMAL_MODE  0
#define CTC_MODE   1
#define F_PWM   2
#define PC_PWM  3
#define NORMAL_INT_MODE  4
#define CTC_INT_MODE 5
//**************************************PWM modes**************************************
#define NORMAL_PORT 0
#define NON_INVERT_PWM  1
#define INV_PWM   2
//******************************CTC_OCR_MODES*******************************************
#define NORMAL  0
#define CLR_OC0 1
#define TOG_OC0 2
#define SET_OC0 3
//*************************PRESCALAR MODES**********************************************
#define NOPRESC    	 0
#define PRESC_8		 1
#define PRESC_64 	 2
#define PRESC_256 	 3
#define PRESC_1024   4
#define EXT_CLK_FALLING     5
#define EXT_CLK_RISING      6
//*******************************TIMER0************************************
#define TIMER0_MODE  NORMAL_MODE    // configure here
#define TIMER0_INT_MODE ENABLED // configure here
#define TIMER0_PWM_MODE  INV_PWM // configure Here				<--------------
#define TIMER0_PRESC  PRESC_8     // configure here
#define TIMER0_CTC_OC0_MODE  NORMAL  // configure here
//**********************************************************************



#endif /* MCAL_TIMER_TIMER0_TIMER0CNFG_H_ */
