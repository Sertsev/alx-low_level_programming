#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function of integers of array
 * @array: array of function
 * @size: size of array
 * @cmp: search an integer from the array
 *
 * Return: returns zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size < 0)
return (-1);
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
