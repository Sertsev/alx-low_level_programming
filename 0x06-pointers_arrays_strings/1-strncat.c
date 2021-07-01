#include "holberton.h"

/**
 *_strncat - a function to concatenate two strings
 *@dest: a string
 *@src: a string
 *@n: an integer
 *Return: returns a string value.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, m = 0;
	char *dest1 = dest;

	while (i < 100)
	{
		if (dest[i] == '\0')
		{
			dest[i] = src[m];
			m++;
			break;
		}
		i++;
	}

	if (m < n)
	{
		while (src[m] != '\0')
		{
			i++;
			dest[i] = src[m];
			m++;
		}
	}

	return (dest1);
}
