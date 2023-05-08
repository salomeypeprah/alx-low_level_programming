#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int res;
	int h = n;

	for (res = 0; res < h; res++)
	{
		dest[res] = src[res];
		n--;
	}
	return (dest);
}

