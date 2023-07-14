#include <stdlib.h>

/**
 * malloc_checked - This Function allocate memory
 * @b: size
 * Return: return pointer if succes else 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
