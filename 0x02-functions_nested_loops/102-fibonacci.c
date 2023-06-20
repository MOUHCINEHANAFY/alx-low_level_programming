#include "main.h"
#include <stdio.h>

/**
 * main - print fibunacci 50 first num
 * Return: 0 always
 */

int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, add;

	for (i = 0; i <= 49 ; i++)
	{
		add = f1 + f2;
		printf("%lu", add);

		f1 = f2;
		f2 = add;

		if (i != 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
