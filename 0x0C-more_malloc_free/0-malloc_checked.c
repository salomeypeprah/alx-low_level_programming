#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: number of unsigned int
 *
 * Return: pointer sal
 */
void *malloc_checked(unsigned int b)
{
	void *sal;

	sal = malloc(b);

	if (sal == NULL)
		exit(98);

	return (sal);
}

