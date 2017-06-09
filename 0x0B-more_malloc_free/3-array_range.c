#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum length of array
 * @max: maximum length of array
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int x;
	int *y;
	int len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	y = malloc((len) * sizeof(int));
	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < len; x++, min++)
	{
		y[x] = min;
	}
	return (y);
}
