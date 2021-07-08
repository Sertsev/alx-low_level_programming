#include "holberton.h"
int is_palindrome(char *s)
{
int i = 0, j = 0, m;

if (*s == '\0')
{
return 1;
}
while (s[i] != '\0')
{
i++;
}

char cp[i];

while (s[j] != '\0')
{
cp[j] = s[--i];

if (cp[j] != s[j])
{
return 0;
}
j++;
}
return 1;
}
