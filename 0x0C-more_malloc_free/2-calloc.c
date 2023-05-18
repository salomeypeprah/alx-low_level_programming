#include <stdlib.h>
#include "main.h"
/**
 * *_memset - a function that allocates memory for an array
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ans = 0;

	for (; ans < n; ans++)
	{
		s[ans] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *sal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sal = malloc(size * nmemb);

	if (sal == NULL)
		return (NULL);

	_memset(sal, 0, nmemb * size);

	return (sal);
}

