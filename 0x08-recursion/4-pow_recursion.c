#include "main.h"
/**
 * _pow_recursion -a function returns the value of x raised to the power of y
 * @x: value to raise
 * @y: the times to multiply the value
 *
 * Return: the answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

