#include "main.h"
/**
 * get_line - Read a line from stdin
 * @buffer: The buffer to store the line
 * @buffsize: The size of the buffer
 *
 * Return: The number of characters in the line, or -1 on failure
*/
ssize_t get_line(char *buffer, size_t *buffsize)
{
	ssize_t line_size = getline(&buffer, buffsize, stdin);

	if (line_size != -1)
		buffer[line_size - 1] = '\0';

	return (line_size);
}
