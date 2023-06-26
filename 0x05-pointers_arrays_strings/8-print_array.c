#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of int
 * @a: array input
 * @n: number of elements to be printed from a
 */

void print_array(int *a, int n)
{
	int idx = 0;

	while (idx < n)
	{
		printf("%d", a[idx]);
		idx++;
	if (idx == n - 1)
	{
		continue;
	}
	printf(", ");
	}

	printf("\n");
}
