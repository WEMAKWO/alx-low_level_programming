#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns value of bit at an index in decimal number
 * @n: Number to search for
 * @index: Index of bit
 * Return: Value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bv;

	if (index > 63)
		return (-1);

	bv = (n >> index) & 1;

	return (bv);
}
