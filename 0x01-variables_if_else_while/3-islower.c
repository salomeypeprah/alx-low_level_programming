#include <stdio.h>

/**
 *main -  entry point.
 *Return: Always 0
 **/

int main(void)
{
	char b;
	char j;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

