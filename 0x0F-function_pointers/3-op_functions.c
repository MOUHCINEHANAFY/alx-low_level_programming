#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mod(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);

/**
 * op_sub - This function return sub of numbers
 * @a: Number1.
 * @b: Number2.
 *
 * Return: Difference of N1 and N2.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - This function return addition result.
 * @a: Number1.
 * @b: Number 2.
 *
 * Return: Sum of N1 and N2.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_div - This function return division of two numbers.
 * @a: Number1.
 * @b: Number2.
 *
 * Return: Quotient of N1 and N2.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - This function return multiplication of 2 N.
 * @a: Number1.
 * @b: Number2.
 *
 * Return: Product of N1 and N2.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod -This function return remainder of the division.
 * @a: Number1.
 * @b: Number2.
 *
 * Return: Remainder of the division of N1 by N2.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
