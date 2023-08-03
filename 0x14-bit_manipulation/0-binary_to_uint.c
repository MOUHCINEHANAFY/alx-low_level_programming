#include "main.h"

/**
 * binary_to_uint - This function convert binary to unim
 * @b: pointer to binary conv
 * Return: converted number else null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, i;

	if (!b || !*b)
		return (0);

	decimal = i = 0;
	while (b[i])
	{
		if (b[i] > 49)
		{
			return (0);
		}
		else if (b[i] == 49)
		{
			decimal <<= 1;
			decimal += 1;
		}
		else
		{
			decimal <<= 1;
		}
		i++;
	}
	return (decimal);
}
