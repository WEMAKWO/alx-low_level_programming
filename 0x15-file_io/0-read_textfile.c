#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- Prints text to STDOUT.
 * @filename: Name of text file being read
 * @letters: Num of letters to be read
 * Return: w- actual number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *count;
	ssize_t round;
	ssize_t roll;
	ssize_t pull;

	round = open(filename, O_RDONLY);
	if (round == -1)
		return (0);
	count = malloc(sizeof(char) * letters);
	pull = read(round, count, letters);
	roll = write(STDOUT_FILENO, count, pull);

	free(count);
	close(round);
	return (roll);
}
