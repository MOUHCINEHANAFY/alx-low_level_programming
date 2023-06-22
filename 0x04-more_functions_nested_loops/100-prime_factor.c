#include <stdio.h>

/**
 * main - This function look for the largest
 * prime focator of the constant in our code
 * Return: 0 Always (success)
 */

int main(void)
{
	long P_number = 612852475143, factor;

	while ((P_number / 2) >= factor)
	{
		if ((P_number % 2) == 0)
		{
			P_number = P_number / 2;
			continue;
		}
		for (factor = 3; factor < (P_number / 2); factor += 2)
		{
			if ((P_number % factor) == 0)
				P_number = P_number / factor;
		}
	}
	printf("%ld\n", P_number);
	return (0);
}

