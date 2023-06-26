#include "main.h"

/**
 * puts_half - This function print half of
 * string input
 * @str: input string
 */

void puts_half(char *str)
{
	int idx = 0, length = 0;
	int half_length;

	while (str[idx++])
	{
	length = length + 1;
	}

	if ((length % 2) != 0)
	{
	half_length = (length + 1) / 2;
	}
	else
	{
	half_length = length / 2;
	}
	for (idx = half_length; idx < length; idx++)
	{
	_putchar(str[idx]);
	}
	_putchar('\n');
}
