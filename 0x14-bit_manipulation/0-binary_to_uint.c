#include "main.h"

/**
 * binary_to_uint - This function convert binary to unim
 * @b: pointer to binary conv
 * Return: converted number else null
 */

unsigned int binary_to_uint(const char *b)
{
	int size;
	unsigned int uint, pos;

	if (!b)
	{
		return (0);
	}
	for (size = 0; b[size]; size++)
		;
	size--;
	for (pos = 1, uint = 0; size >= 0; size--)
	{
		if (b[size] == '0')
		{
			pos *= 2;
			continue;
		}
		else if (b[size] == '1')
		{
			uint += pos;
			pos *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
