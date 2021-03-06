#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: represents size of the triangle
 * Return: void.
 */
void print_triangle(int size)
{
	int spaces;
	int amp;
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			spaces = (size - i);
			amp = (size - spaces);

			for (j = 1; j <= spaces; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= amp; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
