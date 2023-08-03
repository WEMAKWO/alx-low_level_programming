#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks if machine is little or big endian
 * Return: big as 0, little as 1
 */

int get_endianness(void)
{
	unsigned int index = 1;
	char *ch = (char *) &index;

	return (*ch);
}
