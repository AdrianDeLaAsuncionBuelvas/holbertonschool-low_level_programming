#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
