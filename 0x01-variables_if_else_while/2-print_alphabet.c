#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: 'print lowercase'
 * Return: Always 0
 */
int main(void)
{
	int lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
