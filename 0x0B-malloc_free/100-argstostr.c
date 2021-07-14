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
int i, n = 0, c = 0;

str = malloc(sizeof(char) * 1024);

if (ac == 0 || av == NULL)
{
return NULL;
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


