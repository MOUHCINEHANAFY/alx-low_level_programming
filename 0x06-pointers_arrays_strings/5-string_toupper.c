#include "main.h"

/**
 * string_toupper - flop lower case to upper
 * @s: string to be moified
 * Return: Pointer to destination
 */

char *string_toupper(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		if ((s[counter] >= 'a') && (s[counter] <= 'z'))
			s[counter] = s[counter] - ('a' - 'A');
		counter++;
	}

	return (s);
}
