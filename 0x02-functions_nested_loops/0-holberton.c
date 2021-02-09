#include "holberton.h"
/**
 *main-program entry point for execution.
 *Return:0-success
 */
int _putchar(char c);
int main(void)
{
char a[9] = "Holberton";
int b;
for (b = 0; b < 9; b++)
{
_putchar(a[b]);
}
_putchar('\n');
return (0);
}
