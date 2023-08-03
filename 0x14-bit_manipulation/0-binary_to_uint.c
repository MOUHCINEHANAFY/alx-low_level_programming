#include "main.h"

/**
 * binary_to_uint - This function convert binary to unim
 * @b: pointer to binary conv
 * Return: converted number else null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0, mult = 1;
	int size;

	if (b == '\0')
	{
		return (0);
	}
	for (size = 0; b[size];)
	{
		size++;
	}
	for (size -= 1; size >= 0; size--)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);

		conv += (b[size] - '0') * mult;
		mult *= 2;
	}
	return (conv);
}
