#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This function frees list_t
 * @head: Ths is linked list , list_t
 * Description : this function free nodes
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;

		free(hold->str);
		free(hold);
	}
}
