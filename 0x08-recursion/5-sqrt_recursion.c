#include "holberton.h"

/**
 * sqrts - find square root to the nearest round
 * @i: number to be checked
 * @m: original input
 * Return: sqaure root
 */

int sqrts(int i, int m)
{
if (m < 0)
return (-1);
else if (i * i == m)
return (i);
else if (i * i > m)
return (-1);
return (sqrts(i + 1, m));
}


/**
 *_sqrt_recursion - a function of sqrt
 *@n: an integer
 *Return: returns an integer.
 */

int _sqrt_recursion(int n)
{
return (sqrts(0, n));
}
