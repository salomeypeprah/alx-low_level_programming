#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: input function
 * @c: input fuction
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}
	return (0);
}

