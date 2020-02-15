#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: 0.
 */

int main(void)
{
long int a, b;

b = 612852475143;

for (a = 2; a <= b; a++)
{
if (b % a == 0)
{
b = b / a;
a = a - 1;
}
if (b == 1)
{
a = a + 1;
printf("%ld", a);
}
}
putchar('\n');
return (0);
}
