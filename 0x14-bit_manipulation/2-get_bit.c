#include "main.h"

/**
 * get_bit - This function takes value of bit
 * @n: Bit.
 * @index: Power of the bit
 * Return: Value of bit else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
