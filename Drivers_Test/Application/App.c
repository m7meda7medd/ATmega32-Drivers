#include "App.h"
uint8_t counter= 0;
uint8_t flag =0 ;
void APP_init() {
	SET_BIT(SREG,7) ;
	LED_init(PORT_B, PIN_3) ;
	TIMER0_init();
	TIMER0_OVF_callback(TIMER0_Software_PWM) ;
}

void APP_start() {
while (1)
{
	flag++ ;
	_delay_ms(1000) ;
	if(flag == 11)
		flag = 0 ;

}


}

void TIMER0_Software_PWM(uint8_t value,uint8_t PORT, uint8_t PIN) {
	if (counter <value)
		LED_off(PORT,PIN) ;
	else if (counter >=value)
	{
			LED_on(PORT,PIN);
	}
	if (counter == 100)
		 counter =0 ;
	}



