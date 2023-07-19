#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function print result of op
 * @argc: argc.
 * @argv: argv.
 *
 * Return: if success always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int A, B;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	A = atoi(argv[1]);
	op = argv[2];
	B = atoi(argv[3]);


	if ((*op == '/' && B == 0) ||
	    (*op == '%' && B == 0))
	{
		printf("Error\n");
		exit(100);
	}
		if (op[1] != '\0' || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(A, B));

	return (0);
}
