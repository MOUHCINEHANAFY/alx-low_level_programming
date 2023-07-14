#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - This functionreallocates a memory using malloc and free
 * @ptr: pointer
 * @old_size: old pointer size
 * @new_size: new pointer size
 * Return: new pointer else null
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int index;

	if (!ptr)
	{
		newptr = malloc(new_size);
		if (!newptr)
			return (NULL);
		return (newptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	newptr = malloc(new_size);
	if (!newptr)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		while (index < new_size)
		{
			index++;
			((char *)newptr)[index] = ((char *)ptr)[index];
		}
	}
	else
		while (index < old_size)
		{
			index++;
			((char *)newptr)[index] = ((char *)ptr)[index];
		}
	free(ptr);
	return (newptr);
}
