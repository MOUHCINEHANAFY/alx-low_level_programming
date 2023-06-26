#include "main.h"

/**
 * _atoi - this function convert strings to ints
 * @s: input to be converted
 * Return: converted int
 */

int _atoi(char *s)
{
	unsigned int conter = 0, length = 0, oi = 0, pointer = 1, m = 1, i;

	while (*(s + conter) != '\0')
	{
		if (*(s + conter) > '9' || length > 0 && (*(s + conter) < '0'))
		{
			break;
		}
		if (*(s + conter) == '-')
		{
		pointer *= -1;
		}
		if ((*(s + conter) <= '9') && (*(s + conter) >= '0'))
		{
			if (length > 0)
				m *= 10;
			length++;
		}
		conter++;
		}
		for (i = conter - length; i < conter; i++)
		{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
		}
return (oi * pointer);
}
