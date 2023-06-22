#include "main.h"

/**
 * print_square - This function prints
 * square using dias '#'
 * @size: size of square
 */

void print_square(int size)
{
	int hight, width;

	while (size > 0)
	{
		for (hight = 0; hight < size; hight++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			if (hight == size - 1)
				continue;
			_putchar('\n');
		}
	break;
	}
	_putchar('\n');
}
