#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of  list
 * @h: doubly linked
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
