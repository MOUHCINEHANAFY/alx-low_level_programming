#include "main.h"

/**
 * _strspn - This function get lenght
 * of prefix substring
 * @s: substring to be searched
 * @accept: prefix to be measured
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int location = 0;
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
			{
				location++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (location);

			i++;
		}

		s++;
		i = 0;
	}
	return (location);
}
