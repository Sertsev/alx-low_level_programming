#include "holberton.h"

/**
 *_strlen - a function to find a length of a string.
 *@s: a string value,
 *Return: always returns 0.
 **/

int _strlen(char *s)
{
int l = 0;

while (*s++)
l++;

return (l);
}
