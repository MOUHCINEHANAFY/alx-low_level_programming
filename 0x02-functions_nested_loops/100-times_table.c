#include "main.h"

/**
 * print_times_table - print tables
 * @n: tables times itterance
 */

void print_times_tables(int n)
{
	int a, b, multi_0, multi, table;

		for (a = 0; a <= n; a++)
		{
		for (b = 0; b <= n; b++)
		{
			multi_0 = a * b;
			if (multi_0 >= 10)
			{
				multi = multi_0 % 10;
				multi_0 /= 10;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi_0 + '0');
				_putchar(multi + '0');
			}
			else if (multi_0 > = 100)
			{
				multi = multi_0 % 10;
				table = (multi_0 / 10) % 10;
				multi_0 /= 100;
				_putchar(',');
				_putchar(' ');
				_putchar(multi_0 + '0');
				_putchar(table + '0');
				_putchar(multi + '0');
			}
			else if (multi_0 == 0 && b == 0)
			{
				_putchar(multi_0 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi_0 + '0');
			}
		}
		_putchar('\n');
		}
}
