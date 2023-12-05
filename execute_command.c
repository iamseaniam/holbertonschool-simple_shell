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
		exit(errno); /* Exit with the error number if execve fails*/
	}
	else
	{
		wait(status); /*Wait for the child process to finish*/
		if (WIFEXITED(*status)) /*Check if the child process terminated normally*/
		{
			*status = WEXITSTATUS(*status);/*Get the exit status of the child process*/
		}
	}
}
