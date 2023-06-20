#include "main.h"
#include <stdio.h>

/**
 * main - list of n numbers
 * inferior to 1024 multipliers to 3 and 5
 * Return: 0 when sucess
 */

int main(void)
{
	int num;
	int add = 0;

	for (num = 0; num <= 1023; num++)
	{
		if ((num % 5) == 0 || (num % 3) == 0)
		{
			add = add + num;
		}
	}
	printf("%d\n", add);
	return (0);
}
