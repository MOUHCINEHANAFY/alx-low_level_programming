#include "lists.h"
#include <stdio.h>

/**
 * print_list - Ths function prints all the elements of a list_t
 * @h: struct list_t, first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	char *str1;
	int idx;

	for (idx = 0; h; idx++, h = h->next)
	{
		str1 = h->str;
		if (str1)
		{
			printf("[%i] %s\n", h->len, str1);
		}
		else
		{
			printf("[0] %p\n", str1);
		}
	}
	return (idx);
}
