#include "main.h"
#include <unistd.h>

/**
 * _putchar - Print char C
 * Return: Always Return write function result
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

