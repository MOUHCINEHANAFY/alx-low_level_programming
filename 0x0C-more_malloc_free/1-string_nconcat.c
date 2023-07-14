#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - This function concat two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from string 2
 * Return: pointer to concatenated string else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, lenght1, lenght2;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for (lenght1 = 0; *(s1 + lenght1); lenght1++)
		;
	for (lenght2 = 0; *(s2 + lenght2); lenght2++)
		;

	if (lenght2 < n)
	{
		n = lenght2;
	}
	p = malloc((lenght1 + n + 1) * sizeof(char));

	if (!p)
		return (NULL);

	for (i = 0; i < (lenght1 + n); i++)
	{
		if (i < lenght1)
			p[i] = s1[i];
		else
			p[i] = s2[i - lenght1];
	}
	p[i] = '\0';

	return (p);
}
