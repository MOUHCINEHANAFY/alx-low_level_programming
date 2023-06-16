#include <stdio.h>

/**
 * main - this function prints digit
 * flowed by commas and space
 * Return: 0 if succesfull
 */

int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
