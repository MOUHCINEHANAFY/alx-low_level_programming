#include <unistd.h>

/**
 * main - the main function print :
 * and that piece of art is useful
 * " - Dora Korpar, 2015-10-19"
 * Retun: return 1 if succeed
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
