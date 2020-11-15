#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main (int ac, char **av)
{

	char *buffer;
	size_t bufferSize = 32;
	char *token;

	(void)ac;

	buffer = av[0];
	getline(&buffer, &bufferSize, stdin);
	token = strtok(buffer, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");

	}
	return (0);
}
