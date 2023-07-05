#include "main.h"

/**
 * function1 - function 1 help calculatin
 * for recursion
 * @n: number to be calculated
 * @a: number 2
 * Return: result
 */

int function1(int n, int a)
{
	if (a > 9)
	{
		return (1);
	}
	else if (n % a != 0)
	{
		return (function1(n, ++a));
	}
	return (0);
}

/**
 * is_prime_number - prime number calcuation
 * @n: number to calculate
 * Return: result
 */

int is_prime_number(int n)
{
	if (n == -1 || n == 0 || n == 1)
	{
		return (0);
	}
	return (function1(n, 2));
}
