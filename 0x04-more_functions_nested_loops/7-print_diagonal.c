#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: int type Integer
 * Return: void
 */
void print_diagonal(int n)
{
int a, b;

for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{

_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
if (a <= 0)
{
_putchar('\n');
}
}
