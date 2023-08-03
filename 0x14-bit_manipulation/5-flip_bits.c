#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts number of bits to change
 * @n: First num
 * @m: Second num
 * Return: Num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int in, co = 0;
	unsigned long int c;
	unsigned long int xc = n ^ m;

	for (in = 63; in >= 0; in--)
	{
		c = xc >> in;
		if (c & 1)
			co++;
	}

	return (co);
}
