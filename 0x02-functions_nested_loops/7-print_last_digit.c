#include "main.h"

/**
 * print_last_digit - print last digit of any number
 * @n: input number
 * Return: last digit
 */

int print_last_digit(int n)
{i
	int x;

	if (n < 0)
	{
	n = (-n);
	}
	x = n % 10;
	_putchar (x + '0');
	return (x);
}
