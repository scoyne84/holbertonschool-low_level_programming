#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line.
 * @n: number of times to print character.
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		for (j = 0; j < i && i != n; j++)
		{
			_putchar(' ');
		}
	}
}
