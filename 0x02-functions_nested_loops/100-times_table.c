#include "holberton.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
int a, m, p;

if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
for (m = 0; m <= n; m++)
{

p = a * m;
if (m != 0)
{
_putchar(',');
_putchar(' ');
}
if (p <= 9 && m != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((p % 10) + '0');
}
else if (p >= 10 && p <= 99)
{
_putchar(' ');
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
else if (p >= 100 && m != 0)
{
_putchar((p / 100) + '0');
_putchar((p / 10) % 10 + '0');
_putchar((p % 10) + '0');
}
else
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
}
