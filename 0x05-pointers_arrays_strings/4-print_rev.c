#include "holberton.h"
/**
 *count - count the charcters in the string.
 *@s: a string.
 *Return: always returns zero.
 */

int count(char *s)
{

int l = -1;
while (*s++)
l++;

return (l);
}

/**
 *print_rev - prints a string in reverse
 *@s: a string value to be reversed,
 *Return: always zero.
 */

void print_rev(char *s)
{
int i, l = count(s);
for (i = l; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
