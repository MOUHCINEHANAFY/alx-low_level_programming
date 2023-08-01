#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - This function delet node by index
 * @head: List header pointer
 * @index: index to element to be deleted
 * Return: 1 if succesful else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *listemel, *supr;
	unsigned int i, action = 0;

	if (!*head)
	{
		return (-1);
	}
	for (i = 0, listemel = *head; listemel && index; i++, listemel = (*listemel).next)
		if (i == (index - 1))
		{
			action = 1;
			break;
		}

	if (action)
	{
		supr = (*listemel).next;
		(*listemel).next = (*supr).next;
		free(supr);
		return (1);
	}
	else if (!index && (**head).next)
	{
		supr = *head;
		*head = (*supr).next;
		free(supr);
		return (1);
	}
	else if (!index && *head)
	{
		*head = NULL;
		free(*head);
		return (1);
	}

	return (-1);
}
