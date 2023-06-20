#include "main.h"

/**
 * _islower - This function check if 
 * input is a lowercase otherwize retunr 0
 * Return: 1 for lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
