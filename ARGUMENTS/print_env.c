#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
extern char **environ; /*will go in header */
int print_string(char *str)
{
	return (write(STDOUT_FILENO, str, strlen(str)));
}
int main (int ac, char **av, char **env)
{
	int index = 0;
	(void)ac;
	(void)av;

	for(; environ[index]; index++)
	{
		print_string(environ[index]);

	}
	return (0);
}
