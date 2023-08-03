#include "main.h"

/**
 * clear_bit - Clear bit value 
 * @n: Bit pointer
 * @index: Bit index
 * Return: 1 else -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
