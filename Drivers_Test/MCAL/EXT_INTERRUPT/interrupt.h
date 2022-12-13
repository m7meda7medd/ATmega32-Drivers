/*
 * interrupt.h
 *
 *  Created on: Sep 22, 2022
 *      Author: mohamed
 */

#ifndef MCAL_EXT_INTERRUPT_INTERRUPT_H_
#define MCAL_EXT_INTERRUPT_INTERRUPT_H_

#include "interruptcnfig.h"
#include "../McalReg/Registers.h"
#include "../McalReg/Typedefs.h"





void EXTINT_init(void) ;
void EXTINT_enable(EXTI_TYPES interrupt) ;
void EXTINT_disable(EXTI_TYPES interrupt) ;
void SET_CALLBACK_INT0(void (*p2f)(void)) ; // functions to execute functions from higher layer using interrupt in App layer
void SET_CALLBACK_INT1(void (*p2f)(void)) ;
void SET_CALLBACK_INT2(void (*p2f)(void)) ;


#endif /* MCAL_EXT_INTERRUPT_INTERRUPT_H_ */
