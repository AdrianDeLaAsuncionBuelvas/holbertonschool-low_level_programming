#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest:char type Character
 * @src: char type Character
 * @n: int type Integer
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int b = 0;

while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (n > b)
{

dest[b] = '\0';
b++;
}

return (dest);
}
