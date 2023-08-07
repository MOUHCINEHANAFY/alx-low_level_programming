#include "main.h"

/**
 * append_text_to_file - This function append test to the end of file
 * @filename: file name pointer
 * @text_content: String we like to append in file
 * Return: -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w; 
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lenght);

	if (w == -1 || o == -1)
		return (-1);

	close(o);
	return (1);
}
