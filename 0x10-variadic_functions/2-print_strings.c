#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...:variable to be printed.
 *
 * Description: print string if (nil),
 *              dont print separator if NULL.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *var;
	unsigned int num1 = 0;

	va_start(strings, n);

	for (; num1 < n; num1++)
	{
		var = va_arg(strings, char *);

		if (var == NULL)
			printf("(nil)");
		else
			printf("%s", var);

		if (num1 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

