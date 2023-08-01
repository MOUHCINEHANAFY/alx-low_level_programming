#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - This function add node to the tail of list
 * @head: Linked list first leement pointer
 * @n: The value to be add
 * Return: Address of the nvnode element
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nvnode;
	listint_t *tail;

	if (!head)
	{
		return (NULL);
	}
	nvnode = malloc(sizeof(listint_t));
	if (!nvnode)
	{
		return (NULL);
	}
	(*nvnode).n = n;
	(*nvnode).next = NULL;

	if (head && !*head)
	{
		*head = nvnode;
		return (nvnode);
	}

	for (tail = *head; (*tail).next; tail = (*tail).next)
	{
		;
	}
	(*tail).next = nvnode;

	return (nvnode);
}
