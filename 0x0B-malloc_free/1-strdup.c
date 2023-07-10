#include "main.h"
#include <stdlib>

/**
 * _strdup - Copy string to new allocated memory
 * and test if memory allocation goes well
 * @str: String to be copied
 * Return: pointer to the duplicated string or NULL if
 * operation fails
 */

char *_strdup(char *str)
{
	char *dup;
	int i, lenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		lenght++;

	dup = malloc(sizeof(char) * (lenght + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	dup[lenght] = '\0';

	return (dup);
}
