#include "function_pointers.h"

/**
 * array_iterator - function given as a
 * parameter on each element of an array.
 * @array: array.
 * @size: Size of array.
 * @action: This is a pointer to the function action.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
