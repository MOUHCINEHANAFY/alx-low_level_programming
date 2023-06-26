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

	while (src[idx])
	{
	dest[idx] = src[idx];
	idx = idx + 1;
	}
return (dest);
}