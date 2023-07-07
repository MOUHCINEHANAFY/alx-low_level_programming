#include <stdlib.h>
#include <stdio.h>

/**
 * main - Function add positive numbers
 * @argc: Number of args in programme
 * @argv: Array of pointers
 * Return: Number of symbols non digits = -1,
 * otherwise
 */

int main(int argc, char *argv[])
{
	int num = 1, digit, sum = 0;

	while (num < argc)
	{
		digit = 0;
		while (argv[num][digit])
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
			digit++;
		}

		sum += atoi(argv[num]);
		num++;
	}

	printf("%d\n", sum);

	return (0);
}
