/*
 * Timer1.h
 *
 *  Created on: Oct 11, 2022
 *      Author: mohamed
 */

#ifndef MCAL_TIMER_TIMER1_TIMER1_H_
#define MCAL_TIMER_TIMER1_TIMER1_H_

#include "Timer1cnfg.h"
#include "../../McalReg/Registers.h"
#include "../../McalReg/Typedefs.h"



void TIMER1_init(void) ;

void TIMER1_delay(uint32_t counter);

#endif /* MCAL_TIMER_TIMER1_TIMER1_H_ */
