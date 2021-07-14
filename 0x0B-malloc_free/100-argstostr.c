#include "holberton.h"

/**
 * argstostr - concatenates arguments
 *
 * @ac: number of arguments
 * @av: array of arguments
 * Return: returns a string address
 */

char *argstostr(int ac, char **av)
{
char *str;
int i = 0, n = 0, c = 0, j = 0, count = 0;

while (i < ac)
{
for (j = 0; av[i][j]; j++)
{
count++;
}
i++;
}

str = malloc((sizeof(char) * count)+1024);


if (ac == 0 || av == NULL)
{
return (NULL);
}

while (n < ac)
{
for (i = 0; av[n][i] != '\0'; i++)
{
str[c] = av[n][i];
c++;
}
str[c] = '\n';
n++;
c++;
}

return (str);
}
