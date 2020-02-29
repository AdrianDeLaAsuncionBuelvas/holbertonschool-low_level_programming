#include "holberton.h"
#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: type Integer
 * @argv: Pointer type Integer
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{

	}
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
