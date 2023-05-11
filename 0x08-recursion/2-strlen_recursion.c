#include "main.h"
/**
* _strlen_recursion - a function that Returns the length of a string.
* @s: The string to be counted
*
* Return: interger value.
*/
int _strlen_recursion(char *s)
{
int response = 0;

	if (*s)
	{
		response++;
		response += _strlen_recursion(s + 1);
	}

	return (response);
}

