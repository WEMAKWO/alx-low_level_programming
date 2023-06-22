#include "main.h"

/**
 * _isdigit - character is a digit
 * @x: number to be checked
 * Return: 1 for character that will be a digit or 0 for ant else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
