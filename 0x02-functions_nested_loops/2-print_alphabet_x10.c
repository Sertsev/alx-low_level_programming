#include "holberton.h"
/**
 *print_alphabet_x10 - this function will list lower alphabet ten times.
 */

void print_alphabet_x10(void)
{
int a;
char b;
while (a < 10)
{
for (b = 'a'; b < 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
a++;
}
}
