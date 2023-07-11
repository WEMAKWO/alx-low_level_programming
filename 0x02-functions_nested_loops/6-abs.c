#include "main.h"

/**
 *_abs_ - Computes the absolute value of an interger
 * @c: The number to be compared
 *Description: 'interger'
 * Return: Absolute value of the number or zero
 */

int _abs(int c)

{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
