#include "holberton.h"
#include <stdlib.h>
/**
 * extractWord - extracts a word starting from a particular
 * index to the index a space is encountered
 * @s: string to extract the word
 * @start: index to start extracting string from
 * Return: pointer the string
 */

char *extractWord(char *s, int start)
{
int i = start;
int j = 0;
char *newString;

while (s[i] != ' ' && s[i] != '\0')
i++;

newString = malloc(sizeof(char) * i);
while (s[start] != ' ' && s[start] != '\0')
{
newString[j] = s[start];
start++;
j++;
}
newString[j] = '\0';

return (newString);
}

/**
 *strtow - a function to split a string into words
 *@str: a string
 *Return: returns chars
 */

char **strtow(char *str)
{
char **arr;
int i, j = 0;
int totalWords = 0;

if (str == 0 || str == '\0')
return (0);

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
if (str[i + 1] == ' ')
totalWords++;
}
}

arr = malloc(sizeof(char *) * (totalWords + 2));

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
if (str[i - 1] == ' ')
{
arr[j] = extractWord(str, i);
j++;
}
else if (str[i - 1] != ' ' && i == 0)
{
arr[j] = extractWord(str, i);
j++;
}
}
}

return (arr);
}
