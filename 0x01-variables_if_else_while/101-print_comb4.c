#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
int b;
int d;
for (a = 0; a <= 9; a++)
{
for (b = a + 1; b <= 9; b++)
{
for (d = b + 1; d <= 9; d++)
{
putchar(a + '0');
putchar(b + '0');
putchar(d + '0');
if (b < 9 || a < 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
