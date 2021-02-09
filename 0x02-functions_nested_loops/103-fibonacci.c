#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long f1 = 0, f1 = 1, fs;
float t;

while (1)
{
fs = f1 + f2;
if (fs > 4000000)
break;

if ((fs % 2) == 0)
t += fs;

f1 = f2;
f2 = fs;
}
printf("%.0f\n", t);

return (0);
}
