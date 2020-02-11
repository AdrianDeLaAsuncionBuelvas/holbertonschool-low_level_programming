#include "holberton.h"
/**
 *times_table -prints the 9 times table, starting with 0
 *Return:z;
 */
void times_table(void)
{
int a = 0;
int b;
int z;

while (a < 10)
{
b = 0;
while (b < 10)
{
z = a * b;
if (z > 9)
{
_putchar(z / 10 + '0');
_putchar(z % 10 + '0');
}
else if (b != 0)
{
_putchar(' ');
_putchar(z + '0');
}
else
{
_putchar(z + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
}
}
