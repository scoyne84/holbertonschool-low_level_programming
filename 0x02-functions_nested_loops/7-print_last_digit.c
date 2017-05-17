#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @x: integer being tested
 * Return: lastn
 */
int print_last_digit(int x)
{
	char lastn;

	if (x >= 0)
	{
		lastn = (x % 10);
		_putchar(lastn + '0');

		return (lastn);
	}
	else
	{
		lastn = (x % 10) * -1;
		_putchar(lastn + '0');

		return (lastn);
	}
}
