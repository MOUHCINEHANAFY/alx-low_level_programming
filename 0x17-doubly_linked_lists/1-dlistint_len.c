#include "lists.h"
/**
 * dlistint_len - count all the elements of list
 * @h: doubly linked list node
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
	h = h->next;
	size += 1;
	}
	return (size);
}
