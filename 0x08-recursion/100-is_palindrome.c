#include "holberton.h"
/**
 * isPal -  returns 1 if a string is a palindrome and 0 if not
 * @str: string
 * @f: int
 * @l: int
 * Return: int
 */
int isPal(char str[], int f, int l)
{
if (f == l)
return (1);
if (str[f] != str[l])
return (0);
if (f < l + 1)
return (isPal(str, f + 1, l - 1));
return (1);
}

/**
 * _strlen - counts the length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
if (*s)
return (1 + _strlen(s + 1));
return (0);
}
/**
 *is_palindrome -  afunction
 *@s: a string
 *Return: returns an integer.
 */

int is_palindrome(char *s)
{
int len = _strlen(s);
if (len == 0)
return (1);
return (isPal(s, 0, len - 1));
}
