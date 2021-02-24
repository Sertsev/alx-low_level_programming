#include "holberton.h"

/**
 *_puts_recursion - a function to print a string
 *@s: a string valued passed to the function
 */

void _puts_recursion(char *s)
{
int l = 0;
while (s[l] != '\0')
{
_putchar(s[l]);
l++;
}
_putchar('\n');
}
