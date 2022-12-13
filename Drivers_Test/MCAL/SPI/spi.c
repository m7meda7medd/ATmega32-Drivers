/*
 * spi.c
 *
 *  Created on: Oct 8, 2022
 *      Author: mohamed
 */
/*
#include "spi.h"

void SPI_slave_init()
{
	SET_BIT(SPCR,SPE) ;
	SET_BIT(SPCR,SPR0) ;


}

void SPI_master_init()
{	DIO_init(PIN_5,PORT_B,OUT) ;
	DIO_init(PIN_6,PORT_B,IN) ;
	DIO_init(PIN_4,PORT_B,OUT) ;
	DIO_init(PIN_7,PORT_B,OUT) ;
	SET_BIT(SPCR,SPE) ;
	SET_BIT(SPCR,SPR0) ;
	SET_BIT(SPCR,MSTR) ;


}

void SPI_send(uint8_t Data)
{
	SPDR=Data ;


}

uint8_t SPI_read()
{

	while (GET_BIT(SPSR,SPIF) ==0 ) ;
	return SPDR ;

}
*/
