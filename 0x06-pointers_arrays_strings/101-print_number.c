#include "main.h"

/**
 * print_number - print integer number
 * @n: number input
 */

void print_number(int n)
{
	unsigned int a, b, x;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	x = 1;

	while (b > 9)
	{
		b /= 10;
		x *= 10;
	}

	while (x >= 1)
	{
		_putchar(((a / x) % 10) + '0');
		x /= 10;
	}
}
