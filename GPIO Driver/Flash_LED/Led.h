/*
 * Led.h
 *
 *  Created on: Oct 20, 2023
 *      Author: SCH
 */

#ifndef LED_H_
#define LED_H_

#include "std_types.h"
/*
 * Description :
 * Setup the direction of the required pins input/output.
 */
void Setup_LedDirection(void);

/*
 * Description :
 * Initialize the required pins to zero to set the required value:
 * by clear bit7 in PORTB and bit 4,5,6 in PORTA
 */
void Init_Led(uint8 port_num, uint8 pin_num);

/*
 * Description :
 * Setup the value of the required pin logic_high if led is ON.
 */
void Setup_LED_ON(uint8 port_num, uint8 pin_num);

/*
 * Description :
 * Setup the value of the required pin logic_low if led is OFF.
 */
void Setup_LED_OFF(uint8 port_num, uint8 pin_num);


#endif /* LED_H_ */
