#include "main.h"

/**
 * factorial - this function calculate factorial
 * @n: number to be calculated
 * Return: calculated value
 */

int factorial(int n)
{
	int result = 1;

	if (n < 0)
		return (-1);

	while (n > 1)
	{
	result *= n;
	n--;
	}

	return (result);
}
