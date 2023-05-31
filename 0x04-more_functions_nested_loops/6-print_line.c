#include "main.h"

/**
 * print_line - a function that prints straight line n times.
 *
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int kk = 0;

	for (; kk < n; kk++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

