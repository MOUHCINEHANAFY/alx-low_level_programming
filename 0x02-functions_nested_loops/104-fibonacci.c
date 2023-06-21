#include "main.h"
#include <stdio.h>

/**
 * main - print 98 n fibunacci
 * Return: 0 if ok
 */

int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, addition, f1_1, f1_2, f2_1, f2_2, a, b;

	for (i = 0; i <= 91; i++)
	{
		addition = f1 + f2;
		printf("%lu, ", addition);

		f1 = f2;
		f2 = addition;
	}

	f1_1 = f1 / 10000000000;
	f2_1 = f2 / 10000000000;
	f1_2 = f1 % 10000000000;
	f2_2 = f2 % 10000000000;

	for (i = 93; i <= 98; i++)
	{
		a = f1_1 + f2_1;
		b = f1_2 + f2_2;
		if (i != 98)
		{
			printf(", ");
		}
		if (f1_2 + f2_2 > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}

		printf("%lu%lu", a, b);
		f1_1 = f2_1;
		f1_2 = f2_2;
		f2_1 = a;
		f2_2 = b;
	}
	printf("\n");
	return (0);
}
