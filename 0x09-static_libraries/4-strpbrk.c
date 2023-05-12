#include "main.h"
/**
 * _strpbrk - a function that searches a string for any set of bytes
 * @s: input function
 * @accept: input function
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
		if (*s == accept[b])
		return (s);
		}
	s++;
	}
	return ('\0');
}
