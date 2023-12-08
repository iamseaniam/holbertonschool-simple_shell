#include "main.h"
/**
 * check_exit - Check if the command is "exit"
 * @argv: The command and its arguments
 *
 * Return: 1 if the command is "exit", 0 otherwise
*/
int check_exit(char *argv[])
{
	/*Ensure argv is not NULL*/
	if (argv == NULL || argv[0] == NULL)
	{
		/* handle the error or return an apporiate value*/
		return (0) /*assuming "exit" is not present if theres an issue*/
	}
	return (strcmp(argv[0], "exit") == 0);
}
