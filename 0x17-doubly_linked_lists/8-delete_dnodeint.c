#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: headof doubly linked list
 * @index: index
 * Return: return 1 if successful, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *delete, *hold = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;
	free(hold);
	return (1);
	}
	for (i = 0; hold && i < index - 1; i++)
		hold = hold->next;

	if (hold == NULL || hold->next == NULL)
		return (-1);

	delete = hold->next;
	hold->next = delete->next;
	if (delete->next)
		delete->next->prev = hold;
	free(delete);
	return (1);
}
