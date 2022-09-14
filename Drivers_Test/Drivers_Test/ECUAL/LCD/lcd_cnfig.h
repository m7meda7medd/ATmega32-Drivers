/*
 * lcd_cnfig.h
 *  Author: mohamed
 */ 


#ifndef LCD_CNFIG_H_
		#define LCD_CNFIG_H_


#define RS  PIN_7 // PIN 7 in port A
#define RW  PIN_6   // PIN_6 in PORT A
#define EN  PIN_5 // PIN_5 in port A 
#define EN_PORT  PORT_A
#define RW_PORT PORT_A
#define RS_PORT PORT_A
#define LCD_PORT PORT_A


// Initialization
/*
 * Display ON/OFF Control:
 *	D = 0 : Display OFF
 *	C = 0 : Cursor OFF
 *	B = 0 : Blink OFF
 */

#define Disp		0x0f //0b1DCB
#define CLRSc		0x01 // Clear Display screen

/*
 *	Entry Mode Set
 *	I/D = 1 : +1 (Increment Mode) (to Right)
 *	S = 0 : No Display Shift operation
 */
#define EnMode		0x06 // 0b 0 1 I/D SH





#endif /* LCD_CNFIG_H_ */