#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: new space 1
 * @s2: new space 2
 * @n: number of bytes
 *
 * Return: response
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *response
	unsigned int k = 0;
		    kk = 0;
		    num1 = 0; 
		    num2 = 0;

	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
	num2++;

	if (n < num2)
		response = malloc(sizeof(char) * (num1 + n + 1));
	else
		response = malloc(sizeof(char) * (num1 + num2 + 1));

	if (!response)
		return (NULL);

	while (k < num1)
	{
		response[k] = s1[k];
		k++;
	}

	while (n < num2 && k < (num1 + n))
		response[k++] = s2[kk++];

	while (n >= num2 && k < (num1 + num2))
		response[k++] = s2[kk++];

	response[k] = '\0';

	return (response);
}

