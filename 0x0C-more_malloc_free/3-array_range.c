#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - This function creates an array of integers
 * @min: minimum value of the array
 * @max: max value of the array
 * Return: the pointer to the new array else NULL
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(((max - min) + 1) * sizeof(int));

	if (!p)
	{
		return (NULL);
	}
	for (i = 0; (min + i) <= max; i++)
	{
		p[i] = (min + i);
	}
	return (p);
}
