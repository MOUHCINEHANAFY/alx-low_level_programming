#include "lists.h"

/**
 * listint_len - return nb of elements
 * @h: First element pointer
 * Return: nb
 */

size_t listint_len(const listint_t *h)
{
	int nb;

	for (nb = 0; h; h = (*h).next, nb++)
	{
		;
	}
	return (nb);
}
