#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a nvnode node at a given position
 * @head: pointer to the beginning of linked list
 * @n: value for n
 * @idx: index
 * Return: address of nvnode node else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nvnode, *item = *head;
	unsigned int a = 0;

	if (!idx)
	{
		nvnode = malloc(sizeof(listint_t));
		if (!nvnode)
		{
			return (NULL);
		}

		(*nvnode).n = n;
		(*nvnode).next = *head;
		*head = nvnode;

		return (*head);
	}

	while (item)
	{
		if (a == (idx - 1))
		{
			nvnode = malloc(sizeof(listint_t));
			if (!nvnode)
			{
				return (NULL);
			}
			(*nvnode).n = n;
			(*nvnode).next = (*item).next;
			(*item).next = nvnode;

			return (nvnode);
		}
		item = (*item).next;
		a++;
	}

	return (NULL);
}
