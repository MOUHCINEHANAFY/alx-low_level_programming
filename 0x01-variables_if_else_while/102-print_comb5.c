#include <stdio.h>

/**
 * main - the main function print
 * all combinations of two digits
 * Return: return 0 if ok
 */

int main(void)
{
	int first;
	int second;

	for (first = 0; first < 100; first++)
	{
		for (second = first; second < 100; second++)
		{
			putchar('0' + (first / 10));
			putchar('0' + (first % 10));
			putchar(' ');
			putchar('0' + (second / 10));
			putchar('0' + (second % 10));
			if (first != 99 || second != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

