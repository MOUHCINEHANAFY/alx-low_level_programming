#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This function frees a listint_t list.
 * @head: Pointer to adress to list head
 */

void free_listint2(listint_t **head)
{
	listint_t *index;

	while (head && *head)
	{
		index = *head;
		*head = (**head).next;
		free(index);
	}
}
