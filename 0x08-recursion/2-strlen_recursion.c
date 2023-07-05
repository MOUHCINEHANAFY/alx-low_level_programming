#include "main.h"

/**
 * _strlen_recursion - this function aim to retun lengh
 * @s: lenght to be returned of this string
 * Return: return lenght
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
