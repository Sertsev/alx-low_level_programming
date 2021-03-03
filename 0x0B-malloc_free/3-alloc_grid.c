#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - a function to return a pointer to two array of int
 *@width: width
 *@height: height
 *Return: an integer
 */

int **alloc_grid(int width, int height)
{
int **grid, r, c;

if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (!grid)
return (NULL);
c = 0;
while (c < height)
{
*(grid + c) = malloc(width * sizeof(int));

if (!(*(grid + c)))
{
while (c--)
free(*(grid + c));
free(grid);
return (NULL);
}
r = 0;
while (r < width)
{
*(*(grid + c) +r) = 0;
r++;
}
c++;
}

return (grid);
}
