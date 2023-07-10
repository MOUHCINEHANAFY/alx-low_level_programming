#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creat array of
 * char and intialise it with char value
 * @c: char value to intialise the array
 * @size: size of array
 * Return: if size is null of function fail return
 * NULL otherwhise pointer of the array
 */

char *create_array(unsigned int size, char c)
{
	char *table;
	unsigned int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(char) * size);

	if (table == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table[i] = c;
	}

	return (table);
}
