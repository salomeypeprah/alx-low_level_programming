#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit3, digit4;
for (digit3 = 0; digit3 < 9; digit3++)
{
for (digit4 = digit3 + 1; digit4 < 10; digit4++);
{
putchar((digit3 % 10) + '0');
putchar((digit4 % 10) + '0');
if (digit3 == 8 && digit4 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
