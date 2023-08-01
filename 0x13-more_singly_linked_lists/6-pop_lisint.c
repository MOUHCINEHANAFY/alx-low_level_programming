#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - This function delet head of linked list
 * @head: Header of list double pointer
 * Return: Deleted value
 */


int pop_listint(listint_t **head)
{
	int n;
	listint_t *index;


	if (head && *head)
	{
		index = *head;
		n = (**head).n;
		*head = (**head).next;
		free(index);
		return (n);
	}

	return (0);
}
