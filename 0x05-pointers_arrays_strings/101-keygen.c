#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - calculate code
 * Return: 0 if success
 */

int main(void)
{
	int a = 0, b = 0;
	time_t x;

	srand((unsigned int) time(&x));

	for (; b < 2772;)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
		{
			break;
		}
		b = b + a;
		printf("%c", a);
	}

	printf("%c\n", (2772 - b));

	return (0);
}
