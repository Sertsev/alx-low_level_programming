#include "holberton.h"

/**
 *string_toupper - a function to change lowwer case letters to upper letters.
 *@s: a string
 *Return: returns a string.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
