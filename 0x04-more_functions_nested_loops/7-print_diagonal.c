#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: int type Integer
 * Return: void
 */
void print_diagonal(int n)
{
int a;
int b;
for (b = 0; b < n; b++)
{
if (b != 0)
{
_putchar(' ');
_putchar('\n');

}
for (a = 0; a < b; a++)
{

_putchar(' ');

}

_putchar(92);

}
_putchar('\n');
}
