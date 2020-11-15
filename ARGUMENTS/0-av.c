#include <unistd.h>
#include <stdio.h>
#include <string.h>
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
