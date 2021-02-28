#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - a main afunction to add positive numbers,
 *@argc: counts arguments
 *@argv: build a vector array of arguments
 *Return: returns success 0.
 */

int main(int argc, char **argv)
{
int a = 0, i, sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
a = 0;
a += atoi(argv[i]);

if (a == 0)
{
printf("Error\n");
return (1);
break;
}
else
{
sum += atoi(argv[i]);
}
}
if (a != 0)
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
