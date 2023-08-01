#include <stdlib.h>
#include "lists.h"


/**
 * free_listint - Free out list
 * @head: First element pointer (header of list pointer)
 */

void free_listint(listint_t *head)
{
	listint_t *index;

	while (head)
	{
		index = head;
		head = (*head).next;
		free(index);
	}
}
