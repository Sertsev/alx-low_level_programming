#include "holberton.h"

/**
 *_pow_recursion - a function
 *@x: an integer
 *@y: an integer
 *Return: returns an integer.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
