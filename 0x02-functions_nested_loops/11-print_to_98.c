#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: number
 * void: no content
 */
void print_to_98(int n)
{

while (n < 98)
{
_putchar(n);
_putchar(' ');
n++;
}
while (n > 98)
{
_putchar(n);
_putchar(' ');
n--;
}
if (n == 98)
{
_putchar(n);
_putchar('\n');
}
}
