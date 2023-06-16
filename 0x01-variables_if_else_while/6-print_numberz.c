#include <stdio.h>

/**
 * main - this function print from
 * 0 to 9 with putchar
 * Return: return 0 if succesfull
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
