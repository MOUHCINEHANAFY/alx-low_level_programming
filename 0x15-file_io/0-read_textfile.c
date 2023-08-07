#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This function read text and print it in posix
 * @filename: File name pointer
 * @letters: number of letter to be printed
 * Return: writen letters of 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *variable;

	if (filename == NULL)
	{
		return (0);
	}
	variable = malloc(sizeof(char) * letters);
	if (variable == NULL)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, variable, letters);
	w = write(STDOUT_FILENO, variable, r);
	if (r == -1 || o == -1 || w == -1 || w != r)
	{
		free(variable);
		return (0);
	}
	free(variable);
	close(o);
	return (w);
}
