#include "main.h"

/**
 * print_chessboard - Chess board print
 * @a: chessboard print
 */

void print_chessboard(char (*a)[8])
{
	int i1 = 0;
	int i2;

	while (a[i1][7])
	{
		i2 = 0;

		while (i2 < 8)
		{
			_putchar(a[i1][i2]);
			i2++;
		}

		_putchar('\n');
		i1++;
	}
}
