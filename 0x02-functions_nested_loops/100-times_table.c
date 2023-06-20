#include "main.h"

/**
 * print_times_table - Print table multipl times
 * @n: number of times
 */

void print_times_table(int n)
{
	int number, multiplication, production;

	if (n >= 0 && n <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (multiplication = 1; multiplication <= n; multiplication++)
			{
				_putchar(',');
				_putchar(' ');

				production = number * multiplication;

				if (production <= 9)
				{
					_putchar(' ');
				}
				if (production <= 99)
				{
					_putchar(' ');
				}
				if (production > 99)
				{
					_putchar((production / 100) + '0');
					_putchar(((production / 10)) % 10 + '0');
				}
				else if (production < 100 && production > 9)
				{
					_putchar((production / 10) + '0');
				}
				_putchar((production % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
