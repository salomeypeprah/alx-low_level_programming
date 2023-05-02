#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int p, n, response;

	response = 0;

	for (p = 0; str[p] != '\0'; p++)
		response++;

	n = (response / 2);

	if ((response % 2) == 1)
		n = ((response + 1) / 2);

	for (p = n; str[p] != '\0'; p++)
		_putchar(str[p]);
	_putchar('\n');
}


