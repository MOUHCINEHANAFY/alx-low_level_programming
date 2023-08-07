#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_text_file - This function copy
 * @openf1: file 1
 * @openf2: n_file2 new
 * @n_file1: name of n_file1
 * @n_file2: name of n_file2
 */
void copy_text_file(int openf1, int openf2, char *n_file1, char *n_file2)
{
	char buffer[1024];
	ssize_t Rlenght = 1, Wlenght = 1;

	while (Rlenght)
	{
		Rlenght = read(openf1, buffer, sizeof(buffer));
		if (Rlenght == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", n_file1);
			close(openf1);
			close(openf2);
			exit(98);
		}
		if (!Rlenght)
			break;
		Wlenght = write(openf2, buffer, Rlenght);
		if (Wlenght == -1 || Wlenght != Rlenght)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", n_file2);
			close(openf1);
			close(openf2);
			exit(99);
		}
	}
}

/**
 * main - this is main function to copy file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if succesfull
 */
int main(int argc, char **argv)
{
	int openf1, openf2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	openf1 = open(argv[1], O_RDONLY);
	if (openf1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	openf2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (openf2 == -1)
		openf2 = open(argv[2], O_TRUNC | O_WRONLY);
	if (openf2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(openf1);
		exit(99);
	}

	copy_text_file(openf1, openf2, argv[1], argv[2]);

	if (close(openf1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openf1);
		close(openf2);
		exit(100);
	}
	if (close(openf2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openf2);
		exit(100);
	}
	return (0);
}
