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
	size_t lRead, check;
	char *buffer;
	int openf;

	if (!filename || !letters)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (!buffer)
		return (0);

	openff = open(filename, O_RDONLY);
	if (openf == -1)
	{
		free(buffer);
		return (0);
	}
	lRead = read(openf, buffer, letters);
	if (lRead < 1)
	{
		free(buffer);
		close(openf);
		return (0);
	}
	check = write(STDOUT_FILENO, buffer, lRead);

	free(buffer);
	close(openf);

	if (!check || check != lRead)
	{
		return (0);
	}
	return (lRead);
}
