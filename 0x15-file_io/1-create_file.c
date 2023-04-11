#include "main.h"

/**
 * create_file - Creating a file with a given content
 * @filename:  name of the file to create
 * @text_content:  content of the file
 *
 * Return: returing 1 if successful, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int p, i;

	if (filename == NULL)
		return (-1);
	p = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (p >= 0)
	{
		for (i = 0; text_content != NULL && *(text_content + i) != '\0'; i++)
		{
			if (write(p, text_content + i, 1) != 1)
				return (-1);
		}
		if (close(p) == -1)
			return (-1);
		return (1);
	}
	return (-1);
}

