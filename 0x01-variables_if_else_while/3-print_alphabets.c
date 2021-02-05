#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s = 'a', C = 'A';
while (s <= 'z')
{
putchar(s);
s++;
}
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
