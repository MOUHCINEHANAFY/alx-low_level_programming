#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - this function print sum
 * of 2 diagnoals
 * @a: Matrix of integers
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int s1 = 0, s2 = 0;

	while (i < size)
	{
	s1 += a[i];
	a += size;
	i++;
	}

	a -= size;
	i = 0;

	while (i < size)
	{
	s2 += a[i];
	a -= size;
	i++;
	}

	printf("%d, %d\n", s1, s2);
}
