#include "holberton.h"
/**
 * print_last_digit - last digit
 * @n: integer
 * Return: always cero
 */
int print_last_digit(int n)
{
int d;
d = n % 10;

if (d < 0)
{
_putchar(-d + '0');
return (-d);
}
else
{
_putchar(d + '0');
return (d);
}
}
