#include "main.h"
/**
 * parse_line - Split the command line into words
 * @buffer: The command line
 * @argv: The array to the words
*/
void parse_line(char *buffer, char *argv[])
{
	int i = 0;
	char *token = strtok(buffer, " ");

	while (token != NULL)
	{
		argv[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	argv[i] = NULL;
}
