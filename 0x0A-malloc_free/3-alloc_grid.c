#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: always 0.
 */

int **alloc_grid(int width, int height)
{
	int x, y, **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(a[x]);
			}
			free(a);
		}
		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}
	return (a);
}
