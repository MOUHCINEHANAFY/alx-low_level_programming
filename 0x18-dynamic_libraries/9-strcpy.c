#include "main.h"
#include <stdio.h>
/**
 * _strcpy - This function copy string pointed by src
 * to dest include null character
 * @dest: destination buffer
 * @src: source string
 * Return: destination string pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (index >= 0)
	{
		*(dest + index) = *(src + index);
		if (*(src + index) == '\0')
		{
			break;
		}
		index++;
		}
return (dest);
}
