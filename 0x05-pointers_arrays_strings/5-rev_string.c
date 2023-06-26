#include "main.h"

/**
 * rev_string - Function to reverse strings
 * @s: string to be inverted
 */

void rev_string(char *s)
{
	char container;
	int length = 0, idx = 0;

	while (s[idx++])
	{
		length++;
	}
	for (idx = length - 1; idx >= length / 2; idx--)
	{
		container = s[idx];
		s[idx] = s[length - idx - 1];
		s[length - idx - 1] = container;
	}
}
