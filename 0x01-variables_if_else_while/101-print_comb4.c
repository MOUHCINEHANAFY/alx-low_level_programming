#include <stdio.h>

/**
 * main - print 3 digit combinations
 * Return: always 0 if succesfull
 */

int main(void)
{
	int first;
	int second, third;

	for (first = '0'; first <= '7'; first++)
	{
		for (second = first + 1; second <= '9'; second++)
		{
			for (third = second + 1; third  <= '9'; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first == '7' && second  == '8' && third == '9')
				break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}
