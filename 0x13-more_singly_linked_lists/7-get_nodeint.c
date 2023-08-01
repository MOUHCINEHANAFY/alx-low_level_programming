#include "lists.h"

/**
 * get_nodeint_at_index - This function locat node in a list
 * @index: The index of the node to locate - indices start at 0.
 * @head: A pointer to the head of the listint_t list.
 * Return: Located node else null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nd;

	for (nd = 0; nd < index; nd++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
