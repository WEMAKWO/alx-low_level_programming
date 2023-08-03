#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints binary equivalent of decimal number
 * @n: Num to print in binary
 */

void print_binary(unsigned long int n)
{
	int ab, ac = 0;
	unsigned long int c;

	for (ab = 63; ab >= 0; ab--)
	{
		c = n >> ab;

		if (c & 1)
		{
			_putchar('1');
			ac++;
		}
		else if (ac)
			_putchar('0');
	}
	if (!ac)
		_putchar('0');
}
