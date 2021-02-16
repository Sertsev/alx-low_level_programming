#include "holberton.h"
#include <stdio.h>
/**
 *print_array - a function to print arrays in order.
 *@a: an integer pointer value.
 *@n: an integer value.
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
i++;
if (i < n)
{
printf(", ");
}
}

printf("\n");
}
