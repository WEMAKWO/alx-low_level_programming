#include <stdio.h>
/**
 * main - Entry point
 * Description: 'inventing'
 *
 * Return: Always 0
 */

int main(void)
{
int i, j;
for (i = 0; i <= 8; i++)
{
for (j = i + 1; j <= 9; j++)
{
int first_digit = i;
int second_digit = j;
putchar('0' + first_digit);
putchar('0' + second_digit);
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
