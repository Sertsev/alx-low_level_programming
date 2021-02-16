#include "holberton.h"

/**
 *_strcpy - a function to copy the file to the buffer.
 *@dest: a buffer value
 *@src: a pointer points to the value to be copied
 *Return: returns the copied string
 */


char *_strcpy(char *dest, char *src)
{
int a, l = 0;
while (src[l] != '\0')
l++;


for (a = 0; a <= l; a++)
{
dest[a] = src[a];
}

return (dest);
}
