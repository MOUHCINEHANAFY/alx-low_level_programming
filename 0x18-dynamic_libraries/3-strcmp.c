#include "main.h"

/**
 * _strcmp - Thins function compare 2 strings
 * @s1: The first string
 * @s2: ths second string
 * Return: 0 if two strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		x = s1[i] - s2[i];
		if (x != 0)
			break;
	}

	return (x);
}
