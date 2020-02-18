#include "holberton.h"
#include  <string.h>

/**
 * rev_string - reverses a string.
 * @s: char type String.
 * Return: void.
 */

void rev_string(char *s)
{
int l, i;
char *begin, *end, c;

while (s[l] != '\0')
{
l++;

begin = s;
end = s;
}
for (i = 0; i < l - 1; i++)
{
end++;
}
for (i = 0; i < l / 2; i++)
{
c = *end;
*end = *begin;
*begin = c;

begin++;
end--;
}
}
