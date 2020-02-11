#include "holberton.h"
/**
* main - Print "Holberton" followed by a new line.
* Description: You are not allowed to include standard libraries.
* Return: 0
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
