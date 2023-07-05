#include "main.h"

/**
 * _strlen_recursion -this function aim to retun lengh
 * @s: lenght to be returned of this string
 * Return: return lenght
 */

int _strlenght_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlenght_recursion(s + 1);
	}
	return (lenght);
}
