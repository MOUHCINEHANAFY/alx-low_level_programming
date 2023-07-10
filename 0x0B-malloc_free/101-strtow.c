#include "main.h"
#include <stdlib.h>

/**
 * count_w - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_w(char *str)
{
	int i = 0, w = 0, lenght = 0;

	for (i = 0; *(str + i); i++)
		lenght++;

	for (i = 0; i < lenght; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += word_lenght(str + i);
		}
	}

	return (w);
}
/**
 * word_lenght - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_lenght(char *str)
{
	int i = 0, lenght = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		lenght++;
		i++;
	}

	return (lenght);
}

/**
 * strtow - Splits a string into w.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (w).
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, w, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = count_w(str);
	if (w == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (w + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < w; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_lenght(str + i);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			while (w >= 0)
			{
				free(strings[w]);
				w--;
			}

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[i++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}

