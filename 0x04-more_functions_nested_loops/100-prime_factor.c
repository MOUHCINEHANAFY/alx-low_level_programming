#include <stdio.h>

/**
 * main - This function look for the largest
 * prime focator of the constant in our code
 * Return: 0 Always (success)
 */

int main(void)
{
	long int i, counter, J, constant = 612852475143;
	int factor;

	for (i = 2; i < constant / 2; i++)
	{
		factor = 1;
		if (constant % i == 0)
			J = constant / i;

		for (counter = 2; counter < J / 2; counter++)
			if (J % counter == 0)
				factor = 0;
				break;
		if (factor)
			printf("%ld\n", J);
			break;
	}

	return (0);
}
