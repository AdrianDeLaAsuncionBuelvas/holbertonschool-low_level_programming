#include "holberton.h"

/**
 * _memcpy - copies memory area.
 * @dest: char type Character.
 * @src: char type Character.
 * @n: int type Integer.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
for (n = 0; *src != '\0'; n++)
{
dest[n] = src[n];
}
return (dest);
}
