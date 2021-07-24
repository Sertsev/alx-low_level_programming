#include "variadic_functions.h"

/**
 * print_strings - print strings with given separator
 * @separator: delimiter
 * @n: number of arguments passed
 *
 * Return: void function
 */

void print_all(const char * const format, ...)
{
va_list args;
char *s;
int n = strlen(format);
int i = 0;

va_start(args, format);

while (i < n)
{
switch(format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%i", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
default:
i++;
continue;
}
if (++i < n)
printf(", ");
}
printf("\n");
va_end(args);
}
