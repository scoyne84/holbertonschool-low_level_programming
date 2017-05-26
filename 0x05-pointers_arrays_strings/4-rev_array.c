#include "holberton.h"

/**
 * reverse_array - reverses the given array.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int t;
	int i = 0;
	int j = n - 1;

	while (i - j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
