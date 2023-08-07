#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends txt to the end of file.
 * @filename: A pointer to name of file.
 * @text_content: The string to add at end of file.
 * Return: If the function fails or filename is NULL - -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int xy, ab, dc = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dc = 0; text_content[dc];)
			dc++;
	}

	xy = open(filename, O_WRONLY | O_APPEND);
	ab = write(xy, text_content, dc);

	if (xy == -1 || ab == -1)
		return (-1);

	close(xy);

	return (1);
}
