#include "holberton.h"

/**
 * is_palindrome - a function to find palindrome strings
 * @s: a string pointer
 *
 * Return: returns 1 or 0
 */

int is_palindrome(char *s)
{
int i = 0, j = 0;
char cp[1024];

if (*s == '\0')
{
return (1);
}
while (s[i] != '\0')
{
i++;
}

while (s[j] != '\0')
{
cp[j] = s[--i];

if (cp[j] != s[j])
{
return (0);
}
j++;
}
return (1);
}
