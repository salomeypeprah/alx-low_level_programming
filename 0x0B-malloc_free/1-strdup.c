#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a new string
 * @str: char to be assigned
 * Return: 0 if successful
 */

char *_strdup(char *str)
{
	char *s;
	int a = 0, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')

	a++;

	s = malloc(sizeof(char) * (a + 1));

	if (s == NULL)

	return (NULL);

	for (; str[l]; l++)

	s[l] = str[l];

	return (0);
}

