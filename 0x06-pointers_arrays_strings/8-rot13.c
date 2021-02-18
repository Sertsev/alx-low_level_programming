#include "holberton.h"

/**
 *rot13 - a function that encodes a string using rot13
 *@s: a string to be encoded
 *Return: returns a value
 */

char *rot13(char *s)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		while ((*(str + len) >= 'a' && *(str + len) < 'n') ||
		       (*(str + len) >= 'A' && *(str + len) < 'N'))
		{
			*(str + len) = *(str + len) + 13;
			len++;
		}
		if ((*(str + len) >= 'n' && *(str + len) <= 'z') ||
		    (*(str + len) >= 'N' && *(str + len) <= 'Z'))
		{
			*(str + len) = *(str + len) - 13;
		}
		len++;
	}
	return (str);
}
