/*
 * sevenseg.h
 *
 *  Created on: Sep 15, 2022
 *      Author: mohamed
 */

#ifndef ECUAL_SEVEN_SEG_SEVENSEG_H_
	#define ECUAL_SEVEN_SEG_SEVENSEG_H_


#include <util/delay.h>
#include "sevensegCnfg.h"
#include "../../MCAL/McalReg/Registers.h"
#include "../../MCAL/McalReg/Typedefs.h"
#include "../../MCAL/DIO/dio.h"

void SEVSEG2_cc_write_todecoder (uint8_t Number ) ;
void SEVSEG1_cc_write_todecoder (uint8_t Number ) ;
void SEVSEG_init() ;











#endif /* ECUAL_SEVEN_SEG_SEVENSEG_H_ */
