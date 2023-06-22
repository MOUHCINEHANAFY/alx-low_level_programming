#include "main.h"

/**
 * print_line - This function draw line using dash
 * @n: lenght of the line
 */

void print_line(int n)
{
	int lenght;

	while (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
		{
			_putchar('_');
		}
		break;
	}
	_putchar('\n');
}
