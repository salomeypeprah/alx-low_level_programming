#include "main.h"

/**
 * _isupper -function that prints uppercase letters
 * @c: char to check for errors
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
