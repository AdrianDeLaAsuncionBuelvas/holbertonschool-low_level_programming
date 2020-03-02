#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: type Integer
 * @argv: Pointer type Pointer
 * Return: 0 o 1
 */

int main(int argc, char *argv[])
{
	int a, num, b;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	for (a = 0; coins[a]; a++)
	{
		if (num >= coins[a])
		{
			b = b + (num / coins[a]);
			num = num % coins[a];
		}
		if (num == 0)
		{
			break;
		}
	}

	printf("%d\n", b);
	return (0);
}
