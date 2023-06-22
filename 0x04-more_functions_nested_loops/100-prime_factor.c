#include <stdio.h>

/**
 * main - This function look for the largest
 * prime focator of the constant in our code
 * Return: 0 Always (success)
 */

int main(void)
{
	long p_number = 612852475143, factor;

	while ((p_number / 2) >= factor)
	{
		if ((p_number % 2) == 0)
		{
			p_number = p_number / 2;
			continue;
		}
		for (factor = 3; factor < (p_number / 2); factor += 2)
		{
			if ((p_number % factor) == 0)
				p_number = p_number / factor;
		}
	}
	printf("%ld\n", p_number);
	return (0);
}

