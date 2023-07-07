#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is main function
 * @argc: number of args
 * @argv: pointer array to args
 * Return: 0 or -1
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cnt, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cnt = atoi(argv[1]);

	do {
		c++;
		if ((cnt - 25) >= 0)
		{
			cnt -= 25;
			continue;
		}
		if ((cnt - 10) >= 0)
		{
			cnt -= 10;
			continue;
		}
		if ((cnt - 5) >= 0)
		{
			cnt -= 5;
			continue;
		}
		if ((cnt - 2) >= 0)
		{
			cnt -= 2;
			continue;
		}
		cnt--;
	} while (cnt > 0);

	printf("%d\n", c);

	return (0);
}

