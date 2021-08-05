#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: number to index
 * @index: indext to binary
 *
 * Return: 1 if success, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;

if (index > 32 || n == '\0')
return (-1);
*n = *n | x << index;
return (1);
}
