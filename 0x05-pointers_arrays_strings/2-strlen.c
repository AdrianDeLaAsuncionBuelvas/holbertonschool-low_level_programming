#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: char type Character.
 * Return: n.
 */

int _strlen(char *s)
{
int n;
for (n = 0; *s != '\0'; s++)
{
n++;
}
return (n);
}
