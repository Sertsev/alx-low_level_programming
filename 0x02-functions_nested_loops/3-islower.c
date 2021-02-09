#include "holberton.h"
/**
 *_islower-check if character is lowercase.
 *@c:character to check if it islowercase.
 *Return:0-if lowercase,1-if not.
 */

int _islower(int c)
{
char b;
for (b = 'a'; b < 'z'; b++)
{
if (c == b)
return (1);
}

for (b = 'A'; b < 'Z'; b++)
{
if (c == b)
return (0);
}

return (0);
}
