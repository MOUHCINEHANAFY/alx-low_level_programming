#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the start of lisint
 * @n: value of new node
 * @head: first node of our linked list
 * Return: Adress of new elem else Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nv;

	nv = malloc(sizeof(listint_t));
	if (!nv)
	{
		return (NULL);
	}

	(*nv).n = n;
	(*nv).next = *head;
	*head = nv;

	return (*head);
}
