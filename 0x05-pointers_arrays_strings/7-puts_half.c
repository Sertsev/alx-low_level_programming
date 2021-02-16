#include "holberton.h"

/**
 *puts_half - a function that prints second half of a string.
 *@str: a string value.
 */

void puts_half(char *str)
{
int a, l = 0;

while (str[l] != '\0')
{
l++;
}

if (l % 2 == 0)
{
for (a = l / 2; str[a] != '\0'; a++)
_putchar(str[a]);
}
else
{
for (a = (l - 1) / 2; str[a] != '\0'; a++)
_putchar(str[a]);
}

_putchar('\n');
}
