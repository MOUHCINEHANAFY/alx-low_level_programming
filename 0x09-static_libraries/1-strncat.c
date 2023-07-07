#include "main.h"

/**
 * _strncat - concatinationg two strings with pre
 * defined number of characters
 * @src: string source
 * @dest: string destination
 * @n: bytes to be used
 * Return: the pointed to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}

	dest[i] = '\0';

return (dest);
}

