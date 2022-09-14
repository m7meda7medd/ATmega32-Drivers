/*
 * CFile1.c
 *  Author: mohamed
 */ 
#include"dio.h"
void DIO_init(uint8_t PinNumber , uint8_t PORTNO , uint8_t Direction)
{
	switch (PORTNO)
{		
 case PORT_A :
 { if (Direction == IN)
	 {
		CLR_BIT(DDRA,PinNumber) ;
		 
	 }
	 else if (Direction == OUT)
	 {
		SET_BIT(DDRA,PinNumber) ;
	 }
	 else {
		 // error handling
	 }
	 break ;
 	}
	 case PORT_B:
	 { if (Direction == IN)
		 {
			 CLR_BIT(DDRB,PinNumber)  ;
			 
		 }
		 else if (Direction == OUT)
		 {
			 SET_BIT(DDRB,PinNumber) ;
		 }
		 else {
			 // error handling
		 }
		 break ;
	 }	
 case PORT_C :
 { if (Direction == IN)
	 {
		 DDRC &=~(1<<PinNumber) ;
		 
	 }
	 else if (Direction == OUT)
	 {
		 SET_BIT(DDRC,PinNumber) ;
	 }
	 else {
		 // error handling
	 }
	 break ;
 }
  case PORT_D :
  { if (Direction == IN)
	  {
		  DDRD &=~(1<<PinNumber) ;
		  
	  }
	  else if (Direction == OUT)
	  {
		  SET_BIT(DDRD,PinNumber) ;
	  }
	  else {
		  // error handling
	  }
	  break ;
  }
}
		
}
void DIO_write(uint8_t PinNumber , uint8_t PORTNO , uint8_t Value)
{
	
	switch (PORTNO)
	{
		case PORT_A :
		{ if (Value == LOW)
			{
				PORTA &=~(1<<PinNumber) ;
				
			}
			else if (Value == HIGH)
			{
				PORTA |=(1<<PinNumber) ;
			}
			else {
				// error handling
			}
			break ;
		}
		case PORT_B:
		{ if (Value == LOW)
			{
				PORTB &=~(1<<PinNumber) ;
				
			}
			else if (Value == HIGH)
			{
				PORTB |=(1<<PinNumber) ;
			}
			else {
				// error handling
			}
			break ;
		}
		
		case PORT_C :
		{ if (Value == LOW)
			{
				PORTC &=~(1<<PinNumber) ;
				
			}
			else if (Value == HIGH)
			{
				PORTC |=(1<<PinNumber) ;
			}
			else {
				// error handling
			}
			break ;
		}
		case PORT_D :
		{ if (Value == LOW)
			{
				PORTD &=~(1<<PinNumber) ;
				
			}
			else if (Value == HIGH)
			{
				PORTD |=(1<<PinNumber) ;
			}
			else {
				// error handling
			}
			break ;
		}
	}
}
void DIO_toggle(uint8_t PinNumber , uint8_t PORTNO )
{
	
	switch (PORTNO)
	{
		case PORT_A :
		{ ((PINA&(1<<PinNumber))>>PinNumber) ? (PORTA &= ~(1<<PinNumber)) :(PORTA |=(1<<PinNumber)) ;
			break ;
		}
		case PORT_B:
		{ ((PINB&(1<<PinNumber))>>PinNumber) ? (PORTB &= ~(1<<PinNumber)) :(PORTB |=(1<<PinNumber)) ;
			break ;
		}
		
		case PORT_C :
		{ ((PINC&(1<<PinNumber))>>PinNumber) ? (PORTC &= ~(1<<PinNumber)) :(PORTC |=(1<<PinNumber)) ;
			break ;
		}
		case PORT_D :
		{ ((PIND&(1<<PinNumber))>>PinNumber) ? (PORTD &= ~(1<<PinNumber)) :(PORTD |=(1<<PinNumber)) ;
			break ;
		}
	}
}
void DIO_read(uint8_t PinNumber , uint8_t PORTNO , uint8_t*ptr)
{ 
	switch (PORTNO)
	{
		case PORT_A :
		{ *ptr =((PINA&(1<<PinNumber))>>PinNumber)  ;
			break ;
		}
		case PORT_B:
		{ *ptr =((PINB&(1<<PinNumber))>>PinNumber)  ;
			break ;
		}
		
		case PORT_C :
		{ *ptr =((PINC&(1<<PinNumber))>>PinNumber)  ;
			break ;
		}
		case PORT_D :
		{ *ptr =((PIND&(1<<PinNumber))>>PinNumber)  ;
			break ;
		}
	}
}

enum Value DIO_returnbit(uint8_t PinNumber , uint8_t PORTNO)
{
	return (GET_BIT(PORTNO,PinNumber)) ;
	
}

