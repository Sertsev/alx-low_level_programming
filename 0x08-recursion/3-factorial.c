#include "holberton.h"

/**
 *factorial - a function to calculate a factorial value
 *@n: an integer value, and
 *Return: returns an integer.
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);

return (n * (factorial(n - 1)));
}
