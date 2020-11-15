#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int print_string(char *str)
{
	return (write(1, str, strlen(str)));
}
int main (int ac, char **av)
{
	char prompt[] = "$ ";
	char *buffer;
	size_t buffSize = 0; /*initialized for memory leak purposes */
	int gl;
	(void)ac;

	av[0] = prompt; /*assigns prompt to 0 index */
	print_string(prompt); /*prints prompt $ */

	buffer = malloc(sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate memory");
		exit(1);
	}

	free(buffer); /*freeing the byte used to initialize */
	gl = getline(&buffer, &buffSize, stdin); /*reallocs to what it needs?*/
	if (gl == -1)
	{
		print_err("could not read line");
		return (-1);
	}
	else
	{
		print_string(buffer);
		free(buffer);
	}
	return (0);
}
int print_err(char *str)
{
	return (write(STDERR_FILENO, str, strlen(str)));
}
