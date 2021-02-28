#include <stdio.h>
#include "holberton.h"

/**
 *main - a main function that prints number of arguments
 *@argc: counts number of arguments
 *@argv: builds an array of arguments
 *Return: returns zero
 */

int main(int argc, char **argv)
{
argv[0] = "hello";
printf("%d\n", argc - 1);
return (0);
}
