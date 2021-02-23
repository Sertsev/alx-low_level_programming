#include "holberton.h"

/**
 *_memset - a function to set the memory bytes
 *@s: a string value,
 *@b: a string value, and
 *@n: an unsigned integer.
 *Return: returns the string.
 */
 
char *_memset(char *s, char b, unsigned int n)
{
  int i = 0;
  while (i < n)
{
    s[i] = b;
    i++;
}
  return (s);
}
