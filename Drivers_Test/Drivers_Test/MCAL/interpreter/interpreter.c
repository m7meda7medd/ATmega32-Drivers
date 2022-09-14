/*
 * intrpreter.c
 *
 * Created: 9/6/2022 12:21:58 AM
 *  Author: mohamed
 */ 

#include "interpreter.h"

void SET_INT0_RISINGEDGE(void)
{	SET_BIT(SREG,7) ;
	SET_BIT(MCUCR,0) ;
	SET_BIT(MCUCR,1) ;
	SET_BIT(GICR,6) ;
	
	
}