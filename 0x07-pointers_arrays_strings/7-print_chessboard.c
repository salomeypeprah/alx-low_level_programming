#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array variable
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c = 0;

	for (; b < 8; b++)
	{
		for (; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}

