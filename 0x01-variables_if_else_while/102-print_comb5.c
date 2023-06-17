#include <stdio.h>
/**
 * main - Entry point
 * Description: 'software'
 * Return: Always 0
 */
int main(void)
{
	int i, j;
for (i = 0; i <= 99; i++)
{
int first_digit = i / 10;
int second_digit = i % 10;
for (j = i; j <= 99; j++)
{
int third_digit = j / 10;
int fourth_digit = j % 10;
if (i <= j)
{
putchar('0' + first_digit);
putchar('0' + second_digit);
putchar(' ');
putchar('0' + third_digit);
putchar('0' + fourth_digit);
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
