#include "main.h"
/**
 * main - a simple shell that can run commands with their full path
 * Return: 0 if successful, 1 if fail
*/
int main(void)
{
	char *buffer;
	size_t buffsize = 100;
	ssize_t line_size;
	char *argv[2];
	int status;

	buffer = (char *)malloc(buffsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("unable to allocate buffer");
		free(buffer);
		exit(1);
	}
	printf("$ ");
	while (1)
	{
		line_size = get_line(buffer, &buffsize);
		if (line_size == -1)
			break;
		parse_line(buffer, argv);
		if (check_exit(argv))
		{
			free(buffer);
			free_argv(argv);
			break;
		}
		if (check_env(argv))
			continue;
		if (check_executable(argv) != 127)
		{
			execute_command(argv, &status);
		}
	}
	free(buffer);
	return (0);
}
