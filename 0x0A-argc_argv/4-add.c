#include "holberton.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: type Integer
 * @argv: Pointer type Character
 * Return: 1 if is Error 0 if is a number
 */

int main(int argc, char *argv[])
{

	int sum = 0;
	int a, b;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (isdigit(argv[a][b]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (isdigit(*argv[a]) != 0)
		{
			sum = sum + atoi(argv[a]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
