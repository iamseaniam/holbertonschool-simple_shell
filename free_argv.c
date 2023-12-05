#include "main.h"
/**
 * free_argv - Free each element of argv
 * @argv: The array to free
*/
void free_argv(char *argv[])
{
	int i;

	for (i = 0; argv [i] != NULL; i++)
		free(argv[i]);
}