#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints elements in array.
* @a: pointer
* @n: number of elements to print
* Return: Always 0.
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != 0)
		{
			printf(", ");
		}
		printf("%d", a[x]);
	}
	printf("\n");
}
