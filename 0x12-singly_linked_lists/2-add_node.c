#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - This function return size of string
 * @str: string to get size of it's size
 * Return: Return size of strings
 */
int _strlen(const char *str)
{
	int idx;

	for (idx = 0; str[idx]; idx++)
		;

	return (idx);
}
/**
 * add_node - This function add new node
 * @head: Head of node
 * @str: string needs to be duplicated
 * Return: The newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string = strdup(str);

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
	new->next = *head;

	*head = new;

	return (new);
}
