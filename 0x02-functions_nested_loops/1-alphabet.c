#include "holberton.h"
/**
* print_alphabet - Print alphabet in lowercase using only `_putchar`
* Return: 0
*/
void print_alphabet(void)
{
char abc = 97;
while (abc <= 122)
{
_putchar(abc);
abc++;
}
_putchar('\n');
}
