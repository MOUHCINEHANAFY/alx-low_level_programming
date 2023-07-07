#include "main.h"

/**
 * _strpbrk - look for string
 * @accept: bytes to be searched
 * @s: string source
 * Return: pointer if found, null if not
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);

			i++;
		}

		s++;
		i = 0;
	}
	return ('\0');
}
