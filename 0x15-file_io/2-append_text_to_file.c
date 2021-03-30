#include "holberton.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: file name
 * @text_content: pointer to text
 *
 * Return: 1 on success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[len] != '\0'; len++)
			;
	}
	if (len == 0)
		return (1);
	write(file, text_content, len);
	close(file);
	return (1);
}
