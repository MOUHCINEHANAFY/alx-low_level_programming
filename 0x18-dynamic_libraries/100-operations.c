#include <stdio.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a minus b
 */
int sub(int a, int b)
{
    return a - b;
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
    return a * b;
}

/**
 * div - Divides two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: The result of a divided by b
 * If b is zero, prints an error message and returns 0.
 */
int div(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero is undefined\n");
        return 0; // You can choose an appropriate default value
    }
}

/**
 * mod - Computes the modulus of two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: The remainder of the division of a by b
 * If b is zero, prints an error message and returns 0.
 */
int mod(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        printf("Error: Modulus by zero is undefined\n");
        return 0; // You can choose an appropriate default value
    }
}

