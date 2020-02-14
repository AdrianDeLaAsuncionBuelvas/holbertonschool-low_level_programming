#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * Where size is the size of the triangle
 * @size: int type Integer.
 * Return: void
 */
void print_triangle(int size)
{
int a, b, c;
b = size - 1;
for (a = 0; a < size; a++)
{
b = size - 1 - a;
c = a + 1;
for (; b > 0; b--)
{
_putchar(' ');
}
for (; c > 0; c--)
{
_putchar('#');
}
_putchar('\n');

}
if (size <= 0)
{
_putchar('\n');
}
}
