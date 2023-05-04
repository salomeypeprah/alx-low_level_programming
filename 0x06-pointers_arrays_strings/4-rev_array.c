#include "main.h"
/**
 * reverse_array -a function that reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int h;

	for (m = 0; m < n--; m++)
	{
		h = a[m];
		a[m] = a[n];
		a[n] = h;
	}
}

