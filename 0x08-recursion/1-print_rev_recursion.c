#include "main.h"

/**
 * _print_rev_recursion - this function print string
 * in reverse using recursion
 * @s: string source
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
