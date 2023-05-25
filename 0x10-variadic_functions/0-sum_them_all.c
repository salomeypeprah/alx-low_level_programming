#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: The number of parameters
 * @...: the variables to be calculated
 * Return: if susscessful return yes.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sal = 0;
	unsigned int sum = 0;

	va_start(ap, n);
for (; sal < n; sal++)
sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

