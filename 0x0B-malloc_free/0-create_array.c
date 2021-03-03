#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - a function to create an array
 *@size: size of the array
 *@c: a charcter to make an array of
 *
 *Return: returns a zero.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i =  0;
char *array = malloc(size);

if (size == 0)
{
return NULL;
}
else
{
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}

return (0);
}
