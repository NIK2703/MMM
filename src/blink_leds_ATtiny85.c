#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/dealy.h>
#include <stdbool.h>

int main(void)
{
	DDRM = 0b11111111;
	while(true)
	{
		for(int i=0; i<8; i++)
		{
			PORTB ^= 1 << i;
			_delay_ms(100);
		}
	}
	
	return 0;
}