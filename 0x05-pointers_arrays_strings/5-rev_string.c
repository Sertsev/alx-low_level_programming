#include "holberton.h"
/**
 *count - count the charcters in the string.
 *@s: a string.
 *Return: always returns zero.
 */

int count(char *s)
{

int l = -1;
while (*s++)
l++;

return (l);
}

/**
 *rev_string - prints a string in reverse
 *@s: a string value to be reversed,
 *Return: always zero.
 */

void rev_string(char *s)
{
int a = 0, l = count(s);
char i;
while (l > a)
{
i = s[l];
s[l--] = s[a];
s[a] = i;
a++;
}

}
