#include <stdio.h>

/**
 * main -  a function that prints all unique combination three digits.
 *
 * Return: always zero.
 */

int main(void)
{
int i, j, k;

for (i = 48; i < 58; i++)
{
for (j = i; j < 58; j++)
{
for (k = j; k < 58; k++)
{
if (i != j && i != k && j != k)
{
putchar(i);
putchar(j);
putchar(k);
if (!(i == 55 && j == 56 && k == 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');

return (0);
}

