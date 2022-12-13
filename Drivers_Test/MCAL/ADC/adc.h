/*
 * adc.h
 *
 *  Created on: Sep 20, 2022
 *      Author: mohamed
 */

#ifndef MCAL_ADC_ADC_H_
	#define MCAL_ADC_ADC_H_

#include "adccnfg.h"
#include "../McalReg/Registers.h"
#include "../McalReg/Typedefs.h"




void ADC_init() ;
uint16 ADC_read(uint8_t channel) ;
void ADC_channel(uint8_t channel) ;
void ADC_waitflag() ;










#endif /* MCAL_ADC_ADC_H_ */
