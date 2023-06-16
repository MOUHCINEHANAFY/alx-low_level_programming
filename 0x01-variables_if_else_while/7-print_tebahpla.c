#include <stdio.h>

/**
 * main - print lowcase alphabet
 * in revers
 * Return: return 0 if succesfull
 */

int main(void)
{
	char low_case = 'z';

	while (low_case >= 'a')
	{
		putchar(low_case);
		low_case--;
	}
	putchar('\n');
	return (0);
}

