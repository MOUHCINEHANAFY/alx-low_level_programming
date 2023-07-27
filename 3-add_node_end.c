#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - this function gets size of string
 * @str: string to get his size
 * Return: return the size of string
 */
int _strlen(const char *str)
{
	int idx;

	for (idx = 0; str[idx]; idx++)
		;

	return (idx);
}
/**
 * add_node_end - This function add new nodes
 * @head: struct list_t, node
 * @str: String to be duplicated
 * Return: return the newly created list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *string = strdup(str);
	list_t *new, *tail;

	if (!string)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(string);
		return (NULL);
	}

	new->str = string;
	new->len = _strlen(string);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (tail = *head; tail->next != NULL; tail = tail->next)
	{
		;
	}
	tail->next = new;
	return (new);
}
