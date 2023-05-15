#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates array of char
 * @size: size of char
 * @c: char to be assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
char *str;

	unsigned int k = 0;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (; k < size; k++)
		str[k] = c;

	return (str);
}

