#include "main.h"

/**
 * rot13 - This function incode strings into rot13
 * @s: input to be encoded
 * Return: result of string encoded
 */

char *rot13(char *s)
{
	int counter = 0, i;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[counter] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[counter] == characters[i])
			{
				s[counter] = rot[i];
				break;
			}
		}
		counter++;
	}

	return (s);
}
