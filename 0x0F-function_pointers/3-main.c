#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *main - a function that prints results.
 *@argc: The number of arguments
*@argv: An array of pointers.
*
* Return: If successful 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int a1, a2;
char *salo;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
a1 = atoi(argv[1]);
salo = argv[2];
a2 = atoi(argv[3]);

if (get_op_func(salo) == NULL || salo[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*salo == '/' && a2 == 0) ||
(*salo == '%' && a2 == 0))

printf("Error\n");
exit(100);

printf("%d\n", get_op_func(op)(a1, a2));

return (0);
}

