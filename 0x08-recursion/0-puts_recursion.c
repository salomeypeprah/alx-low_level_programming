#include "main.h"
/**
 * _puts_recursion - a function that likes puts();
 * @s: input function
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

