#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by the alloc_grid funct.
 * @grid: address of 2D grid
 * @height: height of 2D grid
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
