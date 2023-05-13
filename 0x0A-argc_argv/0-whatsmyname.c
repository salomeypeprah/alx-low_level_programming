#include <stdio.h>
#include "main.h"

/**
 * main -a program that prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:if successful 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

