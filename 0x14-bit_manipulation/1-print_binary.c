#include "main.h"

/**
 * print_binary - This function print binary conv
 * @n: Number to be printed in base 2
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
