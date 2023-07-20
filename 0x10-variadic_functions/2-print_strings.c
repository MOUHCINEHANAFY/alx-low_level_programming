#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - This function print string followed by a new line.
 * @separator: String to be printed between strings.
 * @n: Number of strings input to the function.
 * @...: var number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);
	i = 0;
	while (i < n)
	{

		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}

	printf("\n");

	va_end(strings);
}
