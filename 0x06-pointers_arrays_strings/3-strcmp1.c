#include "holberton.h"

int _strcmp(char *strg1, char *strg2)
{
int a, b;

for (a = 0;(strg1[a] != '\0' && strg2[b] != '\0' ) && strg1[a] == strg2[b]; a++)
{
    strg1++;
    strg2++;
}
    if(strg1[a] == strg2[b])
    {
        return 0;
    }
    else
    {
        return (strg1[a] - strg2[b]);
    }

}
