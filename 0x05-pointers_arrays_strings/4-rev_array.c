#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses the given array.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int t;
	int i = 0;
	int j = (n - 1);

	while (i < n / 2)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;

		i++;
		j--;
	}
}
