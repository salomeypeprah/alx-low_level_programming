#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int ii, b;

	for (ii = 0; ii < size; ii++)
	{
		for (b = 1; b < (size - ii); b++)
			_putchar(' ');
		for (b--; b < size; b++)
			_putchar(35);
		if (ii < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

