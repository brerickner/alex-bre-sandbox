#include <stdlib.h>
#include <stdio.h>

void print_dirs(void)
{
	int i;
	char colon = ':';
	char *PATH;

	PATH = getenv("PATH");

	for(i=0; PATH[i]; i++)
	{
		if(PATH[i] == colon )
		{
			putchar('\n');
		}
		else
		{
			putchar(PATH[i]);
		}
	}
	putchar('\n');
}
int main (void)
{
	print_dirs();
	return (0);
}
