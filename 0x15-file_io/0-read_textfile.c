#include "main.h"

/**
 * read_textfile - reads textfile and prints to stdout
 * @filename: file to be read from
 * @letters: NUmner of characters to be read
 *
 * Return: number of characters written.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int k;
char *b;
int m;
int n;

if (filename == 0)
return (0);
b = malloc(letters + 1 * sizeof(char));
if (b == 0)
return (0);
k = open(filename, O_RDWR);
if (k == -1)
{
free(b);
return (0);
}

m = read(k, b, letters);
if (m == -1)
{
free(b);
return (0);
}

n = write(STDOUT_FILENO, b, m);
if (n == -1)
{
free(b);
return (0);
}
if (m != n)
{
free(b);
return (0);
}
close(k);
return (n);
}
