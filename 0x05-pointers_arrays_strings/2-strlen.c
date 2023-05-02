#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int response = 0;

	while (*s != '\0')
	{
		response++;
		s++;
	}

	return (response);
}

