#include "main.h"
/**
 * _memset - a function that fills a memory with a constant byte 
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int ss

	for (ss = 0; n > 0; ss++)
	{
		s[ss] = b;
		n--;
	}
	return (s);
}

