#include "main.h"

/**
 * _strlen - Function return lenght of string
 * @s: string wich lenght will be calculated
 * Return: length of s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
