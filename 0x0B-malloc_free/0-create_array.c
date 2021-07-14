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
char *array = NULL;
unsigned int i;

if (size == 0)
return (NULL);
if (size != 0)
{
array = (char *)malloc(size * sizeof(char));
if (array != NULL)
{
for (i = 0; i < size; i++)
array[i] = c;
}
}
return (array);
}
