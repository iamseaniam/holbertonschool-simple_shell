#include "main.h"
/**
 * find_in_path - Search for a command in the PATH
 * @cmd: The command to search for
 * 
 * Return: The full path of the command if found, NULL otherwise
*/
char *find_in_path(char *cmd)
{
	char *path = getenv("PATH");
	char *path_copy = strdup(path);
	char *dir = strtok(path_copy, ":");
	char *cmd_path = malloc(strlen(cmd) + strlen(path) + 2);

	while (dir != NULL)
	{
		sprintf(cmd_path, "%s/%s", dir, cmd);
		if (access(cmd_path, X_OK) == 0)
		{
			free(path_copy);
			return (cmd_path);
		}
		dir = strtok(NULL, ":");
	}
	free(path_copy);
	free(cmd_path);
	return (NULL);
}
