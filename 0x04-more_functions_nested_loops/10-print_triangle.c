#include "main.h"

/**
 * print_triangle - This function print triangle
 * @size: Size of tirangle determened by this int
 */

void print_triangle(int size)
{
	int dim1, i;

	while (size > 0)
	{
		for (dim1 = 1; dim1 <= size; dim1++)
		{
			for (i = size - dim1; i > 0; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i < dim1; i++)
			{
				_putchar('#');
			}
			if (dim1 == size)
				continue;

			_putchar('\n');
		}
	break;
	}
	_putchar('\n');
}
