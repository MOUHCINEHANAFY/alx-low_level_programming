#include "main.h"

/**
 * print_sign - print number signe
 * @n: int to be check
 * Return: 1 if positif 0 if null -1 negatif
 */

int print_sign(int n)
{
        if (n > 0)
        {
                _putchar('+');
                return (1);
        else if (n < 0)
        {
                _putchar('-'):
                return (-1);
        }
        else
        {
                _putchar('0');
                return (0);
        }
}
