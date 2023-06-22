#include "main.h"

/**
 * more_numbers - This function print to 14
 * 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar('0' + (j % 10));
			}
			else
			{
			_putchar('0' + j);
			}
		}
	_putchar('\n');
	}
}
