#include "lists.h"

/**
 * get_dnodeint_at_index - get node at an index
 * @head: start of dlinked list
 * @index: index
 * Return: return the node at a given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index > 0 && head; index--, head = head->next)
	{
	}
	return (head);
}
