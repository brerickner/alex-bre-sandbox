#include <stdio.h>
#include <string.h>
#include <unistd.h>
int print_string(char *str)
{
	return (write(1, str, strlen(str)));
}
/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		print_string(env[i]);
		print_string("\n");
		i++;
	}
	return (0);
}
