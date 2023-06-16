#include <stdio.h>

/**
 * main - print hex values 0 to 'f'
 * Return: return 0 if succesfull
 */

int main(void)
{
	int hexVar = 0x00;

	while ( hexVar < 0x0a )
	{
		putchar('0' + hexVar);
		hexVar++;
	}
	while (hexVar >= 0x0a && hexVar <= 0x0f)
	{
		putchar('a' + (hexVar - 10));
		hexVar++;
	}
	putchar('\n');
	return (0);
}
