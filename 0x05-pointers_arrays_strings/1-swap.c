#include "main.h"

/**
 * swap_int - This function swap
 * the values of two integer based on thier
 * pointers
 * @a: Firt int pointer
 * @b: Second in pointer
 */

void swap_int(int *a, int *b)
{
	int swaper = *a;
	*a = *b;
	*b = swaper;
}
