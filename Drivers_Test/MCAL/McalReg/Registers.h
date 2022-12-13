/*
 * Register.h
 *  Author: mohamed
 */ 


#ifndef REGISTERS_H_
	#define REGISTERS_H_

#define ISR(EXT_INT)  void EXT_INT()__attribute__((signal,used)) ;\
void EXT_INT ()
//*************************************************************	
//PORT REGISTERS
//*************************************************************
// Port A MACROS
#define PORTA	 *((volatile uint8_t*)0x3B)
#define DDRA	 *((volatile uint8_t*)0x3A)
#define PINA	 *((volatile uint8_t*)0x39)
// Port B MACROS
#define PORTB	 *((volatile uint8_t*)0x38)
#define DDRB	 *((volatile uint8_t*)0x37)
#define PINB	 *((volatile uint8_t*)0x36)
// Port C MACROS

#define PORTC	*((volatile uint8_t*)0x35)
#define DDRC	*((volatile uint8_t*)0x34)
#define PINC	*((volatile uint8_t*)0x33)

// Port D MACROS
#define PORTD	*((volatile uint8_t*)0x32)
#define DDRD	*((volatile uint8_t*)0x31)
#define PIND	*((volatile uint8_t*)0x30)


//*************************************************************
// Timer0 Registers
//*************************************************************
#define TCCR0	*((volatile uint8_t*)0x53)
#define TCNT0	*((volatile uint8_t*)0x52)
#define TIFR	*((volatile uint8_t*)0x58)
#define TIMSK 	*((volatile uint8_t*)0x59)
#define OCR0    *((volatile uint8_t*)0x5C)
//****************************************************************
 // TCCRO bits
#define CS00 	 0
#define CS01	 1
#define CS02 	2
#define WGM01  	3
#define WGM00  	4
#define COM00  	5
#define COM01  	6
#define FOC0  7
//************************ TIMSK bits**************************************
#define OCIE2 7
#define TOIE2 6
#define TICIE1 5
#define OCIE1A 4
#define OCIE1B 3
#define TOIE1 2
#define OCIE0  1
#define TOIE0 0
// TIFR bits
#define OCF2 7
#define TOV2 6
#define ICF1 5
#define OCF1A 4
#define OCF1B 3
#define TOV1 2
#define OCF0 1
#define TOV0 0
//SFIOR bits
#define PRS10 0 // reset the prescalar of T0 and T1 when Set PRS10

// Bit Macros	
//****************************************************************
#define SET_BIT(REG,BIT)  REG |=(1<<BIT) 
#define CLR_BIT(REG,BIT)  REG &= ~(1<<BIT)
#define TOG_BIT(REG,BIT)  REG ^=(1<<BIT)
#define GET_BIT(REG,BIT)  ((REG &(1<<BIT))>>BIT)	
#define ROT_LEFT (REG,n,Size)   REG = (REG<<n) | (REG>>(Size-n))
#define ROT_RIGHT (REG,n,Size)	REG = (REG>>n) | (REG<<(Size-n))
//*****************************************************************
// interrupt REG MACROS
//*****************************************************************
#define SREG   *((volatile uint8_t *)0x5F)
#define MCUCR  *((volatile uint8_t *)0x55)
#define GICR   *((volatile uint8_t *)0x5B)
#define MCUCSR  *((volatile uint8_t *)0x54)
//******************************************************************
//ADC REG Macros
//******************************************************************
#define ADCSRA  *((volatile uint8_t *)0x26)
#define ADMUX	*((volatile uint8_t *)0x27)
#define ADC 	*((volatile uint16 *)0x24)
#define SFIOR   *((volatile uint8_t *)0x50)
//******************************************************************
//*****************************UART Reg*****************************
#define UCSRB   *((volatile uint8_t *)0x2A)
#define UCSRC   *((volatile uint16 *)0x40)
//****************************SPI REG*****************************
#define TCCR1B  *((volatile uint8_t *)0x4E)
#define TCCR1A  *((volatile uint8_t *)0x4F)
#define TCNT1L  *((volatile uint8_t *)0x4C)
#define TCNT1   *((volatile uint16 *)0x4C)
#define TCNT1H  *((volatile uint8_t *)0x4D)
#define OCR1A	*((volatile uint16 *)0x4A)
#define OCR1AH  *((volatile uint8_t *)0x4B)
#define OCR1AL  *((volatile uint8_t *)0x4A)
#define OCR1B	*((volatile uint16 *)0x48)
#define OCR1BH  *((volatile uint8_t *)0x49)
#define OCR1BL	*((volatile uint8_t *)0x48)
#define ICR1   *((volatile uint16 *)0x46)
//*********************************************************************
//*****************TCCR1A-Bits****************************************
#define COM1A1 7
#define COM1A0 6
#define COM1B1 5
#define COM1B0 4
#define FOC1A  3
#define FOC1B 2
#define WGM11  1
#define WGM10 0
//*******************************************************************
//*****************TCCR1B-Bits****************************************
#define ICNC1 7
#define ICES1 6
#define WGM13 4
#define WGM12 3
#define CS12 2
#define CS11 1
#define CS10 0
//*****************************************************************





















#endif /*registers file*/
