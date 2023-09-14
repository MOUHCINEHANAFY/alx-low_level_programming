#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to list tail
 * @head: begin of list
 * @n: Value to be inserted
 * Return: address of the new element if not null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *hold = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!hold)
	{
	new->prev = NULL;
	*head = new;
	return (new);
	}
	while (hold->next)
		hold = hold->next;

	hold->next = new;
	new->prev = hold;
	return (new);
}
