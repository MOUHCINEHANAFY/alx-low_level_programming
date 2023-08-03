#include "main.h"

/**
 * flip_bits - this function flip bits
 * @n: number
 * @m: number to apply xor on
 * Return: result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int result = 0;

	while (xor > 0)
	{
		result += (xor & 1);
		xor >>= 1;
	}
	return (result);
}
