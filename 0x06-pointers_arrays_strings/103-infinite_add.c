#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers n1 and n2
 * @n1: first number
 * @n2 second number
 * @r: result variable
 * @size_r: result size
 * @Return: result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int length1 = 0, length2 = 0, sum, carry = 0, big_len, num1, num2;
	int i;

	while (n1[length1] != '\0')
		length1++;
	while (n2[length2] != '\0')
		length2++;

	if (length1 >= length2)
		big_len = length1;
	else
		big_len = length2;

	if (size_r <= big_len + 1)
		return (0);

	r[big_len + 1] = '\0';
	length1--, length2--, size_r--;

	num1 = n1[length1] - '0';
	num2 = n2[length2] - '0';

	while (big_len >= 0)
	{
		sum = num1 + num2 + carry;

		if (sum >= 10)
			carry = sum / 10;
		else
			carry = 0;

		if (sum > 0)
			r[big_len] = (sum % 10) + '0';
		else
			r[big_len] = '0';

		if (length1 > 0)
			length1--, num1 = n1[length1] - '0';
		else
			num1 = 0;

		if (length2 > 0)
			length2--, num2 = n2[length2] - '0';
		else
			num2 = 0;

		big_len--, size_r--;
	}

	if (r[0] == '0')
		return (r + 1);
	else
		return (r);
}




