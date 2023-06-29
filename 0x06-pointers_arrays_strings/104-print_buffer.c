#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Print the content of buffer
 * @b: the buffer
 * @size: buffer size
 */

void print_buffer(char *b, int size)
{
	int counter = 0, a, l;

	if (size <= 0)
		printf("\n");
	else
	{
		do {
			printf("%.8x:", counter);

			a = counter;
			do {
				if (a % 2 == 0)
					printf(" ");
				if (a < size)
					printf("%.2x", *(b + a));
				else
					printf("  ");
				a++;
			} while (a < counter + 10);

			printf(" ");

			l = counter;
			do {
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
				l++;
			} while (l < counter + 10);

			printf("\n");
			counter += 10;
		} while (counter < size);
	}
}
