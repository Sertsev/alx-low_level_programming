#include <stdio.h>

/**
 * main -  a function that prints all unique combination two digits.
 *
 * Return: always zero.
 */

int main(void)
{
int i, j;

for (i = 48; i < 58; i++)
{
for (j = i; j < 58; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
		}
	}

	putchar('\n');

	return (0);
}
