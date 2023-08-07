#include "main.h"

/**
 * create_file - This function create a file
 * @filename: Pointer to file
 * @text_content: String to be writen
 * Return: -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int lenght = 0;
	int o, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, lenght);

	if (w == -1 || o == -1)
		return (-1);

	close(o);
	return (1);
}
