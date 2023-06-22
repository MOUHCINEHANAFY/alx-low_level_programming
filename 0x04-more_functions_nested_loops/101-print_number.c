#include "main.h"

/**
 * print_number - This function print ints
 * using putchar
 * @n: Integer to be printed
 */

void print_number(int n)
{
	int number = n;

	if (n < 0)
		_putchar('-');
		number = -number;

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar('0' + (number % 10));
}
