#include "holberton.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: a string
 *@src: a string
 *Return: returns the cocatenated string and dest
 */

char *_strcat(char *dest, char *src)
{
	char c, *dest1 = dest;

	while (*dest++)
	{
		if (*dest == '\0')
		{
			*dest = *src;
			c = *src++;
		}
	}

	while (*src++)
	{
		*dest = *src;
		c = *src++;
		c = *dest++;
	}

	c = '\0';
	*dest = c;

	return (dest1);
}
