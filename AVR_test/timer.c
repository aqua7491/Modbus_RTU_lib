#include "timer.h"
	// TCCR1B = ( 1 << CS11 ) | ( 1 << CS10 ); // Prescaler = 64
	TCCR1B = (1 << CS01); // prescaler = 8

	// OCR1A = 0x0619; // 100ms		

	// 8.35ms - half char time, baud 600
	// OCR1A = 0x0413;
	OCR1A = 0x209D; // prescaler = 8
	
	timer_reset();
	
	// TCNT1 = 0xF9E6; // 100ms
	
	// 8.35ms - half char time, baud 600
	// TCNT1 = 0xFBEC;
	TCNT1 = 0xDF62; // prescaler = 8
	
}
	
	
	TIMSK &= ~( 1 << OCIE1A ); // output compare OCR1A int disable
	
}