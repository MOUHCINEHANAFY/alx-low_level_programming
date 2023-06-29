#include "main.h"

/**
 * cap_string - make string in cappitale letters
 * @s: input string to be capitalized
 * Return: Pointer to destination
 */

char *cap_string(char *s)
{
	int counter = 0, i;
	int table[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[counter] >= 'a' && s[counter] <= 'z')
		s[counter] = s[counter] - ('a' - 'A');
	counter++;

	while (s[counter] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (s[counter] == table[i])
			{
				if (s[counter + 1] >= 'a' && s[counter + 1] <= 'z')
					s[counter + 1] = s[counter + 1] - ('a' - 'A');
				break;
			}
		}
		counter++;
	}

	return (s);
}
