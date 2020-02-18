#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string.
 * @s: char type String.
 * Return: void.
 */

void rev_string(char *s)
{
int i, j;
char *begin, *end, c;

j = strlen(s);

begin = s;
end = s;

for (i = 0; i < j - 1; i++)
{
end++;
}
for (i = 0; i < j / 2; i++)
{
c = *end;
*end = *begin;
*begin = c;

begin++;
end--;
}
}
