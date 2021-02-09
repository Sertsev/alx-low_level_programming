#include <stdio.h>
#define N 10000000000

/**
 * main - fibonacii
 *
 * Return: 0
 */
int main(void)
{
unsigned long int r1 = 0, k1 = 1, r2 = 0, k2 = 2;
unsigned long int d1, d2, d3;
int c;

printf("%lu, %lu, ", k1, k2);
for (c = 2; c < 98; c++)
{
if (k1 + k2 > N || r2 > 0 || r1 > 0)
{
d1 = (k1 + k2) / N;
d2 = (k1 + k2) % N;
d3 = r1 + r2 + d1;
r1 = r2, r2 = d3;
k1 = k2, k2 = d2;
printf("%lu%010lu", r2, k2);
}
else
{
d2 = k1 + k2;
k1 = k2, k2 = d2;
printf("%lu", k2);
}
if (c != 97)
printf(", ");
}
printf("\n");
return (0);
}
