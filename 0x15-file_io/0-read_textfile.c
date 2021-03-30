#include "holberton.h"

/**
 * read_textfile - Function that reads file and print to the standard output
 *
 * @filename: file name
 * @letters: size of character to print
 *
 * Return: txt, letters read and printed or 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, txt;
char *buffer;

if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
txt = read(file, buffer, letters);
if (txt == -1)
{
free(buffer);
return (0);
}
write(STDOUT_FILENO, buffer, txt);
close(file);
free(buffer);
return (txt);
}
