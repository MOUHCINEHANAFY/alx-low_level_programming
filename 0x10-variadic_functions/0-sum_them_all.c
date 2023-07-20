#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function sum all of inputs.
 * @n: Number of parametre to be passed in our function.
 * @...: number of variables to be summed.
 * Return: if 0 param return 0 else sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, s = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(nums, int);
	}
	va_end(nums);

	return (s);
}
