#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

void free_grid(int **grid, int height)
{

	int a;

	if (grid != '\0' || height < 1)
	{
		for(a = 0; a < height; a++)
		{
			free(grid[a]);

		}
		free(grid);
	}

}
