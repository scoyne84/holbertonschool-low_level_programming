#include "holberton.h"

/**
 * print_most_numbers - excludes 2 and 4 from printing.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar (x);
		}
	}
	_putchar ('\n');
}
