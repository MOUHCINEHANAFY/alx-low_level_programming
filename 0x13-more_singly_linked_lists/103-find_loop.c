#include "lists.h"

/**
 * find_listint_loop - Find start of a loop
 * @head: Header of list
 * Return: header of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	while (head && (*head).next)
	{
		a = head;
		b = (*head).next;
		while (a != b)
		{
			if (a)
			{
				a = (*a).next;
			}
			if (b == head)
			{
				return (head);
			}
			if (b)
			{
				b = (*b).next;
			}
			if (b == head)
			{
				return (head);
			}
			if (b)
			{
				b = (*b).next;
			}
			if (b == head)
			{
				return (head);
			}
		}
		head = (*head).next;
	}
	return (NULL);
}
