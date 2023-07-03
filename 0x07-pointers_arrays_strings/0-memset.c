#include "main.h"

/**
 *_memset - This function fill table
 * with c n time
 * @s: Poiter to memory
 * @c: character used to fill the table
 * @n: number of bytes
 * Return: Pointer to memory to be filled
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *nw_tbl = s, value = c;

	for (i = 0; i < n; i++)
		nw_tbl[i] = value;

	return (nw_tbl);
}
