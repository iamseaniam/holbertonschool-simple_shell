#include "main.h"
/**
 * check_exit - Check if the command is "exit"
 * @argv: The command and its arguments
 *
 * Return: 1 if the command is "exit", 0 otherwise
*/
int check_exit(int argc, char *argv[])
{
	if (argc > 1)
	{
		if (strcmp(argv[1], "exit") == 0)
		{
			printf("Exit with status 2 - \n");
			exit(2);
		}
	}
	else
	{
		return (strcmp(argv[0], "exit") == 0);
	}
	return (0);
}