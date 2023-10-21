/*
 * Led.c
 *
 *  Created on: Oct 20, 2023
 *      Author: SCH
 */

#include "DRV_Config.h"
#include "DRV_Interface.h"

/*
 * Description :
 * Setup the direction of the required pins input/output.
 */
void Setup_LedDirection(void)
{
	GPIO_SetupPinDirection(PORTB_ID,PIN7_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTA_ID,PIN4_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTA_ID,PIN5_ID,PIN_OUTPUT);
	GPIO_SetupPinDirection(PORTA_ID,PIN6_ID,PIN_OUTPUT);
}

/*
 * Description :
 * Initialize the required pins to zero to set the required value:
 * by clear bit7 in PORTB and bit 4,5,6 in PORTA
 */
void Init_Led(uint8 port_num, uint8 pin_num)
{
	GPIO_SetupPinValue(port_num, pin_num, LOGIC_LOW);
}



/*
 * Description :
 * Setup the value of the required pin logic_high if led is ON.
 */
void Setup_LED_ON(uint8 port_num, uint8 pin_num)
{
	GPIO_SetupPinValue(port_num, pin_num, LOGIC_HIGH);
}

/*
 * Description :
 * Setup the value of the required pin logic_low if led is OFF.
 */
void Setup_LED_OFF(uint8 port_num, uint8 pin_num)
{
	GPIO_SetupPinValue(port_num, pin_num, LOGIC_LOW);
}
