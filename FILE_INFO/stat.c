#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int print_string(char *str)
{
	return (write(1, str, strlen(str)));
}
/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	unsigned int i;
	struct stat st;

	if (ac < 2)
	{
		print_string(av[0]);
		return (1);
	}
	i = 1;
	while (av[i])
	{
		print_string(av[i]);
		if (stat(av[i], &st) == 0)
		{
			print_string(" FOUND\n");
		}
		else
		{
			print_string(" NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
