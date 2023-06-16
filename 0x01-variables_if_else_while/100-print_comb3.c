#include <stdio.h>

/**
 * main - print different comination
 * of digit separated by ' ' and space
 * Return: retun 0 always
 */

int main(void)
{
	int first;
	int second;

	for (first = 48; first <= 56; first++)
	{
		for (second = 49; second <= 57; second++)
		{
			if (first < second)
			{
				putchar(first);
				putchar(second);
				if (first != 56 || second != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
