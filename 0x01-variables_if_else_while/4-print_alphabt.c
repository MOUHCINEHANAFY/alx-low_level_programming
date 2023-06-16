#include <stdio.h>

/**
 * main - the main function print all lowcap
 * characters expect 'e' and 'q'
 * Return: return 0 if succesful
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
return (0);
}

