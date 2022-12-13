/*
 * Timer0.c
 *
 *  Created on: Oct 11, 2022
 *      Author: mohamed
 */
#include "util/delay.h"
#define F_CPU 8000000UL
#include "Timer0.h"
extern uint8_t counter ;
extern uint8_t flag ;
//************************************************TIMER0*************************************************************
void (*T0__OVF_ptf)(uint8_t,uint8_t,uint8_t)  ;
void (* T0__CTC_ptf)(void) ;
//*********************************************************************************************************************
void TIMER0_init(void)
{
#if TIMER0_MODE == NORMAL_MODE
	CLR_BIT(TCCR0,WGM00) ;
	CLR_BIT(TCCR0,WGM01) ;

#if TIMER0_INT_MODE == ENABLED
	SET_BIT(TIMSK,TOIE0) ;

#endif

#elif TIMER0_MODE == CTC_MODE
	CLR_BIT(TCCR0,WGM00)  ;
	SET_BIT(TCCR0,WGM01	) ;

#if TIMER0_CTC_OC0_MODE == TOG_OC0
	SET_BIT(TCCR0,COM00) ;
	CLR_BIT(TCCR0,COM01) ;

#elif TIMER0_CTC_OC0_MODE == NORMAL
	CLR_BIT(TCCR0,COM00) ;
	CLR_BIT(TCCR0,COM01) ;



#elif TIMER0_CTC_OC0_MODE == CLR_OC0
	CLR_BIT(TCCR0,COM00) ;
	SET_BIT(TCCR0,COM01) ;



#elif TIMER0_CTC_OC0_MODE == SET_OC0
	SET_BIT(TCCR0,COM00) ;
	SET_BIT(TCCR0,COM01) ;


#endif
#if TIMER0_INT_MODE == ENABLED
	SET_BIT(TIMSK,OCIE0) ;

#endif

#elif TIMER0_MODE == PC_PWM
	SET_BIT(TCCR0,WGM00)  ;
	CLR_BIT(TCCR0,WGM01	) ;

#if TIMER0_PWM_MODE == INV_PWM
	SET_BIT(TCCR0,COM00) ;
	SET_BIT(TCCR0,COM01) ;

#elif TIMER0_PWM_MODE == NON_INVERT_PWM
	CLR_BIT(TCCR0,COM00) ;
	SET_BIT(TCCR0,COM01) ;


#endif
#elif TIMER0_MODE == F_PWM
	SET_BIT(TCCR0,WGM00)  ;
	SET_BIT(TCCR0,WGM01	) ;

#if TIMER0_PWM_MODE == INV_PWM
	SET_BIT(TCCR0,COM00) ;
	SET_BIT(TCCR0,COM01) ;

#elif TIMER0_PWM_MODE == NON_INVERT_PWM
	CLR_BIT(TCCR0,COM00) ;
	SET_BIT(TCCR0,COM01) ;

#endif
#endif
#if	TIMER0_PRESC == NOPRESC
		SET_BIT(TCCR0,CS00) ;
		CLR_BIT(TCCR0,CS01) ;
		CLR_BIT(TCCR0,CS02) ;
#elif TIMER0_PRESC == PRESC_8
		CLR_BIT(TCCR0,CS00) ;
		SET_BIT(TCCR0,CS01) ;
		CLR_BIT(TCCR0,CS02) ;
#elif TIMER0_PRESC == PRESC_64
		SET_BIT(TCCR0,CS00) ;
		SET_BIT(TCCR0,CS01) ;
		CLR_BIT(TCCR0,CS02) ;
#elif TIMER0_PRESC == PRESC_256
		CLR_BIT(TCCR0,CS00) ;
		CLR_BIT(TCCR0,CS01) ;
		SET_BIT(TCCR0,CS02) ;

#elif TIMER0_PRESC == PRESC_1024
		SET_BIT(TCCR0,CS00) ;
		CLR_BIT(TCCR0,CS01) ;
		SET_BIT(TCCR0,CS02) ;
#elif TIMER0_PRESC == EXT_CLK_FALLING
		CLR_BIT(TCCR0,CS00) ;
		SET_BIT(TCCR0,CS01) ;
		SET_BIT(TCCR0,CS02) ;
#elif TIMER0_PRESC == EXT_CLK_RISING
		SET_BIT(TCCR0,CS00) ;
		SET_BIT(TCCR0,CS01) ;
		SET_BIT(TCCR0,CS02) ;
#endif
}


void TIMER0_stop()
{
	CLR_BIT(TCCR0,CS00) ;
	CLR_BIT(TCCR0,CS01) ;
	CLR_BIT(TCCR0,CS02) ;

}


void TIMER0_delay(uint32_t counter)
{
	while (counter--)
	{
	while (GET_BIT(TIFR,TOV0)==0) ;
	TCNT0=0 ;
	SET_BIT(TIFR,TOV0) ; // clear the flag manually
	}
}

void TIMER0_setOCRCvalue(uint8_t value)
{
	OCR0 = value ;
}

//************************************ functions related to interrupt with timer****************************

void TIMER0_OVF_callback(void (*ptf)(uint8_t,uint8_t,uint8_t))
{
	T0__OVF_ptf = ptf ;

}

void TIMER0_CTC_callback(uint8_t*ptf)
{
	T0__CTC_ptf = ptf ;

}

void TIMER0_GEN_PWM(uint8_t Value)
{ uint8_t  Value2= (Value*255/100) ;
 TIMER0_setOCRCvalue(Value2) ;

}

ISR(T0OVF_vect)
{TCNT0 = 55 ;
	counter++;
	 if (T0__OVF_ptf!=0)
		  T0__OVF_ptf(flag*10,PORT_B,PIN_3) ;



}

//****************************************************End Of TIMER0 Functions***********************
