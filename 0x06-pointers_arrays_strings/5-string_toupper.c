#include "main.h"
/**
 * string_toupper -a function that changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int response = 0;

	while (*(s + response) != '\0')
	{
		if ((*(s + response) >= 97) && (*(s + response) <= 122))
			*(s + response) = *(s + response) - 32;
		response++;
	}

	return (s);
}

