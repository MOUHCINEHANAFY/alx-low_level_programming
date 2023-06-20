#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b == 0 && c == 0)
			{
				_putchar('0');
			}
			else if (c > 9)
			{
				d = c % 10;
				c = z / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + c);
				_putchar('0' + d);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + c);
			}
		}
		_putchar('\n');
	}
}
