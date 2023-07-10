#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This function concatinate two
 * strings and return pointer to result
 * @s1: first string
 * @s2: second string
 * Return: concatination otherwise NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatination;
	int i, concat_i = 0, lenght = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		lenght++;
	}
	concatination = malloc(sizeof(char) * lenght);

	if (concatination == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		concatination[concat_i++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concatination[concat_i++] = s2[i];
	}
	return (concatination);
}
