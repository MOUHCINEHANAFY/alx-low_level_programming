#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This function concat args of program
 * int string
 * @ac: number of args
 * @av: poiter array of args
 * Return: if fail NUL otherwhile pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *stg;
	int a, b, i, taille = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			taille++;
		}
	}

	stg = malloc(tailleof(char) * taille + 1);

	if (stg == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			stg[i++] = av[a][b];
		}
		stg[i++] = '\n';
	}

	stg[taille] = '\0';

	return (stg);
}
