#include "main.h"

/**
 * _pow_recursion - this function calculate power
 * of a number x by the power y
 * @x: the number to get raised by power
 * @y: the power value
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	int power = x;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	power *= _pow_recursion(x, y - 1);

	return (power);
}
