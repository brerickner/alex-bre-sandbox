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
	char *buffer = " "; /*must be initialized or memory leaks present*/
	size_t buffSize = 0; /*initialized for memory leak purposes */
	(void)ac;

	av[0] = prompt; /*assigns prompt to 0 index */
	print_string(prompt); /*prints prompt $ */

	buffer = malloc(strlen(buffer));
	if (buffer == NULL)
	{
		perror("Unable to allocate memory");
		exit(1);
	}
	free (buffer); /*freeing the byte used to initialize */
      	getline(&buffer, &buffSize, stdin); /*reallocs to what it needs?*/
	print_string(buffer);
	free(buffer);
	return (0);
}
