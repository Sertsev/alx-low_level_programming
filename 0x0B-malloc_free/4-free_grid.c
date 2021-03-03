#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - a function to free 2 dimensional grid
 *@grid: grid
 *@height: height
 *Return: zero
 */

void free_grid(int **grid, int height)
{
height--;

while (height >= 0)
{
free(*(grid + height));
height--;
}
free(grid);
}
