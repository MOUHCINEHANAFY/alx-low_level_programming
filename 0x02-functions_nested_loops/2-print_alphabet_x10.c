#include "main.h"

/**
 * print_alphabet_x10 - prints a to z
 * ten times folowed by new line
 */

void print_alphabet_x10(void)
{
	char alpha;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);

		}
	_putchar('\n');
	}
}
