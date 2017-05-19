#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @size: size of square
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int amp;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			amp = (size);
			for (amp = 1; amp <= size; amp++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
