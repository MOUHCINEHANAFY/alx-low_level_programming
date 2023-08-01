#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function print elm of list and return list size
 * @h: First element pointer
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; h = (*h).next, i++)
	{
		printf("%d\n", (*h).n);
	}

	return (i);
}
