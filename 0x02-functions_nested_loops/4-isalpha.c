#include "holberton.h"
/**
 *_isalpha-check if character is lowercase or uppercase
 *@c:character to check if it islowercase.
 *Return:1-if lowercase/uppercase,0-if not.
 */
int _isalpha(int c)
{
char b;
if (c)
{
for (b = 'a'; b < 'z'; b++)
{
if (c == b)
return (1);
}
for (b = 'A'; b < 'Z'; b++)
{
if (c == b)
return (1);
}
}
else
{
return (0);
}
return (0);
}
