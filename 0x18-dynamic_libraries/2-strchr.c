#include "main.h"

/**
 * _strchr - find a character in a string
 * @c: caracter to be searched
 * @s: string to be searched
 * Return: if caracter found then return pointer
 * to it first location, if not return null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);

		i++;
	}
	return ('\0');
}
