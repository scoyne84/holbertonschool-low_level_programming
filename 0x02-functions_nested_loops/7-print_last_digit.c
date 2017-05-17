#include "holberton.h"

/**
 * print_last_digit - print the last digit of a given variable..
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
