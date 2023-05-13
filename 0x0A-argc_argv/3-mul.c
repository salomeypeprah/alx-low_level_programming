#include <stdio.h>
#include "main.h"

/**
 * _atoi -a program that converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int p, d, n, ans, z, num;

	p = 0;
	d = 0;
	n = 0;
	ans = 0;
	z = 0;
	num = 0;

	while (s[ans] != '\0')
		ans++;

	while (p < ans && z == 0)
	{
		if (s[p] == '-')
			++d;

		if (s[p] >= '0' && s[p] <= '9')
		{
			num = s[p] - '0';
			if (d % 2)
				num = -num;
			n = n * 10 + num;
			num = 1;
			if (s[p + 1] < '0' || s[p + 1] > '9')
				break;
			z = 0;
		}
		p++;
	}

	if (z == 0)
		return (0);

	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

