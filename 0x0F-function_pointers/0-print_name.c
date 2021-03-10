#include "function_pointers.h"

/**
 *print_name - a function to print a name
 *
 *@name: name variable pointer
 *@f: a function pointer
 *Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
