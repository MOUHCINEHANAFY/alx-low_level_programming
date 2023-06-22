#include "main.h"

/**
 * _isdigit - Function check if digit between 0 to 9
 * @c: number to be checkd
 * Return: 1 if integer is a number, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
