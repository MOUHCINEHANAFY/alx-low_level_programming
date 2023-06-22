#include <stdio.h>

/**
 * main - This function look for the largest
 * prime focator of the constant in our code
 * Return: 0 Always (success)
 */

int main(void)
{
	long long num_const = 612852475143;
	long long factor = 1;

	for (long long i = 2; i * i <= num_const; i++)
	{
	if (num_const % i == 0)
	{
		factor = i;
			while (num_const % i == 0)
			{
				num_const /= i;
			}
	}
	}

	if (num_const > 1)
	{
	factor = num_const;
	}

	printf("%lld\n", factor);

	return (0);
}