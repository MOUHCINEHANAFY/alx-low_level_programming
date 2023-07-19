#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function prints the opcs.
 * @argc: The number of arguments.
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int B, i;
	int (*add)(int, char **) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	B = atoi(argv[1]);

	if (B < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < B; i++)
	{
		opc = *(unsigned char *)add;
		printf("%.2x", opc);

		if (i == B - 1)
		{
			continue;
		}
		printf(" ");
		add++;
	}

	printf("\n");

	return (0);
}
