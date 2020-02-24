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
if(dest == NULL)
{
return (NULL);
}
if (src == NULL)
{
return (src);
}
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
