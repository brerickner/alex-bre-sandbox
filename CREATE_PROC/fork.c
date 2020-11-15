#include <stdio.h>
#include <unistd.h>
#include <string.h>

int print_string(char *str)
{
	return (write(1, str, strlen(str)));
}
/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	my_pid = getpid();
	print_string("My pid is %u\n", my_pid);
	if (child_pid == 0)
	{
		print_string("(%u) Nooooooooo!\n", my_pid);
	}
	else
	{
		print_string("(%u) %u, I am your father\n", my_pid, child_pid);
	}
	return (0);
}
