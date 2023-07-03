#include "main.h"

/**
 * _memcpy - This function copy n byte from
 * a source into a destination
 * @src: buffer source
 * @dest: buffer destination
 * @n: number of bytes to be copied
 * Return: Pointer to destination
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i = 0;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}

	return (dest);
}
