#include "main.h"

/**
 * function1 - first function to help
 * calculationg
 * @n: number to be calulated
 * @a: number test to be done
 * Return: calculation
 */

int function1(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a < n)
	{
		return (function1(n, ++a));
	}
	return (-1);
}

/**
 * _sqrt_recursion - sqrt function
 * @n: number to be calculated
 * Return: sqrt value
 */

int _sqrt_recursion(int n)
{
	return (function1(n, 0));
}
