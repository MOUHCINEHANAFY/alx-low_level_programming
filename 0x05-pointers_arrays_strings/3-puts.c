#include "main.h"

/**
 * _puts - This function prints strings
 * @str: the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i]++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
