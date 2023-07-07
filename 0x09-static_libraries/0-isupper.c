#include "main.h"

/**
 * _isupper - Check if character is upper
 * @c: the character to be tested
 * Return: 1 if upper, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
