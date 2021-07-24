#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct print_convert_variable - structure to hold function and char key
 * @type: abbreviation for type, i=int, c=char, f=float, s=string
 * @f: pointer to function for proper print statement
 */

typedef struct print_convert_variable
{
char type;
void (*f)(va_list *);
} conv_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(int);

#endif
