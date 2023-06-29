#include "main.h"

/**
 * reverse_array - reverse array content
 * @a: array to be reversed
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, j, c;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			c = a[j];
			a[j] = a[j - 1];
			a[j - 1] = c;
		}
	}
}
