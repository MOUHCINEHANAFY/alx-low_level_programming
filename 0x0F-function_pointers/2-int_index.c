#include "function_pointers.h"

/**
 * int_index - This function looks for int in a integer array.
 * @array: Array of the integers.
 * @size: Size of the array.
 * @cmp: This is the pointer to the function used to compare values.
 *
 * Return: If no element or size <= 0 - -1.
 * Elese 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
