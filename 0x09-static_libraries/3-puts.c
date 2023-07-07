#include "main.h"

/**
 * _puts - This function prints strings
 * @str: the string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
