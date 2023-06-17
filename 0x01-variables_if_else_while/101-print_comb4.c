#include <stdio.h>
/**
 * main - Entry point
 * Description: 'success combination'
 * Return: Always 0
 */
int main(void)
{
int i, j, k;
for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{
int first_digit = i;
int second_digit = j;
int third_digit = k;
putchar('0' + first_digit);
putchar('0' + second_digit);
putchar('0' + third_digit);
if (i != 7 || j != 8 || k != 9)
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
