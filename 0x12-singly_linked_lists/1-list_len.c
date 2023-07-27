#include "lists.h"
#include <stdio.h>

/**
 * list_len - This function return size of a list_t
 * @h: struct list_t, first node
 * Return: Return number of nodes
 */

size_t list_len(const list_t *h)
{
	int idx;

	for (idx = 0; h; idx++, h = h->next)
	{
		;
	}
	return (idx);
}
