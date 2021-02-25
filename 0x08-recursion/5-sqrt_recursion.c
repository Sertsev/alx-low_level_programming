#include "holberton.h"

/**
 * sqrt - find square root to the nearest round
 * @i: number to be checked
 * @m: original input
 * Return: sqaure root
 */

int sqrt(int i, int m)
{
if (m < 0)
return (-1);
else if (i * i == m)
return (i);
else if (i * i > m)
return (-1);
return (sqrt(i + 1, m));
}


/**
 *_sqrt_recursion - a function of sqrt
 *@n: an integer
 *Return: returns an integer.
 */

int _sqrt_recursion(int n)
{
return (sqrt(0, n));
}
