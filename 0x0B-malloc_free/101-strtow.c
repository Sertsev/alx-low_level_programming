#include "holberton.h"

/**
 * wcre - finds a word
 *
 * @words: an array of strings
 * @str: string pointer
 * @i: integer value
 * @k: array index
 * Return: returns an integer
 */

int wcre(char **words, char *str, int i, int k)
{
int j = 0;

words[k] = malloc(128);

for (; str[i] != ' '; i++)
{
words[k][j] = str[i];
j++;
}
words[k][j] = '\0';

return (i);
}

/**
 * strtow - finds words from the long string
 *
 * @str: a string pointer
 * Return: a pointer to pointer of a string
 */

char **strtow(char *str)
{
char **words;
int i = 0, k = 0;

words = malloc(256);

if (str == NULL || str[0] == '\0')
return (NULL);

while (str[i] != '\0')
{
if (str[i] == ' ')
{
i++;
continue;
}
else
{
i = wcre(words, str, i, k);
k++;
}
}
return (words);
}

