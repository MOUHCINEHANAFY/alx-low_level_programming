#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);


/**
 * print_int - This function prints integers.
 * @arg: List of arguments pointing to ints
 */
void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}
/**
 * print_char - This function prints a char.
 * @arg: liste of arguments
 */
void print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}


/**
 * print_string -This function prints a string.
 * @arg: A list of arguments pointing to the strings
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_float - This function prints a float.
 * @arg: List of arguments pointing to flt
 */
void print_float(va_list arg)
{
	float flt;

	flt = va_arg(arg, double);
	printf("%f", flt);
}

/**
 * print_all - This function prints all followed by line
 * @format: format of character to be printed
 * @...: VAR number of arguments to be printed.
 * Description: This function printes all
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
