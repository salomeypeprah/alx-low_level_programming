#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a = 0;
int b = 0;
for (; a < n; a++)
{
for (; b < n; b++)
{
if (b == a)
_putchar('\\');
else if (b < a)
_putchar(' ');
}
_putchar('\n');
}
}
}
