#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function print elm of list and return list size
 * @h: First element pointer
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		printf("%d\n", h->n);
		h = h->next;
	}



	return (nb);
}
