#include "main.h"

/**
 * leet - Function encode into 1337 standard
 * @s: input string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int lower[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};
	int upper[] = {65, 69, 79, 84, 76};
	int counter = 0, i;


	while (s[counter] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[counter] == lower[i] || s[counter] == upper[i])
			{
				s[counter] = num[i];
				break;
			}
		}
		counter++;
	}

	return (s);
}
