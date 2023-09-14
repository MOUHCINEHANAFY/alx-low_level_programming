#include "lists.h"

/**
 * sum_dlistint - sum all element of list
 * @head: Head of doubly linked list
 * Return: sum of all values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
