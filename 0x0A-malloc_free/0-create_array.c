#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: Size of array
 * @c: value of pointer
 * Return: always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	y = malloc(size * sizeof(char));

	if (size == 0)
	{
		return ('\0');
	}
	if (!y)
	{
		return ('\0');
	}
	for (x = 0; x < size; x++)
	{
		*(y + x) = c;
	}
	return (y);
}
