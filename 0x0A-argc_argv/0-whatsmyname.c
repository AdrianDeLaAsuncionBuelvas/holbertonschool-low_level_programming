#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: argc int
 * @argv: Pointer argv
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", *(argv + i));
	}

	printf("\n");

	return (0);
}
