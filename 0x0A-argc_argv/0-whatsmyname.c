#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *main -  a main function to print the name of the program
 *@argc: counts the number of arguments written from the command line,
 *@argv: counts and builds an array of the arguments from command line,
 *Return: zero at this case.
 */


int main(int argc, char **argv)
{
argc++;
printf("%s\n", argv[0]);
return (0);
}
