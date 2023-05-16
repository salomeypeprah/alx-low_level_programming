#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array	
 * Return: 0		
 */		
char *argstostr(int ac, char **av)
int res = 0;
int res1 = 0;
   int res3 = 0;
  int array;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; res < ac; res++)
	{
		for (res1 = 0; av[res][res1] != '\0'; res1++)
			array++;
		array++;
	}

	str = malloc(sizeof(char) * (array + 1));

	if (str == NULL)
		return (NULL);

	res3 = 0;

	for (res = 0; res < ac; res++)
	{
		for (res = 0; av[res][res1] != '\0'; res1++)
		{
			str[res3] = av[res][res1];
			res3++;
		}
		str[res3] = '\n';
	res3++;
	}
	
	return (str);
}
