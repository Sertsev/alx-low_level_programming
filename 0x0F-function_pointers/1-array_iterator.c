
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array to execute function on
 * @size: size of array
 * @action: a pointer to the function
 *
 * Return: returns 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
