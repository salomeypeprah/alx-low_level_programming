#include "main.h"
/**
 * _strcat - a function that concatenates two strings,
 *
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 *
 */
char *_strcat(char *dest, char *src)
{
	int answer = 0, answer2 = 0;

	while (*(dest + answer) != '\0')
	{
		answer++;
	}

	while (answer2 >= 0)
	{
		*(dest + answer) = *(src + answer2);
		if (*(src + answer2) == '\0')
			break;
		answer++;
		answer2++;
	}
	return (dest);
}

