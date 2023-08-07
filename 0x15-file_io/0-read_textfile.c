#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This function read text and print it in posix
 * @filename: File name pointer
 * @letters: number of letter to be printed
 * Return: writen letters of 0 if error
 */
size_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);

	if (r == -1 || o == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);

	return (w);
}
