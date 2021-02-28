#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool _intc(int a, char c[]);

/**
 *main -  a main function to print the name of the program
 *@argc: counts the number of arguments written from the command line,
 *@argv: counts and builds an array of the arguments from command line,
 *Return: zero at this case.
 */

int main(int argc, char **argv)
{
int i, mul = 1;
if (argc == 2)/** && _intc(argc, argv[argc]) == false)*/
{
for (i = 1; i < argc; i++)
{

mul *= atoi(argv[i]);
}
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

/**
 *_intc - a function to check whether all the args given are integers or char;
 **@a: counts the number of arguments written from the command line,
 *@c: counts and builds an array of the arguments from command line,
 *Return: zero at this case.
 */

bool _intc(int a, char c[])
{
int i;

for (i = 0; i < a; i++)
{
int a = atoi(c);
if (a == 0)
{
return (false);
}
}
return (true);
}
