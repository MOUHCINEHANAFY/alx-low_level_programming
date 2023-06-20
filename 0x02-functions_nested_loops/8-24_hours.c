#include "main.h"

/**
 * jack_bauer - full day minute print
 */

void jack_bauer(void)
{
	int hours_1, hours_2, minutes_1, minutes_2; a, b;

	for (a = 0; a < 24; a++)
	{
		for ( b = 0; b <= 59; b++)
		{
			hours_1 = a / 10;
			hours_2 = a % 10;
			minutes_1 = b / 10;
			minutes_2 = b % 10;
			_putchar(hours_1 + '0');
			_putchar(hours_2 + '0');
			_putchar(minutes_1 + '0');
			_putchar(minutes_2 + '0');
			_putchar('\n');
		}
	}
}
