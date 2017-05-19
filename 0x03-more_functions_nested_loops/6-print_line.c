#include "holberton.h"

/**
 * print_line - prints _.
 * @n: times line should print.
 * Return: void.
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
