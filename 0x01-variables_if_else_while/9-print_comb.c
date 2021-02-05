#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m = '0';
while (m <= '9')
{
putchar(m);
if (m != '9')
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
m++;
}
return (0);
}
