#include "main.h"
/**
 * print_env - Print the enviroment varibles
*/
void print_env(void)
{
	extern char **environ;
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
