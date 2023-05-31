#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *sal

	sal = malloc(b);

	if (sal == NULL)
		exit(98);

	return (sal);
}

