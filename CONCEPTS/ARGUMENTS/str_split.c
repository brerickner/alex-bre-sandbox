#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char **tokenizer(char *str, char *deli)
{
	char *token;
	char **buffer;
	size_t *buffsize;
	int gl = malloc(getline(&buffer, &buffsize, stdin));

	if(gl == -1)
		return (NULL);
	buffer = 
	token = strtok(buffer, deli);
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

	return (0);
}
