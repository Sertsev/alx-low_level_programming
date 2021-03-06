#include "variadic_functions.h"

/**
 * print_strings - print strings with given separator
 * @separator: delimiter
 * @n: number of arguments passed
 *
 * Return: void function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
if (i != (n - 1))
{
if (separator != NULL)
{
printf("%s%s ", va_arg(args, char *), separator);
}
else
{
printf("%s", va_arg(args, char *));
}
}
else
{
printf("%s", va_arg(args, char *));
}
}
}
printf("\n");
va_end(args);
}
