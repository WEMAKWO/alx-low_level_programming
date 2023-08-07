#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - This creates a file.
 * @filename: Pointer to name of  file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 */

int create_file(const char *filename, char *text_content)
{
	int new, fetch, win = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (win = 0; text_content[win];)
			win++;
	}

	new = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fetch = write(new, text_content, win);

	if (new == -1 || fetch == -1)
		return (-1);

	close(new);

	return (1);
}
