#include "main.h"

/**
 * set_bit - Set bit to 1
 * @n: Bit pointer.
 * @index: Bit index
 * Return: -1 for error else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
