#include <stdlib.h>
#include "main.h"
/**
 *array_range - a function that creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to the new created array
 */
int *array_range(int min, int max)
{
	int *sal;
	int value2;
int value1 = 0;
	if (min > max)
		return (NULL);

	value2 = max - min + 1;

sal = malloc(sizeof(int) * value2);

	if (sal == NULL)
		return (NULL);

	for (; min <= max; value1++)
		sal[value1] = min++;

	return (sal);
}

