#include "main.h"

/**
 * _strncpy - Thisn function copie string
 * @dest: result destination
 * @src: source of string
 * @n: number of characters to by copied
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
