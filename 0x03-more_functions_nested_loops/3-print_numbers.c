#include "holberton.h"

/**
 * print_numbers - prints given range of numbers.
 *
 * Return: void.
 */
void print_numbers(void)
{
	int x = ('0');

	while (x <= '9')
	{
		_putchar (x);
		if (x == '9')
		{
		_putchar ('\n');
		}
		x++;
	}
}
