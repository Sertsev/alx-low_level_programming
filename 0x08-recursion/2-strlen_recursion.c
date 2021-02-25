#include "holberton.h"

/**
 *_strlen_recursion - a function to find a length,
 *@s: a string value,
 *Return: returns an integer.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
