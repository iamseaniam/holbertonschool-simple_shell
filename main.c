#include "main.h"

int main(void)
{
	char *buffer;
	size_t buffsize = 100;
	ssize_t line_size;
	int id = fork();

	buffer = (char *)malloc(buffsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("unable to allocate buffer");
		exit(1);
	}
	while (1)
	{
		printf("Enter YOUR command ");
		line_size = getline(&buffer, &buffsize, stdin);
		fork();
		if (id == 0)
		{
			if (line_size == -1)
				break;
			if (strcmp(buffer, "exit\n") == 0)
				break;
		}
    }
	free(buffer);
	return 0;
}
