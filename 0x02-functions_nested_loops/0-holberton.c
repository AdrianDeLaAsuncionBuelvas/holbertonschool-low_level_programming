#include "holberton.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
char holberton[] = "Holberton";
int a = 0;
for (holberton[a] = holberton[a]; holberton[a]; a++)
{
_putchar(holberton[a]);
}
_putchar('\n');
return (0);
}
