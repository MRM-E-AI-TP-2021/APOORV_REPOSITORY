/*
 * BlinkingLED.c
 *
 * Created: 30-12-2019 16:54:22
 * Author : apoor
 */ 

#include <avr/io.h>
#include <util/delay.h>  //Header file to invoke delay()


int main(void)
{
	DDRB = 0b00000001;
    /* Replace with your application code */
    while (1) 
    {
		PORTB = 0b00000001;
		_delay_ms(1000); // Delay for 1000ms
		PORTB = 0b00000000;
		_delay_ms(1000);
    }
}

