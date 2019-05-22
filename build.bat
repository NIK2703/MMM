avr-gcc -mmcu=atmega8 blink_leds_ATmega8.c -std-gnu99 -o blink_leds.out
avr-objcopy -j .text -j .data ihex blink_leds.out blink_leds.hex