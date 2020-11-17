#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char **tokenizer(char *str, char *delim)
{
	char *token;
	char **buffer;
	int delim_count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{	if (str[i] == *delim)
		{	delim_count++;	}
	}

	buffer = malloc(sizeof(char *) * (delim_count + 2));

	if (buffer == NULL)
		{	return (NULL);	}

	i = 0;
	buffer[i] = strtok(str, delim);
	i++;

	while (str != NULL)
	{	buffer[i] = strtok(NULL, delim);
		i++;
	}

	buffer[i] = NULL;

	return (buffer);
}
int print_string(char *str)
{
	return (write(1, str, strlen(str)));
}
int main(void)
{
	int i = 0;
	char **token_array = tokenizer("Hello papa smirf", " ");

	while (token_array[i] != NULL)
	{
		printf("[%d] %s", i, token_array[i]);
	}

	free(token_array);

	return (0);
}
