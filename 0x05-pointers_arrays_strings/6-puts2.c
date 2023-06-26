#include "main.h"

/**
 * puts2 - print 1 character and skip next
 * @str: String to be printed
 */

void puts2(char *str)
{
	int idx = 0;
	int lenght = 0;

	while (str[idx++])
	{
	lenght = lenght + 1;
	}
	for (idx = 0; idx < lenght; idx += 2)
	{
	_putchar(str[idx]);
	}
	_putchar('\n');
}
