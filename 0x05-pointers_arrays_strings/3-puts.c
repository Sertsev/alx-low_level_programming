#include "holberton.h"

/**
 *_puts - a function to print strings.
 *@str: a string value to be printed,
 *Return: void doesnt have return value.
 */

void _puts(char *str)
{
int l = 0;

while (str[l] != '\0')
{
_putchar(str[l]);
l++;
}

_putchar('\n');
}
