#include "holberton.h"

/**
 *swap_int - swapping function
 *@a: the first integer value,
 *@b: the second integer value,
 *Return: no return value in void function.
 */

void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
