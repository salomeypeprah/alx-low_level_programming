#include "main.h"
/**
 * _strspn -a function that gets the lenght of a prefix
 * @s: input function
 * @accept: input function
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				num++;
				break;
			}
			else if (accept[g + 1] == '\0')
				return (num);
		}
		s++;
	}
	return (num);
}
