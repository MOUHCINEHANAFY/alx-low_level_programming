#include "hash_tables.h"
#include <string.h>

/**
  * update_key - update value of key
  * @h: head of linked list
  * @key: key
  * @value: value
  * Return: 1 if ok 0 if not found -1 malloc echec
  */
int update_key(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *copy = *h;
	char *value1;

	for (; copy; copy = copy->next)
		if (strcmp(copy->key, key) == 0)
		{
			value1 = strdup(value);
			if (!value1)
				return (-1);
			free(copy->value);
			copy->value = value1;
			return (1);
		}

	return (0);
}

/**
  * add_node - adds a node
  * @h: head of the linked list
  * @key: key
  * @value: valuee
  * Return: new head
  */
hash_node_t *add_node(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *key1, *value1;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (NULL);
	}
	key1 = strdup(key);
	if (!key1)
	{
		free(new_node);
		return (NULL);
	}
	value1 = strdup(value);
	if (!value1)
	{
		free(new_node);
		free(key1);
		return (NULL);
	}

	new_node->key = key1;
	new_node->value = value1;
	new_node->next = *h;
	*h = new_node;

	return (*h);
}

/**
  * hash_table_set - adds elem
  * @ht: update
  * @key: key
  * @value: is the value associated with the key
  * Return: 1 if it succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	int update;

	if (!ht || strcmp(key, "") == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	update = update_key(&(ht->array[index]), key, value);
	if (update == 0)
	{
		new = add_node(&(ht->array[index]), key, value);
		if (!new)
		{
			return (0);
		}
		ht->array[index] = new;
	}
	else if (update == -1)
		return (0);
	return (1);

}