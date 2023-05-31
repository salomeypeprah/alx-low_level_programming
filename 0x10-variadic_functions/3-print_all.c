#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all -a function that  prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";
va_list ti;
va_start(ti, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(ti, int));
break;
case 'i':
printf("%s%d", sep, va_arg(ti, int));
break;
case 'f':
printf("%s%f", sep, va_arg(ti, double));
break;
case 's':
str = va_arg(ti, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(ti);
}
