#include "main.h"
/**
* print_most_numbers - prints numbers between 0 to 9
* (neither 2 nor 4).
* Return: no return.
*/
void print_most_numbers(void)
{
int aa = 0;

for (; aa <= 9; aa++)
{
if (!(aa == '2' || aa == '4'))
_putchar(aa);
}
_putchar('\n');
}

