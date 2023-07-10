#include "holberton.h"
#include <stdlib.h>


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
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */

int count_w(char *str)
{
	int i = 0, words = 0, lenght = 0;

	for (i = 0; *(str + i); i++)
		lenght++;

	for (i = 0; i < lenght; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_lenght(str + i);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, characters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_w(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		characters = word_lenght(str + i);
		strings[w] = malloc(sizeof(char) * (characters + 1));
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
		for (l = 0; l < characters; l++)
			strings[w][l] = str[i++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
