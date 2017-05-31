#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints diag sums of square matrix.
 * @a: pointer to location in matrix
 * @size: size of square matrix
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int x, y, l = 0, r = 0;

	for (x = 0; x < size; x++)
		l += *(a + (x * size) + x);
	for (y = 0; y < size; y++)
		r += *(a + (y * size) + size - 1 - y);
	printf("%i, %i\n", l, r);
}
