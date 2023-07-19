#include "function_pointers.h"

/**
 * print_name - Function to prints a name.
 * @name: Pointer to the name to be printed.
 * @f: The pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
