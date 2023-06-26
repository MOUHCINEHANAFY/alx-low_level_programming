#include "main.h"

/**
 * _strcpy - This function copy string pointed by src
 * to dest include null character
 * @dest: destination buffer
 * @src: source string
 * Return: destination string pointer
 */

char *_strcpy(char *dest,const char *src)
{
	int idx = 0;

	while (src[idx])
	{
	dest[idx] = src[idx];
	idx++;
	}
return (dest);
}
