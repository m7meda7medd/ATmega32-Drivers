/*
 * interpreter.h
 *
 * Created: 9/6/2022 12:22:18 AM
 *  Author: mohamed
 */ 


#ifndef INTERPRETER_H_
	#define INTERPRETER_H_

#include "../McalReg/Registers.h"
#include "../McalReg/Typedefs.h"

#define EXT_INT_0  __vector_1
#define EXT_INT_1  __vector_2	
 
#define ISR(INT_VECT) void INT_VECT(void)__attribute__((signal,used))  ; \
void INT_VECT(void)


void SET_INT0_RISINGEDGE(void);


#endif /* INTERPRETER_H_ */
