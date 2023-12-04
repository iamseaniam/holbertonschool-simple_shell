#include "main.h"
/**
 * check_env - Check if the command is "env" and prints the enviroment var
 * @argv: The command and its arguments
 * 
 * Return: 1 if the command is "env", 0 otherwise
*/
int check_env(char *argv[])
{
	if (strcmp(argv[0], "env") == 0)
	{
		print_env();
		return (1);
	}
	return (0);
}
