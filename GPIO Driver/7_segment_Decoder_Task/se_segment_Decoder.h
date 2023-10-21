/*
 * se_segment_Decoder.h
 *
 *  Created on: Oct 21, 2023
 *      Author: SCH
 */

#ifndef SE_SEGMENT_DECODER_H_
#define SE_SEGMENT_DECODER_H_

/*
 * Description :
 * Setup the direction of the Decoder and 7-segment pins input/output.
 */
void Eta32mini_SevenSegment_SetPinDirection(void);

/*
 * Description :
 * Setup the Value you need to display to the Decoder.
 */
void Eta32mini_SevenSegment_Display(uint8 value);

#endif /* SE_SEGMENT_DECODER_H_ */
