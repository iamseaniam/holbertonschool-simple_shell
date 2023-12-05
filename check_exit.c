#include "main.h"
/**
 * check_exit - Check if the command is "exit"
 * @argv: The command and its arguments
 *
 * Return: 1 if the command is "exit", 0 otherwise
*/
int check_exit(char *argv[])
{
	return (strcmp(argv[0], "exit") == 0);
}
