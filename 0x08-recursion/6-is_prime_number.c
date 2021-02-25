#include "holberton.h"

/**
 *prime - a function that checks if n is prime using i
 *@n: number to be checked if it is prime or not
 *@i: number to check with
 *Return: 1 if prime, 0 if not
 */

int prime(int n, int i)
{
if (i == 1 || i == n)
return (1);
else if (n % 2 == 0 || n % i == 0)
return (0);
else if (n < 0 || n == 1)
return (0);
else
return (prime(n, i + 1));
}

/**
 *is_prime_number - a function to check prime numbers
 *@n: an integer original vlue
 *Return: an int integer.
 */
int is_prime_number(int n)
{
return (prime(n, 2));
}
