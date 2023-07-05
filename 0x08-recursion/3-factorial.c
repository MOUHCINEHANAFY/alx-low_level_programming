#include "main.h"

/**
 * factorial - this function calculate factorial
 * @n: number to be calculated
 * Return: calculated value
 */

int factorial(int n)
{
	int fnumber = n;

	if (n >= 0 && n <= 1)
		return (1);

	else if (n < 0)
		return (-1);

	fnumber *= factorial(n - 1);

	return (fnumber);
}
