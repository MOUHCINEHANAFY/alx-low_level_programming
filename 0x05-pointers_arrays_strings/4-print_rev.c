#include "main.h"

/**
 * print_rev - print string in revers
 * @s: String to be printed
 */

void print_rev(char *s)
{
	int length = 0, x;

	while (s[length] != '\0')
	{
	length++;
	}
	x = length;

	for (length = x - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
}
