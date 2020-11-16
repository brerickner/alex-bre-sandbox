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

	(void)ac;
	(void)av;

	printf("env address: %p \nenviron addr: %p \n", env[0], environ[0]);
	return (0);
}
