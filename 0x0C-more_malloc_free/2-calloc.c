#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - function to allocate memory using malloc
 * @nmemb: number of element of array
 * @size: size of byte each element
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return (ptr);
}
