#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - signe value printing
*
* Return: retur 0 if succesful
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
	printf("%d is positive\n", n);
}
if (n < 0)
{
	printf("%d is negative\n", n);
}
if (n == 0)
{
	printf("%d is zero\n", n);
}
return (0);
}

