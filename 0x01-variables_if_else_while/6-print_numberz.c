#include <stdio.h>

/**
 * main - a function to print the 10 digit of common numbers
 *
 * Return: always returns zero
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
