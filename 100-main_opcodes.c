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
int ss;
int a;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
ss = atoi(argv[1]);
if (ss < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)main;
for (int a = 0; a < ss; a++)
{
if (a == ss - 1)
{
printf("%02hhx\n", arr[a]);
break;
}
printf("%02hhx ", arr[a]);
}
return (0);
}
