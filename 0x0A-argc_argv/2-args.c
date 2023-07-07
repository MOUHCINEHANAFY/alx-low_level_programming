#include <stdio.h>

/**
 * main - arguments print
 * @argc: number of args
 * @argv: array of pointers the argurments
 * Return: always sucess 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}

	return (0);
}
