/*
 * spi.h
 *
 *  Created on: Oct 8, 2022
 *      Author: mohamed
 */

#ifndef MCAL_SPI_SPI_H_
	#define MCAL_SPI_SPI_H_
#include "../McalReg/Registers.h"
#include "../McalReg/Typedefs.h"
#include "../DIO/dio.h"




void SPI_slave_init() ;
uint8_t SPI_read(void) ;









#endif /* MCAL_SPI_SPI_H_ */
