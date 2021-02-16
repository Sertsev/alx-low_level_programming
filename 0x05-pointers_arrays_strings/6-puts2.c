#include "holberton.h"

/**
 *puts2 - prints every other charcter of a string.
 *@str: a string value.
 */

void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a = a + 2)
{
_putchar(str[a]);
}
_putchar('\n');
}
