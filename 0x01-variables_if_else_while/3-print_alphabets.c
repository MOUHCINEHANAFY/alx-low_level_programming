#include <stdio.h>

/**main - print lowercase alphabet the uppercase
 * new line add at the end
 * Return: retun 0 if succesful
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
return (0);
}
