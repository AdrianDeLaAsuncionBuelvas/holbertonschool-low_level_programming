#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: char type Character
 * Return: a
 */

char *string_toupper(char *a)
{
int b = 0;

while (a[b] != '\0')
{
if (a[b] >= 'a' && a[b] <= 'z')
{
a[b] = a[b] - 'a' + 'A';
}
b++;
}
return (a);
}
