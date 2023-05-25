#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - A function that prints numbers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: variables
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int sum = 0;

	va_start(num, n);

	for (; sum < n; sum++)
	{
		printf("%d", va_arg(num, int));

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}

