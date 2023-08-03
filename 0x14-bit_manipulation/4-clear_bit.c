#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets value of given bit to 0
 * @n: Pointer to number to change
 * @index: Index of bit to clear
 * Return: Success 1, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
