#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: int type Integer
 * Return: void
 */

void print_square(int size)
{
int a, b;

if (size < 1)
{
_putchar('\n');
}
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}

_putchar('\n');
}
}
