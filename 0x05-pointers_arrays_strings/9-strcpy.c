#include "main.h"

/**
 * _strcpy - This function copy string pointed by src
 * to dest include null character
 * @dest: destination buffer
 * @src: source string
 * Return: destination string pointer
 */

char *_strcpy(char *dest, char *src)
{
	int idx = 0;
	int length;

	while (src[length] != '\0')
	{
	length++;
	}
	for (idx = 0; idx <= length; idx++)
	{
		dest[idx] = src[idx];
	}
	idx++;
	dest[idx] = '\0';

return (dest);
}
