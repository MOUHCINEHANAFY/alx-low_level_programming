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
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
