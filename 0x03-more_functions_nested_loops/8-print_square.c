#include "holberton.h"

/**
 * print_square  - prints a square of a given size..
 * @size: size of square
 * Return: Always 0.
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
