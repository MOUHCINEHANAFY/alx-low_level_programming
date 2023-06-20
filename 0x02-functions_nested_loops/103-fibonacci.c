#include "main.h"
#include <stdio.h>

/**
 * main - prints fibo serie
 * Return: 0 if ok
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, add;
	float global_addition;

	while (true)
	{
		add = f1 + f2;
		if ((add % 2) == 0)
		{
			global_addition = global_addition + add;
		}
		if (add > 4000000)
		{
			break;
		}
		f1 = f2;
		f2 = add;
	}
	printf("%.0f\n", global_addition);
	return (0);
}
