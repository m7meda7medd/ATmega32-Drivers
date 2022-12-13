/*
 * adccnfg.h
 *
 *  Created on: Sep 26, 2022
 *      Author: mohamed
 */

#ifndef MCAL_ADC_ADCCNFG_H_
#define MCAL_ADC_ADCCNFG_H_

#define ENABLED 1
#define DISABLED 0
//***************************************************************
#define AREF 0
#define AVCC 1
#define INTERNAL_REF 2
//****************************************************************
#define VOLTAGE_REF_MODE  AVCC              // configure here@@@@@@@@@@@@@@@@@@@@
//***************************************************************
#define FREE_RUN 0
#define ANALOG_COMP 1
#define ADC_EXT_INT0 2
#define T0_CTC 3
#define T0_OVF 4
#define T1_CTC 5
#define T1_OVF 6
#define T1_CAPT_EVENT 7
//******************************************************************************
#define Auto_Trigger  DISABLED  	//configure here   @@@@@@@@@@@@@@@@@@@@@@@@@@@
#define Auto_Trigger_MODE    FREE_RUN   //configure here @@@@@@@@@@@@@@@@@@@@@@@@@
//******************************************************************************
#define ADC_PRESC2	0
#define ADC_PRESC4 	1
#define ADC_PRESC8 	2
#define ADC_PRESC16  3
#define ADC_PRESC32 	4
#define ADC_PRESC64 	5
#define ADC_PRESC128 6
//************************************************************************
#define ADC_PRESCALAR  ADC_PRESC64    // configure here//@@@@@@@@@@@@
//************************************************************************
//**************************************************************************
typedef enum
{    ADC0,
	 ADC1,
	 ADC2,
	 ADC3,
	 ADC4,
	 ADC5,
	 ADC6,
	 ADC7
}ADC_PINS;
//***********************ADMUX bits*****************************************
#define MUX0 0
#define MUX1 1
#define MUX2 2
#define MUX3 3
#define MUX4 4
// to control the way of storing the value in ADC
#define ADLAR 5
// reference voltage
#define REFS0 6
#define REFS1 7
//********************************************************************
//***********************ADCSRA bits**********************************
#define ADPS0 0
#define ADPS1 1
#define ADPS2 2
#define ADIE  3
#define ADIF  4
#define ADATE 5
#define ADSC  6
#define ADEN  7
//**********************************************************************
//***********************SFIOR bits*************************************
#define ADTS2  7
#define ADTS1  6
#define ADTS0  5
//**********************************************************************



#endif /* MCAL_ADC_ADCCNFG_H_ */
