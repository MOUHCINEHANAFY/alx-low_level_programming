#include "main.h"

/**
 * print_alphabet - This function print alphabet
 * from a to z
 */

void print_alphabet()
{
	char alpha;

	for (alpha ='a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
