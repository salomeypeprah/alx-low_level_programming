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
	int num1 = 0;
	int num2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[num1] != '\0')
	num1++;

	while (s2[num2] != '\0')
		num2++;
	ans = malloc(sizeof(char) * (num1 + num2 + 1));

	if (ans == NULL)
		return (NULL);
	num1 = 0;
	 num2 = 0;
	while (s1[num1] != '\0')
	{
		ans[num1] = s1[num1];
		num1++;
	}

	while (s2[num2] != '\0')
	{
		ans[num1] = s2[num2];
		num1++, num2++;
	}
	ans[num1] = '\0';
	return (ans);
}

