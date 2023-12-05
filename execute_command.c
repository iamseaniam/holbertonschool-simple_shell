#include "main.h"
/**
 * execute_command - Create a child process to execute the command
 * @argv: The command and its arguments
 * @status: The status of the child process
*/
void execute_command(char *argv[], int *status)
{
	pid_t id = fork();

	if (id == 0)
	{
		execve(argv[0], argv, NULL);
		exit(0);
	}
	else
	{
		wait(status);
	}
}
