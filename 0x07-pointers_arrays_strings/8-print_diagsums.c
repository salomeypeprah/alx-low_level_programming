#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that print sum of two diagonals
 * @a: input variable
 * @size: input variable
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int num, num2, y;

	num = 0;
	num2 = 0;

	for (y = 0; y < size; y++)
	{
		num = num + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		num2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", num, num2);
}

