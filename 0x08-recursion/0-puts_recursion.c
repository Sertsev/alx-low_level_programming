#include "holberton.h"

/**
 *_puts_recursion - a function to print a string
 *@s: a string valued passed to the function
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
