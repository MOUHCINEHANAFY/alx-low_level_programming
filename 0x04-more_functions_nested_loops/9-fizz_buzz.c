#include <stdio.h>

/**
 * main - This function prints number from
 * 1 to 100 adding fizz for 3 multiples and buzz for
 * 5 multiples
 * Return: Always 0 if success
 */

int main(void)
{
	int number;

	for (number = 1; number < 101; number++)
	{
		if ((number % 5) == 0 && (number % 3) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((number % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((number % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", number);
		}
		if (number == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
