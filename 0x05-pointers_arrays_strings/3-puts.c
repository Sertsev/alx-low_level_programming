#include "holberton.h"

/**
 *_puts - a function to print strings.
 *@str: a string value to be printed,
 *Return: void doesnt have return value.
 */

void _puts(char *str)
{
int l = 0;

do {
_putchar(str[l]);
}while (*str++);

_putchar('\n');
}
