#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - a function to concatenate all arguments of the program
 *@ac: ac
 *@av: char av
 *Return: returns a charcter
 */

char *argstostr(int ac, char **av)
{
int i, j, k = 0, n = 0;
char *s;

if (ac <= 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
n++;
n++;
}
n++;
s = malloc(n *sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
