
#include "App.h"


void APP_init ()
{  LCD_4bit_init () ;
}

void APP_start ()
{ while (1)
	{ 	
	 LCD_4bit_sendchar('m') ;
		

	}
}

