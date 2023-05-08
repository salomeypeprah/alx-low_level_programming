#include "main.h"
/**
 * _strpbrk - a function that searches a string for any set of bytes
 * @s: input function
 * @accept: input function
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int ans = 0;

	while (*s)
	{
		for (; accept[ans]; ans++)
		{
		if (*s == accept[ans])
		return (s);
		}
	s++;
	}
	return ('\0');
}

