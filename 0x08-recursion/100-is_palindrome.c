#include "holberton.h"

/**
 * len - counts a length of a string
 * @s: a string pointer
 * @i: an integer counter
 *
 * Return: returns an integer
 */

int len(char *s, int i)
{
if (s[i] != '\0')
{
i++;
i = len(s, i);
}

return (i);
}

/**
 * pal - a function to check if a string is a palindrome
 * @s: a string pointer
 * @cp: a copied string pointer
 * @i: int number counter
 * @j: int number counter
 *
 * Return: returns an integer
 */

int pal(char *s, int i, int j, char *cp)
{
int k = 1;

cp[j] = s[--i];

if (s[i] != '\0')
{
if (cp[j] != s[j])
{
return (0);
}
else
{
j++;
k = pal(s, i, j, cp);
}
}

return (k);
}

/**
 * is_palindrome - a function to find palindrome strings
 * @s: a string pointer
 *
 * Return: returns 1 or 0
 */

int is_palindrome(char *s)
{
int i = 0, j = 0, m;
char cp[1024];

if (*s == '\0')
return (1);

i = len(s, i);

m = pal(s, i, j, cp);

return (m);
}
