#include "lists.h"

/**
 * free_listint2 - This function frees a listint_t list.
 * @head: Pointer to adress to list head
 */
void free_listint2(listint_t **head)
{
	listint_t *index;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		index = (*head)->next;
		free(*head);
		*head = index;
	}

	head = NULL;
}
