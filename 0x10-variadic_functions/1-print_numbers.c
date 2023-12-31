#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function print numbers followed by separator.
 * @separator: String to be printed between numbers.
 * @n: Number of input for this function.
 * @...: Number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(nums);
}
