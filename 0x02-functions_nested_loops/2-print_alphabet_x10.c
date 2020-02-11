#include "holberton.h"
/**
* print_alphabet_x10 - Print alphabet_x10 in lowercase using only `_putchar`
*/
void print_alphabet_x10(void)
{
char abc;
int a;
for (a = 0; a <= 9; a++)
{
for (abc = 97; abc <= 122; abc++)
{
_putchar(abc);
}
_putchar('\n');
}
}
