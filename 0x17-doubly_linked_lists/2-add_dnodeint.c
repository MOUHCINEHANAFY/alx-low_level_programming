#include "lists.h"
#include <stdlib.h>
/**
  * add_dnodeint - node adding to the begin of list
  * @head: head of list
  * @n: Value to be inserted
  * Return: addres of the new element
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
	return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
	{
	(*head)->prev = new;
	}
	*head = new;
	return (new);
}
