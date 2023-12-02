#include "main.h"
/**
 * check_executable = Check if the command is an executable
 * @argv: The command and its arguments
 * 
 * Return: 1 if the command is not an executable, 0 otherwise
*/
int check_executable(char *argv[])
{
	if (access(argv[0], X_OK) == -1)
	{
		argv[0] = find_in_path(argv[0]);
		if (argv[0] == NULL)
		{
			perror("Shell");
			return (1);
		}
	}
	return (0);
}
