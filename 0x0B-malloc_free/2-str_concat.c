#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: NULL if (fail), ans if success
 */
char *str_concat(char *s1, char *s2)
{
	char *ans;
	unsigned int s = 0
		     a = 0
		    inch1 = 0
		    inch2 = 0;

	while (s1 && s1[inch1])
		inch1++;
	while (s2 && s2[inch2])
		inch2++;

	ans = malloc(sizeof(char) * (inch1 + inch2 + 1));
	if (ans == NULL)
		return (NULL);


	if (s1)
	{
		while (s < inch1)
		{
	ans[s] = s1[s];
			s++;
		}
	}

	if (s2)
	{
		while (s < (inch1 + inch2))
		{
			ans[s] = s2[a];
			s++;
			a++;
		}
	}
	ans[s] = '\0';

	return (ans);
}

