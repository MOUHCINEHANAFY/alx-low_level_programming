#include "main.h"

/**
 * _strcat - This function concatenate two strings
 * @src: souce string
 * @dest: destination string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (1)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
return (dest);
}
