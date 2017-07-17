#include <avr/io.h>
#include <util/delay.h>

int main() {
	DDRA |= 3;
	PORTA |= 1;

	while (1) {
		PORTA ^= 3;
		_delay_ms(1000);
	}
	return 0;
}
