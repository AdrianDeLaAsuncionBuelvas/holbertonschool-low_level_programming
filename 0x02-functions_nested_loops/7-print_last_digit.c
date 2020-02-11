#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number.
* @a : int type Integer.
* Return: b.
*/

int print_last_digit(int a)
{
int b;
if (a < 0)
{
b = -1 * (a % 10);
_putchar(b + '0');
return (b);
}
else
{
b = a % 10;
_putchar(b + '0');
return (b);
}
}
