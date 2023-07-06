#include "main.h"

/**
 * help - first function to help calculating
 * in main function
 * @f: char 1
 * @r: pointer to char 2
 * @lent: lenght to be calculated
 * Return: lenght
 */

int help(char *f, char *r, int lent)
{
	if (*f == *(r + lent) && lent > 1)
	{
		f++;
		return (help(f, r, --lent));
	}
	if (lent == 1)
		return (1);
	return (0);
}

/**
 * f_lengh - function to calulate lenght
 * @str: string to be calculated
 * @lent: string lenght
 * Return: lenght
 */

int f_lengh(char *str, int lent)
{
	if (*(str + lent) != '\0')
	{
		return (f_lengh(str, ++lent));
	}
	return (--lent);
}

/**
 * is_palindrome - main function
 * @s: string to be calculated
 * Return: lenght value
 */

int is_palindrome(char *s)
{
	return (help(s, s, f_lengh(s, 0)));
}
