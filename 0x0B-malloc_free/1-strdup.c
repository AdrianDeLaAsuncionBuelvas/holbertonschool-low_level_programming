#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

char *_strdup(char *str)
{
	int i;
	char* p;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++){

		p = malloc(sizeof(str) + i);
		if(p == NULL)
		{
			return(NULL);
		}
	}
	for (i = 0; str[i]; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
