#include "lists.h"


/**
 * reverse_listint - function revers element of list
 * @head: Header double pointer
 * Return: Pointer to reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *revpnt = NULL, *next;

	while (*head)
	{
		next = (**head).next;
		(**head).next = revpnt;
		revpnt = *head;
		*head = next;
	}
	*head = revpnt;

	return (*head);
}
