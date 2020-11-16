#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char **tokenizer(char *str)
{
	char *token;
	int us = malloc(getline(&buffer, &buffsize, stdin));

	token = strtok(buffer, " ");
	gl = malloc
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (buffer);
}
int print_string(char *str)
{
	return (write(1, str, strlen(str)));
}
int main (int ac, char **av)
{
	int index;
	(void)ac;

	for (index = 0; av; index++)
	{
		print_string(av[index]);
		print_string(" ");
	}
	print_string("\n");
	return (0);
}
