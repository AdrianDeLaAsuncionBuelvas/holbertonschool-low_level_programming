#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * it will use at most n bytes from src
 * @dest: char type Character.
 * @src: char type Character.
 * @n: int type Character
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;

while (dest[a] != '\0')
{
a++;
}

while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
a++;
b++;
}

return (dest);
}
