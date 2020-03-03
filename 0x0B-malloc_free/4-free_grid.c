#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a dimensional grid previously created by your
 * alloc_grid function
 * @grid: Double Pointer type Integer
 * @height: int Type Integer
 * Return: void.
 */

void free_grid(int **grid, int height)
{

	int a;

	if (grid != '\0' || height < 1)
	{
		for (a = 0; a < height; a++)
		{
			free(grid[a]);

		}
		free(grid);
	}

}
