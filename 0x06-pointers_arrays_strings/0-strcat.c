#include "holberton.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: a string
 *@src: a string
 *Return: returns the cocatenated string and dest
 */

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int m = 0;

	while (*(dest + l) != '\0')
	{
		l++;
	}
	while (*(src + m) != '\0')
	{
		*(dest + l) = *(src + m);
		l++;
		m++;
	}
	*(dest + l) = '\0';
	return (dest);
}
