#include "holberton.h"

/**
 * rot13 - a function to encode a string in rot13 rule
 * @s: a string pointer
 *
 * Return: returns a charcter pointer
 */

char *rot13(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (((s[i] <= 'Z') && (s[i] >= 'A')) && (((((int)(s[i]) + 13) >= ((int)'A')) && (((int)(s[i]) + 13) <= ((int)'Z')))))
{
s[i] = (int)(s[i]) + 13;
}
else if (((s[i] <= 'z') && (s[i] >= 'a')) && ((((int)(s[i]) + 13) >= ((int)'a')) && (((int)(s[i]) + 13) <= ((int)'z'))))
{
s[i] = (int)(s[i]) + 13;
}
else if (((s[i] <= 'Z') && (s[i] >= 'A')) || ((s[i] <= 'z') && (s[i] >= 'a')))
{
s[i] = (int)(s[i]) - 13;
}
i++;
}
return s;
}
