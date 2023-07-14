#include <stdlib.h>

/**
 * _calloc - This function allocates memory of an array
 * @nmemb: number of array elements
 * @size: size
 * Return: void pointer if succesful else return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (!nmemb || !size)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *) p)[i] = 0;
	}
	return (p);
}
