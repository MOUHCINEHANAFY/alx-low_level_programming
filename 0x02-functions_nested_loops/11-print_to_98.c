#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from number n to 98
 * @n: number to start printing from
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n >= 99)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
