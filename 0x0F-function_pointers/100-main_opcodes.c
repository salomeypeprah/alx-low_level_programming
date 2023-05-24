#include <stdio.h>
#include <stdlib.h>
/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int res;
int ze = 0;
char *code;

if (argc != 2)
printf("Error\n");
exit(1);
res = atoi(argv[1]);
if (res < 0)
printf("Error\n");
exit(2);
code = (char *)main;
for (; ze < res; ze++)

if (ze == res - 1)
{
printf("%02hhx\n", code[ze]);
break;
}
printf("%02hhx ", code[ze]);
return (0);
}

