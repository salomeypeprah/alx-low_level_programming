#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int ans, correct, response;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ans = atoi(argv[1]);
	response = 0;

	if (ans < 0)
	{
		printf("0\n");
		return (0);
	}

	for (correct = 0; correct < 5 && ans >= 0; correct++)
	{
		while (ans >= coins[correct])
		{
			response++;
			ans -= coins[correct];
		}
	}

	printf("%d\n", response);
	return (0);
}

