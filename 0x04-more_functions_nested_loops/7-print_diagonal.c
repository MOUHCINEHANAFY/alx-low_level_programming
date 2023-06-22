#include "main.h"

/**
 * print_diagonal: This function print diagonal lines
 * @n: lenght of the line
 */

void print_diagonal(int n)
{
	int lenght, space;

	while (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (lenght == n - 1)
				continue;

			_putchar('\n');
		}
	break;
	}

	_putchar('\n');
}
