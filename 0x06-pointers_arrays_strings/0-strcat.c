#include "holberton.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: a string
 *@src: a string
 *Return: returns the cocatenated string and dest
 */

char *_strcat(char *dest, char *src)
{
    char *dest1 = dest;
    while (*dest++)
    {
        if (*dest == '\0'){
            *dest = *src;
            *src++;
        }
        
    }
    
    while (*src++){
        *dest = *src;
        *src++;
        *dest++;
    }
   
    return dest1;
}
