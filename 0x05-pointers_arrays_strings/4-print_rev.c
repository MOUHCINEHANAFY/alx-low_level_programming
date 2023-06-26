#include "main.h"

/**
 * print_rev - print string in revers
 * @s: String to be printed
 */

void print_rev(char *s)
{
	int length = 0, z;

	while (s[length] != '\0')
	{
	length++;
	}
	z = length;

	for (length = z - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
}
