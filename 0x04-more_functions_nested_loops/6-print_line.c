#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * Where n is the number of times the character _ should be printed
 * f n is 0 or less, the function should only print \n
 * @n: int type Integer
 * Return: 0
 */
void print_line(int n)
{

if (n <= 0)
{
_putchar('\n');
}
else
{
for (n = n; n > 0; n--)
{
_putchar('_');
}
_putchar('\n');

}
}
