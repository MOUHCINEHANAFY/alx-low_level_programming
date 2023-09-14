#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free Dlinked list
 * @head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	for (; head; head = hold)
	{
	hold = head->next;
	free(head);
	}
}
