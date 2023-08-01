#include "lists.h"

/**
 * print_listint - This function print elm of list and return list size
 * @h: First element pointer
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	int nb;

	for (nb = 0; h; h = (*h).next, nb++)
	{
		printf("%d\n", (*h).n);
	}

	return (nb);
}
