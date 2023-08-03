#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0 for big endian 1 if littel endian
 */

int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
		
}
